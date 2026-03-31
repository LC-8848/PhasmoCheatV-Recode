#pragma once
#include "sdk.h"

namespace SDK
{
	struct Texture2D;
	struct Texture;

	// Texture
	DEC_MET(Texture_get_width, int32_t(*)(Texture* texture, MethodInfo* methodInfo), "UnityEngine.CoreModule", "UnityEngine", "Texture", "get_width", 0);
	DEC_MET(Texture_get_height, int32_t(*)(Texture* texture, MethodInfo* methodInfo), "UnityEngine.CoreModule", "UnityEngine", "Texture", "get_height", 0);

	// Texture2D
	DEC_MET(Texture2D_Apply, void(*)(Texture2D* texture2d, MethodInfo* methodInfo), "UnityEngine.CoreModule", "UnityEngine", "Texture2D", "Apply", 0);
	DEC_MET(Texture2D_SetPixels, void(*)(Texture2D* texture2d, void* ColorArray, MethodInfo* methodInfo), "UnityEngine.CoreModule", "UnityEngine", "Texture2D", "SetPixels", 1);
	DEC_MET(Texture2D_get_isReadable, bool(*)(Texture2D* texture2d, MethodInfo* methodInfo), "UnityEngine.CoreModule", "UnityEngine", "Texture2D", "get_isReadable", 0);
}