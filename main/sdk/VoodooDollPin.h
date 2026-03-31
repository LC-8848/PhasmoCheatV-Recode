#pragma once
#include "sdk.h"

namespace SDK
{
	struct VoodooDollPinFields
	{
		MonoBehaviourFields MonoBehaviourFields;
		bool isHeartPin;
		void* moveTo;
		void* allJoints;
		void* voodooDoll;
		void* pinSequence;
	};

	struct VoodooDollPin
	{
		void* Clazz;
		void* Monitor;
		VoodooDollPinFields Fields;
	};

	DEC_MET(VoodooDollPin_Use, void(*)(VoodooDollPin* voodooDolPin, void* doll, Player* pn_player, bool lastPin, bool isNoSanityUse, MethodInfo* methodInfo), "Assembly-CSharp", "", "VoodooDollPin", "Use", 4);
}