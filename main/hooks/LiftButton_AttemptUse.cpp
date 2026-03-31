#include "../Includes.h"
#include "../features/features_includes.h"

using namespace PhasmoCheatV;

void Hooks::hkLiftButton_AttemptUse(SDK::LiftButton* liftButton, void* photon, SDK::MethodInfo* methodInfo)
{
	LOG_CALL("Called LiftButton_AttemptUse");

	CALL_METHOD_ARGS(Map, VanButtonModifier, VanButtonModifierMain, liftButton, photon, methodInfo);
}