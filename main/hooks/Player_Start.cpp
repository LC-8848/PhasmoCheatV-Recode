#include "../Includes.h"
#include "../features/features_includes.h"

using namespace PhasmoCheatV;

void Hooks::hkPlayer_Start(SDK::Player* player, SDK::MethodInfo* methodInfo)
{
	LOG_CALL("Called Player_Start");

	CALL_METHOD_IF_ACTIVE(Visuals, FontChanger, FontChangerMain);

	SDK::Player_Start(player, methodInfo);
}