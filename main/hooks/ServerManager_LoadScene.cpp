#include "../Includes.h"
#include "../features/features_includes.h"

using namespace PhasmoCheatV;

void Hooks::hkServerManager_LoadScene(SDK::ServerManager* serverManager, int32_t mapID, int32_t smallMapIndex, int32_t weather, SDK::PhotonMessageInfo* photonMessageInfo, SDK::MethodInfo* methodInfo)
{
	LOG_CALL("Called ServerManager_LoadScene");

	if (GET_ACTIVE(Map, AlwaysBloodMoon))
		weather = 2;

	SDK::ServerManager_LoadScene(serverManager, mapID, smallMapIndex, weather, photonMessageInfo, methodInfo);
}

/* Thank ViniLog for this list of map IDs
TangleWood = 0
13 Willo Street = 4
Edgefield = 1
Ridgeview = 2
NellsDiner = 14
Grafton Farmhouse = 3
Point Hope = 13
HighSchool = 6
Farmhouse = 5
SunnyMeadows = 9
Restricted = 11
Prison = 7
CampsiteLodge = 8
WoodWind = 12
*/