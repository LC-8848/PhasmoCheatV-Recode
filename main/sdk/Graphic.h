#pragma once
#include "../Includes.h"

namespace SDK
{
	struct Graphic;

	DEC_MET(Graphic_set_Color, void(*)(Graphic* graphic, Color color, MethodInfo* methodInfo), "UnityEngine.UI", "UnityEngine.UI", "Graphic", "set_color", 1);
}