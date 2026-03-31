#pragma once
#include "sdk.h"

namespace SDK
{
    struct JackalopeFields
    {
        MonoBehaviourPunFields monoBehaviourPunFields;

        void* jackalopeDotsSignal;
        void* audioSource;
        void* eventItem;
        int32_t attackChance;
        int32_t runAwayChance;
        int32_t attackSanityChange;
        int32_t runAwaySanityChange;
        void* attackClip;
        void* runAwayClip;
        void* triggerHuntClip;
        String* attackAnimTrigger;
        String* runAwayAnimTrigger;
        String* huntAnimTrigger;
        float jackalopeAttackSpeed;
        float jackalopeRunAwaySpeed;
        float completionDelay;
        float runAwayDirectionAvoidTargetAngle;
        float runAwayGhostSpeedModifier;
        float disappearJackalopeAttackTime;
        float disappearJackalopeRunAwayTime;
        float disappearJackalopeTriggerHuntTime;
        float jackalopeDetectionTime;
        bool dropHeldItemsOnAttack;
        float forwardAxisCorrection;
    };

	struct Jackalope
	{
		void* Clazz;
		void* Monitor;
		JackalopeFields Fields;
	};

    DEC_MET(Jackalope_Awake, void(*)(Jackalope* jackalope, MethodInfo* methodInfo), "Assembly-CSharp", "", "Jackalope", "Awake", 0);
}