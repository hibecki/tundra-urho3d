// For conditions of distribution and use, see copyright notice in LICENSE
// This file has been autogenerated with BindingsGenerator

#include "StableHeaders.h"
#include "CoreTypes.h"
#include "JavaScriptInstance.h"
#include "LoggingFunctions.h"
#include "Scene/SceneAPI.h"

#ifdef _MSC_VER
#pragma warning(disable: 4800)
#endif

#include "Framework/Framework.h"
#include "Scene/Scene.h"
#include "Scene/IComponent.h"


using namespace Tundra;
using namespace std;

namespace JSBindings
{



const char* SceneAPI_ID = "SceneAPI";

const char* SignalWrapper_SceneAPI_SceneCreated_ID = "SignalWrapper_SceneAPI_SceneCreated";

class SignalWrapper_SceneAPI_SceneCreated
{
public:
    SignalWrapper_SceneAPI_SceneCreated(Object* owner, Signal2< Scene *, AttributeChange::Type >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal2< Scene *, AttributeChange::Type >* signal_;
};

class SignalReceiver_SceneAPI_SceneCreated : public SignalReceiver
{
public:
    void OnSignal(Scene * param0, AttributeChange::Type param1)
    {
        duk_context* ctx = ctx_;
        duk_push_global_object(ctx);
        duk_get_prop_string(ctx, -1, "_OnSignal");
        duk_remove(ctx, -2);
        duk_push_number(ctx, (size_t)key_);
        duk_push_array(ctx);
        PushWeakObject(ctx, param0);
        duk_put_prop_index(ctx, -2, 0);
        duk_push_number(ctx, param1);
        duk_put_prop_index(ctx, -2, 1);
        bool success = duk_pcall(ctx, 2) == 0;
        if (!success) LogError("[JavaScript] OnSignal: " + String(duk_safe_to_string(ctx, -1)));
        duk_pop(ctx);
    }
};

duk_ret_t SignalWrapper_SceneAPI_SceneCreated_Finalizer(duk_context* ctx)
{
    SignalWrapper_SceneAPI_SceneCreated* obj = GetValueObject<SignalWrapper_SceneAPI_SceneCreated>(ctx, 0, SignalWrapper_SceneAPI_SceneCreated_ID);
    if (obj)
    {
        delete obj;
        SetValueObject(ctx, 0, 0, SignalWrapper_SceneAPI_SceneCreated_ID);
    }
    return 0;
}

static duk_ret_t SignalWrapper_SceneAPI_SceneCreated_Connect(duk_context* ctx)
{
    SignalWrapper_SceneAPI_SceneCreated* wrapper = GetThisValueObject<SignalWrapper_SceneAPI_SceneCreated>(ctx, SignalWrapper_SceneAPI_SceneCreated_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_SceneAPI_SceneCreated* receiver = new SignalReceiver_SceneAPI_SceneCreated();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_SceneAPI_SceneCreated::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    int numArgs = duk_get_top(ctx);
    duk_push_number(ctx, (size_t)wrapper->signal_);
    duk_insert(ctx, 0);
    duk_push_global_object(ctx);
    duk_get_prop_string(ctx, -1, "_ConnectSignal");
    duk_remove(ctx, -2);
    duk_insert(ctx, 0);
    duk_pcall(ctx, numArgs + 1);
    duk_pop(ctx);
    return 0;
}

static duk_ret_t SignalWrapper_SceneAPI_SceneCreated_Disconnect(duk_context* ctx)
{
    SignalWrapper_SceneAPI_SceneCreated* wrapper = GetThisValueObject<SignalWrapper_SceneAPI_SceneCreated>(ctx, SignalWrapper_SceneAPI_SceneCreated_ID);
    if (!wrapper->owner_) return 0;
    int numArgs = duk_get_top(ctx);
    duk_push_number(ctx, (size_t)wrapper->signal_);
    duk_insert(ctx, 0);
    duk_push_global_object(ctx);
    duk_get_prop_string(ctx, -1, "_DisconnectSignal");
    duk_remove(ctx, -2);
    duk_insert(ctx, 0);
    duk_pcall(ctx, numArgs + 1);
    if (duk_get_boolean(ctx, -1))
    {
        HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
        signalReceivers.Erase(wrapper->signal_);
    }
    duk_pop(ctx);
    return 0;
}

static duk_ret_t SignalWrapper_SceneAPI_SceneCreated_Emit(duk_context* ctx)
{
    SignalWrapper_SceneAPI_SceneCreated* wrapper = GetThisValueObject<SignalWrapper_SceneAPI_SceneCreated>(ctx, SignalWrapper_SceneAPI_SceneCreated_ID);
    if (!wrapper->owner_) return 0;
    Scene* param0 = GetWeakObject<Scene>(ctx, 0);
    AttributeChange::Type param1 = (AttributeChange::Type)(int)duk_require_number(ctx, 1);
    wrapper->signal_->Emit(param0, param1);
    return 0;
}

static duk_ret_t SceneAPI_Get_SceneCreated(duk_context* ctx)
{
    SceneAPI* thisObj = GetThisWeakObject<SceneAPI>(ctx);
    SignalWrapper_SceneAPI_SceneCreated* wrapper = new SignalWrapper_SceneAPI_SceneCreated(thisObj, &thisObj->SceneCreated);
    PushValueObject(ctx, wrapper, SignalWrapper_SceneAPI_SceneCreated_ID, SignalWrapper_SceneAPI_SceneCreated_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_SceneAPI_SceneCreated_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_SceneAPI_SceneCreated_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_SceneAPI_SceneCreated_Emit, 2);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

const char* SignalWrapper_SceneAPI_SceneAboutToBeRemoved_ID = "SignalWrapper_SceneAPI_SceneAboutToBeRemoved";

class SignalWrapper_SceneAPI_SceneAboutToBeRemoved
{
public:
    SignalWrapper_SceneAPI_SceneAboutToBeRemoved(Object* owner, Signal2< Scene *, AttributeChange::Type >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal2< Scene *, AttributeChange::Type >* signal_;
};

class SignalReceiver_SceneAPI_SceneAboutToBeRemoved : public SignalReceiver
{
public:
    void OnSignal(Scene * param0, AttributeChange::Type param1)
    {
        duk_context* ctx = ctx_;
        duk_push_global_object(ctx);
        duk_get_prop_string(ctx, -1, "_OnSignal");
        duk_remove(ctx, -2);
        duk_push_number(ctx, (size_t)key_);
        duk_push_array(ctx);
        PushWeakObject(ctx, param0);
        duk_put_prop_index(ctx, -2, 0);
        duk_push_number(ctx, param1);
        duk_put_prop_index(ctx, -2, 1);
        bool success = duk_pcall(ctx, 2) == 0;
        if (!success) LogError("[JavaScript] OnSignal: " + String(duk_safe_to_string(ctx, -1)));
        duk_pop(ctx);
    }
};

duk_ret_t SignalWrapper_SceneAPI_SceneAboutToBeRemoved_Finalizer(duk_context* ctx)
{
    SignalWrapper_SceneAPI_SceneAboutToBeRemoved* obj = GetValueObject<SignalWrapper_SceneAPI_SceneAboutToBeRemoved>(ctx, 0, SignalWrapper_SceneAPI_SceneAboutToBeRemoved_ID);
    if (obj)
    {
        delete obj;
        SetValueObject(ctx, 0, 0, SignalWrapper_SceneAPI_SceneAboutToBeRemoved_ID);
    }
    return 0;
}

static duk_ret_t SignalWrapper_SceneAPI_SceneAboutToBeRemoved_Connect(duk_context* ctx)
{
    SignalWrapper_SceneAPI_SceneAboutToBeRemoved* wrapper = GetThisValueObject<SignalWrapper_SceneAPI_SceneAboutToBeRemoved>(ctx, SignalWrapper_SceneAPI_SceneAboutToBeRemoved_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_SceneAPI_SceneAboutToBeRemoved* receiver = new SignalReceiver_SceneAPI_SceneAboutToBeRemoved();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_SceneAPI_SceneAboutToBeRemoved::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    int numArgs = duk_get_top(ctx);
    duk_push_number(ctx, (size_t)wrapper->signal_);
    duk_insert(ctx, 0);
    duk_push_global_object(ctx);
    duk_get_prop_string(ctx, -1, "_ConnectSignal");
    duk_remove(ctx, -2);
    duk_insert(ctx, 0);
    duk_pcall(ctx, numArgs + 1);
    duk_pop(ctx);
    return 0;
}

static duk_ret_t SignalWrapper_SceneAPI_SceneAboutToBeRemoved_Disconnect(duk_context* ctx)
{
    SignalWrapper_SceneAPI_SceneAboutToBeRemoved* wrapper = GetThisValueObject<SignalWrapper_SceneAPI_SceneAboutToBeRemoved>(ctx, SignalWrapper_SceneAPI_SceneAboutToBeRemoved_ID);
    if (!wrapper->owner_) return 0;
    int numArgs = duk_get_top(ctx);
    duk_push_number(ctx, (size_t)wrapper->signal_);
    duk_insert(ctx, 0);
    duk_push_global_object(ctx);
    duk_get_prop_string(ctx, -1, "_DisconnectSignal");
    duk_remove(ctx, -2);
    duk_insert(ctx, 0);
    duk_pcall(ctx, numArgs + 1);
    if (duk_get_boolean(ctx, -1))
    {
        HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
        signalReceivers.Erase(wrapper->signal_);
    }
    duk_pop(ctx);
    return 0;
}

static duk_ret_t SignalWrapper_SceneAPI_SceneAboutToBeRemoved_Emit(duk_context* ctx)
{
    SignalWrapper_SceneAPI_SceneAboutToBeRemoved* wrapper = GetThisValueObject<SignalWrapper_SceneAPI_SceneAboutToBeRemoved>(ctx, SignalWrapper_SceneAPI_SceneAboutToBeRemoved_ID);
    if (!wrapper->owner_) return 0;
    Scene* param0 = GetWeakObject<Scene>(ctx, 0);
    AttributeChange::Type param1 = (AttributeChange::Type)(int)duk_require_number(ctx, 1);
    wrapper->signal_->Emit(param0, param1);
    return 0;
}

static duk_ret_t SceneAPI_Get_SceneAboutToBeRemoved(duk_context* ctx)
{
    SceneAPI* thisObj = GetThisWeakObject<SceneAPI>(ctx);
    SignalWrapper_SceneAPI_SceneAboutToBeRemoved* wrapper = new SignalWrapper_SceneAPI_SceneAboutToBeRemoved(thisObj, &thisObj->SceneAboutToBeRemoved);
    PushValueObject(ctx, wrapper, SignalWrapper_SceneAPI_SceneAboutToBeRemoved_ID, SignalWrapper_SceneAPI_SceneAboutToBeRemoved_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_SceneAPI_SceneAboutToBeRemoved_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_SceneAPI_SceneAboutToBeRemoved_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_SceneAPI_SceneAboutToBeRemoved_Emit, 2);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

const char* SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered_ID = "SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered";

class SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered
{
public:
    SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered(Object* owner, Signal3< u32, const String &, AttributeChange::Type >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal3< u32, const String &, AttributeChange::Type >* signal_;
};

class SignalReceiver_SceneAPI_PlaceholderComponentTypeRegistered : public SignalReceiver
{
public:
    void OnSignal(u32 param0, const String & param1, AttributeChange::Type param2)
    {
        duk_context* ctx = ctx_;
        duk_push_global_object(ctx);
        duk_get_prop_string(ctx, -1, "_OnSignal");
        duk_remove(ctx, -2);
        duk_push_number(ctx, (size_t)key_);
        duk_push_array(ctx);
        duk_push_number(ctx, param0);
        duk_put_prop_index(ctx, -2, 0);
        duk_push_string(ctx, param1.CString());
        duk_put_prop_index(ctx, -2, 1);
        duk_push_number(ctx, param2);
        duk_put_prop_index(ctx, -2, 2);
        bool success = duk_pcall(ctx, 2) == 0;
        if (!success) LogError("[JavaScript] OnSignal: " + String(duk_safe_to_string(ctx, -1)));
        duk_pop(ctx);
    }
};

duk_ret_t SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered_Finalizer(duk_context* ctx)
{
    SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered* obj = GetValueObject<SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered>(ctx, 0, SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered_ID);
    if (obj)
    {
        delete obj;
        SetValueObject(ctx, 0, 0, SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered_ID);
    }
    return 0;
}

static duk_ret_t SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered_Connect(duk_context* ctx)
{
    SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered* wrapper = GetThisValueObject<SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered>(ctx, SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_SceneAPI_PlaceholderComponentTypeRegistered* receiver = new SignalReceiver_SceneAPI_PlaceholderComponentTypeRegistered();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_SceneAPI_PlaceholderComponentTypeRegistered::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    int numArgs = duk_get_top(ctx);
    duk_push_number(ctx, (size_t)wrapper->signal_);
    duk_insert(ctx, 0);
    duk_push_global_object(ctx);
    duk_get_prop_string(ctx, -1, "_ConnectSignal");
    duk_remove(ctx, -2);
    duk_insert(ctx, 0);
    duk_pcall(ctx, numArgs + 1);
    duk_pop(ctx);
    return 0;
}

static duk_ret_t SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered_Disconnect(duk_context* ctx)
{
    SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered* wrapper = GetThisValueObject<SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered>(ctx, SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered_ID);
    if (!wrapper->owner_) return 0;
    int numArgs = duk_get_top(ctx);
    duk_push_number(ctx, (size_t)wrapper->signal_);
    duk_insert(ctx, 0);
    duk_push_global_object(ctx);
    duk_get_prop_string(ctx, -1, "_DisconnectSignal");
    duk_remove(ctx, -2);
    duk_insert(ctx, 0);
    duk_pcall(ctx, numArgs + 1);
    if (duk_get_boolean(ctx, -1))
    {
        HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
        signalReceivers.Erase(wrapper->signal_);
    }
    duk_pop(ctx);
    return 0;
}

static duk_ret_t SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered_Emit(duk_context* ctx)
{
    SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered* wrapper = GetThisValueObject<SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered>(ctx, SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered_ID);
    if (!wrapper->owner_) return 0;
    u32 param0 = (u32)duk_require_number(ctx, 0);
    String param1(duk_require_string(ctx, 1));
    AttributeChange::Type param2 = (AttributeChange::Type)(int)duk_require_number(ctx, 2);
    wrapper->signal_->Emit(param0, param1, param2);
    return 0;
}

static duk_ret_t SceneAPI_Get_PlaceholderComponentTypeRegistered(duk_context* ctx)
{
    SceneAPI* thisObj = GetThisWeakObject<SceneAPI>(ctx);
    SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered* wrapper = new SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered(thisObj, &thisObj->PlaceholderComponentTypeRegistered);
    PushValueObject(ctx, wrapper, SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered_ID, SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_SceneAPI_PlaceholderComponentTypeRegistered_Emit, 3);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

static duk_ret_t SceneAPI_Scenes(duk_context* ctx)
{
    SceneAPI* thisObj = GetThisWeakObject<SceneAPI>(ctx);
    SceneMap & ret = thisObj->Scenes();
    PushWeakObjectMap(ctx, ret);
    return 1;
}

static duk_ret_t SceneAPI_SceneByName_String(duk_context* ctx)
{
    SceneAPI* thisObj = GetThisWeakObject<SceneAPI>(ctx);
    String name(duk_require_string(ctx, 0));
    ScenePtr ret = thisObj->SceneByName(name);
    PushWeakObject(ctx, ret);
    return 1;
}

static duk_ret_t SceneAPI_MainCameraScene(duk_context* ctx)
{
    SceneAPI* thisObj = GetThisWeakObject<SceneAPI>(ctx);
    Scene * ret = thisObj->MainCameraScene();
    PushWeakObject(ctx, ret);
    return 1;
}

static duk_ret_t SceneAPI_CreateScene_String_bool_bool_AttributeChange__Type(duk_context* ctx)
{
    SceneAPI* thisObj = GetThisWeakObject<SceneAPI>(ctx);
    String name(duk_require_string(ctx, 0));
    bool viewEnabled = duk_require_boolean(ctx, 1);
    bool authority = duk_require_boolean(ctx, 2);
    AttributeChange::Type change = (AttributeChange::Type)(int)duk_require_number(ctx, 3);
    ScenePtr ret = thisObj->CreateScene(name, viewEnabled, authority, change);
    PushWeakObject(ctx, ret);
    return 1;
}

static duk_ret_t SceneAPI_RemoveScene_String_AttributeChange__Type(duk_context* ctx)
{
    SceneAPI* thisObj = GetThisWeakObject<SceneAPI>(ctx);
    String name(duk_require_string(ctx, 0));
    AttributeChange::Type change = (AttributeChange::Type)(int)duk_require_number(ctx, 1);
    bool ret = thisObj->RemoveScene(name, change);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t SceneAPI_IsComponentFactoryRegistered_String(duk_context* ctx)
{
    SceneAPI* thisObj = GetThisWeakObject<SceneAPI>(ctx);
    String typeName(duk_require_string(ctx, 0));
    bool ret = thisObj->IsComponentFactoryRegistered(typeName);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t SceneAPI_IsPlaceholderComponentRegistered_String(duk_context* ctx)
{
    SceneAPI* thisObj = GetThisWeakObject<SceneAPI>(ctx);
    String typeName(duk_require_string(ctx, 0));
    bool ret = thisObj->IsPlaceholderComponentRegistered(typeName);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t SceneAPI_IsComponentTypeRegistered_String(duk_context* ctx)
{
    SceneAPI* thisObj = GetThisWeakObject<SceneAPI>(ctx);
    String typeName(duk_require_string(ctx, 0));
    bool ret = thisObj->IsComponentTypeRegistered(typeName);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t SceneAPI_CreateComponentByName_Scene_String_String(duk_context* ctx)
{
    SceneAPI* thisObj = GetThisWeakObject<SceneAPI>(ctx);
    Scene* scene = GetWeakObject<Scene>(ctx, 0);
    String componentTypeName(duk_require_string(ctx, 1));
    String newComponentName(duk_require_string(ctx, 2));
    ComponentPtr ret = thisObj->CreateComponentByName(scene, componentTypeName, newComponentName);
    PushWeakObject(ctx, ret);
    return 1;
}

static duk_ret_t SceneAPI_CreateComponentById_Scene_u32_String(duk_context* ctx)
{
    SceneAPI* thisObj = GetThisWeakObject<SceneAPI>(ctx);
    Scene* scene = GetWeakObject<Scene>(ctx, 0);
    u32 componentTypeid = (u32)duk_require_number(ctx, 1);
    String newComponentName(duk_require_string(ctx, 2));
    ComponentPtr ret = thisObj->CreateComponentById(scene, componentTypeid, newComponentName);
    PushWeakObject(ctx, ret);
    return 1;
}

static duk_ret_t SceneAPI_ComponentTypeNameForTypeId_u32(duk_context* ctx)
{
    SceneAPI* thisObj = GetThisWeakObject<SceneAPI>(ctx);
    u32 componentTypeId = (u32)duk_require_number(ctx, 0);
    String ret = thisObj->ComponentTypeNameForTypeId(componentTypeId);
    duk_push_string(ctx, ret.CString());
    return 1;
}

static duk_ret_t SceneAPI_ComponentTypeIdForTypeName_String(duk_context* ctx)
{
    SceneAPI* thisObj = GetThisWeakObject<SceneAPI>(ctx);
    String componentTypeName(duk_require_string(ctx, 0));
    u32 ret = thisObj->ComponentTypeIdForTypeName(componentTypeName);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t SceneAPI_ComponentTypes(duk_context* ctx)
{
    SceneAPI* thisObj = GetThisWeakObject<SceneAPI>(ctx);
    StringVector ret = thisObj->ComponentTypes();
    PushStringVector(ctx, ret);
    return 1;
}

static duk_ret_t SceneAPI_RegisterComponentType_String_IComponent(duk_context* ctx)
{
    SceneAPI* thisObj = GetThisWeakObject<SceneAPI>(ctx);
    String typeName(duk_require_string(ctx, 0));
    IComponent* component = GetWeakObject<IComponent>(ctx, 1);
    thisObj->RegisterComponentType(typeName, component);
    return 0;
}

static duk_ret_t SceneAPI_AttributeTypes_Static(duk_context* ctx)
{
    const StringVector & ret = SceneAPI::AttributeTypes();
    PushStringVector(ctx, ret);
    return 1;
}

static duk_ret_t SceneAPI_AttributeTypeNameForTypeId_Static_u32(duk_context* ctx)
{
    u32 attributeTypeId = (u32)duk_require_number(ctx, 0);
    String ret = SceneAPI::AttributeTypeNameForTypeId(attributeTypeId);
    duk_push_string(ctx, ret.CString());
    return 1;
}

static duk_ret_t SceneAPI_AttributeTypeIdForTypeName_Static_String(duk_context* ctx)
{
    String attributeTypeName(duk_require_string(ctx, 0));
    u32 ret = SceneAPI::AttributeTypeIdForTypeName(attributeTypeName);
    duk_push_number(ctx, ret);
    return 1;
}

static const duk_function_list_entry SceneAPI_Functions[] = {
    {"Scenes", SceneAPI_Scenes, 0}
    ,{"SceneByName", SceneAPI_SceneByName_String, 1}
    ,{"MainCameraScene", SceneAPI_MainCameraScene, 0}
    ,{"CreateScene", SceneAPI_CreateScene_String_bool_bool_AttributeChange__Type, 4}
    ,{"RemoveScene", SceneAPI_RemoveScene_String_AttributeChange__Type, 2}
    ,{"IsComponentFactoryRegistered", SceneAPI_IsComponentFactoryRegistered_String, 1}
    ,{"IsPlaceholderComponentRegistered", SceneAPI_IsPlaceholderComponentRegistered_String, 1}
    ,{"IsComponentTypeRegistered", SceneAPI_IsComponentTypeRegistered_String, 1}
    ,{"CreateComponentByName", SceneAPI_CreateComponentByName_Scene_String_String, 3}
    ,{"CreateComponentById", SceneAPI_CreateComponentById_Scene_u32_String, 3}
    ,{"ComponentTypeNameForTypeId", SceneAPI_ComponentTypeNameForTypeId_u32, 1}
    ,{"ComponentTypeIdForTypeName", SceneAPI_ComponentTypeIdForTypeName_String, 1}
    ,{"ComponentTypes", SceneAPI_ComponentTypes, 0}
    ,{"RegisterComponentType", SceneAPI_RegisterComponentType_String_IComponent, 2}
    ,{nullptr, nullptr, 0}
};

static const duk_function_list_entry SceneAPI_StaticFunctions[] = {
    {"AttributeTypes", SceneAPI_AttributeTypes_Static, 0}
    ,{"AttributeTypeNameForTypeId", SceneAPI_AttributeTypeNameForTypeId_Static_u32, 1}
    ,{"AttributeTypeIdForTypeName", SceneAPI_AttributeTypeIdForTypeName_Static_String, 1}
    ,{nullptr, nullptr, 0}
};

void Expose_SceneAPI(duk_context* ctx)
{
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, SceneAPI_StaticFunctions);
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, SceneAPI_Functions);
    DefineProperty(ctx, "sceneCreated", SceneAPI_Get_SceneCreated, nullptr);
    DefineProperty(ctx, "sceneAboutToBeRemoved", SceneAPI_Get_SceneAboutToBeRemoved, nullptr);
    DefineProperty(ctx, "placeholderComponentTypeRegistered", SceneAPI_Get_PlaceholderComponentTypeRegistered, nullptr);
    duk_put_prop_string(ctx, -2, "prototype");
    duk_put_global_string(ctx, SceneAPI_ID);
}

}
