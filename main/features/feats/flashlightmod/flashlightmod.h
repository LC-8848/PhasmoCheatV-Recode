#pragma once
#include "../Includes.h"

namespace PhasmoCheatV::Features::Misc
{
	class FlashLightModifier final : public FeatureCore
	{
	public:
		FlashLightModifier();
		~FlashLightModifier() override = default;

		void OnActivate() override;
		void OnDeactivate() override;
		void OnRender() override {};
		void OnMenuRender() override;
	};
}
