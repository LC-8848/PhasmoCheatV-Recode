#pragma once
#include "../Includes.h"

namespace PhasmoCheatV::Features::Difficulty
{
    class DifficultyModifier final : public FeatureCore
    {
    public:
        DifficultyModifier();
        ~DifficultyModifier() override = default;

        void OnActivate() override {}
        void OnDeactivate() override {}
        void OnRender() override {}
        void OnMenuRender() override;
        void DifficultyModifierApply();

    private:
        void AddSettingToModify(int settingIndex);
        void RemoveSetting(int index);
        void RenderSettingEditor(int index);
        const char* GetConfigKey(int settingIndex) const;

        std::vector<int> m_selectedSettings;
        std::vector<std::pair<std::string, int>> m_availableSettings = {
            {LANG("RequiredLevel"), 0},
            {LANG("SanityPillRestoration"), 1},
            {LANG("StartingSanity"), 2},
            {LANG("SanityDrain"), 3},
            {LANG("Sprinting"), 4},
            {LANG("Flashlights"), 5},
            {LANG("LoseItemsOnDeath"), 6},
            {LANG("PlayerSpeed"), 7},
            {LANG("EvidenceGiven"), 8},
            {LANG("ChangingFavouriteRoom"), 9},
            {LANG("InteractionAmount"), 10},
            {LANG("EventFrequency"), 11},
            {LANG("HuntDuration"), 12},
            {LANG("GracePeriod"), 13},
            {LANG("FingerprintChance"), 14},
            {LANG("FingerprintDuration"), 15},
            {LANG("FriendlyGhost"), 16},
            {LANG("KillsExtendHunt"), 17},
            {LANG("RoamingFrequency"), 18},
            {LANG("GhostSpeed"), 19},
            {LANG("SetupTime"), 20},
            {LANG("SelectedWeather"), 21},
            {LANG("DoorsOpen"), 22},
            {LANG("HidingPlaces"), 23},
            {LANG("SanityMonitor"), 24},
            {LANG("ActivityMonitor"), 25},
            {LANG("FuseBoxVisible"), 26},
            {LANG("FuseBoxStartPower"), 27}
        };
    };
}