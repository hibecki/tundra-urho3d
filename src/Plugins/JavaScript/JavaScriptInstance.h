// For conditions of distribution and use, see copyright notice in LICENSE

#pragma once

#include "CoreTypes.h"
#include "CoreDefines.h"
#include "JavaScriptApi.h"
#include "JavaScriptFwd.h"
#include "IComponent.h"
#include "IScriptInstance.h"

#include "Win.h" // Duktape config will include Windows.h on Windows, include beforehand to avoid problems with ConsoleAPI
#include "duktape.h"

#include <Urho3D/Container/RefCounted.h>

namespace Tundra
{

/// Javascript script instance used wit EC_Script.
class JAVASCRIPT_API JavaScriptInstance : public IScriptInstance
{
public:
    /// Creates script engine for this script instance and loads the script but doesn't run it yet.
    /** @param scriptRef Script asset reference.
    @param module Javascript module. */
    JavaScriptInstance(const String &fileName, JavaScript *module);

    /// Creates script engine for this script instance and loads the script but doesn't run it yet.
    /** @param scriptRef Script asset reference.
    @param module Javascript module. */
    JavaScriptInstance(ScriptAssetPtr scriptRef, JavaScript *module);

    /// Creates script engine for this script instance and loads the script but doesn't run it yet.
    /** @param scriptRefs Script asset references.
    @param module Javascript module. */
    JavaScriptInstance(const Vector<ScriptAssetPtr>& scriptRefs, JavaScript *module);

    /// Destroys script engine created for this script instance.
    virtual ~JavaScriptInstance();

    /// IScriptInstance override.
    void Load();

    /// IScriptInstance override.
    void Unload();

    /// IScriptInstance override.
    void Run();

    /// Evaluate JavaScript in the instance.
    bool Evaluate(const String& script);

    /// Call a global function. \todo Parameter passing & return value
    bool Execute(const String& functionName);

    /// Return the Duktape context.
    duk_context* Context() const;

    /// Sets owner (EC_Script) component.
    /** @param owner Owner component. */
    void SetOwner(const ComponentPtr &owner) { owner_ = owner; }

    /// Return owner component
    ComponentWeakPtr Owner() const { return owner_; }

    /// Loads a given script in engine. This function can be used to create a property as you could include js-files.
    /** Multiple inclusion of same file is prevented. (by using simple string compare)
    @param path is relative path from bin/ to file. Example jsmodules/apitest/myscript.js */
    void IncludeFile(const String &file);

    /// Return whether has been evaluated
    virtual bool IsEvaluated() const { return evaluated; }

    /// Dumps engine information into a string. Used for debugging/profiling.
    virtual HashMap<String, uint> DumpEngineInformation();

    /// The scripts have been run.
    Signal0<void> ScriptEvaluated;

    /// The script engine is about to unload.
    Signal0<void> ScriptUnloading;

private:
    /// Creates new script context/engine.
    void CreateEngine();

    /// Deletes script context/engine.
    void DeleteEngine();

    String LoadScript(const String &fileName);

    // The script content for a JavascriptInstance is loaded either using the Asset API or 
    // using an absolute path name from the local file system.

    /// If the script content is loaded using the Asset API, this points to the asset that is loaded.
    Vector<ScriptAssetPtr> scriptRefs_;

    /// If the script content is loaded directly from local file, this points to the actual script content.  
    String program_;

    /// Specifies the absolute path of the source file where the script is loaded from, if the content is directly loaded from file.
    String sourceFile;

    /// Current script name that is loaded into this instance.
    String currentScriptName;

    ComponentWeakPtr owner_; ///< Owner (Script) component, if existing.
    JavaScript *module_; ///< Javascript module.
    duk_context* ctx_; ///< DukTape context.
    bool evaluated; ///< Has the script program been evaluated.

    /// Already included files for preventing multi-inclusion
    Vector<String> includedFiles;
};

}