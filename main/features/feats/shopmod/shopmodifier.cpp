#include "shopmodifier.h"

using namespace PhasmoCheatV::Features::Misc;

ShopModifier::ShopModifier() : FeatureCore(LANG("ShopModifier"), TYPE_MISC)
{
    DECLARE_CONFIG(GetConfigManager(), "SkipShopTutorials", bool, false);
    DECLARE_CONFIG(GetConfigManager(), "CustomCost", bool, false);
    DECLARE_CONFIG(GetConfigManager(), "CustomCount", bool, false);
    DECLARE_CONFIG(GetConfigManager(), "CustomUpgradeCost", bool, false);
    DECLARE_CONFIG(GetConfigManager(), "CustomRequiredLevel", bool, false);
    DECLARE_CONFIG(GetConfigManager(), "CustomCostValue", int32_t, 100);
    DECLARE_CONFIG(GetConfigManager(), "CustomCountValue", int32_t, 100);
    DECLARE_CONFIG(GetConfigManager(), "CustomUpgradeCostValue", int32_t, 100);
    DECLARE_CONFIG(GetConfigManager(), "CustomRequiredLevelValue", int32_t, 1);
}

void ShopModifier::OnMenuRender()
{
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(8, 6));

    bool enabled = IsActive();
    bool skipShopTutorials = CONFIG_BOOL(GetConfigManager(), "SkipShopTutorials");
    bool customCost = CONFIG_BOOL(GetConfigManager(), "CustomCost");
    bool customCount = CONFIG_BOOL(GetConfigManager(), "CustomCount");
    bool customUpgradeCost = CONFIG_BOOL(GetConfigManager(), "CustomUpgradeCost");
    bool customRequiredLevel = CONFIG_BOOL(GetConfigManager(), "CustomRequiredLevel");

    int32_t customCostValue = CONFIG_INT(GetConfigManager(), "CustomCostValue");
    int32_t customCountValue = CONFIG_INT(GetConfigManager(), "CustomCountValue");
    int32_t customUpgradeCostValue = CONFIG_INT(GetConfigManager(), "CustomUpgradeCostValue");
    int32_t customRequiredLevelValue = CONFIG_INT(GetConfigManager(), "CustomRequiredLevelValue");

    if (ImGui::Checkbox(LANG("EnableShopModifier"), &enabled))
    {
        SET_CONFIG_VALUE(GetConfigManager(), "Enabled", bool, enabled);
        if (enabled) OnActivate();
        else OnDeactivate();
    }

    if (enabled)
    {
        if (ImGui::Checkbox(LANG("SkipShopTutorials"), &skipShopTutorials))
            SET_CONFIG_VALUE(GetConfigManager(), "SkipShopTutorials", bool, skipShopTutorials);

        if (ImGui::Checkbox(LANG("CustomCost"), &customCost))
            SET_CONFIG_VALUE(GetConfigManager(), "CustomCost", bool, customCost);

        if (customCost)
        {
            if (ImGui::SliderInt(LANG("CustomCostValue"), &customCostValue, 0, 1000000))
                SET_CONFIG_VALUE(GetConfigManager(), "CustomCostValue", int32_t, customCostValue);
        }

        if (ImGui::Checkbox(LANG("CustomCount"), &customCount))
            SET_CONFIG_VALUE(GetConfigManager(), "CustomCount", bool, customCount);

        if (customCount)
        {
            if (ImGui::SliderInt(LANG("CustomCountValue"), &customCountValue, 0, 999))
                SET_CONFIG_VALUE(GetConfigManager(), "CustomCountValue", int32_t, customCountValue);
        }

        if (ImGui::Checkbox(LANG("CustomUpgradeCost"), &customUpgradeCost))
            SET_CONFIG_VALUE(GetConfigManager(), "CustomUpgradeCost", bool, customUpgradeCost);

        if (customUpgradeCost)
        {
            if (ImGui::SliderInt(LANG("CustomUpgradeCostValue"), &customUpgradeCostValue, 0, 1000000))
                SET_CONFIG_VALUE(GetConfigManager(), "CustomUpgradeCostValue", int32_t, customUpgradeCostValue);
        }

        if (ImGui::Checkbox(LANG("CustomRequiredLevel"), &customRequiredLevel))
            SET_CONFIG_VALUE(GetConfigManager(), "CustomRequiredLevel", bool, customRequiredLevel);

        if (customRequiredLevel)
        {
            if (ImGui::SliderInt(LANG("CustomRequiredLevelValue"), &customRequiredLevelValue, 0, 999))
                SET_CONFIG_VALUE(GetConfigManager(), "CustomRequiredLevelValue", int32_t, customRequiredLevelValue);
        }
    }

    ImGui::PopStyleVar();
}

void ShopModifier::OnActivate()
{
    if (running.load()) return;

    running.store(true);
    workerThread = std::thread([this]()
        {
            while (running.load())
            {
                ShopModifierMain();
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
            }
        });
}

void ShopModifier::OnDeactivate()
{
    if (!running.load()) return;

    running.store(false);
    if (workerThread.joinable())
        workerThread.join();
}

void ShopModifier::ShopModifierMain()
{
    if (!IsActive())
        return;

    if (InGame::ghostAI)
        return;

    if (CONFIG_BOOL(GetConfigManager(), "SkipShopTutorials"))
    {
        auto* shop = Utils::FindObjectByName("Shop Tutorial");
        auto* storage = Utils::FindObjectByName("Storage Tutorial");
        auto* loadout = Utils::FindObjectByName("Loadout Tutorial");

        if (shop) {
            if (SDK::GameObject_get_activeSelf(shop, nullptr)) {
                SDK::GameObject_SetActive(shop, false, nullptr);
            }
        }
        if (storage) {
            if (SDK::GameObject_get_activeSelf(storage, nullptr)) {
                SDK::GameObject_SetActive(storage, false, nullptr);
            }
        }
        if (loadout) {
            if (SDK::GameObject_get_activeSelf(loadout, nullptr)) {
                SDK::GameObject_SetActive(loadout, false, nullptr);
            }
        }
    }

    if (CONFIG_BOOL(GetConfigManager(), "CustomCost"))
    {
        auto* storeInfo = Utils::GetStoreItemInfo();
        if (!storeInfo) {
            return;
        }

        auto* item = storeInfo->Fields.ItemInfoFields.item;
        if (!item) {
            return;
        }

        item->Fields.cost = CONFIG_INT(GetConfigManager(), "CustomCostValue");
    }

    if (CONFIG_BOOL(GetConfigManager(), "CustomCount"))
    {
        auto* storeInfo = Utils::GetStoreItemInfo();
        if (!storeInfo) {
            return;
        }

        auto* item = storeInfo->Fields.ItemInfoFields.item;
        if (!item) {
            return;
        }

        item->Fields.m_amountOwned = CONFIG_INT(GetConfigManager(), "CustomCountValue");
    }

    if (CONFIG_BOOL(GetConfigManager(), "CustomUpgradeCost"))
    {
        auto* storeInfo = Utils::GetStoreItemInfo();
        if (!storeInfo) {
            return;
        }

        auto* item = storeInfo->Fields.ItemInfoFields.item;
        if (!item) {
            return;
        }

        item->Fields.upgradeCost = CONFIG_INT(GetConfigManager(), "CustomUpgradeCostValue");
    }

    if (CONFIG_BOOL(GetConfigManager(), "CustomRequiredLevel"))
    {
        auto* storeInfo = Utils::GetStoreItemInfo();
        if (!storeInfo) {
            return;
        }

        auto* item = storeInfo->Fields.ItemInfoFields.item;
        if (!item) {
            return;
        }

        item->Fields.requiredLevel = CONFIG_INT(GetConfigManager(), "CustomRequiredLevelValue");
    }
}