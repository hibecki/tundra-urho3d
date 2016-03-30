// For conditions of distribution and use, see copyright notice in LICENSE
// This file has been autogenerated with BindingsGenerator

#include "StableHeaders.h"
#include "CoreTypes.h"
#include "JavaScriptInstance.h"
#include "LoggingFunctions.h"
#include "PhysicsConstraint.h"

#ifdef _MSC_VER
#pragma warning(disable: 4800)
#endif

#include "Entity.h"


using namespace Tundra;
using namespace std;

namespace JSBindings
{



static const char* PhysicsConstraint_ID = "PhysicsConstraint";

const char* SignalWrapper_PhysicsConstraint_ComponentNameChanged_ID = "SignalWrapper_PhysicsConstraint_ComponentNameChanged";

class SignalWrapper_PhysicsConstraint_ComponentNameChanged
{
public:
    SignalWrapper_PhysicsConstraint_ComponentNameChanged(Object* owner, Signal2< const String &, const String & >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal2< const String &, const String & >* signal_;
};

class SignalReceiver_PhysicsConstraint_ComponentNameChanged : public SignalReceiver
{
public:
    void OnSignal(const String & param0, const String & param1)
    {
        duk_context* ctx = ctx_;
        duk_push_global_object(ctx);
        duk_get_prop_string(ctx, -1, "_OnSignal");
        duk_remove(ctx, -2);
        duk_push_number(ctx, (size_t)key_);
        duk_push_array(ctx);
        duk_push_string(ctx, param0.CString());
        duk_put_prop_index(ctx, -2, 0);
        duk_push_string(ctx, param1.CString());
        duk_put_prop_index(ctx, -2, 1);
        bool success = duk_pcall(ctx, 2) == 0;
        if (!success) LogError("[JavaScript] OnSignal: " + GetErrorString(ctx));
        duk_pop(ctx);
    }
};

static duk_ret_t SignalWrapper_PhysicsConstraint_ComponentNameChanged_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_PhysicsConstraint_ComponentNameChanged>(ctx, SignalWrapper_PhysicsConstraint_ComponentNameChanged_ID);
    return 0;
}

static duk_ret_t SignalWrapper_PhysicsConstraint_ComponentNameChanged_Connect(duk_context* ctx)
{
    SignalWrapper_PhysicsConstraint_ComponentNameChanged* wrapper = GetThisValueObject<SignalWrapper_PhysicsConstraint_ComponentNameChanged>(ctx, SignalWrapper_PhysicsConstraint_ComponentNameChanged_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_PhysicsConstraint_ComponentNameChanged* receiver = new SignalReceiver_PhysicsConstraint_ComponentNameChanged();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_PhysicsConstraint_ComponentNameChanged::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_PhysicsConstraint_ComponentNameChanged_Disconnect(duk_context* ctx)
{
    SignalWrapper_PhysicsConstraint_ComponentNameChanged* wrapper = GetThisValueObject<SignalWrapper_PhysicsConstraint_ComponentNameChanged>(ctx, SignalWrapper_PhysicsConstraint_ComponentNameChanged_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_PhysicsConstraint_ComponentNameChanged_Emit(duk_context* ctx)
{
    SignalWrapper_PhysicsConstraint_ComponentNameChanged* wrapper = GetThisValueObject<SignalWrapper_PhysicsConstraint_ComponentNameChanged>(ctx, SignalWrapper_PhysicsConstraint_ComponentNameChanged_ID);
    if (!wrapper->owner_) return 0;
    String param0 = duk_require_string(ctx, 0);
    String param1 = duk_require_string(ctx, 1);
    wrapper->signal_->Emit(param0, param1);
    return 0;
}

static duk_ret_t PhysicsConstraint_Get_ComponentNameChanged(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    SignalWrapper_PhysicsConstraint_ComponentNameChanged* wrapper = new SignalWrapper_PhysicsConstraint_ComponentNameChanged(thisObj, &thisObj->ComponentNameChanged);
    PushValueObject(ctx, wrapper, SignalWrapper_PhysicsConstraint_ComponentNameChanged_ID, SignalWrapper_PhysicsConstraint_ComponentNameChanged_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_PhysicsConstraint_ComponentNameChanged_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_PhysicsConstraint_ComponentNameChanged_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_PhysicsConstraint_ComponentNameChanged_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_PhysicsConstraint_ComponentNameChanged_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_PhysicsConstraint_ComponentNameChanged_Emit, 2);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

const char* SignalWrapper_PhysicsConstraint_ParentEntitySet_ID = "SignalWrapper_PhysicsConstraint_ParentEntitySet";

class SignalWrapper_PhysicsConstraint_ParentEntitySet
{
public:
    SignalWrapper_PhysicsConstraint_ParentEntitySet(Object* owner, Signal0< void >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal0< void >* signal_;
};

class SignalReceiver_PhysicsConstraint_ParentEntitySet : public SignalReceiver
{
public:
    void OnSignal()
    {
        duk_context* ctx = ctx_;
        duk_push_global_object(ctx);
        duk_get_prop_string(ctx, -1, "_OnSignal");
        duk_remove(ctx, -2);
        duk_push_number(ctx, (size_t)key_);
        duk_push_array(ctx);
        bool success = duk_pcall(ctx, 2) == 0;
        if (!success) LogError("[JavaScript] OnSignal: " + GetErrorString(ctx));
        duk_pop(ctx);
    }
};

static duk_ret_t SignalWrapper_PhysicsConstraint_ParentEntitySet_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_PhysicsConstraint_ParentEntitySet>(ctx, SignalWrapper_PhysicsConstraint_ParentEntitySet_ID);
    return 0;
}

static duk_ret_t SignalWrapper_PhysicsConstraint_ParentEntitySet_Connect(duk_context* ctx)
{
    SignalWrapper_PhysicsConstraint_ParentEntitySet* wrapper = GetThisValueObject<SignalWrapper_PhysicsConstraint_ParentEntitySet>(ctx, SignalWrapper_PhysicsConstraint_ParentEntitySet_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_PhysicsConstraint_ParentEntitySet* receiver = new SignalReceiver_PhysicsConstraint_ParentEntitySet();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_PhysicsConstraint_ParentEntitySet::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_PhysicsConstraint_ParentEntitySet_Disconnect(duk_context* ctx)
{
    SignalWrapper_PhysicsConstraint_ParentEntitySet* wrapper = GetThisValueObject<SignalWrapper_PhysicsConstraint_ParentEntitySet>(ctx, SignalWrapper_PhysicsConstraint_ParentEntitySet_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_PhysicsConstraint_ParentEntitySet_Emit(duk_context* ctx)
{
    SignalWrapper_PhysicsConstraint_ParentEntitySet* wrapper = GetThisValueObject<SignalWrapper_PhysicsConstraint_ParentEntitySet>(ctx, SignalWrapper_PhysicsConstraint_ParentEntitySet_ID);
    if (!wrapper->owner_) return 0;
    wrapper->signal_->Emit();
    return 0;
}

static duk_ret_t PhysicsConstraint_Get_ParentEntitySet(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    SignalWrapper_PhysicsConstraint_ParentEntitySet* wrapper = new SignalWrapper_PhysicsConstraint_ParentEntitySet(thisObj, &thisObj->ParentEntitySet);
    PushValueObject(ctx, wrapper, SignalWrapper_PhysicsConstraint_ParentEntitySet_ID, SignalWrapper_PhysicsConstraint_ParentEntitySet_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_PhysicsConstraint_ParentEntitySet_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_PhysicsConstraint_ParentEntitySet_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_PhysicsConstraint_ParentEntitySet_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_PhysicsConstraint_ParentEntitySet_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_PhysicsConstraint_ParentEntitySet_Emit, 0);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

const char* SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached_ID = "SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached";

class SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached
{
public:
    SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached(Object* owner, Signal0< void >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal0< void >* signal_;
};

class SignalReceiver_PhysicsConstraint_ParentEntityAboutToBeDetached : public SignalReceiver
{
public:
    void OnSignal()
    {
        duk_context* ctx = ctx_;
        duk_push_global_object(ctx);
        duk_get_prop_string(ctx, -1, "_OnSignal");
        duk_remove(ctx, -2);
        duk_push_number(ctx, (size_t)key_);
        duk_push_array(ctx);
        bool success = duk_pcall(ctx, 2) == 0;
        if (!success) LogError("[JavaScript] OnSignal: " + GetErrorString(ctx));
        duk_pop(ctx);
    }
};

static duk_ret_t SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached>(ctx, SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached_ID);
    return 0;
}

static duk_ret_t SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached_Connect(duk_context* ctx)
{
    SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached* wrapper = GetThisValueObject<SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached>(ctx, SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_PhysicsConstraint_ParentEntityAboutToBeDetached* receiver = new SignalReceiver_PhysicsConstraint_ParentEntityAboutToBeDetached();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_PhysicsConstraint_ParentEntityAboutToBeDetached::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached_Disconnect(duk_context* ctx)
{
    SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached* wrapper = GetThisValueObject<SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached>(ctx, SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached_Emit(duk_context* ctx)
{
    SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached* wrapper = GetThisValueObject<SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached>(ctx, SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached_ID);
    if (!wrapper->owner_) return 0;
    wrapper->signal_->Emit();
    return 0;
}

static duk_ret_t PhysicsConstraint_Get_ParentEntityAboutToBeDetached(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached* wrapper = new SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached(thisObj, &thisObj->ParentEntityAboutToBeDetached);
    PushValueObject(ctx, wrapper, SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached_ID, SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_PhysicsConstraint_ParentEntityAboutToBeDetached_Emit, 0);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

static duk_ret_t PhysicsConstraint_TypeName(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    const String & ret = thisObj->TypeName();
    duk_push_string(ctx, ret.CString());
    return 1;
}

static duk_ret_t PhysicsConstraint_TypeId(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    u32 ret = thisObj->TypeId();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t PhysicsConstraint_Name(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    const String & ret = thisObj->Name();
    duk_push_string(ctx, ret.CString());
    return 1;
}

static duk_ret_t PhysicsConstraint_SetName_String(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    String name = duk_require_string(ctx, 0);
    thisObj->SetName(name);
    return 0;
}

static duk_ret_t PhysicsConstraint_SetParentEntity_Entity(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    Entity* entity = GetWeakObject<Entity>(ctx, 0);
    thisObj->SetParentEntity(entity);
    return 0;
}

static duk_ret_t PhysicsConstraint_SetReplicated_bool(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    bool enable = duk_require_boolean(ctx, 0);
    thisObj->SetReplicated(enable);
    return 0;
}

static duk_ret_t PhysicsConstraint_IsReplicated(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    bool ret = thisObj->IsReplicated();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t PhysicsConstraint_IsLocal(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    bool ret = thisObj->IsLocal();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t PhysicsConstraint_IsUnacked(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    bool ret = thisObj->IsUnacked();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t PhysicsConstraint_SetUpdateMode_AttributeChange__Type(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    AttributeChange::Type defaultmode = (AttributeChange::Type)(int)duk_require_number(ctx, 0);
    thisObj->SetUpdateMode(defaultmode);
    return 0;
}

static duk_ret_t PhysicsConstraint_UpdateMode(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    AttributeChange::Type ret = thisObj->UpdateMode();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t PhysicsConstraint_Id(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    component_id_t ret = thisObj->Id();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t PhysicsConstraint_SupportsDynamicAttributes(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    bool ret = thisObj->SupportsDynamicAttributes();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t PhysicsConstraint_NumAttributes(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    int ret = thisObj->NumAttributes();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t PhysicsConstraint_NumStaticAttributes(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    int ret = thisObj->NumStaticAttributes();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t PhysicsConstraint_EmitAttributeChanged_String_AttributeChange__Type(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    String attributeName = duk_require_string(ctx, 0);
    AttributeChange::Type change = (AttributeChange::Type)(int)duk_require_number(ctx, 1);
    thisObj->EmitAttributeChanged(attributeName, change);
    return 0;
}

static duk_ret_t PhysicsConstraint_ComponentChanged_AttributeChange__Type(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    AttributeChange::Type change = (AttributeChange::Type)(int)duk_require_number(ctx, 0);
    thisObj->ComponentChanged(change);
    return 0;
}

static duk_ret_t PhysicsConstraint_ParentEntity(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    Entity * ret = thisObj->ParentEntity();
    PushWeakObject(ctx, ret);
    return 1;
}

static duk_ret_t PhysicsConstraint_SetTemporary_bool(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    bool enable = duk_require_boolean(ctx, 0);
    thisObj->SetTemporary(enable);
    return 0;
}

static duk_ret_t PhysicsConstraint_IsTemporary(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    bool ret = thisObj->IsTemporary();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t PhysicsConstraint_ViewEnabled(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    bool ret = thisObj->ViewEnabled();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t PhysicsConstraint_AttributeNames(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    StringVector ret = thisObj->AttributeNames();
    PushStringVector(ctx, ret);
    return 1;
}

static duk_ret_t PhysicsConstraint_AttributeIds(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    StringVector ret = thisObj->AttributeIds();
    PushStringVector(ctx, ret);
    return 1;
}

static duk_ret_t PhysicsConstraint_ShouldBeSerialized_bool_bool(duk_context* ctx)
{
    PhysicsConstraint* thisObj = GetThisWeakObject<PhysicsConstraint>(ctx);
    bool serializeTemporary = duk_require_boolean(ctx, 0);
    bool serializeLocal = duk_require_boolean(ctx, 1);
    bool ret = thisObj->ShouldBeSerialized(serializeTemporary, serializeLocal);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t PhysicsConstraint_EnsureTypeNameWithoutPrefix_Static_String(duk_context* ctx)
{
    String tn = duk_require_string(ctx, 0);
    String ret = PhysicsConstraint::EnsureTypeNameWithoutPrefix(tn);
    duk_push_string(ctx, ret.CString());
    return 1;
}

static const duk_function_list_entry PhysicsConstraint_Functions[] = {
    {"TypeName", PhysicsConstraint_TypeName, 0}
    ,{"TypeId", PhysicsConstraint_TypeId, 0}
    ,{"Name", PhysicsConstraint_Name, 0}
    ,{"SetName", PhysicsConstraint_SetName_String, 1}
    ,{"SetParentEntity", PhysicsConstraint_SetParentEntity_Entity, 1}
    ,{"SetReplicated", PhysicsConstraint_SetReplicated_bool, 1}
    ,{"IsReplicated", PhysicsConstraint_IsReplicated, 0}
    ,{"IsLocal", PhysicsConstraint_IsLocal, 0}
    ,{"IsUnacked", PhysicsConstraint_IsUnacked, 0}
    ,{"SetUpdateMode", PhysicsConstraint_SetUpdateMode_AttributeChange__Type, 1}
    ,{"UpdateMode", PhysicsConstraint_UpdateMode, 0}
    ,{"Id", PhysicsConstraint_Id, 0}
    ,{"SupportsDynamicAttributes", PhysicsConstraint_SupportsDynamicAttributes, 0}
    ,{"NumAttributes", PhysicsConstraint_NumAttributes, 0}
    ,{"NumStaticAttributes", PhysicsConstraint_NumStaticAttributes, 0}
    ,{"EmitAttributeChanged", PhysicsConstraint_EmitAttributeChanged_String_AttributeChange__Type, 2}
    ,{"ComponentChanged", PhysicsConstraint_ComponentChanged_AttributeChange__Type, 1}
    ,{"ParentEntity", PhysicsConstraint_ParentEntity, 0}
    ,{"SetTemporary", PhysicsConstraint_SetTemporary_bool, 1}
    ,{"IsTemporary", PhysicsConstraint_IsTemporary, 0}
    ,{"ViewEnabled", PhysicsConstraint_ViewEnabled, 0}
    ,{"AttributeNames", PhysicsConstraint_AttributeNames, 0}
    ,{"AttributeIds", PhysicsConstraint_AttributeIds, 0}
    ,{"ShouldBeSerialized", PhysicsConstraint_ShouldBeSerialized_bool_bool, 2}
    ,{nullptr, nullptr, 0}
};

static const duk_function_list_entry PhysicsConstraint_StaticFunctions[] = {
    {"EnsureTypeNameWithoutPrefix", PhysicsConstraint_EnsureTypeNameWithoutPrefix_Static_String, 1}
    ,{nullptr, nullptr, 0}
};

void Expose_PhysicsConstraint(duk_context* ctx)
{
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, PhysicsConstraint_StaticFunctions);
    duk_push_number(ctx, 0);
    duk_put_prop_string(ctx, -2, "PointToPoint");
    duk_push_number(ctx, 1);
    duk_put_prop_string(ctx, -2, "Hinge");
    duk_push_number(ctx, 2);
    duk_put_prop_string(ctx, -2, "Slider");
    duk_push_number(ctx, 3);
    duk_put_prop_string(ctx, -2, "ConeTwist");
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, PhysicsConstraint_Functions);
    DefineProperty(ctx, "ComponentNameChanged", PhysicsConstraint_Get_ComponentNameChanged, nullptr);
    DefineProperty(ctx, "ParentEntitySet", PhysicsConstraint_Get_ParentEntitySet, nullptr);
    DefineProperty(ctx, "ParentEntityAboutToBeDetached", PhysicsConstraint_Get_ParentEntityAboutToBeDetached, nullptr);
    DefineProperty(ctx, "typeName", PhysicsConstraint_TypeName, nullptr);
    DefineProperty(ctx, "typeId", PhysicsConstraint_TypeId, nullptr);
    DefineProperty(ctx, "name", PhysicsConstraint_Name, PhysicsConstraint_SetName_String);
    DefineProperty(ctx, "replicated", PhysicsConstraint_IsReplicated, PhysicsConstraint_SetReplicated_bool);
    DefineProperty(ctx, "local", PhysicsConstraint_IsLocal, nullptr);
    DefineProperty(ctx, "unacked", PhysicsConstraint_IsUnacked, nullptr);
    DefineProperty(ctx, "updateMode", PhysicsConstraint_UpdateMode, PhysicsConstraint_SetUpdateMode_AttributeChange__Type);
    DefineProperty(ctx, "id", PhysicsConstraint_Id, nullptr);
    DefineProperty(ctx, "temporary", PhysicsConstraint_IsTemporary, PhysicsConstraint_SetTemporary_bool);
    DefineProperty(ctx, "viewEnabled", PhysicsConstraint_ViewEnabled, nullptr);
    duk_put_prop_string(ctx, -2, "prototype");
    duk_put_global_string(ctx, PhysicsConstraint_ID);
}

}
