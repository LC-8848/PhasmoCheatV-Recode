#include "../Includes.h"
#include "../features/features_includes.h"

using namespace PhasmoCheatV;

void Hooks::hkGameController_PlayerDied(SDK::GameController* gameController, SDK::Player* player, SDK::MethodInfo* methodInfo)
{
	LOG_CALL("Called GameController_PlayerDied");

	CALL_METHOD_ARGS(Misc, NoEndGame, NoEndGameMain, gameController, player, methodInfo);
}