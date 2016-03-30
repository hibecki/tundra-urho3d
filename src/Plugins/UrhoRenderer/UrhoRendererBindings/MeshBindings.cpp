// For conditions of distribution and use, see copyright notice in LICENSE
// This file has been autogenerated with BindingsGenerator

#include "StableHeaders.h"
#include "CoreTypes.h"
#include "JavaScriptInstance.h"
#include "LoggingFunctions.h"
#include "Mesh.h"

#ifdef _MSC_VER
#pragma warning(disable: 4800)
#endif

#include "Entity.h"


using namespace Tundra;
using namespace std;

namespace JSBindings
{

static const char* float3x4_ID = "float3x4";

static duk_ret_t float3x4_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<float3x4>(ctx, float3x4_ID);
    return 0;
}


static const char* Mesh_ID = "Mesh";

const char* SignalWrapper_Mesh_MeshAboutToBeDestroyed_ID = "SignalWrapper_Mesh_MeshAboutToBeDestroyed";

class SignalWrapper_Mesh_MeshAboutToBeDestroyed
{
public:
    SignalWrapper_Mesh_MeshAboutToBeDestroyed(Object* owner, Signal0< void >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal0< void >* signal_;
};

class SignalReceiver_Mesh_MeshAboutToBeDestroyed : public SignalReceiver
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

static duk_ret_t SignalWrapper_Mesh_MeshAboutToBeDestroyed_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_Mesh_MeshAboutToBeDestroyed>(ctx, SignalWrapper_Mesh_MeshAboutToBeDestroyed_ID);
    return 0;
}

static duk_ret_t SignalWrapper_Mesh_MeshAboutToBeDestroyed_Connect(duk_context* ctx)
{
    SignalWrapper_Mesh_MeshAboutToBeDestroyed* wrapper = GetThisValueObject<SignalWrapper_Mesh_MeshAboutToBeDestroyed>(ctx, SignalWrapper_Mesh_MeshAboutToBeDestroyed_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_Mesh_MeshAboutToBeDestroyed* receiver = new SignalReceiver_Mesh_MeshAboutToBeDestroyed();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_Mesh_MeshAboutToBeDestroyed::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Mesh_MeshAboutToBeDestroyed_Disconnect(duk_context* ctx)
{
    SignalWrapper_Mesh_MeshAboutToBeDestroyed* wrapper = GetThisValueObject<SignalWrapper_Mesh_MeshAboutToBeDestroyed>(ctx, SignalWrapper_Mesh_MeshAboutToBeDestroyed_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Mesh_MeshAboutToBeDestroyed_Emit(duk_context* ctx)
{
    SignalWrapper_Mesh_MeshAboutToBeDestroyed* wrapper = GetThisValueObject<SignalWrapper_Mesh_MeshAboutToBeDestroyed>(ctx, SignalWrapper_Mesh_MeshAboutToBeDestroyed_ID);
    if (!wrapper->owner_) return 0;
    wrapper->signal_->Emit();
    return 0;
}

static duk_ret_t Mesh_Get_MeshAboutToBeDestroyed(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    SignalWrapper_Mesh_MeshAboutToBeDestroyed* wrapper = new SignalWrapper_Mesh_MeshAboutToBeDestroyed(thisObj, &thisObj->MeshAboutToBeDestroyed);
    PushValueObject(ctx, wrapper, SignalWrapper_Mesh_MeshAboutToBeDestroyed_ID, SignalWrapper_Mesh_MeshAboutToBeDestroyed_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_Mesh_MeshAboutToBeDestroyed_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_MeshAboutToBeDestroyed_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_MeshAboutToBeDestroyed_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_MeshAboutToBeDestroyed_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_MeshAboutToBeDestroyed_Emit, 0);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

const char* SignalWrapper_Mesh_MeshChanged_ID = "SignalWrapper_Mesh_MeshChanged";

class SignalWrapper_Mesh_MeshChanged
{
public:
    SignalWrapper_Mesh_MeshChanged(Object* owner, Signal0< void >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal0< void >* signal_;
};

class SignalReceiver_Mesh_MeshChanged : public SignalReceiver
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

static duk_ret_t SignalWrapper_Mesh_MeshChanged_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_Mesh_MeshChanged>(ctx, SignalWrapper_Mesh_MeshChanged_ID);
    return 0;
}

static duk_ret_t SignalWrapper_Mesh_MeshChanged_Connect(duk_context* ctx)
{
    SignalWrapper_Mesh_MeshChanged* wrapper = GetThisValueObject<SignalWrapper_Mesh_MeshChanged>(ctx, SignalWrapper_Mesh_MeshChanged_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_Mesh_MeshChanged* receiver = new SignalReceiver_Mesh_MeshChanged();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_Mesh_MeshChanged::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Mesh_MeshChanged_Disconnect(duk_context* ctx)
{
    SignalWrapper_Mesh_MeshChanged* wrapper = GetThisValueObject<SignalWrapper_Mesh_MeshChanged>(ctx, SignalWrapper_Mesh_MeshChanged_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Mesh_MeshChanged_Emit(duk_context* ctx)
{
    SignalWrapper_Mesh_MeshChanged* wrapper = GetThisValueObject<SignalWrapper_Mesh_MeshChanged>(ctx, SignalWrapper_Mesh_MeshChanged_ID);
    if (!wrapper->owner_) return 0;
    wrapper->signal_->Emit();
    return 0;
}

static duk_ret_t Mesh_Get_MeshChanged(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    SignalWrapper_Mesh_MeshChanged* wrapper = new SignalWrapper_Mesh_MeshChanged(thisObj, &thisObj->MeshChanged);
    PushValueObject(ctx, wrapper, SignalWrapper_Mesh_MeshChanged_ID, SignalWrapper_Mesh_MeshChanged_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_Mesh_MeshChanged_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_MeshChanged_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_MeshChanged_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_MeshChanged_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_MeshChanged_Emit, 0);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

const char* SignalWrapper_Mesh_MaterialChanged_ID = "SignalWrapper_Mesh_MaterialChanged";

class SignalWrapper_Mesh_MaterialChanged
{
public:
    SignalWrapper_Mesh_MaterialChanged(Object* owner, Signal2< uint, const String & >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal2< uint, const String & >* signal_;
};

class SignalReceiver_Mesh_MaterialChanged : public SignalReceiver
{
public:
    void OnSignal(uint param0, const String & param1)
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
        bool success = duk_pcall(ctx, 2) == 0;
        if (!success) LogError("[JavaScript] OnSignal: " + GetErrorString(ctx));
        duk_pop(ctx);
    }
};

static duk_ret_t SignalWrapper_Mesh_MaterialChanged_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_Mesh_MaterialChanged>(ctx, SignalWrapper_Mesh_MaterialChanged_ID);
    return 0;
}

static duk_ret_t SignalWrapper_Mesh_MaterialChanged_Connect(duk_context* ctx)
{
    SignalWrapper_Mesh_MaterialChanged* wrapper = GetThisValueObject<SignalWrapper_Mesh_MaterialChanged>(ctx, SignalWrapper_Mesh_MaterialChanged_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_Mesh_MaterialChanged* receiver = new SignalReceiver_Mesh_MaterialChanged();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_Mesh_MaterialChanged::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Mesh_MaterialChanged_Disconnect(duk_context* ctx)
{
    SignalWrapper_Mesh_MaterialChanged* wrapper = GetThisValueObject<SignalWrapper_Mesh_MaterialChanged>(ctx, SignalWrapper_Mesh_MaterialChanged_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Mesh_MaterialChanged_Emit(duk_context* ctx)
{
    SignalWrapper_Mesh_MaterialChanged* wrapper = GetThisValueObject<SignalWrapper_Mesh_MaterialChanged>(ctx, SignalWrapper_Mesh_MaterialChanged_ID);
    if (!wrapper->owner_) return 0;
    uint param0 = (uint)duk_require_number(ctx, 0);
    String param1 = duk_require_string(ctx, 1);
    wrapper->signal_->Emit(param0, param1);
    return 0;
}

static duk_ret_t Mesh_Get_MaterialChanged(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    SignalWrapper_Mesh_MaterialChanged* wrapper = new SignalWrapper_Mesh_MaterialChanged(thisObj, &thisObj->MaterialChanged);
    PushValueObject(ctx, wrapper, SignalWrapper_Mesh_MaterialChanged_ID, SignalWrapper_Mesh_MaterialChanged_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_Mesh_MaterialChanged_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_MaterialChanged_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_MaterialChanged_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_MaterialChanged_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_MaterialChanged_Emit, 2);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

const char* SignalWrapper_Mesh_SkeletonChanged_ID = "SignalWrapper_Mesh_SkeletonChanged";

class SignalWrapper_Mesh_SkeletonChanged
{
public:
    SignalWrapper_Mesh_SkeletonChanged(Object* owner, Signal0< void >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal0< void >* signal_;
};

class SignalReceiver_Mesh_SkeletonChanged : public SignalReceiver
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

static duk_ret_t SignalWrapper_Mesh_SkeletonChanged_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_Mesh_SkeletonChanged>(ctx, SignalWrapper_Mesh_SkeletonChanged_ID);
    return 0;
}

static duk_ret_t SignalWrapper_Mesh_SkeletonChanged_Connect(duk_context* ctx)
{
    SignalWrapper_Mesh_SkeletonChanged* wrapper = GetThisValueObject<SignalWrapper_Mesh_SkeletonChanged>(ctx, SignalWrapper_Mesh_SkeletonChanged_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_Mesh_SkeletonChanged* receiver = new SignalReceiver_Mesh_SkeletonChanged();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_Mesh_SkeletonChanged::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Mesh_SkeletonChanged_Disconnect(duk_context* ctx)
{
    SignalWrapper_Mesh_SkeletonChanged* wrapper = GetThisValueObject<SignalWrapper_Mesh_SkeletonChanged>(ctx, SignalWrapper_Mesh_SkeletonChanged_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Mesh_SkeletonChanged_Emit(duk_context* ctx)
{
    SignalWrapper_Mesh_SkeletonChanged* wrapper = GetThisValueObject<SignalWrapper_Mesh_SkeletonChanged>(ctx, SignalWrapper_Mesh_SkeletonChanged_ID);
    if (!wrapper->owner_) return 0;
    wrapper->signal_->Emit();
    return 0;
}

static duk_ret_t Mesh_Get_SkeletonChanged(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    SignalWrapper_Mesh_SkeletonChanged* wrapper = new SignalWrapper_Mesh_SkeletonChanged(thisObj, &thisObj->SkeletonChanged);
    PushValueObject(ctx, wrapper, SignalWrapper_Mesh_SkeletonChanged_ID, SignalWrapper_Mesh_SkeletonChanged_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_Mesh_SkeletonChanged_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_SkeletonChanged_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_SkeletonChanged_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_SkeletonChanged_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_SkeletonChanged_Emit, 0);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

const char* SignalWrapper_Mesh_ComponentNameChanged_ID = "SignalWrapper_Mesh_ComponentNameChanged";

class SignalWrapper_Mesh_ComponentNameChanged
{
public:
    SignalWrapper_Mesh_ComponentNameChanged(Object* owner, Signal2< const String &, const String & >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal2< const String &, const String & >* signal_;
};

class SignalReceiver_Mesh_ComponentNameChanged : public SignalReceiver
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

static duk_ret_t SignalWrapper_Mesh_ComponentNameChanged_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_Mesh_ComponentNameChanged>(ctx, SignalWrapper_Mesh_ComponentNameChanged_ID);
    return 0;
}

static duk_ret_t SignalWrapper_Mesh_ComponentNameChanged_Connect(duk_context* ctx)
{
    SignalWrapper_Mesh_ComponentNameChanged* wrapper = GetThisValueObject<SignalWrapper_Mesh_ComponentNameChanged>(ctx, SignalWrapper_Mesh_ComponentNameChanged_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_Mesh_ComponentNameChanged* receiver = new SignalReceiver_Mesh_ComponentNameChanged();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_Mesh_ComponentNameChanged::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Mesh_ComponentNameChanged_Disconnect(duk_context* ctx)
{
    SignalWrapper_Mesh_ComponentNameChanged* wrapper = GetThisValueObject<SignalWrapper_Mesh_ComponentNameChanged>(ctx, SignalWrapper_Mesh_ComponentNameChanged_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Mesh_ComponentNameChanged_Emit(duk_context* ctx)
{
    SignalWrapper_Mesh_ComponentNameChanged* wrapper = GetThisValueObject<SignalWrapper_Mesh_ComponentNameChanged>(ctx, SignalWrapper_Mesh_ComponentNameChanged_ID);
    if (!wrapper->owner_) return 0;
    String param0 = duk_require_string(ctx, 0);
    String param1 = duk_require_string(ctx, 1);
    wrapper->signal_->Emit(param0, param1);
    return 0;
}

static duk_ret_t Mesh_Get_ComponentNameChanged(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    SignalWrapper_Mesh_ComponentNameChanged* wrapper = new SignalWrapper_Mesh_ComponentNameChanged(thisObj, &thisObj->ComponentNameChanged);
    PushValueObject(ctx, wrapper, SignalWrapper_Mesh_ComponentNameChanged_ID, SignalWrapper_Mesh_ComponentNameChanged_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_Mesh_ComponentNameChanged_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_ComponentNameChanged_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_ComponentNameChanged_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_ComponentNameChanged_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_ComponentNameChanged_Emit, 2);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

const char* SignalWrapper_Mesh_ParentEntitySet_ID = "SignalWrapper_Mesh_ParentEntitySet";

class SignalWrapper_Mesh_ParentEntitySet
{
public:
    SignalWrapper_Mesh_ParentEntitySet(Object* owner, Signal0< void >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal0< void >* signal_;
};

class SignalReceiver_Mesh_ParentEntitySet : public SignalReceiver
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

static duk_ret_t SignalWrapper_Mesh_ParentEntitySet_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_Mesh_ParentEntitySet>(ctx, SignalWrapper_Mesh_ParentEntitySet_ID);
    return 0;
}

static duk_ret_t SignalWrapper_Mesh_ParentEntitySet_Connect(duk_context* ctx)
{
    SignalWrapper_Mesh_ParentEntitySet* wrapper = GetThisValueObject<SignalWrapper_Mesh_ParentEntitySet>(ctx, SignalWrapper_Mesh_ParentEntitySet_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_Mesh_ParentEntitySet* receiver = new SignalReceiver_Mesh_ParentEntitySet();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_Mesh_ParentEntitySet::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Mesh_ParentEntitySet_Disconnect(duk_context* ctx)
{
    SignalWrapper_Mesh_ParentEntitySet* wrapper = GetThisValueObject<SignalWrapper_Mesh_ParentEntitySet>(ctx, SignalWrapper_Mesh_ParentEntitySet_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Mesh_ParentEntitySet_Emit(duk_context* ctx)
{
    SignalWrapper_Mesh_ParentEntitySet* wrapper = GetThisValueObject<SignalWrapper_Mesh_ParentEntitySet>(ctx, SignalWrapper_Mesh_ParentEntitySet_ID);
    if (!wrapper->owner_) return 0;
    wrapper->signal_->Emit();
    return 0;
}

static duk_ret_t Mesh_Get_ParentEntitySet(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    SignalWrapper_Mesh_ParentEntitySet* wrapper = new SignalWrapper_Mesh_ParentEntitySet(thisObj, &thisObj->ParentEntitySet);
    PushValueObject(ctx, wrapper, SignalWrapper_Mesh_ParentEntitySet_ID, SignalWrapper_Mesh_ParentEntitySet_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_Mesh_ParentEntitySet_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_ParentEntitySet_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_ParentEntitySet_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_ParentEntitySet_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_ParentEntitySet_Emit, 0);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

const char* SignalWrapper_Mesh_ParentEntityAboutToBeDetached_ID = "SignalWrapper_Mesh_ParentEntityAboutToBeDetached";

class SignalWrapper_Mesh_ParentEntityAboutToBeDetached
{
public:
    SignalWrapper_Mesh_ParentEntityAboutToBeDetached(Object* owner, Signal0< void >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal0< void >* signal_;
};

class SignalReceiver_Mesh_ParentEntityAboutToBeDetached : public SignalReceiver
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

static duk_ret_t SignalWrapper_Mesh_ParentEntityAboutToBeDetached_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_Mesh_ParentEntityAboutToBeDetached>(ctx, SignalWrapper_Mesh_ParentEntityAboutToBeDetached_ID);
    return 0;
}

static duk_ret_t SignalWrapper_Mesh_ParentEntityAboutToBeDetached_Connect(duk_context* ctx)
{
    SignalWrapper_Mesh_ParentEntityAboutToBeDetached* wrapper = GetThisValueObject<SignalWrapper_Mesh_ParentEntityAboutToBeDetached>(ctx, SignalWrapper_Mesh_ParentEntityAboutToBeDetached_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_Mesh_ParentEntityAboutToBeDetached* receiver = new SignalReceiver_Mesh_ParentEntityAboutToBeDetached();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_Mesh_ParentEntityAboutToBeDetached::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Mesh_ParentEntityAboutToBeDetached_Disconnect(duk_context* ctx)
{
    SignalWrapper_Mesh_ParentEntityAboutToBeDetached* wrapper = GetThisValueObject<SignalWrapper_Mesh_ParentEntityAboutToBeDetached>(ctx, SignalWrapper_Mesh_ParentEntityAboutToBeDetached_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Mesh_ParentEntityAboutToBeDetached_Emit(duk_context* ctx)
{
    SignalWrapper_Mesh_ParentEntityAboutToBeDetached* wrapper = GetThisValueObject<SignalWrapper_Mesh_ParentEntityAboutToBeDetached>(ctx, SignalWrapper_Mesh_ParentEntityAboutToBeDetached_ID);
    if (!wrapper->owner_) return 0;
    wrapper->signal_->Emit();
    return 0;
}

static duk_ret_t Mesh_Get_ParentEntityAboutToBeDetached(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    SignalWrapper_Mesh_ParentEntityAboutToBeDetached* wrapper = new SignalWrapper_Mesh_ParentEntityAboutToBeDetached(thisObj, &thisObj->ParentEntityAboutToBeDetached);
    PushValueObject(ctx, wrapper, SignalWrapper_Mesh_ParentEntityAboutToBeDetached_ID, SignalWrapper_Mesh_ParentEntityAboutToBeDetached_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_Mesh_ParentEntityAboutToBeDetached_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_ParentEntityAboutToBeDetached_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_ParentEntityAboutToBeDetached_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_ParentEntityAboutToBeDetached_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_Mesh_ParentEntityAboutToBeDetached_Emit, 0);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

static duk_ret_t Mesh_SetMorphWeight_String_float(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    String morphName = duk_require_string(ctx, 0);
    float weight = (float)duk_require_number(ctx, 1);
    thisObj->SetMorphWeight(morphName, weight);
    return 0;
}

static duk_ret_t Mesh_MorphWeight_String(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    String morphName = duk_require_string(ctx, 0);
    float ret = thisObj->MorphWeight(morphName);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Mesh_MorphNames(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    StringVector ret = thisObj->MorphNames();
    PushStringVector(ctx, ret);
    return 1;
}

static duk_ret_t Mesh_LocalToWorld(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    float3x4 ret = thisObj->LocalToWorld();
    PushValueObjectCopy<float3x4>(ctx, ret, float3x4_ID, float3x4_Finalizer);
    return 1;
}

static duk_ret_t Mesh_HasMesh(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    bool ret = thisObj->HasMesh();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Mesh_AnimationNames(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    StringVector ret = thisObj->AnimationNames();
    PushStringVector(ctx, ret);
    return 1;
}

static duk_ret_t Mesh_ForceMeshLoad(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    thisObj->ForceMeshLoad();
    return 0;
}

static duk_ret_t Mesh_MeshName(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    String ret = thisObj->MeshName();
    duk_push_string(ctx, ret.CString());
    return 1;
}

static duk_ret_t Mesh_TypeName(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    const String & ret = thisObj->TypeName();
    duk_push_string(ctx, ret.CString());
    return 1;
}

static duk_ret_t Mesh_TypeId(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    u32 ret = thisObj->TypeId();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Mesh_Name(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    const String & ret = thisObj->Name();
    duk_push_string(ctx, ret.CString());
    return 1;
}

static duk_ret_t Mesh_SetName_String(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    String name = duk_require_string(ctx, 0);
    thisObj->SetName(name);
    return 0;
}

static duk_ret_t Mesh_SetParentEntity_Entity(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    Entity* entity = GetWeakObject<Entity>(ctx, 0);
    thisObj->SetParentEntity(entity);
    return 0;
}

static duk_ret_t Mesh_SetReplicated_bool(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    bool enable = duk_require_boolean(ctx, 0);
    thisObj->SetReplicated(enable);
    return 0;
}

static duk_ret_t Mesh_IsReplicated(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    bool ret = thisObj->IsReplicated();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Mesh_IsLocal(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    bool ret = thisObj->IsLocal();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Mesh_IsUnacked(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    bool ret = thisObj->IsUnacked();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Mesh_SetUpdateMode_AttributeChange__Type(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    AttributeChange::Type defaultmode = (AttributeChange::Type)(int)duk_require_number(ctx, 0);
    thisObj->SetUpdateMode(defaultmode);
    return 0;
}

static duk_ret_t Mesh_UpdateMode(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    AttributeChange::Type ret = thisObj->UpdateMode();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Mesh_Id(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    component_id_t ret = thisObj->Id();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Mesh_SupportsDynamicAttributes(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    bool ret = thisObj->SupportsDynamicAttributes();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Mesh_NumAttributes(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    int ret = thisObj->NumAttributes();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Mesh_NumStaticAttributes(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    int ret = thisObj->NumStaticAttributes();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Mesh_EmitAttributeChanged_String_AttributeChange__Type(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    String attributeName = duk_require_string(ctx, 0);
    AttributeChange::Type change = (AttributeChange::Type)(int)duk_require_number(ctx, 1);
    thisObj->EmitAttributeChanged(attributeName, change);
    return 0;
}

static duk_ret_t Mesh_ComponentChanged_AttributeChange__Type(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    AttributeChange::Type change = (AttributeChange::Type)(int)duk_require_number(ctx, 0);
    thisObj->ComponentChanged(change);
    return 0;
}

static duk_ret_t Mesh_ParentEntity(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    Entity * ret = thisObj->ParentEntity();
    PushWeakObject(ctx, ret);
    return 1;
}

static duk_ret_t Mesh_SetTemporary_bool(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    bool enable = duk_require_boolean(ctx, 0);
    thisObj->SetTemporary(enable);
    return 0;
}

static duk_ret_t Mesh_IsTemporary(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    bool ret = thisObj->IsTemporary();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Mesh_ViewEnabled(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    bool ret = thisObj->ViewEnabled();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Mesh_AttributeNames(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    StringVector ret = thisObj->AttributeNames();
    PushStringVector(ctx, ret);
    return 1;
}

static duk_ret_t Mesh_AttributeIds(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    StringVector ret = thisObj->AttributeIds();
    PushStringVector(ctx, ret);
    return 1;
}

static duk_ret_t Mesh_ShouldBeSerialized_bool_bool(duk_context* ctx)
{
    Mesh* thisObj = GetThisWeakObject<Mesh>(ctx);
    bool serializeTemporary = duk_require_boolean(ctx, 0);
    bool serializeLocal = duk_require_boolean(ctx, 1);
    bool ret = thisObj->ShouldBeSerialized(serializeTemporary, serializeLocal);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Mesh_EnsureTypeNameWithoutPrefix_Static_String(duk_context* ctx)
{
    String tn = duk_require_string(ctx, 0);
    String ret = Mesh::EnsureTypeNameWithoutPrefix(tn);
    duk_push_string(ctx, ret.CString());
    return 1;
}

static const duk_function_list_entry Mesh_Functions[] = {
    {"SetMorphWeight", Mesh_SetMorphWeight_String_float, 2}
    ,{"MorphWeight", Mesh_MorphWeight_String, 1}
    ,{"MorphNames", Mesh_MorphNames, 0}
    ,{"LocalToWorld", Mesh_LocalToWorld, 0}
    ,{"HasMesh", Mesh_HasMesh, 0}
    ,{"AnimationNames", Mesh_AnimationNames, 0}
    ,{"ForceMeshLoad", Mesh_ForceMeshLoad, 0}
    ,{"MeshName", Mesh_MeshName, 0}
    ,{"TypeName", Mesh_TypeName, 0}
    ,{"TypeId", Mesh_TypeId, 0}
    ,{"Name", Mesh_Name, 0}
    ,{"SetName", Mesh_SetName_String, 1}
    ,{"SetParentEntity", Mesh_SetParentEntity_Entity, 1}
    ,{"SetReplicated", Mesh_SetReplicated_bool, 1}
    ,{"IsReplicated", Mesh_IsReplicated, 0}
    ,{"IsLocal", Mesh_IsLocal, 0}
    ,{"IsUnacked", Mesh_IsUnacked, 0}
    ,{"SetUpdateMode", Mesh_SetUpdateMode_AttributeChange__Type, 1}
    ,{"UpdateMode", Mesh_UpdateMode, 0}
    ,{"Id", Mesh_Id, 0}
    ,{"SupportsDynamicAttributes", Mesh_SupportsDynamicAttributes, 0}
    ,{"NumAttributes", Mesh_NumAttributes, 0}
    ,{"NumStaticAttributes", Mesh_NumStaticAttributes, 0}
    ,{"EmitAttributeChanged", Mesh_EmitAttributeChanged_String_AttributeChange__Type, 2}
    ,{"ComponentChanged", Mesh_ComponentChanged_AttributeChange__Type, 1}
    ,{"ParentEntity", Mesh_ParentEntity, 0}
    ,{"SetTemporary", Mesh_SetTemporary_bool, 1}
    ,{"IsTemporary", Mesh_IsTemporary, 0}
    ,{"ViewEnabled", Mesh_ViewEnabled, 0}
    ,{"AttributeNames", Mesh_AttributeNames, 0}
    ,{"AttributeIds", Mesh_AttributeIds, 0}
    ,{"ShouldBeSerialized", Mesh_ShouldBeSerialized_bool_bool, 2}
    ,{nullptr, nullptr, 0}
};

static const duk_function_list_entry Mesh_StaticFunctions[] = {
    {"EnsureTypeNameWithoutPrefix", Mesh_EnsureTypeNameWithoutPrefix_Static_String, 1}
    ,{nullptr, nullptr, 0}
};

void Expose_Mesh(duk_context* ctx)
{
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, Mesh_StaticFunctions);
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, Mesh_Functions);
    DefineProperty(ctx, "MeshAboutToBeDestroyed", Mesh_Get_MeshAboutToBeDestroyed, nullptr);
    DefineProperty(ctx, "MeshChanged", Mesh_Get_MeshChanged, nullptr);
    DefineProperty(ctx, "MaterialChanged", Mesh_Get_MaterialChanged, nullptr);
    DefineProperty(ctx, "SkeletonChanged", Mesh_Get_SkeletonChanged, nullptr);
    DefineProperty(ctx, "ComponentNameChanged", Mesh_Get_ComponentNameChanged, nullptr);
    DefineProperty(ctx, "ParentEntitySet", Mesh_Get_ParentEntitySet, nullptr);
    DefineProperty(ctx, "ParentEntityAboutToBeDetached", Mesh_Get_ParentEntityAboutToBeDetached, nullptr);
    DefineProperty(ctx, "typeName", Mesh_TypeName, nullptr);
    DefineProperty(ctx, "typeId", Mesh_TypeId, nullptr);
    DefineProperty(ctx, "name", Mesh_Name, Mesh_SetName_String);
    DefineProperty(ctx, "replicated", Mesh_IsReplicated, Mesh_SetReplicated_bool);
    DefineProperty(ctx, "local", Mesh_IsLocal, nullptr);
    DefineProperty(ctx, "unacked", Mesh_IsUnacked, nullptr);
    DefineProperty(ctx, "updateMode", Mesh_UpdateMode, Mesh_SetUpdateMode_AttributeChange__Type);
    DefineProperty(ctx, "id", Mesh_Id, nullptr);
    DefineProperty(ctx, "temporary", Mesh_IsTemporary, Mesh_SetTemporary_bool);
    DefineProperty(ctx, "viewEnabled", Mesh_ViewEnabled, nullptr);
    duk_put_prop_string(ctx, -2, "prototype");
    duk_put_global_string(ctx, Mesh_ID);
}

}
