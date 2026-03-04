#pragma once
#include "sdk.h"

namespace SDK
{
	struct Render;

	DEC_MET(Render_get_enabled, bool(*)(Render* render, MethodInfo* methodInfo), "UnityEngine.CoreModule", "UnityEngine", "Renderer", "get_enabled", 0);
}