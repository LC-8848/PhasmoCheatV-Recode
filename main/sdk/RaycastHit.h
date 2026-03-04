#pragma once
#include "sdk.h"

namespace SDK
{
	struct PhysicsScene
	{
		int32_t m_Handle;
	};
	struct Ray {
		Vector3 m_Origin;
		Vector3 m_Direction;
	};
    struct Transform;
	struct Collider;

	struct RaycastHit
	{
		Vector3 Point;
		Vector3 Normal;
		uint32_t FaceID;
		float Distance;
		Vector2 UV;
		int32_t Collider;
	};

	enum class QueryTriggerInteraction : int32_t
	{
		UseGlobal = 0,
		Ignore = 1,
		Collide = 2
	};

	DEC_MET(
		PhysicsScene_Raycast,
		bool(*)(SDK::PhysicsScene* scene,
			SDK::Vector3 origin,
			SDK::Vector3 direction,
			SDK::RaycastHit* hitInfo,
			float maxDistance,
			int layerMask,
			SDK::QueryTriggerInteraction query,
			MethodInfo* methodInfo),
		"UnityEngine.PhysicsModule",
		"UnityEngine",
		"PhysicsScene",
		"Raycast",
		6
	);

	DEC_MET(
		Physics_get_defaultPhysicsScene,
		SDK::PhysicsScene(*)(MethodInfo* methodInfo),
		"UnityEngine.PhysicsModule",
		"UnityEngine",
		"Physics",
		"get_defaultPhysicsScene",
		0
	);


	DEC_MET(Physics_Raycast, bool(*)(SDK::Ray* ray, SDK::RaycastHit* hitInfo, float maxDistance, int layerMask, MethodInfo* methodInfo), "UnityEngine.PhysicsModule", "UnityEngine", "Physics", "Raycast", 4);
	DEC_MET(Physics_Raycast_Trigger, bool(*)(SDK::Ray* ray, SDK::RaycastHit* hitInfo, float maxDistance, int layerMask, QueryTriggerInteraction query, MethodInfo* methodInfo), "UnityEngine.CoreModule", "UnityEngine", "Physics", "Raycast", 5);
	DEC_MET(Ray_get_origin, SDK::Vector3(*)(Ray* ray, MethodInfo* methodInfo), "UnityEngine.CoreModule", "UnityEngine", "Ray", "get_origin", 0);
	DEC_MET(Ray_get_direction, SDK::Vector3(*)(Ray* ray, MethodInfo* methodInfo), "UnityEngine.CoreModule", "UnityEngine", "Ray", "get_direction", 0);
	DEC_MET(Ray_Set_Origin, void(*)(Ray* ray, SDK::Vector3 value, MethodInfo* methodInfo), "UnityEngine.CoreModule", "UnityEngine", "Ray", "set_origin", 1);
	DEC_MET(Ray_Set_Direction, void(*)(SDK::Ray* ray, SDK::Vector3 value, MethodInfo* methodInfo), "UnityEngine.CoreModule", "UnityEngine", "Ray", "set_direction", 1);
	DEC_MET(RaycastHit_get_transform, SDK::Transform* (*)(SDK::RaycastHit* hit, MethodInfo* methodInfo), "UnityEngine.PhysicsModule", "UnityEngine", "RaycastHit", "get_transform", 0);
	DEC_MET(RaycastHit_get_collider, SDK::Collider* (*)(SDK::RaycastHit* hit, MethodInfo* methodInfo), "UnityEngine.PhysicsModule", "UnityEngine", "RaycastHit", "get_collider", 0);
}
