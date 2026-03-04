#pragma once
#include "../Includes.h"

namespace PhasmoCheatV::Features::Misc
{
	class FastThermometer final : public FeatureCore
	{
	public:
		explicit FastThermometer();
		~FastThermometer() override = default;

		void OnActivate() override {}
		void OnDeactivate() override {}
		void OnRender() override {};
		void OnMenuRender() override;
		void FastThermometerMain(SDK::Thermometer* thermometer);
	};
}
