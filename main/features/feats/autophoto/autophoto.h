#pragma once
#include "../Includes.h"

namespace PhasmoCheatV::Features::Misc
{
	class AutoPhoto final : public FeatureCore
	{
	public:
		explicit AutoPhoto();
		~AutoPhoto() override = default;

		void OnActivate() override {}
		void OnDeactivate() override {}
		void OnRender() override {}
		void OnMenuRender() override;
		void AutoPhotoMain();
	};
}
