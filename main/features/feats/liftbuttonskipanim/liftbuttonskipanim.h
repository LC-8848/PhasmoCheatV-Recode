#pragma once
#include "../Includes.h"

namespace PhasmoCheatV::Features::Misc
{
	class LiftButtonSkipAnim final : public FeatureCore
	{
	public:
		LiftButtonSkipAnim();
		~LiftButtonSkipAnim() override = default;

		void OnActivate() override {};
		void OnDeactivate() override {};
		void OnRender() override {};
		void OnMenuRender() override;
		void LiftButtonSkipAnimMain(SDK::LiftButton* liftButton, void* photon, SDK::MethodInfo* methodInfo);
	};
}