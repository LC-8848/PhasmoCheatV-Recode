#pragma once
#include "../Includes.h"

namespace PhasmoCheatV::Features::Visuals
{
	class JackalopeESP final : public FeatureCore
	{
	public:
		JackalopeESP();
		~JackalopeESP() override = default;
		void OnActivate() override {}
		void OnDeactivate() override {}
		void OnRender() override;
		void OnMenuRender() override;
	};
}