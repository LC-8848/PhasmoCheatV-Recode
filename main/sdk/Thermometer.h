#pragma once
#include "sdk.h"

namespace SDK
{
	struct ThermometerFields
	{
		char pad_000[0x208];
		float measureTimer;
		void* photoEvidence;
		float timer;
		float currentTemp;
	};

	struct Thermometer
	{
		void* Clazz;
		void* Monitor;
		ThermometerFields Fields;
	};

	DEC_MET(Thermometer_HoldUse, void(*)(Thermometer* thermometer, MethodInfo* methodInfo), "Assembly-CSharp", "", "Thermometer", "HoldUse", 0)
	DEC_MET(Thermometer_GetRendTemperature, float(*)(Thermometer* thermometer, MethodInfo* methodInfo), "Assembly-CSharp", "", "Thermometer", "GetRendTemperature", 0)
}