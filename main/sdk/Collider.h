#pragma once
#include "sdk.h"

namespace SDK
{
	struct Collider;

	DEC_MET(Collider_set_enabled, void(*)(Collider* collider, bool value, MethodInfo* methodInfo), "UnityEngine.PhysicsModule", "UnityEngine", "Collider", "set_enabled", 1);
	DEC_MET(Collider_get_enabled, bool(*)(Collider* collider, MethodInfo* methodInfo), "UnityEngine.PhysicsModule", "UnityEngine", "Collider", "get_enabled", 0);
}