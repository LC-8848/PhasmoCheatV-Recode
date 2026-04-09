#include "staminabar.h"

using namespace PhasmoCheatV::Features::Visuals;

StaminaBar::StaminaBar() : FeatureCore(LANG("StaminaBar"), TYPE_VISUALS) {}

void StaminaBar::OnRender()
{
    ImDrawList* draw = ImGui::GetBackgroundDrawList();
    const ImVec2 screen = ImGui::GetIO().DisplaySize;
    float time = (float)ImGui::GetTime();

    const float maxStamina = 3.0f;
    const float ratio = std::clamp(m_StaminaValue / maxStamina, 0.0f, 1.0f);
    int percent = (int)(ratio * 100.0f + 0.5f);

    const float barW = 300.0f;
    const float barH = 16.0f;

    const char* label = LANG("StaminaBar_Stamina");
    std::string title = std::string(label) + "[" + std::to_string(percent) + "%]";

    ImFont* font = ImGui::GetFont();
    const float fontSize = ImGui::GetFontSize();

    ImVec2 textSize = font->CalcTextSizeA(fontSize, FLT_MAX, 0.0f, title.c_str());

    const float left = 18.0f;
    float top = screen.y - textSize.y * 3.0f;

    ImVec2 textPos(left + 12.0f, top);
    ImVec2 barMin(left + 4.0f, top + textSize.y + 4.0f);
    ImVec2 barMax(barMin.x + barW, barMin.y + barH);

    float lineStartX = textPos.x - 8.0f;
    float lineY = barMin.y - 3.0f;
    float lineEndX = lineStartX + textSize.x + 10.0f;

    float pulse = 0.5f + 0.5f * sinf(time * 3.2f);
    int fillBrightness = 235 + (int)(20.0f * pulse);
    int edgeBrightness = 180 + (int)(75.0f * pulse);

    ImU32 textColor = IM_COL32(235, 235, 235, 255);
    ImU32 shadowColor = IM_COL32(0, 0, 0, 170);
    ImU32 lineColor = IM_COL32(190, 190, 190, 190);

    ImU32 barBgColor = IM_COL32(18, 18, 18, 235);
    ImU32 barFillColor = IM_COL32(fillBrightness, fillBrightness, fillBrightness, 255);
    ImU32 barRemainColor = IM_COL32(28, 28, 28, 255);
    ImU32 barBorderColor = IM_COL32(150, 150, 150, 130);

    draw->AddText(font, fontSize, ImVec2(textPos.x + 1, textPos.y + 1), shadowColor, title.c_str());
    draw->AddText(font, fontSize, textPos, textColor, title.c_str());

    draw->AddLine(
        ImVec2(lineStartX, lineY),
        ImVec2(lineEndX, lineY),
        lineColor,
        1.0f
    );

    draw->AddLine(
        ImVec2(lineEndX, lineY),
        ImVec2(lineEndX + 8.0f, lineY - 6.0f),
        lineColor,
        1.0f
    );

    float decoX1 = barMin.x - 4.0f;
    float decoX2 = barMin.x;
    float decoH = barMax.y - barMin.y;

    draw->AddLine(
        ImVec2(decoX1, barMin.y - decoH * 0.10f),
        ImVec2(decoX1, barMax.y + decoH * 0.10f),
        IM_COL32(225, 225, 225, 220),
        1.0f
    );

    draw->AddLine(
        ImVec2(decoX2, barMin.y - decoH * 0.45f),
        ImVec2(decoX2, barMax.y + decoH * 0.45f),
        IM_COL32(225, 225, 225, 220),
        1.0f
    );

    draw->AddRectFilled(barMin, barMax, barBgColor);

    float fillW = barW * ratio;

    if (fillW < barW)
    {
        draw->AddRectFilled(
            ImVec2(barMin.x + fillW, barMin.y),
            barMax,
            barRemainColor
        );
    }

    if (fillW > 0.0f)
    {
        draw->AddRectFilled(
            barMin,
            ImVec2(barMin.x + fillW, barMax.y),
            barFillColor
        );

        draw->AddLine(
            ImVec2(barMin.x, barMin.y + 1),
            ImVec2(barMin.x + fillW, barMin.y + 1),
            IM_COL32(255, 255, 255, 70 + (int)(30 * pulse)),
            1.0f
        );

        draw->AddLine(
            ImVec2(barMin.x + fillW, barMin.y),
            ImVec2(barMin.x + fillW, barMax.y),
            IM_COL32(edgeBrightness, edgeBrightness, edgeBrightness, 110),
            1.0f
        );
    }

    draw->AddRect(
        barMin,
        barMax,
        barBorderColor,
        0.0f,
        0,
        1.0f
    );
}

void StaminaBar::OnMenuRender()
{
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(8, 6));
    bool enabled = IsActive();
    if (ImGui::Checkbox(LANG("StaminaBarEnable"), &enabled))
    {
        SET_CONFIG_VALUE(GetConfigManager(), "Enabled", bool, enabled);
        if (enabled) OnActivate();
        else OnDeactivate();
    }
    ImGui::PopStyleVar();
}

void StaminaBar::GetStaminaValue(SDK::PlayerStamina* playerStamina)
{
	if (IsActive())
		m_StaminaValue = playerStamina->Fields.CurrentStamina;
}