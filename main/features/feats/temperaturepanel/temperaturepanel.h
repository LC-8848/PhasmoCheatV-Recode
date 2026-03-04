#pragma once
#include "../Includes.h"

namespace PhasmoCheatV::Features::Visuals
{
	class TemperaturePanel final : public FeatureCore
	{
	public:
		explicit TemperaturePanel();
		~TemperaturePanel() override = default;

		void OnActivate() override {}
		void OnDeactivate() override {}
		void OnRender() override;
		void OnMenuRender() override;
	};
}
