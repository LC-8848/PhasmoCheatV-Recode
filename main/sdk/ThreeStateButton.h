#pragma once
#include "sdk.h"

namespace SDK
{
	enum ThreeStateButtonState : int32_t
	{
		Empty,
		Ticked, // Select
		CrossedOut // UnSelect
	};

	struct ThreeStateButtonFields
	{
		MonoBehaviourFields MonoBehaviourFields;
		void* button;
		void* tickedImage;
		void* crossdOutImage;
		void* textLabel;
		ThreeStateButtonState currentState;
		void* journalController;
		void* OnStateChanged;
	};

	struct ThreeStateButton 
	{
		void* Clazz;
		void* Monitor;
		ThreeStateButtonFields Fields;
	};
}