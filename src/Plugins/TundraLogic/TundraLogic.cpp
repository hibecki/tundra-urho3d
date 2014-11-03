// For conditions of distribution and use, see copyright notice in LICENSE

#include "StableHeaders.h"
#include "TundraLogic.h"
#include "KristalliProtocol.h"
#include "SyncManager.h"
#include "Client.h"
#include "Server.h"
#include "Framework.h"
#include "FrameAPI.h"
#include "ConsoleAPI.h"
#include "IRenderer.h"
#include "SceneAPI.h"
#include "Scene/Scene.h"
#include "LoggingFunctions.h"

#include "AssetAPI.h"
#include "IAsset.h"

#include "LocalAssetProvider.h"
#include "LocalAssetStorage.h"

#include <Timer.h>
#include <StringUtils.h>

namespace Tundra
{

TundraLogic::TundraLogic(Framework* owner) :
    IModule("TundraLogic", owner),
    startupSceneLoaded(false)
{
}

TundraLogic::~TundraLogic()
{
}

void TundraLogic::Load()
{
    kristalliProtocol_ = SharedPtr<Tundra::KristalliProtocol>(new Tundra::KristalliProtocol(this));
    kristalliProtocol_->Load();
}

void TundraLogic::Initialize()
{
    framework->Frame()->Updated.Connect(this, &TundraLogic::OnUpdate);

    client_ = SharedPtr<Tundra::Client>(new Tundra::Client(this));
    server_ = SharedPtr<Tundra::Server>(new Tundra::Server(this));
    syncManager_ = SharedPtr<Tundra::SyncManager>(new Tundra::SyncManager(this)); // Syncmanager expects client (and server) to exist
    
    framework->Console()->RegisterCommand("connect", "Connects to a server. Usage: connect(address,port,username,password,protocol)")->ExecutedWith.Connect(
        this, &TundraLogic::HandleLogin);

    framework->Console()->RegisterCommand("disconnect", "Disconnects from a server.", client_.Get(), &Client::Logout);

    kristalliProtocol_->Initialize();

    SetupAssetStorages();
}

void TundraLogic::SetupAssetStorages()
{
    // Add the System asset storage
    String systemAssetDir = framework->InstallationDirectory() + "Data/Assets";
    framework->Asset()->AssetProvider<LocalAssetProvider>()->AddStorageDirectory(systemAssetDir, "System", true, false);

    bool hasStorage = framework->HasCommandLineParameter("--storage");
    StringVector files = framework->CommandLineParameters("--file");
    StringVector storages = framework->CommandLineParameters("--storage");
    if (hasStorage && storages.Empty())
        LogError("TundraLogic: --storage specified without a value.");
    foreach(const String &file, files)
    {
        AssetStoragePtr storage = framework->Asset()->DeserializeAssetStorageFromString(file.Trimmed(), false);
        framework->Asset()->SetDefaultAssetStorage(storage);
    }
    foreach(const String &storageName, storages)
    {
        AssetStoragePtr storage = framework->Asset()->DeserializeAssetStorageFromString(storageName.Trimmed(), false);
        if (files.Empty()) // If "--file" was not specified, then use "--storage" as the default. (If both are specified, "--file" takes precedence over "--storage").
            framework->Asset()->SetDefaultAssetStorage(storage);
    }
    if (framework->HasCommandLineParameter("--defaultstorage"))
    {
        StringVector defaultStorages = framework->CommandLineParameters("--defaultstorage");
        if (defaultStorages.Size() == 1)
        {
            AssetStoragePtr defaultStorage = framework->Asset()->AssetStorageByName(defaultStorages[0]);
            if (!defaultStorage)
                LogError("Cannot set storage \"" + defaultStorages[0] + "\" as the default storage, since it doesn't exist!");
            else
                framework->Asset()->SetDefaultAssetStorage(defaultStorage);
        }
        else
            LogError("Parameter --defaultstorage may be specified exactly once, and must contain a single value!");
    }
}

void TundraLogic::HandleLogin(const StringVector &params) const
{
    String address = "localhost";
    if (params.Size() >= 1)
        address = params[0];
    unsigned short port = 3456;
    if (params.Size() >= 2)
        port = (unsigned short)Urho3D::ToUInt(params[1]);
    String username = "TundraM";
    if (params.Size() >= 3)
        username = params[2];
    String password = "";
    if (params.Size() >= 4)
        password = params[3];
    String protocol = "udp";
    if (params.Size() >= 5)
        protocol = params[4];

    client_->Login(address, port, username, password, protocol);
}

void TundraLogic::Uninitialize()
{
    kristalliProtocol_->Uninitialize();
    kristalliProtocol_.Reset();
    syncManager_.Reset();
    client_.Reset();
    server_.Reset();
}

void TundraLogic::OnUpdate(float frametime)
{
    // Load startup scene on first round of the main loop, as all modules are initialized
    if (!startupSceneLoaded)
    {
        LoadStartupScene();
        startupSceneLoaded = true;
    }

    kristalliProtocol_->Update(frametime);
    if (client_)
        client_->Update(frametime);
    if (server_)
        server_->Update(frametime);
    // Run scene sync
    if (syncManager_)
        syncManager_->Update(frametime);
    // Run scene interpolation
    Scene *scene = GetFramework()->Scene()->MainCameraScene();
    if (scene)
        scene->UpdateAttributeInterpolations(frametime);
    
}

void TundraLogic::LoadStartupScene()
{
    Scene *scene = framework->Scene()->MainCameraScene();
    if (!scene)
    {
        scene = framework->Scene()->CreateScene("TundraServer", true, true).Get();
    }

    bool hasFile = framework->HasCommandLineParameter("--file");
    StringVector files = framework->CommandLineParameters("--file");
    if (hasFile && files.Empty())
        LogError("TundraLogicModule: --file specified without a value.");

    bool loaded = false;
    foreach(const String &file, files)
    {
        AssetAPI::AssetRefType refType = AssetAPI::ParseAssetRef(file.Trimmed());
        if (refType != AssetAPI::AssetRefExternalUrl)
            loaded |= LoadScene(file, false, false);
        else
        {
            AssetTransferPtr transfer = framework->Asset()->RequestAsset(file, "Binary", true);
            if (transfer)
                transfer->Succeeded.Connect(this, &TundraLogic::StartupSceneLoaded);
            loaded = true; // hack for below, assume later success. Camera creation should be somewhere more sensible...
        }
    }

    if (loaded)
    {
        // Create a camera at 0,0,0 to show something
        /// \todo Do not do here, rather should be done by CameraApplication
        Entity* entity = scene->CreateEntity();
        entity->CreateComponent(20); // Placeable
        entity->CreateComponent(15); // Camera
        IRenderer* renderer = framework->Renderer();
        if (renderer)
            renderer->SetMainCamera(entity);
    }
}

void TundraLogic::StartupSceneLoaded(AssetPtr sceneAsset)
{
    LoadScene(sceneAsset->DiskSource(), false, false);
}

bool TundraLogic::LoadScene(String filename, bool clearScene, bool useEntityIDsFromFile)
{
    Scene *scene = framework->Scene()->MainCameraScene();
    if (!scene)
    {
        LogError("TundraLogicModule::LoadScene: No active scene found!");
        return false;
    }
    filename = filename.Trimmed();
    if (filename.Empty())
    {
        LogError("TundraLogicModule::LoadScene: Empty filename given!");
        return false;
    }

    LogInfo("Loading startup scene from " + filename + " ...");
    Urho3D::HiresTimer timer;

    bool useBinary = filename.Find(".tbin", 0, false) != String::NPOS;
    Vector<Entity *> entities;
    if (useBinary)
        entities = scene->LoadSceneBinary(filename, clearScene, useEntityIDsFromFile, AttributeChange::Default);
    else
        entities = scene->LoadSceneXML(filename, clearScene, useEntityIDsFromFile, AttributeChange::Default);
    LogInfo("Loading of startup scene finished. " + String(entities.Size()) + " entities created in " + String((int)(timer.GetUSec(true) / 1000)) + " msecs.");
    return entities.Size() > 0;
}

SharedPtr<KristalliProtocol> TundraLogic::KristalliProtocol() const
{
    return kristalliProtocol_;
}

SharedPtr<SyncManager> TundraLogic::SyncManager() const
{
    return syncManager_;
}

ClientPtr TundraLogic::Client() const
{
    return client_;
}

ServerPtr TundraLogic::Server() const
{
    return server_;
}

extern "C"
{

DLLEXPORT void TundraPluginMain(Tundra::Framework *fw)
{
    fw->RegisterModule(new Tundra::TundraLogic(fw));
}

}

}

