#pragma once
#include "sdk.h"

namespace SDK
{
	struct Font;
	struct TMP_FontAsset;

    DEC_MET(Font_ctor, void(*)(Font* self, String* name, MethodInfo* method), "UnityEngine.TextRenderingModule", "UnityEngine", "Font", ".ctor", 1);
    DEC_MET(CreateFontAsset, TMP_FontAsset* (*)(Font* font, MethodInfo* method), "Unity.TextMeshPro", "TMPro", "TMP_FontAsset", "CreateFontAsset", 1);
    DEC_MET(TMP_Text_set_font, void(*)(TMP_Text* self, TMP_FontAsset* value, MethodInfo* method), "Unity.TextMeshPro", "TMPro", "TMP_Text", "set_font", 1);
}