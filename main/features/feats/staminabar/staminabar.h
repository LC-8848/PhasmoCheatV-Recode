#pragma once
#include "../Includes.h"

namespace PhasmoCheatV::Features::Visuals
{
	class StaminaBar final : public FeatureCore
	{
	public:
		StaminaBar();
		~StaminaBar() override = default;

		void OnActivate() override {}
		void OnDeactivate() override {}
		void OnRender() override;
		void OnMenuRender() override;

		void GetStaminaValue(SDK::PlayerStamina* playerStamina);

	private:
		float m_StaminaValue = 0.0f;
	};
}
