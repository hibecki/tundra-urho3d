// For conditions of distribution and use, see copyright notice in LICENSE
// This file has been autogenerated with BindingsGenerator

#include "StableHeaders.h"
#include "CoreTypes.h"
#include "JavaScriptInstance.h"
#include "LoggingFunctions.h"
#include "Geometry/Capsule.h"

#ifdef _MSC_VER
#pragma warning(disable: 4800)
#endif

#include "Geometry/LineSegment.h"
#include "Math/float3.h"
#include "Geometry/Sphere.h"
#include "Geometry/Circle.h"
#include "Geometry/AABB.h"
#include "Geometry/OBB.h"
#include "Algorithm/Random/LCG.h"
#include "Math/float3x3.h"
#include "Math/float3x4.h"
#include "Math/float4x4.h"
#include "Math/Quat.h"
#include "Geometry/Plane.h"
#include "Geometry/Ray.h"
#include "Geometry/Line.h"
#include "Geometry/Triangle.h"
#include "Geometry/Frustum.h"

using namespace std;

namespace JSBindings
{

static const char* LineSegment_ID = "LineSegment";
static const char* float3_ID = "float3";
static const char* Sphere_ID = "Sphere";
static const char* Circle_ID = "Circle";
static const char* AABB_ID = "AABB";
static const char* OBB_ID = "OBB";
static const char* LCG_ID = "LCG";
static const char* float3x3_ID = "float3x3";
static const char* float3x4_ID = "float3x4";
static const char* float4x4_ID = "float4x4";
static const char* Quat_ID = "Quat";
static const char* Plane_ID = "Plane";
static const char* Ray_ID = "Ray";
static const char* Line_ID = "Line";
static const char* Triangle_ID = "Triangle";
static const char* Frustum_ID = "Frustum";

static duk_ret_t float3_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<float3>(ctx, float3_ID);
    return 0;
}

static duk_ret_t Circle_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<Circle>(ctx, Circle_ID);
    return 0;
}

static duk_ret_t LineSegment_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<LineSegment>(ctx, LineSegment_ID);
    return 0;
}

static duk_ret_t Sphere_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<Sphere>(ctx, Sphere_ID);
    return 0;
}

static duk_ret_t AABB_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<AABB>(ctx, AABB_ID);
    return 0;
}

static duk_ret_t OBB_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<OBB>(ctx, OBB_ID);
    return 0;
}


static const char* Capsule_ID = "Capsule";

static duk_ret_t Capsule_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<Capsule>(ctx, Capsule_ID);
    return 0;
}

static duk_ret_t Capsule_Set_l(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    LineSegment& l = *GetCheckedValueObject<LineSegment>(ctx, 0, LineSegment_ID);
    thisObj->l = l;
    return 0;
}

static duk_ret_t Capsule_Get_l(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    PushValueObject<LineSegment>(ctx, &thisObj->l, LineSegment_ID, nullptr, true);
    return 1;
}

static duk_ret_t Capsule_Set_r(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float r = (float)duk_require_number(ctx, 0);
    thisObj->r = r;
    return 0;
}

static duk_ret_t Capsule_Get_r(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    duk_push_number(ctx, thisObj->r);
    return 1;
}

static duk_ret_t Capsule_Ctor(duk_context* ctx)
{
    Capsule* newObj = new Capsule();
    PushConstructorResult<Capsule>(ctx, newObj, Capsule_ID, Capsule_Finalizer);
    return 0;
}

static duk_ret_t Capsule_Ctor_LineSegment_float(duk_context* ctx)
{
    LineSegment& endPoints = *GetCheckedValueObject<LineSegment>(ctx, 0, LineSegment_ID);
    float radius = (float)duk_require_number(ctx, 1);
    Capsule* newObj = new Capsule(endPoints, radius);
    PushConstructorResult<Capsule>(ctx, newObj, Capsule_ID, Capsule_Finalizer);
    return 0;
}

static duk_ret_t Capsule_Ctor_float3_float3_float(duk_context* ctx)
{
    float3& bottomPoint = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    float3& topPoint = *GetCheckedValueObject<float3>(ctx, 1, float3_ID);
    float radius = (float)duk_require_number(ctx, 2);
    Capsule* newObj = new Capsule(bottomPoint, topPoint, radius);
    PushConstructorResult<Capsule>(ctx, newObj, Capsule_ID, Capsule_Finalizer);
    return 0;
}

static duk_ret_t Capsule_SetFrom_Sphere(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    Sphere& s = *GetCheckedValueObject<Sphere>(ctx, 0, Sphere_ID);
    thisObj->SetFrom(s);
    return 0;
}

static duk_ret_t Capsule_SetDegenerate(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    thisObj->SetDegenerate();
    return 0;
}

static duk_ret_t Capsule_IsDegenerate(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    bool ret = thisObj->IsDegenerate();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_LineLength(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float ret = thisObj->LineLength();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Height(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float ret = thisObj->Height();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Diameter(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float ret = thisObj->Diameter();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Bottom(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float3 ret = thisObj->Bottom();
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t Capsule_Center(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float3 ret = thisObj->Center();
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t Capsule_Centroid(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float3 ret = thisObj->Centroid();
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t Capsule_AnyPointFast(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float3 ret = thisObj->AnyPointFast();
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t Capsule_ExtremePoint_float3(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float3& direction = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    float3 ret = thisObj->ExtremePoint(direction);
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t Capsule_ExtremePoint_float3_float(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float3& direction = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    float projectionDistance = (float)duk_require_number(ctx, 1);
    float3 ret = thisObj->ExtremePoint(direction, projectionDistance);
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t Capsule_ProjectToAxis_float3_float_float(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float3& direction = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    float outMin = (float)duk_require_number(ctx, 1);
    float outMax = (float)duk_require_number(ctx, 2);
    thisObj->ProjectToAxis(direction, outMin, outMax);
    return 0;
}

static duk_ret_t Capsule_Top(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float3 ret = thisObj->Top();
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t Capsule_UpDirection(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float3 ret = thisObj->UpDirection();
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t Capsule_Volume(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float ret = thisObj->Volume();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_SurfaceArea(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float ret = thisObj->SurfaceArea();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_CrossSection_float(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float l = (float)duk_require_number(ctx, 0);
    Circle ret = thisObj->CrossSection(l);
    PushValueObjectCopy<Circle>(ctx, ret, Circle_ID, Circle_Finalizer);
    return 1;
}

static duk_ret_t Capsule_HeightLineSegment(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    LineSegment ret = thisObj->HeightLineSegment();
    PushValueObjectCopy<LineSegment>(ctx, ret, LineSegment_ID, LineSegment_Finalizer);
    return 1;
}

static duk_ret_t Capsule_IsFinite(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    bool ret = thisObj->IsFinite();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_PointInside_float_float_float(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float height = (float)duk_require_number(ctx, 0);
    float angle = (float)duk_require_number(ctx, 1);
    float dist = (float)duk_require_number(ctx, 2);
    float3 ret = thisObj->PointInside(height, angle, dist);
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t Capsule_UniformPointPerhapsInside_float_float_float(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float height = (float)duk_require_number(ctx, 0);
    float x = (float)duk_require_number(ctx, 1);
    float y = (float)duk_require_number(ctx, 2);
    float3 ret = thisObj->UniformPointPerhapsInside(height, x, y);
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t Capsule_SphereA(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    Sphere ret = thisObj->SphereA();
    PushValueObjectCopy<Sphere>(ctx, ret, Sphere_ID, Sphere_Finalizer);
    return 1;
}

static duk_ret_t Capsule_SphereB(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    Sphere ret = thisObj->SphereB();
    PushValueObjectCopy<Sphere>(ctx, ret, Sphere_ID, Sphere_Finalizer);
    return 1;
}

static duk_ret_t Capsule_MinimalEnclosingAABB(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    AABB ret = thisObj->MinimalEnclosingAABB();
    PushValueObjectCopy<AABB>(ctx, ret, AABB_ID, AABB_Finalizer);
    return 1;
}

static duk_ret_t Capsule_MinimalEnclosingOBB(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    OBB ret = thisObj->MinimalEnclosingOBB();
    PushValueObjectCopy<OBB>(ctx, ret, OBB_ID, OBB_Finalizer);
    return 1;
}

static duk_ret_t Capsule_RandomPointInside_LCG(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    LCG& rng = *GetCheckedValueObject<LCG>(ctx, 0, LCG_ID);
    float3 ret = thisObj->RandomPointInside(rng);
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t Capsule_RandomPointOnSurface_LCG(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    LCG& rng = *GetCheckedValueObject<LCG>(ctx, 0, LCG_ID);
    float3 ret = thisObj->RandomPointOnSurface(rng);
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t Capsule_Translate_float3(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float3& offset = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    thisObj->Translate(offset);
    return 0;
}

static duk_ret_t Capsule_Scale_float3_float(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float3& centerPoint = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    float scaleFactor = (float)duk_require_number(ctx, 1);
    thisObj->Scale(centerPoint, scaleFactor);
    return 0;
}

static duk_ret_t Capsule_Transform_float3x3(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float3x3& transform = *GetCheckedValueObject<float3x3>(ctx, 0, float3x3_ID);
    thisObj->Transform(transform);
    return 0;
}

static duk_ret_t Capsule_Transform_float3x4(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float3x4& transform = *GetCheckedValueObject<float3x4>(ctx, 0, float3x4_ID);
    thisObj->Transform(transform);
    return 0;
}

static duk_ret_t Capsule_Transform_float4x4(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float4x4& transform = *GetCheckedValueObject<float4x4>(ctx, 0, float4x4_ID);
    thisObj->Transform(transform);
    return 0;
}

static duk_ret_t Capsule_Transform_Quat(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    Quat& transform = *GetCheckedValueObject<Quat>(ctx, 0, Quat_ID);
    thisObj->Transform(transform);
    return 0;
}

static duk_ret_t Capsule_ClosestPoint_float3(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float3& targetPoint = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    float3 ret = thisObj->ClosestPoint(targetPoint);
    PushValueObjectCopy<float3>(ctx, ret, float3_ID, float3_Finalizer);
    return 1;
}

static duk_ret_t Capsule_Distance_float3(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float3& point = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    float ret = thisObj->Distance(point);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Distance_Plane(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    Plane& plane = *GetCheckedValueObject<Plane>(ctx, 0, Plane_ID);
    float ret = thisObj->Distance(plane);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Distance_Sphere(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    Sphere& sphere = *GetCheckedValueObject<Sphere>(ctx, 0, Sphere_ID);
    float ret = thisObj->Distance(sphere);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Distance_Ray(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    Ray& ray = *GetCheckedValueObject<Ray>(ctx, 0, Ray_ID);
    float ret = thisObj->Distance(ray);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Distance_Line(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    Line& line = *GetCheckedValueObject<Line>(ctx, 0, Line_ID);
    float ret = thisObj->Distance(line);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Distance_LineSegment(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    LineSegment& lineSegment = *GetCheckedValueObject<LineSegment>(ctx, 0, LineSegment_ID);
    float ret = thisObj->Distance(lineSegment);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Distance_Capsule(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    Capsule& capsule = *GetCheckedValueObject<Capsule>(ctx, 0, Capsule_ID);
    float ret = thisObj->Distance(capsule);
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Contains_float3(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    float3& point = *GetCheckedValueObject<float3>(ctx, 0, float3_ID);
    bool ret = thisObj->Contains(point);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Contains_LineSegment(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    LineSegment& lineSegment = *GetCheckedValueObject<LineSegment>(ctx, 0, LineSegment_ID);
    bool ret = thisObj->Contains(lineSegment);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Contains_Triangle(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    Triangle& triangle = *GetCheckedValueObject<Triangle>(ctx, 0, Triangle_ID);
    bool ret = thisObj->Contains(triangle);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Contains_AABB(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    AABB& aabb = *GetCheckedValueObject<AABB>(ctx, 0, AABB_ID);
    bool ret = thisObj->Contains(aabb);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Contains_OBB(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    OBB& obb = *GetCheckedValueObject<OBB>(ctx, 0, OBB_ID);
    bool ret = thisObj->Contains(obb);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Contains_Frustum(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    Frustum& frustum = *GetCheckedValueObject<Frustum>(ctx, 0, Frustum_ID);
    bool ret = thisObj->Contains(frustum);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Intersects_Ray(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    Ray& ray = *GetCheckedValueObject<Ray>(ctx, 0, Ray_ID);
    bool ret = thisObj->Intersects(ray);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Intersects_Line(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    Line& line = *GetCheckedValueObject<Line>(ctx, 0, Line_ID);
    bool ret = thisObj->Intersects(line);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Intersects_LineSegment(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    LineSegment& lineSegment = *GetCheckedValueObject<LineSegment>(ctx, 0, LineSegment_ID);
    bool ret = thisObj->Intersects(lineSegment);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Intersects_Plane(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    Plane& plane = *GetCheckedValueObject<Plane>(ctx, 0, Plane_ID);
    bool ret = thisObj->Intersects(plane);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Intersects_Sphere(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    Sphere& sphere = *GetCheckedValueObject<Sphere>(ctx, 0, Sphere_ID);
    bool ret = thisObj->Intersects(sphere);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Intersects_Capsule(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    Capsule& capsule = *GetCheckedValueObject<Capsule>(ctx, 0, Capsule_ID);
    bool ret = thisObj->Intersects(capsule);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Intersects_AABB(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    AABB& aabb = *GetCheckedValueObject<AABB>(ctx, 0, AABB_ID);
    bool ret = thisObj->Intersects(aabb);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Intersects_OBB(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    OBB& obb = *GetCheckedValueObject<OBB>(ctx, 0, OBB_ID);
    bool ret = thisObj->Intersects(obb);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Intersects_Triangle(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    Triangle& triangle = *GetCheckedValueObject<Triangle>(ctx, 0, Triangle_ID);
    bool ret = thisObj->Intersects(triangle);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Intersects_Frustum(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    Frustum& frustum = *GetCheckedValueObject<Frustum>(ctx, 0, Frustum_ID);
    bool ret = thisObj->Intersects(frustum);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_ToString(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    string ret = thisObj->ToString();
    duk_push_string(ctx, ret.c_str());
    return 1;
}

static duk_ret_t Capsule_SerializeToString(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    string ret = thisObj->SerializeToString();
    duk_push_string(ctx, ret.c_str());
    return 1;
}

static duk_ret_t Capsule_SerializeToCodeString(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    string ret = thisObj->SerializeToCodeString();
    duk_push_string(ctx, ret.c_str());
    return 1;
}

static duk_ret_t Capsule_Equals_Capsule_float(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    Capsule& rhs = *GetCheckedValueObject<Capsule>(ctx, 0, Capsule_ID);
    float epsilon = numArgs > 1 ? (float)duk_require_number(ctx, 1) : 1e-3f;
    bool ret = thisObj->Equals(rhs, epsilon);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_BitEquals_Capsule(duk_context* ctx)
{
    Capsule* thisObj = GetThisValueObject<Capsule>(ctx, Capsule_ID);
    Capsule& other = *GetCheckedValueObject<Capsule>(ctx, 0, Capsule_ID);
    bool ret = thisObj->BitEquals(other);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Capsule_Ctor_Selector(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    if (numArgs == 3 && GetValueObject<float3>(ctx, 0, float3_ID) && GetValueObject<float3>(ctx, 1, float3_ID) && duk_is_number(ctx, 2))
        return Capsule_Ctor_float3_float3_float(ctx);
    if (numArgs == 2 && GetValueObject<LineSegment>(ctx, 0, LineSegment_ID) && duk_is_number(ctx, 1))
        return Capsule_Ctor_LineSegment_float(ctx);
    if (numArgs == 0)
        return Capsule_Ctor(ctx);
    duk_error(ctx, DUK_ERR_ERROR, "Could not select function overload");
}

static duk_ret_t Capsule_ExtremePoint_Selector(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    if (numArgs == 2 && GetValueObject<float3>(ctx, 0, float3_ID) && duk_is_number(ctx, 1))
        return Capsule_ExtremePoint_float3_float(ctx);
    if (numArgs == 1 && GetValueObject<float3>(ctx, 0, float3_ID))
        return Capsule_ExtremePoint_float3(ctx);
    duk_error(ctx, DUK_ERR_ERROR, "Could not select function overload");
}

static duk_ret_t Capsule_Transform_Selector(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    if (numArgs == 1 && GetValueObject<float4x4>(ctx, 0, float4x4_ID))
        return Capsule_Transform_float4x4(ctx);
    if (numArgs == 1 && GetValueObject<Quat>(ctx, 0, Quat_ID))
        return Capsule_Transform_Quat(ctx);
    if (numArgs == 1 && GetValueObject<float3x3>(ctx, 0, float3x3_ID))
        return Capsule_Transform_float3x3(ctx);
    if (numArgs == 1 && GetValueObject<float3x4>(ctx, 0, float3x4_ID))
        return Capsule_Transform_float3x4(ctx);
    duk_error(ctx, DUK_ERR_ERROR, "Could not select function overload");
}

static duk_ret_t Capsule_Distance_Selector(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    if (numArgs == 1 && GetValueObject<Line>(ctx, 0, Line_ID))
        return Capsule_Distance_Line(ctx);
    if (numArgs == 1 && GetValueObject<LineSegment>(ctx, 0, LineSegment_ID))
        return Capsule_Distance_LineSegment(ctx);
    if (numArgs == 1 && GetValueObject<Capsule>(ctx, 0, Capsule_ID))
        return Capsule_Distance_Capsule(ctx);
    if (numArgs == 1 && GetValueObject<Ray>(ctx, 0, Ray_ID))
        return Capsule_Distance_Ray(ctx);
    if (numArgs == 1 && GetValueObject<float3>(ctx, 0, float3_ID))
        return Capsule_Distance_float3(ctx);
    if (numArgs == 1 && GetValueObject<Plane>(ctx, 0, Plane_ID))
        return Capsule_Distance_Plane(ctx);
    if (numArgs == 1 && GetValueObject<Sphere>(ctx, 0, Sphere_ID))
        return Capsule_Distance_Sphere(ctx);
    duk_error(ctx, DUK_ERR_ERROR, "Could not select function overload");
}

static duk_ret_t Capsule_Contains_Selector(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    if (numArgs == 1 && GetValueObject<AABB>(ctx, 0, AABB_ID))
        return Capsule_Contains_AABB(ctx);
    if (numArgs == 1 && GetValueObject<OBB>(ctx, 0, OBB_ID))
        return Capsule_Contains_OBB(ctx);
    if (numArgs == 1 && GetValueObject<Frustum>(ctx, 0, Frustum_ID))
        return Capsule_Contains_Frustum(ctx);
    if (numArgs == 1 && GetValueObject<float3>(ctx, 0, float3_ID))
        return Capsule_Contains_float3(ctx);
    if (numArgs == 1 && GetValueObject<LineSegment>(ctx, 0, LineSegment_ID))
        return Capsule_Contains_LineSegment(ctx);
    if (numArgs == 1 && GetValueObject<Triangle>(ctx, 0, Triangle_ID))
        return Capsule_Contains_Triangle(ctx);
    duk_error(ctx, DUK_ERR_ERROR, "Could not select function overload");
}

static duk_ret_t Capsule_Intersects_Selector(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    if (numArgs == 1 && GetValueObject<AABB>(ctx, 0, AABB_ID))
        return Capsule_Intersects_AABB(ctx);
    if (numArgs == 1 && GetValueObject<Capsule>(ctx, 0, Capsule_ID))
        return Capsule_Intersects_Capsule(ctx);
    if (numArgs == 1 && GetValueObject<OBB>(ctx, 0, OBB_ID))
        return Capsule_Intersects_OBB(ctx);
    if (numArgs == 1 && GetValueObject<Frustum>(ctx, 0, Frustum_ID))
        return Capsule_Intersects_Frustum(ctx);
    if (numArgs == 1 && GetValueObject<Triangle>(ctx, 0, Triangle_ID))
        return Capsule_Intersects_Triangle(ctx);
    if (numArgs == 1 && GetValueObject<Line>(ctx, 0, Line_ID))
        return Capsule_Intersects_Line(ctx);
    if (numArgs == 1 && GetValueObject<Ray>(ctx, 0, Ray_ID))
        return Capsule_Intersects_Ray(ctx);
    if (numArgs == 1 && GetValueObject<LineSegment>(ctx, 0, LineSegment_ID))
        return Capsule_Intersects_LineSegment(ctx);
    if (numArgs == 1 && GetValueObject<Sphere>(ctx, 0, Sphere_ID))
        return Capsule_Intersects_Sphere(ctx);
    if (numArgs == 1 && GetValueObject<Plane>(ctx, 0, Plane_ID))
        return Capsule_Intersects_Plane(ctx);
    duk_error(ctx, DUK_ERR_ERROR, "Could not select function overload");
}

static duk_ret_t Capsule_FromString_Static_string(duk_context* ctx)
{
    string str = duk_require_string(ctx, 0);
    Capsule ret = Capsule::FromString(str);
    PushValueObjectCopy<Capsule>(ctx, ret, Capsule_ID, Capsule_Finalizer);
    return 1;
}

static const duk_function_list_entry Capsule_Functions[] = {
    {"SetFrom", Capsule_SetFrom_Sphere, 1}
    ,{"SetDegenerate", Capsule_SetDegenerate, 0}
    ,{"IsDegenerate", Capsule_IsDegenerate, 0}
    ,{"LineLength", Capsule_LineLength, 0}
    ,{"Height", Capsule_Height, 0}
    ,{"Diameter", Capsule_Diameter, 0}
    ,{"Bottom", Capsule_Bottom, 0}
    ,{"Center", Capsule_Center, 0}
    ,{"Centroid", Capsule_Centroid, 0}
    ,{"AnyPointFast", Capsule_AnyPointFast, 0}
    ,{"ExtremePoint", Capsule_ExtremePoint_Selector, DUK_VARARGS}
    ,{"ProjectToAxis", Capsule_ProjectToAxis_float3_float_float, 3}
    ,{"Top", Capsule_Top, 0}
    ,{"UpDirection", Capsule_UpDirection, 0}
    ,{"Volume", Capsule_Volume, 0}
    ,{"SurfaceArea", Capsule_SurfaceArea, 0}
    ,{"CrossSection", Capsule_CrossSection_float, 1}
    ,{"HeightLineSegment", Capsule_HeightLineSegment, 0}
    ,{"IsFinite", Capsule_IsFinite, 0}
    ,{"PointInside", Capsule_PointInside_float_float_float, 3}
    ,{"UniformPointPerhapsInside", Capsule_UniformPointPerhapsInside_float_float_float, 3}
    ,{"SphereA", Capsule_SphereA, 0}
    ,{"SphereB", Capsule_SphereB, 0}
    ,{"MinimalEnclosingAABB", Capsule_MinimalEnclosingAABB, 0}
    ,{"MinimalEnclosingOBB", Capsule_MinimalEnclosingOBB, 0}
    ,{"RandomPointInside", Capsule_RandomPointInside_LCG, 1}
    ,{"RandomPointOnSurface", Capsule_RandomPointOnSurface_LCG, 1}
    ,{"Translate", Capsule_Translate_float3, 1}
    ,{"Scale", Capsule_Scale_float3_float, 2}
    ,{"Transform", Capsule_Transform_Selector, DUK_VARARGS}
    ,{"ClosestPoint", Capsule_ClosestPoint_float3, 1}
    ,{"Distance", Capsule_Distance_Selector, DUK_VARARGS}
    ,{"Contains", Capsule_Contains_Selector, DUK_VARARGS}
    ,{"Intersects", Capsule_Intersects_Selector, DUK_VARARGS}
    ,{"ToString", Capsule_ToString, 0}
    ,{"SerializeToString", Capsule_SerializeToString, 0}
    ,{"SerializeToCodeString", Capsule_SerializeToCodeString, 0}
    ,{"Equals", Capsule_Equals_Capsule_float, DUK_VARARGS}
    ,{"BitEquals", Capsule_BitEquals_Capsule, 1}
    ,{nullptr, nullptr, 0}
};

static const duk_function_list_entry Capsule_StaticFunctions[] = {
    {"FromString", Capsule_FromString_Static_string, 1}
    ,{nullptr, nullptr, 0}
};

void Expose_Capsule(duk_context* ctx)
{
    duk_push_c_function(ctx, Capsule_Ctor_Selector, DUK_VARARGS);
    duk_put_function_list(ctx, -1, Capsule_StaticFunctions);
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, Capsule_Functions);
    DefineProperty(ctx, "l", Capsule_Get_l, Capsule_Set_l);
    DefineProperty(ctx, "r", Capsule_Get_r, Capsule_Set_r);
    duk_put_prop_string(ctx, -2, "prototype");
    duk_put_global_string(ctx, Capsule_ID);
}

}
