#pragma once
#include <map>
#include <string>
#include <optional>
#include <Windows.h>
#include "../libs/imgui/imgui.h"
#include "../features/feature.h"

namespace BindSystem
{
    struct KeyBind
    {
        int Key = 0;
    };

    inline std::map<std::string, KeyBind> Binds;
    inline std::optional<std::string> WaitingBind;

    inline const char* KeyToString(int key)
    {
        static char buffer[32];
        if (key == 0) return "[ None ]";

        UINT scanCode = MapVirtualKeyA(key, MAPVK_VK_TO_VSC);
        LONG lParam = (scanCode << 16);
        if (GetKeyNameTextA(lParam, buffer, 32) > 0)
            return buffer;

        return "Unknown";
    }

    inline std::string ExtractFeatureName(const std::string& fullName)
    {
        size_t pos = fullName.rfind("::");
        if (pos == std::string::npos)
        {
            size_t spacePos = fullName.find_last_of(' ');
            return (spacePos == std::string::npos) ? fullName : fullName.substr(spacePos + 1);
        }
        return fullName.substr(pos + 2);
    }

    inline void ProcessBinds()
    {
        if (WaitingBind.has_value())
        {
            for (int i = 1; i < 256; ++i)
            {
                if (i == VK_LBUTTON || i == VK_RBUTTON || i == VK_MBUTTON) continue;
                if (GetAsyncKeyState(i) & 0x8000)
                {
                    Binds[WaitingBind.value()].Key = i;
                    WaitingBind.reset();
                    break;
                }
            }
            if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
                WaitingBind.reset();

            return;
        }

        for (auto& [uniqueKey, bind] : Binds)
        {
            if (bind.Key == 0) continue;

            if (GetAsyncKeyState(bind.Key) & 1)
            {
                std::string featureName = uniqueKey.substr(0, uniqueKey.find("##"));
                auto* cfg = PhasmoCheatV::GetConfigManagerByName(featureName);
                if (!cfg) continue;

                auto* feature = PhasmoCheatV::MainFeatureHandler->FindFeature(featureName);
                if (!feature) continue;

                bool oldState = feature->IsActive();
                bool newState = !oldState;

                SET_CONFIG_VALUE(feature->GetConfigManager(), "Enabled", bool, newState);

                if (!oldState && newState)
                    feature->OnActivate();
                else if (oldState && !newState)
                    feature->OnDeactivate();
            }
        }
    }

    inline void DrawBindForCheckbox(const std::string& uniqueKey)
    {
        auto& bind = Binds[uniqueKey];
        bool isWaiting = (WaitingBind.has_value() && WaitingBind.value() == uniqueKey);

        float regionWidth = ImGui::GetContentRegionAvail().x;
        ImGui::SameLine(ImGui::GetCursorPosX() + regionWidth - 85.0f);

        std::string buttonText = isWaiting ? "..." : KeyToString(bind.Key);

        char buttonId[128];
        snprintf(buttonId, sizeof(buttonId), "%s##bind_%s", buttonText.c_str(), uniqueKey.c_str());

        if (isWaiting)
        {
            ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0.8f, 0.2f, 0.2f, 1.0f));
            ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0.9f, 0.3f, 0.3f, 1.0f));
        }

        if (ImGui::Button(buttonId, ImVec2(80, 22)))
        {
            if (!WaitingBind.has_value())
                WaitingBind = uniqueKey;
            else if (WaitingBind.value() == uniqueKey)
                WaitingBind.reset();
        }

        if (isWaiting)
            ImGui::PopStyleColor(2);

        if (ImGui::IsItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_Right))
        {
            bind.Key = 0;
            if (isWaiting) WaitingBind.reset();
        }
    }

    inline bool BCheckBoxImpl(const char* label, bool* v, const char* featureClassName, const char* bindId)
    {
        if (!featureClassName || !label || !v || !bindId)
            return false;

        std::string featureName = ExtractFeatureName(featureClassName);
        std::string uniqueKey = featureName + "##" + bindId;

        if (Binds.find(uniqueKey) == Binds.end())
            Binds[uniqueKey] = KeyBind{ 0 };

        bool changed = ImGui::Checkbox(label, v);
        DrawBindForCheckbox(uniqueKey);

        return changed;
    }
}

#define BCheckBox(label, v, bindId) \
    BindSystem::BCheckBoxImpl(label, v, typeid(*this).name(), bindId)