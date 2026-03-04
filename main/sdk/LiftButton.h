#pragma once
#include "sdk.h"

namespace SDK
{
	struct LiftButtonFields
	{
		MonoBehaviourFields monoBehaviourFields;
		Animator* anim;
		void* photonView;
		void* photonInteract;
		void* source;
		void* exitLevel;
		void* truckRamp;
		float timer;
		bool isAnimating;
		bool isClosed;
		void* wallCollider;
		bool canClose;
		bool isSingleUse;
		bool hasUsed;
	};

	struct LiftButton
	{
		void* Clazz;
		void* Monitor;
		LiftButtonFields Fields;
	};

	DEC_MET(LiftButton_AttemptUse, void(*)(LiftButton* liftButton, void* photonMessageInfo, MethodInfo* methodInfo), "Assembly-CSharp", "", "LiftButton", "AttemptUse", 1);
}