#pragma once
#include "sdk.h"

namespace SDK
{
	struct LayerMask;

    DEC_MET(LayerMask_LayerToName, SDK::String* (*)(int layer, MethodInfo* methodInfo), "UnityEngine.CoreModule", "UnityEngine", "LayerMask", "LayerToName", 1);
}