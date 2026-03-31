#pragma once
#include "sdk.h"

namespace SDK
{
	struct CursedItemFields
	{
		char pad_000[0x1B8];
		bool InUse;
		bool HasBreak;
		bool hasInitialised;
	};
	
	struct CursedItem
	{
		void* Clazz;
		void* Monitor;
		CursedItemFields Fields;
	};

	DEC_MET(CursedItem_Use, void(*)(CursedItem* cursedItem, MethodInfo* methodInfo), "Assembly-CSharp", "", "CursedItem", "Use", 0);
	DEC_MET(CursedItem_BreakItem, void(*)(CursedItem* cursedItem, MethodInfo* methodInfo), "Assembly-CSharp", "", "CursedItem", "BreakItem", 0);
}
