// For conditions of distribution and use, see copyright notice in LICENSE
// This file has been autogenerated with BindingsGenerator

#include "StableHeaders.h"
#include "CoreTypes.h"
#include "JavaScriptInstance.h"
#include "LoggingFunctions.h"
#include "Framework/FrameAPI.h"

#ifdef _MSC_VER
#pragma warning(disable: 4800)
#endif

#include "Framework/Framework.h"


using namespace Tundra;
using namespace std;

namespace JSBindings
{



static const char* FrameAPI_ID = "FrameAPI";

const char* SignalWrapper_FrameAPI_Updated_ID = "SignalWrapper_FrameAPI_Updated";

class SignalWrapper_FrameAPI_Updated
{
public:
    SignalWrapper_FrameAPI_Updated(Object* owner, Signal1< float >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal1< float >* signal_;
};

class SignalReceiver_FrameAPI_Updated : public SignalReceiver
{
public:
    void OnSignal(float param0)
    {
        duk_context* ctx = ctx_;
        duk_push_global_object(ctx);
        duk_get_prop_string(ctx, -1, "_OnSignal");
        duk_remove(ctx, -2);
        duk_push_number(ctx, (size_t)key_);
        duk_push_array(ctx);
        duk_push_number(ctx, param0);
        duk_put_prop_index(ctx, -2, 0);
        bool success = duk_pcall(ctx, 2) == 0;
        if (!success) LogError("[JavaScript] OnSignal: " + GetErrorString(ctx));
        duk_pop(ctx);
    }
};

static duk_ret_t SignalWrapper_FrameAPI_Updated_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_FrameAPI_Updated>(ctx, SignalWrapper_FrameAPI_Updated_ID);
    return 0;
}

static duk_ret_t SignalWrapper_FrameAPI_Updated_Connect(duk_context* ctx)
{
    SignalWrapper_FrameAPI_Updated* wrapper = GetThisValueObject<SignalWrapper_FrameAPI_Updated>(ctx, SignalWrapper_FrameAPI_Updated_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_FrameAPI_Updated* receiver = new SignalReceiver_FrameAPI_Updated();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_FrameAPI_Updated::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_FrameAPI_Updated_Disconnect(duk_context* ctx)
{
    SignalWrapper_FrameAPI_Updated* wrapper = GetThisValueObject<SignalWrapper_FrameAPI_Updated>(ctx, SignalWrapper_FrameAPI_Updated_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_FrameAPI_Updated_Emit(duk_context* ctx)
{
    SignalWrapper_FrameAPI_Updated* wrapper = GetThisValueObject<SignalWrapper_FrameAPI_Updated>(ctx, SignalWrapper_FrameAPI_Updated_ID);
    if (!wrapper->owner_) return 0;
    float param0 = (float)duk_require_number(ctx, 0);
    wrapper->signal_->Emit(param0);
    return 0;
}

static duk_ret_t FrameAPI_Get_Updated(duk_context* ctx)
{
    FrameAPI* thisObj = GetThisWeakObject<FrameAPI>(ctx);
    SignalWrapper_FrameAPI_Updated* wrapper = new SignalWrapper_FrameAPI_Updated(thisObj, &thisObj->Updated);
    PushValueObject(ctx, wrapper, SignalWrapper_FrameAPI_Updated_ID, SignalWrapper_FrameAPI_Updated_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_FrameAPI_Updated_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_FrameAPI_Updated_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_FrameAPI_Updated_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_FrameAPI_Updated_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_FrameAPI_Updated_Emit, 1);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

const char* SignalWrapper_FrameAPI_PostFrameUpdate_ID = "SignalWrapper_FrameAPI_PostFrameUpdate";

class SignalWrapper_FrameAPI_PostFrameUpdate
{
public:
    SignalWrapper_FrameAPI_PostFrameUpdate(Object* owner, Signal1< float >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal1< float >* signal_;
};

class SignalReceiver_FrameAPI_PostFrameUpdate : public SignalReceiver
{
public:
    void OnSignal(float param0)
    {
        duk_context* ctx = ctx_;
        duk_push_global_object(ctx);
        duk_get_prop_string(ctx, -1, "_OnSignal");
        duk_remove(ctx, -2);
        duk_push_number(ctx, (size_t)key_);
        duk_push_array(ctx);
        duk_push_number(ctx, param0);
        duk_put_prop_index(ctx, -2, 0);
        bool success = duk_pcall(ctx, 2) == 0;
        if (!success) LogError("[JavaScript] OnSignal: " + GetErrorString(ctx));
        duk_pop(ctx);
    }
};

static duk_ret_t SignalWrapper_FrameAPI_PostFrameUpdate_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_FrameAPI_PostFrameUpdate>(ctx, SignalWrapper_FrameAPI_PostFrameUpdate_ID);
    return 0;
}

static duk_ret_t SignalWrapper_FrameAPI_PostFrameUpdate_Connect(duk_context* ctx)
{
    SignalWrapper_FrameAPI_PostFrameUpdate* wrapper = GetThisValueObject<SignalWrapper_FrameAPI_PostFrameUpdate>(ctx, SignalWrapper_FrameAPI_PostFrameUpdate_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_FrameAPI_PostFrameUpdate* receiver = new SignalReceiver_FrameAPI_PostFrameUpdate();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_FrameAPI_PostFrameUpdate::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_FrameAPI_PostFrameUpdate_Disconnect(duk_context* ctx)
{
    SignalWrapper_FrameAPI_PostFrameUpdate* wrapper = GetThisValueObject<SignalWrapper_FrameAPI_PostFrameUpdate>(ctx, SignalWrapper_FrameAPI_PostFrameUpdate_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_FrameAPI_PostFrameUpdate_Emit(duk_context* ctx)
{
    SignalWrapper_FrameAPI_PostFrameUpdate* wrapper = GetThisValueObject<SignalWrapper_FrameAPI_PostFrameUpdate>(ctx, SignalWrapper_FrameAPI_PostFrameUpdate_ID);
    if (!wrapper->owner_) return 0;
    float param0 = (float)duk_require_number(ctx, 0);
    wrapper->signal_->Emit(param0);
    return 0;
}

static duk_ret_t FrameAPI_Get_PostFrameUpdate(duk_context* ctx)
{
    FrameAPI* thisObj = GetThisWeakObject<FrameAPI>(ctx);
    SignalWrapper_FrameAPI_PostFrameUpdate* wrapper = new SignalWrapper_FrameAPI_PostFrameUpdate(thisObj, &thisObj->PostFrameUpdate);
    PushValueObject(ctx, wrapper, SignalWrapper_FrameAPI_PostFrameUpdate_ID, SignalWrapper_FrameAPI_PostFrameUpdate_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_FrameAPI_PostFrameUpdate_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_FrameAPI_PostFrameUpdate_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_FrameAPI_PostFrameUpdate_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_FrameAPI_PostFrameUpdate_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_FrameAPI_PostFrameUpdate_Emit, 1);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

void Expose_FrameAPI(duk_context* ctx)
{
    duk_push_object(ctx);
    duk_push_object(ctx);
    DefineProperty(ctx, "Updated", FrameAPI_Get_Updated, nullptr);
    DefineProperty(ctx, "PostFrameUpdate", FrameAPI_Get_PostFrameUpdate, nullptr);
    duk_put_prop_string(ctx, -2, "prototype");
    duk_put_global_string(ctx, FrameAPI_ID);
}

}
