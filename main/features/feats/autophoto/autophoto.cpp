#include "autophoto.h"

using namespace PhasmoCheatV::Features::Misc;

AutoPhoto::AutoPhoto() : FeatureCore("Auto Photo", TYPE_MISC) {}

void AutoPhoto::OnMenuRender()
{
	bool enabled = IsActive();

	if (BCheckBox(LANG("AutoPhotoEnable"), &enabled))
	{
		SET_CONFIG_VALUE(GetConfigManager(), "Enabled", bool, enabled);
		if (enabled) OnActivate();
		else OnDeactivate();
	}

	if (enabled)
		ImGui::Text(LANG("WarningAutoPhoto"));
}

void AutoPhoto::AutoPhotoMain()
{
	if (!IsActive())
		return;

	if (!Globals::isHunting)
		return;

	auto* localPlayer = Utils::GetLocalPlayer(); if (!localPlayer) return;
	auto* ghostAI = InGame::ghostAI; if (!ghostAI) return;
	auto* ghostTransform = ghostAI->Fields.raycastPoint; if (!ghostTransform) return;

	auto* PhotoCamera = Utils::get_PlayerHandCamera(localPlayer); if (!PhotoCamera) return;

	if (!Utils::IsPlayerVisibleGhost(localPlayer->Fields.Camera, ghostTransform))
		return;

	if (!Utils::IsGhostVisible(ghostAI))
		return;

    auto* g_obj_camera = SDK::Component_Get_GameObject(reinterpret_cast<SDK::Component*>(PhotoCamera), nullptr); if (!g_obj_camera) return;
	auto photonViewType = SDK::System_Type_GetType(Utils::SysStrToUnityStr("Photon.Pun.PhotonView"), nullptr); if (!photonViewType) return;
	auto* photonViewComp = SDK::GameObject_GetComponent(g_obj_camera, photonViewType, nullptr); if (!photonViewComp) return;
	auto* photonView = reinterpret_cast<SDK::PhotonView*>(photonViewComp); if (!photonView) return;
	auto* messageInfo = Utils::CreatePhotonMessageInfo(photonView); if (!messageInfo) return;

	SDK::HandCamera_UseNetworked(PhotoCamera, true, messageInfo, nullptr);
}
