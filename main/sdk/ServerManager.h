#pragma once
#include "sdk.h"

namespace SDK
{
	struct ServerManagerFields
	{
		char pad_000[0xD0];
		TextMeshProUGUI* readyText;
	};

	struct ServerManager
	{
		void* Clazz;
		void* Monitor;
		ServerManagerFields Fields;
	};

	DEC_MET(ServerManager_KickPlayerNetworked, void(*)(ServerManager* serverManager, bool isBanned, void* photonMessageInfo, MethodInfo* methodInfo), "Assembly-CSharp", "", "ServerManager", "KickPlayerNetworked", 2);
	DEC_MET(ServerManager_StartGame, void(*)(ServerManager* serverManager, MethodInfo* methodInfo), "Assembly-CSharp", "", "ServerManager", "StartGame", 0);
	DEC_MET(ServerManager_Ready, void(*)(ServerManager* serverManager, bool on, MethodInfo* methodInfo), "Assembly-CSharp", "", "ServerManager", "Ready", 1);
	DEC_MET(ServerManager_LoadScene, void(*)(ServerManager* serverManager, int32_t mapID, int32_t smallMapIndex, int32_t weather, PhotonMessageInfo* photonMessageInfo, MethodInfo* methodInfo), "Assembly-CSharp", "", "ServerManager", "LoadScene", 4) // WARNING! WEATHER = 1-3 (1 → Snow; 2 → BloodMoon; 3 → HeavyRain)
}
