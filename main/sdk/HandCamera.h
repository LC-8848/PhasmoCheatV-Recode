#pragma once
#include "sdk.h"

namespace SDK
{
	struct HandCamera;

	struct SystemByteArray
	{
		void* klass;
		void* monitor;
		void* bounds;
		uint32_t max_length;
		uint8_t vector[1];
	};

	DEC_MET(HandCamera_UseNetworked, void(*)(HandCamera* handCamera, bool isOn, PhotonMessageInfo* info, MethodInfo* methodInfo), "Assembly-CSharp", "", "HandCamera", "UseNetworked", 2);
	DEC_MET(HandCamera_Start, void(*)(HandCamera* handCamera, MethodInfo* methodInfo), "Assembly-CSharp", "", "HandCamera", "Start", 0);
}