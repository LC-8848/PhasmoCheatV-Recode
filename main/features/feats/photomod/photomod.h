#pragma once
#include "../Includes.h"

namespace PhasmoCheatV::Features::Misc
{
	class PhotoModifier final : public FeatureCore
	{
	public:
		PhotoModifier();
		~PhotoModifier() override = default;

		void OnActivate() override;
		void OnDeactivate() override;
		void OnRender() override {}
		void OnMenuRender() override;
		void PhotoModifierAutoPhoto();
		void PhotoModifierMain(SDK::HandCamera* handCamera);
		void PhotoModifierX5Photo(SDK::PhotonView* photonView, SDK::String* methodName, SDK::RpcTarget target, void* parameters, SDK::MethodInfo* methodInfo);
	};
}