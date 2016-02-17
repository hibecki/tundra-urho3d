// For conditions of distribution and use, see copyright notice in LICENSE
// This file has been autogenerated with BindingsGenerator

#include "StableHeaders.h"
#include "CoreTypes.h"
#include "BindingsHelpers.h"
#include "Scene/IComponent.h"
#include "Scene/Entity.h"
#include "Scene/Scene.h"


using namespace Tundra;
using namespace std;

namespace JSBindings
{



const char* IComponent_ID = "IComponent";

static duk_ret_t IComponent_TypeName(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    const String & ret = thisObj->TypeName();
    duk_push_string(ctx, ret.CString());
    return 1;
}

static duk_ret_t IComponent_TypeId(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    u32 ret = thisObj->TypeId();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t IComponent_Name(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    const String & ret = thisObj->Name();
    duk_push_string(ctx, ret.CString());
    return 1;
}

static duk_ret_t IComponent_SetName_String(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    String name(duk_require_string(ctx, 0));
    thisObj->SetName(name);
    return 0;
}

static duk_ret_t IComponent_SetParentEntity_Entity(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    Entity* entity = GetWeakObject<Entity>(ctx, 0);
    thisObj->SetParentEntity(entity);
    return 0;
}

static duk_ret_t IComponent_SetReplicated_bool(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    bool enable = duk_require_boolean(ctx, 0);
    thisObj->SetReplicated(enable);
    return 0;
}

static duk_ret_t IComponent_IsReplicated(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    bool ret = thisObj->IsReplicated();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t IComponent_IsLocal(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    bool ret = thisObj->IsLocal();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t IComponent_IsUnacked(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    bool ret = thisObj->IsUnacked();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t IComponent_SetUpdateMode_AttributeChange__Type(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    AttributeChange::Type defaultmode = (AttributeChange::Type)(int)duk_require_number(ctx, 0);
    thisObj->SetUpdateMode(defaultmode);
    return 0;
}

static duk_ret_t IComponent_UpdateMode(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    AttributeChange::Type ret = thisObj->UpdateMode();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t IComponent_Id(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    component_id_t ret = thisObj->Id();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t IComponent_SupportsDynamicAttributes(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    bool ret = thisObj->SupportsDynamicAttributes();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t IComponent_NumAttributes(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    int ret = thisObj->NumAttributes();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t IComponent_NumStaticAttributes(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    int ret = thisObj->NumStaticAttributes();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t IComponent_EmitAttributeChanged_String_AttributeChange__Type(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    String attributeName(duk_require_string(ctx, 0));
    AttributeChange::Type change = (AttributeChange::Type)(int)duk_require_number(ctx, 1);
    thisObj->EmitAttributeChanged(attributeName, change);
    return 0;
}

static duk_ret_t IComponent_ComponentChanged_AttributeChange__Type(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    AttributeChange::Type change = (AttributeChange::Type)(int)duk_require_number(ctx, 0);
    thisObj->ComponentChanged(change);
    return 0;
}

static duk_ret_t IComponent_ParentEntity(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    Entity * ret = thisObj->ParentEntity();
    PushWeakObject(ctx, ret);
    return 1;
}

static duk_ret_t IComponent_ParentScene(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    Scene * ret = thisObj->ParentScene();
    PushWeakObject(ctx, ret);
    return 1;
}

static duk_ret_t IComponent_SetTemporary_bool(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    bool enable = duk_require_boolean(ctx, 0);
    thisObj->SetTemporary(enable);
    return 0;
}

static duk_ret_t IComponent_IsTemporary(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    bool ret = thisObj->IsTemporary();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t IComponent_ViewEnabled(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    bool ret = thisObj->ViewEnabled();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t IComponent_ShouldBeSerialized_bool_bool(duk_context* ctx)
{
    IComponent* thisObj = GetThisWeakObject<IComponent>(ctx);
    bool serializeTemporary = duk_require_boolean(ctx, 0);
    bool serializeLocal = duk_require_boolean(ctx, 1);
    bool ret = thisObj->ShouldBeSerialized(serializeTemporary, serializeLocal);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t IComponent_EnsureTypeNameWithoutPrefix_Static_String(duk_context* ctx)
{
    String tn(duk_require_string(ctx, 0));
    String ret = IComponent::EnsureTypeNameWithoutPrefix(tn);
    duk_push_string(ctx, ret.CString());
    return 1;
}

static const duk_function_list_entry IComponent_Functions[] = {
    {"TypeName", IComponent_TypeName, 0}
    ,{"TypeId", IComponent_TypeId, 0}
    ,{"Name", IComponent_Name, 0}
    ,{"SetName", IComponent_SetName_String, 1}
    ,{"SetParentEntity", IComponent_SetParentEntity_Entity, 1}
    ,{"SetReplicated", IComponent_SetReplicated_bool, 1}
    ,{"IsReplicated", IComponent_IsReplicated, 0}
    ,{"IsLocal", IComponent_IsLocal, 0}
    ,{"IsUnacked", IComponent_IsUnacked, 0}
    ,{"SetUpdateMode", IComponent_SetUpdateMode_AttributeChange__Type, 1}
    ,{"UpdateMode", IComponent_UpdateMode, 0}
    ,{"Id", IComponent_Id, 0}
    ,{"SupportsDynamicAttributes", IComponent_SupportsDynamicAttributes, 0}
    ,{"NumAttributes", IComponent_NumAttributes, 0}
    ,{"NumStaticAttributes", IComponent_NumStaticAttributes, 0}
    ,{"EmitAttributeChanged", IComponent_EmitAttributeChanged_String_AttributeChange__Type, 2}
    ,{"ComponentChanged", IComponent_ComponentChanged_AttributeChange__Type, 1}
    ,{"ParentEntity", IComponent_ParentEntity, 0}
    ,{"ParentScene", IComponent_ParentScene, 0}
    ,{"SetTemporary", IComponent_SetTemporary_bool, 1}
    ,{"IsTemporary", IComponent_IsTemporary, 0}
    ,{"ViewEnabled", IComponent_ViewEnabled, 0}
    ,{"ShouldBeSerialized", IComponent_ShouldBeSerialized_bool_bool, 2}
    ,{nullptr, nullptr, 0}
};

static const duk_function_list_entry IComponent_StaticFunctions[] = {
    {"EnsureTypeNameWithoutPrefix", IComponent_EnsureTypeNameWithoutPrefix_Static_String, 1}
    ,{nullptr, nullptr, 0}
};

void Expose_IComponent(duk_context* ctx)
{
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, IComponent_StaticFunctions);
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, IComponent_Functions);
    duk_put_prop_string(ctx, -2, "prototype");
    duk_put_global_string(ctx, IComponent_ID);
}

}