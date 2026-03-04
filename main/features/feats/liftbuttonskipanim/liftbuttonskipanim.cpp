#include "liftbuttonskipanim.h"

using namespace PhasmoCheatV::Features::Misc;

LiftButtonSkipAnim::LiftButtonSkipAnim() : FeatureCore("Skip lift button animation", TYPE_MISC) {}

void LiftButtonSkipAnim::OnMenuRender()
{
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(8, 6));

    bool enabled = IsActive();
    if (ImGui::Checkbox(LANG("LiftButtonSkipAnimEnable"), &enabled))
    {
        SET_CONFIG_VALUE(GetConfigManager(), "Enabled", bool, enabled);
        if (enabled) OnActivate();
        else OnDeactivate();
    }

    ImGui::PopStyleVar();
}

void LiftButtonSkipAnim::LiftButtonSkipAnimMain(SDK::LiftButton* liftButton, void* photon, SDK::MethodInfo* methodInfo)
{
    auto* animator = liftButton->Fields.anim;

    if (IsActive())
    {
        if (animator)
            SDK::Animator_Set_Speed(animator, 65535.f, nullptr);
        else
            LOG_ERROR("Animator is nullptr!");
    }
    else
    {
        if (animator)
            SDK::Animator_Set_Speed(animator, 1.f, nullptr);
        else
            LOG_ERROR("Animator is nullptr!");
    }

    SDK::LiftButton_AttemptUse(liftButton, photon, methodInfo);

    if (IsActive())
        liftButton->Fields.timer = -1.f;
}