#include "autopickupbone.h"

using namespace PhasmoCheatV::Features::Map;

AutoPickupBone::AutoPickupBone() : FeatureCore("Auto pickup bone", TYPE_MAP) {}

void AutoPickupBone::OnMenuRender()
{
    bool enabled = IsActive();
    if (ImGui::Checkbox(LANG("AutoPickupBoneEnable"), &enabled))
    {
        SET_CONFIG_VALUE(GetConfigManager(), "Enabled", bool, enabled);
        if (enabled) OnActivate();
        else OnDeactivate();
    }
}