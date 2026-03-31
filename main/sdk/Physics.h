#pragma once
#include "sdk.h"

namespace SDK
{
	struct Physics;

	struct ColliderArray
	{
		void* Clazz;
		void* Monitor;
		void* Bounds;
		int32_t MaxLength;
		Collider* Vector[1];
	};

	DEC_MET(Physics_OverlapSphere, ColliderArray* (*)(Vector3 position, float radius, MethodInfo* methodInfo), "UnityEngine.PhysicsModule", "UnityEngine", "Physics", "OverlapSphere", 2);
}