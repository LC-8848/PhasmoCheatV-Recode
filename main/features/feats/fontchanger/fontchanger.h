#pragma once
#include "../Includes.h"

namespace PhasmoCheatV::Features::Visuals
{
	class FontChanger final : public FeatureCore
	{
	public:
		FontChanger();
		~FontChanger() override = default;

		void OnActivate() override {};
		void OnDeactivate() override {};
		void OnRender() override {};
		void OnMenuRender() override;
		void FontChangerMain();
	};
}
