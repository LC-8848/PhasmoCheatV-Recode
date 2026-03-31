#pragma once
#include "sdk.h"

namespace SDK
{
	struct Torch;

	DEC_PATTERN_INSTR(Jnz_if_isNearActiveGhost, L"GameAssembly.dll", "il2cpp", "75 ? 80 BB ? ? ? ? 00 75 ? 48 8B 8B"); // jnz short loc_67F0C5 (Torch$$Update)
	DEC_PATTERN_INSTR(Jnz_if_flashlights, L"GameAssembly.dll", "il2cpp", "75 ? 48 8B 43 ? 48 85 C0 0F 84 ? ? ? ? C6 80 ? ? ? ? 00 48 8B 5C 24"); // jnz short loc_67F2E9 (Torch$$UseNetworked)
}