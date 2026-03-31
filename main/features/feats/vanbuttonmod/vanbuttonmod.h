#pragma once
#include "../Includes.h"

namespace PhasmoCheatV::Features::Map
{
	class VanButtonModifier final : public FeatureCore
	{
	public:
		VanButtonModifier();
		~VanButtonModifier() override = default;

		void OnActivate() override {};
		void OnDeactivate() override {};
		void OnRender() override {};
		void OnMenuRender() override;
		void VanButtonModifierMain(SDK::LiftButton* liftButton, void* photon, SDK::MethodInfo* methodInfo);
		void AutoOpenVanDoor(SDK::LiftButton* liftButton);
	};
}