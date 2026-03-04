#pragma once
#include "sdk.h"

namespace SDK
{
    struct RenderArray
    {
        void* Clazz;
        void* Monitor;
        void* Bounds;
        void* MaxLength;
        Render* Vector[65535];
    };

    struct GhostModelFields
    {
        MonoBehaviourPunFields MonoBehaviourPunFields;
        void* ghostAI;
        RenderArray* myRends;
        void* emissionRends;
        void* Fields3;
        Animator* anim;
    };

    struct GhostModel
    {
        void* Clazz;
        void* Monitor;
        GhostModelFields Fields;
    };

    DEC_MET(GhostModel_SetVisibility, void(*)(GhostModel* ghostModel, bool visible, MethodInfo* methodInfo), "Assembly-CSharp", "", "GhostModel", "SetVisibility", 1);
}