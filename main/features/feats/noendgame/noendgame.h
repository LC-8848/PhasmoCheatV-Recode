#pragma once
#include "../Includes.h"

namespace PhasmoCheatV::Features::Misc
{
	class NoEndGame final : public FeatureCore
	{
	public:
		explicit NoEndGame();
		~NoEndGame() override = default;

		void OnActivate() override {}
		void OnDeactivate() override {};
		void OnRender() override {}
		void OnMenuRender() override;
		void NoEndGameMain(SDK::GameController* gameController, SDK::Player* player, SDK::MethodInfo* methodInfo);
	};
}