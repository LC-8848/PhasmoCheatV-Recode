#pragma once
#include "../Includes.h"

namespace PhasmoCheatV::Features::Visuals
{
	class GhostPanel final : public FeatureCore
	{
	public:
		GhostPanel();
		~GhostPanel() override = default;

		void OnActivate() override {}
		void OnDeactivate() override {}
		void OnRender() override;
		void OnMenuRender() override;
		void DrawHiddenValue(float width = 120.0f, float height = 18.0f);

	private:
		static std::string GetGhostEvidenceString();
	};
}
