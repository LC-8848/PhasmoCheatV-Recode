#include "../Includes.h"
#include "../features/features_includes.h"

using namespace PhasmoCheatV;

void Hooks::hkVoodooDollPin_Use(SDK::VoodooDollPin* voodooDolPin, void* doll, SDK::Player* pn_player, bool lastPin, bool isNoSanityUse, SDK::MethodInfo* methodInfo)
{
	LOG_CALL("Called VoodooDollPin_Use");

	bool disableHeartPin = GET_FEATURE_CONFIG_VALUE(Cursed, CursedItemsControll, "HeartPinDisable", bool);

	if (disableHeartPin && voodooDolPin->Fields.isHeartPin)
		voodooDolPin->Fields.isHeartPin = false;

	SDK::VoodooDollPin_Use(voodooDolPin, doll, pn_player, lastPin, isNoSanityUse, methodInfo);
}