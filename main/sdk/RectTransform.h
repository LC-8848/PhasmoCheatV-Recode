#pragma once
#include "../Includes.h"

namespace SDK
{
	struct RectTransform;

	DEC_MET(RectTransform_set_sizeDelta, void(*)(RectTransform* rectTransform, Vector2 value, MethodInfo* methodInfo), "UnityEngine.CoreModule", "UnityEngine", "RectTransform", "set_sizeDelta", 1);
	DEC_MET(RectTransform_get_sizeDelta, Vector2(*)(RectTransform* rectTransform, MethodInfo* methodInfo), "UnityEngine.CoreModule", "UnityEngine", "RectTransform", "get_sizeDelta", 0);
}