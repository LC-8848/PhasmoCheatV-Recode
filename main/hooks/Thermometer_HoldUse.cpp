#include "../Includes.h"
#include "../features/features_includes.h"

using namespace PhasmoCheatV;

void Hooks::hkThermometer_HoldUse(SDK::Thermometer* thermometer, SDK::MethodInfo* methodInfo)
{
	LOG_CALL("Called Thermometer_HoldUse");

	CALL_METHOD_IF_ACTIVE_ARGS(Misc, FastThermometer, FastThermometerMain, thermometer);
	SDK::Thermometer_HoldUse(thermometer, methodInfo);
}