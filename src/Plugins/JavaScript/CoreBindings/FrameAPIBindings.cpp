// For conditions of distribution and use, see copyright notice in LICENSE
// This file has been autogenerated with BindingsGenerator

#include "StableHeaders.h"
#include "CoreTypes.h"
#include "BindingsHelpers.h"
#include "Framework/FrameAPI.h"

#ifdef _MSC_VER
#pragma warning(disable: 4800)
#endif

#include "Framework/Framework.h"


using namespace Tundra;
using namespace std;

namespace JSBindings
{



const char* FrameAPI_ID = "FrameAPI";

void Expose_FrameAPI(duk_context* ctx)
{
    duk_push_object(ctx);
    duk_push_object(ctx);
    duk_put_prop_string(ctx, -2, "prototype");
    duk_put_global_string(ctx, FrameAPI_ID);
}

}
