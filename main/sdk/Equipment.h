#pragma once
#include "sdk.h"

namespace SDK
{
	struct EquipmentFields
	{
		char* pad_000[0x12C];
		float useDelay;
	};

	struct Equipment
	{
		void* Clazz;
		void* Monitor;
		EquipmentFields Fields;
	};
}