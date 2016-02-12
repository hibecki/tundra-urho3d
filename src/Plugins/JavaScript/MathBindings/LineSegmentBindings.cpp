// For conditions of distribution and use, see copyright notice in LICENSE
// This file has been autogenerated with BindingsGenerator

#include "StableHeaders.h"
#include "CoreTypes.h"
#include "BindingsHelpers.h"
#include "Geometry/LineSegment.h"
#include "Geometry/Ray.h"
#include "Geometry/Line.h"
#include "Math/float3x3.h"
#include "Math/float3x4.h"
#include "Math/float4x4.h"
#include "Math/Quat.h"
#include "Geometry/Plane.h"
#include "Geometry/Sphere.h"
#include "Geometry/Capsule.h"
#include "Geometry/AABB.h"
#include "Geometry/OBB.h"
#include "Geometry/Frustum.h"
#include "Geometry/Circle.h"

using namespace std;

namespace JSBindings
{

extern const char* Ray_Id;
extern const char* Line_Id;
extern const char* float3x3_Id;
extern const char* float3x4_Id;
extern const char* float4x4_Id;
extern const char* Quat_Id;
extern const char* Plane_Id;
extern const char* Sphere_Id;
extern const char* Capsule_Id;
extern const char* AABB_Id;
extern const char* OBB_Id;
extern const char* Frustum_Id;
extern const char* Circle_Id;

duk_ret_t Ray_Finalizer(duk_context* ctx);
duk_ret_t Line_Finalizer(duk_context* ctx);
duk_ret_t float3x3_Finalizer(duk_context* ctx);
duk_ret_t float3x4_Finalizer(duk_context* ctx);
duk_ret_t float4x4_Finalizer(duk_context* ctx);
duk_ret_t Quat_Finalizer(duk_context* ctx);
duk_ret_t Plane_Finalizer(duk_context* ctx);
duk_ret_t Sphere_Finalizer(duk_context* ctx);
duk_ret_t Capsule_Finalizer(duk_context* ctx);
duk_ret_t AABB_Finalizer(duk_context* ctx);
duk_ret_t OBB_Finalizer(duk_context* ctx);
duk_ret_t Frustum_Finalizer(duk_context* ctx);
duk_ret_t Circle_Finalizer(duk_context* ctx);

const char* LineSegment_Id = "LineSegment";

duk_ret_t LineSegment_Finalizer(duk_context* ctx)
{
    LineSegment* obj = GetValueObject<LineSegment>(ctx, 0, LineSegment_Id);
    if (obj)
    {
        delete obj;
        SetValueObject(ctx, 0, 0, LineSegment_Id);
    }
    return 0;
}

static duk_ret_t LineSegment_Ctor(duk_context* ctx)
{
    LineSegment* newObj = new LineSegment();
    PushConstructorResult<LineSegment>(ctx, newObj, LineSegment_Id, LineSegment_Finalizer);
    return 0;
}

static duk_ret_t LineSegment_Ctor_Ray_float(duk_context* ctx)
{
    Ray* ray = GetCheckedValueObject<Ray>(ctx, 0, Ray_Id);
    float d = (float)duk_require_number(ctx, 1);
    LineSegment* newObj = new LineSegment(*ray, d);
    PushConstructorResult<LineSegment>(ctx, newObj, LineSegment_Id, LineSegment_Finalizer);
    return 0;
}

static duk_ret_t LineSegment_Ctor_Line_float(duk_context* ctx)
{
    Line* line = GetCheckedValueObject<Line>(ctx, 0, Line_Id);
    float d = (float)duk_require_number(ctx, 1);
    LineSegment* newObj = new LineSegment(*line, d);
    PushConstructorResult<LineSegment>(ctx, newObj, LineSegment_Id, LineSegment_Finalizer);
    return 0;
}

static duk_ret_t LineSegment_Reverse(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    thisObj->Reverse();
    return 0;
}

static duk_ret_t LineSegment_Transform_float3x3(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    float3x3* transform = GetCheckedValueObject<float3x3>(ctx, 0, float3x3_Id);
    thisObj->Transform(*transform);
    return 0;
}

static duk_ret_t LineSegment_Transform_float3x4(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    float3x4* transform = GetCheckedValueObject<float3x4>(ctx, 0, float3x4_Id);
    thisObj->Transform(*transform);
    return 0;
}

static duk_ret_t LineSegment_Transform_float4x4(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    float4x4* transform = GetCheckedValueObject<float4x4>(ctx, 0, float4x4_Id);
    thisObj->Transform(*transform);
    return 0;
}

static duk_ret_t LineSegment_Transform_Quat(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    Quat* transform = GetCheckedValueObject<Quat>(ctx, 0, Quat_Id);
    thisObj->Transform(*transform);
    return 0;
}

static duk_ret_t LineSegment_Length(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    float ret = thisObj->Length();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_LengthSq(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    float ret = thisObj->LengthSq();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_IsFinite(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    bool ret = thisObj->IsFinite();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_Equals_LineSegment_float(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    LineSegment* rhs = GetCheckedValueObject<LineSegment>(ctx, 0, LineSegment_Id);
    float distanceThreshold = (float)duk_require_number(ctx, 1);
    bool ret = thisObj->Equals(*rhs, distanceThreshold);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_BitEquals_LineSegment(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    LineSegment* other = GetCheckedValueObject<LineSegment>(ctx, 0, LineSegment_Id);
    bool ret = thisObj->BitEquals(*other);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_Contains_LineSegment_float(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    LineSegment* lineSegment = GetCheckedValueObject<LineSegment>(ctx, 0, LineSegment_Id);
    float distanceThreshold = (float)duk_require_number(ctx, 1);
    bool ret = thisObj->Contains(*lineSegment, distanceThreshold);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_Distance_Ray(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    Ray* other = GetCheckedValueObject<Ray>(ctx, 0, Ray_Id);
    float ret = thisObj->Distance(*other);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_Distance_Ray_float(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    Ray* other = GetCheckedValueObject<Ray>(ctx, 0, Ray_Id);
    float d = (float)duk_require_number(ctx, 1);
    float ret = thisObj->Distance(*other, d);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_Distance_Ray_float_float(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    Ray* other = GetCheckedValueObject<Ray>(ctx, 0, Ray_Id);
    float d = (float)duk_require_number(ctx, 1);
    float d2 = (float)duk_require_number(ctx, 2);
    float ret = thisObj->Distance(*other, d, d2);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_Distance_Line(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    Line* other = GetCheckedValueObject<Line>(ctx, 0, Line_Id);
    float ret = thisObj->Distance(*other);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_Distance_Line_float(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    Line* other = GetCheckedValueObject<Line>(ctx, 0, Line_Id);
    float d = (float)duk_require_number(ctx, 1);
    float ret = thisObj->Distance(*other, d);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_Distance_Line_float_float(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    Line* other = GetCheckedValueObject<Line>(ctx, 0, Line_Id);
    float d = (float)duk_require_number(ctx, 1);
    float d2 = (float)duk_require_number(ctx, 2);
    float ret = thisObj->Distance(*other, d, d2);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_Distance_LineSegment(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    LineSegment* other = GetCheckedValueObject<LineSegment>(ctx, 0, LineSegment_Id);
    float ret = thisObj->Distance(*other);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_Distance_LineSegment_float(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    LineSegment* other = GetCheckedValueObject<LineSegment>(ctx, 0, LineSegment_Id);
    float d = (float)duk_require_number(ctx, 1);
    float ret = thisObj->Distance(*other, d);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_Distance_LineSegment_float_float(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    LineSegment* other = GetCheckedValueObject<LineSegment>(ctx, 0, LineSegment_Id);
    float d = (float)duk_require_number(ctx, 1);
    float d2 = (float)duk_require_number(ctx, 2);
    float ret = thisObj->Distance(*other, d, d2);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_Distance_Plane(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    Plane* other = GetCheckedValueObject<Plane>(ctx, 0, Plane_Id);
    float ret = thisObj->Distance(*other);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_Distance_Sphere(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    Sphere* other = GetCheckedValueObject<Sphere>(ctx, 0, Sphere_Id);
    float ret = thisObj->Distance(*other);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_Distance_Capsule(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    Capsule* other = GetCheckedValueObject<Capsule>(ctx, 0, Capsule_Id);
    float ret = thisObj->Distance(*other);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_DistanceSq_LineSegment(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    LineSegment* other = GetCheckedValueObject<LineSegment>(ctx, 0, LineSegment_Id);
    float ret = thisObj->DistanceSq(*other);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_Intersects_Plane(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    Plane* plane = GetCheckedValueObject<Plane>(ctx, 0, Plane_Id);
    bool ret = thisObj->Intersects(*plane);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_Intersects_AABB_float_float(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    AABB* aabb = GetCheckedValueObject<AABB>(ctx, 0, AABB_Id);
    float dNear = (float)duk_require_number(ctx, 1);
    float dFar = (float)duk_require_number(ctx, 2);
    bool ret = thisObj->Intersects(*aabb, dNear, dFar);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_Intersects_AABB(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    AABB* aabb = GetCheckedValueObject<AABB>(ctx, 0, AABB_Id);
    bool ret = thisObj->Intersects(*aabb);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_Intersects_OBB_float_float(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    OBB* obb = GetCheckedValueObject<OBB>(ctx, 0, OBB_Id);
    float dNear = (float)duk_require_number(ctx, 1);
    float dFar = (float)duk_require_number(ctx, 2);
    bool ret = thisObj->Intersects(*obb, dNear, dFar);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_Intersects_OBB(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    OBB* obb = GetCheckedValueObject<OBB>(ctx, 0, OBB_Id);
    bool ret = thisObj->Intersects(*obb);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_Intersects_Capsule(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    Capsule* capsule = GetCheckedValueObject<Capsule>(ctx, 0, Capsule_Id);
    bool ret = thisObj->Intersects(*capsule);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_Intersects_Frustum(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    Frustum* frustum = GetCheckedValueObject<Frustum>(ctx, 0, Frustum_Id);
    bool ret = thisObj->Intersects(*frustum);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_Intersects_LineSegment_float(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    LineSegment* lineSegment = GetCheckedValueObject<LineSegment>(ctx, 0, LineSegment_Id);
    float epsilon = (float)duk_require_number(ctx, 1);
    bool ret = thisObj->Intersects(*lineSegment, epsilon);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_IntersectsDisc_Circle(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    Circle* disc = GetCheckedValueObject<Circle>(ctx, 0, Circle_Id);
    bool ret = thisObj->IntersectsDisc(*disc);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t LineSegment_ToRay(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    Ray ret = thisObj->ToRay();
    PushValueObjectCopy<Ray>(ctx, ret, Ray_Id, Ray_Finalizer);
    return 1;
}

static duk_ret_t LineSegment_ToLine(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    Line ret = thisObj->ToLine();
    PushValueObjectCopy<Line>(ctx, ret, Line_Id, Line_Finalizer);
    return 1;
}

static duk_ret_t LineSegment_ToString(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    std::string ret = thisObj->ToString();
    duk_push_string(ctx, ret.c_str());
    return 1;
}

static duk_ret_t LineSegment_SerializeToString(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    std::string ret = thisObj->SerializeToString();
    duk_push_string(ctx, ret.c_str());
    return 1;
}

static duk_ret_t LineSegment_SerializeToCodeString(duk_context* ctx)
{
    LineSegment* thisObj = GetThisValueObject<LineSegment>(ctx, LineSegment_Id);
    std::string ret = thisObj->SerializeToCodeString();
    duk_push_string(ctx, ret.c_str());
    return 1;
}

static duk_ret_t LineSegment_Ctor_Selector(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    if (numArgs == 0)
        return LineSegment_Ctor(ctx);
    if (numArgs == 2 && GetValueObject<Ray>(ctx, 0, Ray_Id) && duk_is_number(ctx, 1))
        return LineSegment_Ctor_Ray_float(ctx);
    if (numArgs == 2 && GetValueObject<Line>(ctx, 0, Line_Id) && duk_is_number(ctx, 1))
        return LineSegment_Ctor_Line_float(ctx);
    duk_error(ctx, DUK_ERR_ERROR, "Could not select function overload");
}

static duk_ret_t LineSegment_Transform_Selector(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    if (numArgs == 1 && GetValueObject<float3x3>(ctx, 0, float3x3_Id))
        return LineSegment_Transform_float3x3(ctx);
    if (numArgs == 1 && GetValueObject<float3x4>(ctx, 0, float3x4_Id))
        return LineSegment_Transform_float3x4(ctx);
    if (numArgs == 1 && GetValueObject<float4x4>(ctx, 0, float4x4_Id))
        return LineSegment_Transform_float4x4(ctx);
    if (numArgs == 1 && GetValueObject<Quat>(ctx, 0, Quat_Id))
        return LineSegment_Transform_Quat(ctx);
    duk_error(ctx, DUK_ERR_ERROR, "Could not select function overload");
}

static duk_ret_t LineSegment_Distance_Selector(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    if (numArgs == 1 && GetValueObject<Ray>(ctx, 0, Ray_Id))
        return LineSegment_Distance_Ray(ctx);
    if (numArgs == 2 && GetValueObject<Ray>(ctx, 0, Ray_Id) && duk_is_number(ctx, 1))
        return LineSegment_Distance_Ray_float(ctx);
    if (numArgs == 3 && GetValueObject<Ray>(ctx, 0, Ray_Id) && duk_is_number(ctx, 1) && duk_is_number(ctx, 2))
        return LineSegment_Distance_Ray_float_float(ctx);
    if (numArgs == 1 && GetValueObject<Line>(ctx, 0, Line_Id))
        return LineSegment_Distance_Line(ctx);
    if (numArgs == 2 && GetValueObject<Line>(ctx, 0, Line_Id) && duk_is_number(ctx, 1))
        return LineSegment_Distance_Line_float(ctx);
    if (numArgs == 3 && GetValueObject<Line>(ctx, 0, Line_Id) && duk_is_number(ctx, 1) && duk_is_number(ctx, 2))
        return LineSegment_Distance_Line_float_float(ctx);
    if (numArgs == 1 && GetValueObject<LineSegment>(ctx, 0, LineSegment_Id))
        return LineSegment_Distance_LineSegment(ctx);
    if (numArgs == 2 && GetValueObject<LineSegment>(ctx, 0, LineSegment_Id) && duk_is_number(ctx, 1))
        return LineSegment_Distance_LineSegment_float(ctx);
    if (numArgs == 3 && GetValueObject<LineSegment>(ctx, 0, LineSegment_Id) && duk_is_number(ctx, 1) && duk_is_number(ctx, 2))
        return LineSegment_Distance_LineSegment_float_float(ctx);
    if (numArgs == 1 && GetValueObject<Plane>(ctx, 0, Plane_Id))
        return LineSegment_Distance_Plane(ctx);
    if (numArgs == 1 && GetValueObject<Sphere>(ctx, 0, Sphere_Id))
        return LineSegment_Distance_Sphere(ctx);
    if (numArgs == 1 && GetValueObject<Capsule>(ctx, 0, Capsule_Id))
        return LineSegment_Distance_Capsule(ctx);
    duk_error(ctx, DUK_ERR_ERROR, "Could not select function overload");
}

static duk_ret_t LineSegment_Intersects_Selector(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    if (numArgs == 1 && GetValueObject<Plane>(ctx, 0, Plane_Id))
        return LineSegment_Intersects_Plane(ctx);
    if (numArgs == 3 && GetValueObject<AABB>(ctx, 0, AABB_Id) && duk_is_number(ctx, 1) && duk_is_number(ctx, 2))
        return LineSegment_Intersects_AABB_float_float(ctx);
    if (numArgs == 1 && GetValueObject<AABB>(ctx, 0, AABB_Id))
        return LineSegment_Intersects_AABB(ctx);
    if (numArgs == 3 && GetValueObject<OBB>(ctx, 0, OBB_Id) && duk_is_number(ctx, 1) && duk_is_number(ctx, 2))
        return LineSegment_Intersects_OBB_float_float(ctx);
    if (numArgs == 1 && GetValueObject<OBB>(ctx, 0, OBB_Id))
        return LineSegment_Intersects_OBB(ctx);
    if (numArgs == 1 && GetValueObject<Capsule>(ctx, 0, Capsule_Id))
        return LineSegment_Intersects_Capsule(ctx);
    if (numArgs == 1 && GetValueObject<Frustum>(ctx, 0, Frustum_Id))
        return LineSegment_Intersects_Frustum(ctx);
    if (numArgs == 2 && GetValueObject<LineSegment>(ctx, 0, LineSegment_Id) && duk_is_number(ctx, 1))
        return LineSegment_Intersects_LineSegment_float(ctx);
    duk_error(ctx, DUK_ERR_ERROR, "Could not select function overload");
}

static duk_ret_t LineSegment_FromString_Static_string(duk_context* ctx)
{
    string str(duk_require_string(ctx, 0));
    LineSegment ret = LineSegment::FromString(str);
    PushValueObjectCopy<LineSegment>(ctx, ret, LineSegment_Id, LineSegment_Finalizer);
    return 1;
}

static const duk_function_list_entry LineSegment_Functions[] = {
    {"Reverse", LineSegment_Reverse, 0}
    ,{"Transform", LineSegment_Transform_Selector, DUK_VARARGS}
    ,{"Length", LineSegment_Length, 0}
    ,{"LengthSq", LineSegment_LengthSq, 0}
    ,{"IsFinite", LineSegment_IsFinite, 0}
    ,{"Equals", LineSegment_Equals_LineSegment_float, 2}
    ,{"BitEquals", LineSegment_BitEquals_LineSegment, 1}
    ,{"Contains", LineSegment_Contains_LineSegment_float, 2}
    ,{"Distance", LineSegment_Distance_Selector, DUK_VARARGS}
    ,{"DistanceSq", LineSegment_DistanceSq_LineSegment, 1}
    ,{"Intersects", LineSegment_Intersects_Selector, DUK_VARARGS}
    ,{"IntersectsDisc", LineSegment_IntersectsDisc_Circle, 1}
    ,{"ToRay", LineSegment_ToRay, 0}
    ,{"ToLine", LineSegment_ToLine, 0}
    ,{"ToString", LineSegment_ToString, 0}
    ,{"SerializeToString", LineSegment_SerializeToString, 0}
    ,{"SerializeToCodeString", LineSegment_SerializeToCodeString, 0}
    ,{nullptr, nullptr, 0}
};

static const duk_function_list_entry LineSegment_StaticFunctions[] = {
    {"FromString", LineSegment_FromString_Static_string, 1}
    ,{nullptr, nullptr, 0}
};

void Expose_LineSegment(duk_context* ctx)
{
    duk_push_c_function(ctx, LineSegment_Ctor_Selector, DUK_VARARGS);
    duk_put_function_list(ctx, -1, LineSegment_StaticFunctions);
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, LineSegment_Functions);
    duk_put_prop_string(ctx, -2, "prototype");
    duk_put_global_string(ctx, LineSegment_Id);
}

}
