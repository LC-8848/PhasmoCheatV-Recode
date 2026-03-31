#pragma once
#include "sdk.h"

namespace SDK
{
	struct ExitLevelFields
	{
		MonoBehaviourPunFields monoBehaviourPunFields;
		bool isExiting;
		void* trigger;
		void* audioSource;
		void* startExitSound;
		void* stopExitSound;
		void* invisibleWall;
	};

	struct ExitLevel
	{
		void* Clazz;
		void* Monitor;
		ExitLevelFields Fields;
	};

	DEC_MET(ExitLevel_Exit, void(*)(ExitLevel* exitLevel, void* photonMessageInfo, MethodInfo* methodInfo), "Assembly-CSharp", "", "ExitLevel", "Exit", 1);
	DEC_MET(ExitLevel_ThereAreAlivePlayersOutsideTheTruck, bool(*)(ExitLevel* exitLevel, MethodInfo* methodInfo), "Assembly-CSharp", "", "ExitLevel", "ThereAreAlivePlayersOutsideTheTruck", 0);
}
