// For conditions of distribution and use, see copyright notice in LICENSE
// This file has been autogenerated with BindingsGenerator

#include "StableHeaders.h"
#include "CoreTypes.h"
#include "BindingsHelpers.h"
#include "Algorithm/Random/LCG.h"

using namespace std;

namespace JSBindings
{



const char* LCG_Id = "LCG";

duk_ret_t LCG_Finalizer(duk_context* ctx)
{
    LCG* obj = GetValueObject<LCG>(ctx, 0, LCG_Id);
    if (obj)
    {
        delete obj;
        SetValueObject(ctx, 0, 0, LCG_Id);
    }
    return 0;
}

static duk_ret_t LCG_Ctor(duk_context* ctx)
{
    LCG* newObj = new LCG();
    PushConstructorResult<LCG>(ctx, newObj, LCG_Id, LCG_Finalizer);
    return 0;
}

static duk_ret_t LCG_Int_int_int(duk_context* ctx)
{
    LCG* thisObj = GetThisValueObject<LCG>(ctx, LCG_Id);
    int a = (int)duk_require_number(ctx, 0);
    int b = (int)duk_require_number(ctx, 1);
    int ret = thisObj->Int(a, b);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t LCG_Float(duk_context* ctx)
{
    LCG* thisObj = GetThisValueObject<LCG>(ctx, LCG_Id);
    float ret = thisObj->Float();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t LCG_Float01Incl(duk_context* ctx)
{
    LCG* thisObj = GetThisValueObject<LCG>(ctx, LCG_Id);
    float ret = thisObj->Float01Incl();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t LCG_FloatNeg1_1(duk_context* ctx)
{
    LCG* thisObj = GetThisValueObject<LCG>(ctx, LCG_Id);
    float ret = thisObj->FloatNeg1_1();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t LCG_Float_float_float(duk_context* ctx)
{
    LCG* thisObj = GetThisValueObject<LCG>(ctx, LCG_Id);
    float a = (float)duk_require_number(ctx, 0);
    float b = (float)duk_require_number(ctx, 1);
    float ret = thisObj->Float(a, b);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t LCG_FloatIncl_float_float(duk_context* ctx)
{
    LCG* thisObj = GetThisValueObject<LCG>(ctx, LCG_Id);
    float a = (float)duk_require_number(ctx, 0);
    float b = (float)duk_require_number(ctx, 1);
    float ret = thisObj->FloatIncl(a, b);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t LCG_Float_Selector(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    if (numArgs == 0)
        return LCG_Float(ctx);
    if (numArgs == 2 && duk_is_number(ctx, 0) && duk_is_number(ctx, 1))
        return LCG_Float_float_float(ctx);
    duk_error(ctx, DUK_ERR_ERROR, "Could not select function overload");
}

static const duk_function_list_entry LCG_Functions[] = {
    {"Int", LCG_Int_int_int, 2}
    ,{"Float", LCG_Float_Selector, DUK_VARARGS}
    ,{"Float01Incl", LCG_Float01Incl, 0}
    ,{"FloatNeg1_1", LCG_FloatNeg1_1, 0}
    ,{"FloatIncl", LCG_FloatIncl_float_float, 2}
    ,{nullptr, nullptr, 0}
};

void Expose_LCG(duk_context* ctx)
{
    duk_push_c_function(ctx, LCG_Ctor, DUK_VARARGS);
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, LCG_Functions);
    duk_put_prop_string(ctx, -2, "prototype");
    duk_put_global_string(ctx, LCG_Id);
}

}
