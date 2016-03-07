// For conditions of distribution and use, see copyright notice in LICENSE
// This file has been autogenerated with BindingsGenerator

#include "StableHeaders.h"
#include "CoreTypes.h"
#include "JavaScriptInstance.h"
#include "LoggingFunctions.h"
#include "Geometry/OBB.h"

#ifdef _MSC_VER
#pragma warning(disable: 4800)
#endif

#include "Math/float3.h"
#include "Geometry/AABB.h"
#include "Math/float3x3.h"
#include "Math/float3x4.h"
#include "Math/float4x4.h"
#include "Math/Quat.h"
#include "Geometry/Sphere.h"
#include "Geometry/LineSegment.h"
#include "Geometry/Plane.h"
#include "Algorithm/Random/LCG.h"
#include "Geometry/Triangle.h"
#include "Geometry/Frustum.h"
#include "Geometry/Ray.h"
#include "Geometry/Line.h"
#include "Geometry/Capsule.h"

using namespace std;

namespace JSBindings
{

extern const char* float3_ID;
extern const char* AABB_ID;
extern const char* float3x3_ID;
extern const char* float3x4_ID;
extern const char* float4x4_ID;
extern const char* Quat_ID;
extern const char* Sphere_ID;
extern const char* LineSegment_ID;
extern const char* Plane_ID;
extern const char* LCG_ID;
extern const char* Triangle_ID;
extern const char* Frustum_ID;
extern const char* Ray_ID;
extern const char* Line_ID;
extern const char* Capsule_ID;

duk_ret_t float3_Finalizer(duk_context* ctx);
duk_ret_t AABB_Finalizer(duk_context* ctx);
duk_ret_t float3x3_Finalizer(duk_context* ctx);
duk_ret_t float3x4_Finalizer(duk_context* ctx);
duk_ret_t float4x4_Finalizer(duk_context* ctx);
duk_ret_t Quat_Finalizer(duk_context* ctx);
duk_ret_t Sphere_Finalizer(duk_context* ctx);
duk_ret_t LineSegment_Finalizer(duk_context* ctx);
duk_ret_t Plane_Finalizer(duk_context* ctx);
duk_ret_t LCG_Finalizer(duk_context* ctx);
duk_ret_t Triangle_Finalizer(duk_context* ctx);
duk_ret_t Frustum_Finalizer(duk_context* ctx);
duk_ret_t Ray_Finalizer(duk_context* ctx);
duk_ret_t Line_Finalizer(duk_context* ctx);
duk_ret_t Capsule_Finalizer(duk_context* ctx);

const char* OBB_ID = "OBB";

duk_ret_t OBB_Finalizer(duk_context* ctx)
{
    OBB* obj = GetValueObject<OBB>(ctx, 0, OBB_ID);
    if (obj)
    {
        delete obj;
        SetValueObject(ctx, 0, 0, OBB_ID);
    }
    return 0;
}

static duk_ret_t OBB_Set_pos(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3& pos = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    thisObj->pos = pos;
    return 0;
}

static duk_ret_t OBB_Get_pos(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    PushValueObject<float3>(ctx, &thisObj->pos, float3_ID, nullptr, true);
    return 1;
}

static duk_ret_t OBB_Set_r(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3& r = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    thisObj->r = r;
    return 0;
}

static duk_ret_t OBB_Get_r(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    PushValueObject<float3>(ctx, &thisObj->r, float3_ID, nullptr, true);
    return 1;
}

static duk_ret_t OBB_Ctor(duk_context* ctx)
{
    OBB* newObj = new OBB();
    PushConstructorResult<OBB>(ctx, newObj, OBB_ID, OBB_Finalizer);
    return 0;
}

static duk_ret_t OBB_Ctor_float3_float3_float3_float3_float3(duk_context* ctx)
{
    float3& pos = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    float3& r = *GetCheckedValueObject<float3>(ctx, 1, float3_ID);
    float3& axis0 = *GetCheckedValueObject<float3>(ctx, 2, float3_ID);
    float3& axis1 = *GetCheckedValueObject<float3>(ctx, 3, float3_ID);
    float3& axis2 = *GetCheckedValueObject<float3>(ctx, 4, float3_ID);
    OBB* newObj = new OBB(pos, r, axis0, axis1, axis2);
    PushConstructorResult<OBB>(ctx, newObj, OBB_ID, OBB_Finalizer);
    return 0;
}

static duk_ret_t OBB_Ctor_AABB(duk_context* ctx)
{
    AABB& aabb = *GetCheckedValueObject<AABB>(ctx, 0, AABB_ID);
    OBB* newObj = new OBB(aabb);
    PushConstructorResult<OBB>(ctx, newObj, OBB_ID, OBB_Finalizer);
    return 0;
}

static duk_ret_t OBB_SetNegativeInfinity(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    thisObj->SetNegativeInfinity();
    return 0;
}

static duk_ret_t OBB_SetFrom_AABB(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    AABB& aabb = *GetCheckedValueObject<AABB>(ctx, 0, AABB_ID);
    thisObj->SetFrom(aabb);
    return 0;
}

static duk_ret_t OBB_SetFrom_AABB_float3x3(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    AABB& aabb = *GetCheckedValueObject<AABB>(ctx, 0, AABB_ID);
    float3x3& transform = *GetCheckedValueObject<float3x3>(ctx, 1, float3x3_ID);
    thisObj->SetFrom(aabb, transform);
    return 0;
}

static duk_ret_t OBB_SetFrom_AABB_float3x4(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    AABB& aabb = *GetCheckedValueObject<AABB>(ctx, 0, AABB_ID);
    float3x4& transform = *GetCheckedValueObject<float3x4>(ctx, 1, float3x4_ID);
    thisObj->SetFrom(aabb, transform);
    return 0;
}

static duk_ret_t OBB_SetFrom_AABB_float4x4(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    AABB& aabb = *GetCheckedValueObject<AABB>(ctx, 0, AABB_ID);
    float4x4& transform = *GetCheckedValueObject<float4x4>(ctx, 1, float4x4_ID);
    thisObj->SetFrom(aabb, transform);
    return 0;
}

static duk_ret_t OBB_SetFrom_AABB_Quat(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    AABB& aabb = *GetCheckedValueObject<AABB>(ctx, 0, AABB_ID);
    Quat& transform = *GetCheckedValueObject<Quat>(ctx, 1, Quat_ID);
    thisObj->SetFrom(aabb, transform);
    return 0;
}

static duk_ret_t OBB_SetFrom_Sphere(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    Sphere& sphere = *GetCheckedValueObject<Sphere>(ctx, 0, Sphere_ID);
    thisObj->SetFrom(sphere);
    return 0;
}

static duk_ret_t OBB_MinimalEnclosingAABB(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    AABB ret = thisObj->MinimalEnclosingAABB();
    PushValueObjectCopy<AABB>(ctx, ret, AABB_ID, AABB_Finalizer);
    return 1;
}

static duk_ret_t OBB_MinimalEnclosingSphere(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    Sphere ret = thisObj->MinimalEnclosingSphere();
    PushValueObjectCopy<Sphere>(ctx, ret, Sphere_ID, Sphere_Finalizer);
    return 1;
}

static duk_ret_t OBB_MaximalContainedSphere(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    Sphere ret = thisObj->MaximalContainedSphere();
    PushValueObjectCopy<Sphere>(ctx, ret, Sphere_ID, Sphere_Finalizer);
    return 1;
}

static duk_ret_t OBB_Size(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3 ret = thisObj->Size();
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t OBB_HalfSize(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3 ret = thisObj->HalfSize();
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t OBB_Diagonal(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3 ret = thisObj->Diagonal();
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t OBB_HalfDiagonal(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3 ret = thisObj->HalfDiagonal();
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t OBB_WorldToLocal(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3x4 ret = thisObj->WorldToLocal();
    PushValueObjectCopy<float3x4>(ctx, ret, float3x4_ID, float3x4_Finalizer);
    return 1;
}

static duk_ret_t OBB_LocalToWorld(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3x4 ret = thisObj->LocalToWorld();
    PushValueObjectCopy<float3x4>(ctx, ret, float3x4_ID, float3x4_Finalizer);
    return 1;
}

static duk_ret_t OBB_IsFinite(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    bool ret = thisObj->IsFinite();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t OBB_IsDegenerate(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    bool ret = thisObj->IsDegenerate();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t OBB_CenterPoint(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3 ret = thisObj->CenterPoint();
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t OBB_Centroid(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3 ret = thisObj->Centroid();
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t OBB_AnyPointFast(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3 ret = thisObj->AnyPointFast();
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t OBB_Volume(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float ret = thisObj->Volume();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t OBB_SurfaceArea(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float ret = thisObj->SurfaceArea();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t OBB_PointInside_float_float_float(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float x = (float)duk_require_number(ctx, 0);
    float y = (float)duk_require_number(ctx, 1);
    float z = (float)duk_require_number(ctx, 2);
    float3 ret = thisObj->PointInside(x, y, z);
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t OBB_Edge_int(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    int edgeIndex = (int)duk_require_number(ctx, 0);
    LineSegment ret = thisObj->Edge(edgeIndex);
    PushValueObjectCopy<LineSegment>(ctx, ret, LineSegment_ID, LineSegment_Finalizer);
    return 1;
}

static duk_ret_t OBB_CornerPoint_int(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    int cornerIndex = (int)duk_require_number(ctx, 0);
    float3 ret = thisObj->CornerPoint(cornerIndex);
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t OBB_ExtremePoint_float3(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3& direction = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    float3 ret = thisObj->ExtremePoint(direction);
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t OBB_ExtremePoint_float3_float(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3& direction = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    float projectionDistance = (float)duk_require_number(ctx, 1);
    float3 ret = thisObj->ExtremePoint(direction, projectionDistance);
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t OBB_ProjectToAxis_float3_float_float(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3& direction = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    float outMin = (float)duk_require_number(ctx, 1);
    float outMax = (float)duk_require_number(ctx, 2);
    thisObj->ProjectToAxis(direction, outMin, outMax);
    return 0;
}

static duk_ret_t OBB_PointOnEdge_int_float(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    int edgeIndex = (int)duk_require_number(ctx, 0);
    float u = (float)duk_require_number(ctx, 1);
    float3 ret = thisObj->PointOnEdge(edgeIndex, u);
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t OBB_FaceCenterPoint_int(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    int faceIndex = (int)duk_require_number(ctx, 0);
    float3 ret = thisObj->FaceCenterPoint(faceIndex);
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t OBB_FacePoint_int_float_float(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    int faceIndex = (int)duk_require_number(ctx, 0);
    float u = (float)duk_require_number(ctx, 1);
    float v = (float)duk_require_number(ctx, 2);
    float3 ret = thisObj->FacePoint(faceIndex, u, v);
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t OBB_FacePlane_int(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    int faceIndex = (int)duk_require_number(ctx, 0);
    Plane ret = thisObj->FacePlane(faceIndex);
    PushValueObjectCopy<Plane>(ctx, ret, Plane_ID, Plane_Finalizer);
    return 1;
}

static duk_ret_t OBB_RandomPointInside_LCG(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    LCG& rng = *GetCheckedValueObject<LCG>(ctx, 0, LCG_ID);
    float3 ret = thisObj->RandomPointInside(rng);
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t OBB_RandomPointOnSurface_LCG(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    LCG& rng = *GetCheckedValueObject<LCG>(ctx, 0, LCG_ID);
    float3 ret = thisObj->RandomPointOnSurface(rng);
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t OBB_RandomPointOnEdge_LCG(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    LCG& rng = *GetCheckedValueObject<LCG>(ctx, 0, LCG_ID);
    float3 ret = thisObj->RandomPointOnEdge(rng);
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t OBB_RandomCornerPoint_LCG(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    LCG& rng = *GetCheckedValueObject<LCG>(ctx, 0, LCG_ID);
    float3 ret = thisObj->RandomCornerPoint(rng);
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t OBB_Translate_float3(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3& offset = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    thisObj->Translate(offset);
    return 0;
}

static duk_ret_t OBB_Scale_float3_float(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3& centerPoint = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    float scaleFactor = (float)duk_require_number(ctx, 1);
    thisObj->Scale(centerPoint, scaleFactor);
    return 0;
}

static duk_ret_t OBB_Scale_float3_float3(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3& centerPoint = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    float3& scaleFactor = *GetCheckedValueObject<float3>(ctx, 1, float3_ID);
    thisObj->Scale(centerPoint, scaleFactor);
    return 0;
}

static duk_ret_t OBB_Transform_float3x3(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3x3& transform = *GetCheckedValueObject<float3x3>(ctx, 0, float3x3_ID);
    thisObj->Transform(transform);
    return 0;
}

static duk_ret_t OBB_Transform_float3x4(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3x4& transform = *GetCheckedValueObject<float3x4>(ctx, 0, float3x4_ID);
    thisObj->Transform(transform);
    return 0;
}

static duk_ret_t OBB_Transform_float4x4(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float4x4& transform = *GetCheckedValueObject<float4x4>(ctx, 0, float4x4_ID);
    thisObj->Transform(transform);
    return 0;
}

static duk_ret_t OBB_Transform_Quat(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    Quat& transform = *GetCheckedValueObject<Quat>(ctx, 0, Quat_ID);
    thisObj->Transform(transform);
    return 0;
}

static duk_ret_t OBB_ClosestPoint_float3(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3& point = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    float3 ret = thisObj->ClosestPoint(point);
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t OBB_Distance_float3(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3& point = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    float ret = thisObj->Distance(point);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t OBB_Distance_Sphere(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    Sphere& sphere = *GetCheckedValueObject<Sphere>(ctx, 0, Sphere_ID);
    float ret = thisObj->Distance(sphere);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t OBB_Contains_float3(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3& point = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    bool ret = thisObj->Contains(point);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t OBB_Contains_LineSegment(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    LineSegment& lineSegment = *GetCheckedValueObject<LineSegment>(ctx, 0, LineSegment_ID);
    bool ret = thisObj->Contains(lineSegment);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t OBB_Contains_AABB(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    AABB& aabb = *GetCheckedValueObject<AABB>(ctx, 0, AABB_ID);
    bool ret = thisObj->Contains(aabb);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t OBB_Contains_OBB(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    OBB& obb = *GetCheckedValueObject<OBB>(ctx, 0, OBB_ID);
    bool ret = thisObj->Contains(obb);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t OBB_Contains_Triangle(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    Triangle& triangle = *GetCheckedValueObject<Triangle>(ctx, 0, Triangle_ID);
    bool ret = thisObj->Contains(triangle);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t OBB_Contains_Frustum(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    Frustum& frustum = *GetCheckedValueObject<Frustum>(ctx, 0, Frustum_ID);
    bool ret = thisObj->Contains(frustum);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t OBB_Intersects_OBB_float(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    OBB& obb = *GetCheckedValueObject<OBB>(ctx, 0, OBB_ID);
    float epsilon = numArgs > 1 ? (float)duk_require_number(ctx, 1) : 1e-3f;
    bool ret = thisObj->Intersects(obb, epsilon);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t OBB_Intersects_AABB(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    AABB& aabb = *GetCheckedValueObject<AABB>(ctx, 0, AABB_ID);
    bool ret = thisObj->Intersects(aabb);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t OBB_Intersects_Plane(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    Plane& plane = *GetCheckedValueObject<Plane>(ctx, 0, Plane_ID);
    bool ret = thisObj->Intersects(plane);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t OBB_Intersects_Ray_float_float(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    Ray& ray = *GetCheckedValueObject<Ray>(ctx, 0, Ray_ID);
    float dNear = (float)duk_require_number(ctx, 1);
    float dFar = (float)duk_require_number(ctx, 2);
    bool ret = thisObj->Intersects(ray, dNear, dFar);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t OBB_Intersects_Ray(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    Ray& ray = *GetCheckedValueObject<Ray>(ctx, 0, Ray_ID);
    bool ret = thisObj->Intersects(ray);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t OBB_Intersects_Line_float_float(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    Line& line = *GetCheckedValueObject<Line>(ctx, 0, Line_ID);
    float dNear = (float)duk_require_number(ctx, 1);
    float dFar = (float)duk_require_number(ctx, 2);
    bool ret = thisObj->Intersects(line, dNear, dFar);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t OBB_Intersects_Line(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    Line& line = *GetCheckedValueObject<Line>(ctx, 0, Line_ID);
    bool ret = thisObj->Intersects(line);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t OBB_Intersects_LineSegment_float_float(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    LineSegment& lineSegment = *GetCheckedValueObject<LineSegment>(ctx, 0, LineSegment_ID);
    float dNear = (float)duk_require_number(ctx, 1);
    float dFar = (float)duk_require_number(ctx, 2);
    bool ret = thisObj->Intersects(lineSegment, dNear, dFar);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t OBB_Intersects_LineSegment(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    LineSegment& lineSegment = *GetCheckedValueObject<LineSegment>(ctx, 0, LineSegment_ID);
    bool ret = thisObj->Intersects(lineSegment);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t OBB_Intersects_Capsule(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    Capsule& capsule = *GetCheckedValueObject<Capsule>(ctx, 0, Capsule_ID);
    bool ret = thisObj->Intersects(capsule);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t OBB_Intersects_Triangle(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    Triangle& triangle = *GetCheckedValueObject<Triangle>(ctx, 0, Triangle_ID);
    bool ret = thisObj->Intersects(triangle);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t OBB_Intersects_Frustum(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    Frustum& frustum = *GetCheckedValueObject<Frustum>(ctx, 0, Frustum_ID);
    bool ret = thisObj->Intersects(frustum);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t OBB_Enclose_float3(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    float3& point = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    thisObj->Enclose(point);
    return 0;
}

static duk_ret_t OBB_ToString(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    string ret = thisObj->ToString();
    duk_push_string(ctx, ret.c_str());
    return 1;
}

static duk_ret_t OBB_SerializeToString(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    string ret = thisObj->SerializeToString();
    duk_push_string(ctx, ret.c_str());
    return 1;
}

static duk_ret_t OBB_SerializeToCodeString(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    string ret = thisObj->SerializeToCodeString();
    duk_push_string(ctx, ret.c_str());
    return 1;
}

static duk_ret_t OBB_Equals_OBB_float(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    OBB& rhs = *GetCheckedValueObject<OBB>(ctx, 0, OBB_ID);
    float epsilon = numArgs > 1 ? (float)duk_require_number(ctx, 1) : 1e-3f;
    bool ret = thisObj->Equals(rhs, epsilon);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t OBB_BitEquals_OBB(duk_context* ctx)
{
    OBB* thisObj = GetThisValueObject<OBB>(ctx, OBB_ID);
    OBB& other = *GetCheckedValueObject<OBB>(ctx, 0, OBB_ID);
    bool ret = thisObj->BitEquals(other);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t OBB_Ctor_Selector(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    if (numArgs == 5 && GetValueObject<float3>(ctx, 0, float3_ID) && GetValueObject<float3>(ctx, 1, float3_ID) && GetValueObject<float3>(ctx, 2, float3_ID) && GetValueObject<float3>(ctx, 3, float3_ID) && GetValueObject<float3>(ctx, 4, float3_ID))
        return OBB_Ctor_float3_float3_float3_float3_float3(ctx);
    if (numArgs == 1 && GetValueObject<AABB>(ctx, 0, AABB_ID))
        return OBB_Ctor_AABB(ctx);
    if (numArgs == 0)
        return OBB_Ctor(ctx);
    duk_error(ctx, DUK_ERR_ERROR, "Could not select function overload");
}

static duk_ret_t OBB_SetFrom_Selector(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    if (numArgs == 2 && GetValueObject<AABB>(ctx, 0, AABB_ID) && GetValueObject<Quat>(ctx, 1, Quat_ID))
        return OBB_SetFrom_AABB_Quat(ctx);
    if (numArgs == 2 && GetValueObject<AABB>(ctx, 0, AABB_ID) && GetValueObject<float4x4>(ctx, 1, float4x4_ID))
        return OBB_SetFrom_AABB_float4x4(ctx);
    if (numArgs == 2 && GetValueObject<AABB>(ctx, 0, AABB_ID) && GetValueObject<float3x4>(ctx, 1, float3x4_ID))
        return OBB_SetFrom_AABB_float3x4(ctx);
    if (numArgs == 2 && GetValueObject<AABB>(ctx, 0, AABB_ID) && GetValueObject<float3x3>(ctx, 1, float3x3_ID))
        return OBB_SetFrom_AABB_float3x3(ctx);
    if (numArgs == 1 && GetValueObject<Sphere>(ctx, 0, Sphere_ID))
        return OBB_SetFrom_Sphere(ctx);
    if (numArgs == 1 && GetValueObject<AABB>(ctx, 0, AABB_ID))
        return OBB_SetFrom_AABB(ctx);
    duk_error(ctx, DUK_ERR_ERROR, "Could not select function overload");
}

static duk_ret_t OBB_ExtremePoint_Selector(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    if (numArgs == 2 && GetValueObject<float3>(ctx, 0, float3_ID) && duk_is_number(ctx, 1))
        return OBB_ExtremePoint_float3_float(ctx);
    if (numArgs == 1 && GetValueObject<float3>(ctx, 0, float3_ID))
        return OBB_ExtremePoint_float3(ctx);
    duk_error(ctx, DUK_ERR_ERROR, "Could not select function overload");
}

static duk_ret_t OBB_Scale_Selector(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    if (numArgs == 2 && GetValueObject<float3>(ctx, 0, float3_ID) && GetValueObject<float3>(ctx, 1, float3_ID))
        return OBB_Scale_float3_float3(ctx);
    if (numArgs == 2 && GetValueObject<float3>(ctx, 0, float3_ID) && duk_is_number(ctx, 1))
        return OBB_Scale_float3_float(ctx);
    duk_error(ctx, DUK_ERR_ERROR, "Could not select function overload");
}

static duk_ret_t OBB_Transform_Selector(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    if (numArgs == 1 && GetValueObject<float4x4>(ctx, 0, float4x4_ID))
        return OBB_Transform_float4x4(ctx);
    if (numArgs == 1 && GetValueObject<Quat>(ctx, 0, Quat_ID))
        return OBB_Transform_Quat(ctx);
    if (numArgs == 1 && GetValueObject<float3x3>(ctx, 0, float3x3_ID))
        return OBB_Transform_float3x3(ctx);
    if (numArgs == 1 && GetValueObject<float3x4>(ctx, 0, float3x4_ID))
        return OBB_Transform_float3x4(ctx);
    duk_error(ctx, DUK_ERR_ERROR, "Could not select function overload");
}

static duk_ret_t OBB_Distance_Selector(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    if (numArgs == 1 && GetValueObject<Sphere>(ctx, 0, Sphere_ID))
        return OBB_Distance_Sphere(ctx);
    if (numArgs == 1 && GetValueObject<float3>(ctx, 0, float3_ID))
        return OBB_Distance_float3(ctx);
    duk_error(ctx, DUK_ERR_ERROR, "Could not select function overload");
}

static duk_ret_t OBB_Contains_Selector(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    if (numArgs == 1 && GetValueObject<OBB>(ctx, 0, OBB_ID))
        return OBB_Contains_OBB(ctx);
    if (numArgs == 1 && GetValueObject<Triangle>(ctx, 0, Triangle_ID))
        return OBB_Contains_Triangle(ctx);
    if (numArgs == 1 && GetValueObject<Frustum>(ctx, 0, Frustum_ID))
        return OBB_Contains_Frustum(ctx);
    if (numArgs == 1 && GetValueObject<float3>(ctx, 0, float3_ID))
        return OBB_Contains_float3(ctx);
    if (numArgs == 1 && GetValueObject<LineSegment>(ctx, 0, LineSegment_ID))
        return OBB_Contains_LineSegment(ctx);
    if (numArgs == 1 && GetValueObject<AABB>(ctx, 0, AABB_ID))
        return OBB_Contains_AABB(ctx);
    duk_error(ctx, DUK_ERR_ERROR, "Could not select function overload");
}

static duk_ret_t OBB_Intersects_Selector(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    if (numArgs == 3 && GetValueObject<Ray>(ctx, 0, Ray_ID) && duk_is_number(ctx, 1) && duk_is_number(ctx, 2))
        return OBB_Intersects_Ray_float_float(ctx);
    if (numArgs == 3 && GetValueObject<LineSegment>(ctx, 0, LineSegment_ID) && duk_is_number(ctx, 1) && duk_is_number(ctx, 2))
        return OBB_Intersects_LineSegment_float_float(ctx);
    if (numArgs == 3 && GetValueObject<Line>(ctx, 0, Line_ID) && duk_is_number(ctx, 1) && duk_is_number(ctx, 2))
        return OBB_Intersects_Line_float_float(ctx);
    if (numArgs == 1 && GetValueObject<LineSegment>(ctx, 0, LineSegment_ID))
        return OBB_Intersects_LineSegment(ctx);
    if (numArgs == 1 && GetValueObject<Triangle>(ctx, 0, Triangle_ID))
        return OBB_Intersects_Triangle(ctx);
    if (numArgs == 1 && GetValueObject<Frustum>(ctx, 0, Frustum_ID))
        return OBB_Intersects_Frustum(ctx);
    if (numArgs == 1 && GetValueObject<Capsule>(ctx, 0, Capsule_ID))
        return OBB_Intersects_Capsule(ctx);
    if (numArgs == 1 && GetValueObject<Plane>(ctx, 0, Plane_ID))
        return OBB_Intersects_Plane(ctx);
    if (numArgs == 1 && GetValueObject<AABB>(ctx, 0, AABB_ID))
        return OBB_Intersects_AABB(ctx);
    if (numArgs == 1 && GetValueObject<Ray>(ctx, 0, Ray_ID))
        return OBB_Intersects_Ray(ctx);
    if (numArgs == 1 && GetValueObject<Line>(ctx, 0, Line_ID))
        return OBB_Intersects_Line(ctx);
    if (numArgs >= 1 && GetValueObject<OBB>(ctx, 0, OBB_ID))
        return OBB_Intersects_OBB_float(ctx);
    duk_error(ctx, DUK_ERR_ERROR, "Could not select function overload");
}

static duk_ret_t OBB_NumVerticesInTriangulation_Static_int_int_int(duk_context* ctx)
{
    int numFacesX = (int)duk_require_number(ctx, 0);
    int numFacesY = (int)duk_require_number(ctx, 1);
    int numFacesZ = (int)duk_require_number(ctx, 2);
    int ret = OBB::NumVerticesInTriangulation(numFacesX, numFacesY, numFacesZ);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t OBB_NumVerticesInEdgeList_Static(duk_context* ctx)
{
    int ret = OBB::NumVerticesInEdgeList();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t OBB_FromString_Static_string(duk_context* ctx)
{
    string str = duk_require_string(ctx, 0);
    OBB ret = OBB::FromString(str);
    PushValueObjectCopy<OBB>(ctx, ret, OBB_ID, OBB_Finalizer);
    return 1;
}

static const duk_function_list_entry OBB_Functions[] = {
    {"SetNegativeInfinity", OBB_SetNegativeInfinity, 0}
    ,{"SetFrom", OBB_SetFrom_Selector, DUK_VARARGS}
    ,{"MinimalEnclosingAABB", OBB_MinimalEnclosingAABB, 0}
    ,{"MinimalEnclosingSphere", OBB_MinimalEnclosingSphere, 0}
    ,{"MaximalContainedSphere", OBB_MaximalContainedSphere, 0}
    ,{"Size", OBB_Size, 0}
    ,{"HalfSize", OBB_HalfSize, 0}
    ,{"Diagonal", OBB_Diagonal, 0}
    ,{"HalfDiagonal", OBB_HalfDiagonal, 0}
    ,{"WorldToLocal", OBB_WorldToLocal, 0}
    ,{"LocalToWorld", OBB_LocalToWorld, 0}
    ,{"IsFinite", OBB_IsFinite, 0}
    ,{"IsDegenerate", OBB_IsDegenerate, 0}
    ,{"CenterPoint", OBB_CenterPoint, 0}
    ,{"Centroid", OBB_Centroid, 0}
    ,{"AnyPointFast", OBB_AnyPointFast, 0}
    ,{"Volume", OBB_Volume, 0}
    ,{"SurfaceArea", OBB_SurfaceArea, 0}
    ,{"PointInside", OBB_PointInside_float_float_float, 3}
    ,{"Edge", OBB_Edge_int, 1}
    ,{"CornerPoint", OBB_CornerPoint_int, 1}
    ,{"ExtremePoint", OBB_ExtremePoint_Selector, DUK_VARARGS}
    ,{"ProjectToAxis", OBB_ProjectToAxis_float3_float_float, 3}
    ,{"PointOnEdge", OBB_PointOnEdge_int_float, 2}
    ,{"FaceCenterPoint", OBB_FaceCenterPoint_int, 1}
    ,{"FacePoint", OBB_FacePoint_int_float_float, 3}
    ,{"FacePlane", OBB_FacePlane_int, 1}
    ,{"RandomPointInside", OBB_RandomPointInside_LCG, 1}
    ,{"RandomPointOnSurface", OBB_RandomPointOnSurface_LCG, 1}
    ,{"RandomPointOnEdge", OBB_RandomPointOnEdge_LCG, 1}
    ,{"RandomCornerPoint", OBB_RandomCornerPoint_LCG, 1}
    ,{"Translate", OBB_Translate_float3, 1}
    ,{"Scale", OBB_Scale_Selector, DUK_VARARGS}
    ,{"Transform", OBB_Transform_Selector, DUK_VARARGS}
    ,{"ClosestPoint", OBB_ClosestPoint_float3, 1}
    ,{"Distance", OBB_Distance_Selector, DUK_VARARGS}
    ,{"Contains", OBB_Contains_Selector, DUK_VARARGS}
    ,{"Intersects", OBB_Intersects_Selector, DUK_VARARGS}
    ,{"Enclose", OBB_Enclose_float3, 1}
    ,{"ToString", OBB_ToString, 0}
    ,{"SerializeToString", OBB_SerializeToString, 0}
    ,{"SerializeToCodeString", OBB_SerializeToCodeString, 0}
    ,{"Equals", OBB_Equals_OBB_float, DUK_VARARGS}
    ,{"BitEquals", OBB_BitEquals_OBB, 1}
    ,{nullptr, nullptr, 0}
};

static const duk_function_list_entry OBB_StaticFunctions[] = {
    {"NumVerticesInTriangulation", OBB_NumVerticesInTriangulation_Static_int_int_int, 3}
    ,{"NumVerticesInEdgeList", OBB_NumVerticesInEdgeList_Static, 0}
    ,{"FromString", OBB_FromString_Static_string, 1}
    ,{nullptr, nullptr, 0}
};

void Expose_OBB(duk_context* ctx)
{
    duk_push_c_function(ctx, OBB_Ctor_Selector, DUK_VARARGS);
    duk_put_function_list(ctx, -1, OBB_StaticFunctions);
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, OBB_Functions);
    DefineProperty(ctx, "pos", OBB_Get_pos, OBB_Set_pos);
    DefineProperty(ctx, "r", OBB_Get_r, OBB_Set_r);
    duk_put_prop_string(ctx, -2, "prototype");
    duk_put_global_string(ctx, OBB_ID);
}

}
