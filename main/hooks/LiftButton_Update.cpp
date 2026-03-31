#include "../Includes.h"
#include "../features/features_includes.h"

using namespace PhasmoCheatV;

void Hooks::hkLiftButton_Update(SDK::LiftButton* liftButton, SDK::MethodInfo* methodInfo)
{
	LOG_CALL_UPDATE("Called LiftButton_Update");

	SDK::LiftButton_Update(liftButton, methodInfo);

	CALL_METHOD_IF_ACTIVE_ARGS(Map, VanButtonModifier, AutoOpenVanDoor, liftButton);
}