#pragma once
#include "../Includes.h"

namespace PhasmoCheatV::Features::Map
{
	class AlwaysBloodMoon final : public FeatureCore
	{
	public:
		AlwaysBloodMoon();
		~AlwaysBloodMoon() override = default;

		void OnActivate() override {}
		void OnDeactivate() override {}
		void OnRender() override {}
		void OnMenuRender() override;
	};
}
