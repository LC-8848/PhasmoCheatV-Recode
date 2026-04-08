#include "staminabar.h"

using namespace PhasmoCheatV::Features::Visuals;

StaminaBar::StaminaBar() : FeatureCore(LANG("StaminaBar"), TYPE_VISUALS) {}

void StaminaBar::OnRender()
{
    ImDrawList* draw = ImGui::GetBackgroundDrawList();
    const ImVec2 screen = ImGui::GetIO().DisplaySize;

    const float maxStamina = 3.0f;
    const float ratio = std::clamp(m_StaminaValue / maxStamina, 0.0f, 1.0f);

    const float skew = 10.0f;
    const ImVec2 barSize(190.0f, 20.0f);

    float time = (float)ImGui::GetTime();
    float breath = 0.5f + 0.5f * sinf(time * 2.8f);
    float pulse = 0.5f + 0.5f * sinf(time * 5.5f);

    const char* text = LANG("StaminaBar_Stamina");
    ImFont* font = ImGui::GetFont();
    const float fontSize = ImGui::GetFontSize() * 1.1f;

    ImVec2 textSize = font->CalcTextSizeA(fontSize, FLT_MAX, 0.0f, text);

    const float textLeft = 20.0f;
    const float gap = 20.0f;

    ImVec2 barPos(
        textLeft + textSize.x + gap,
        screen.y - 42.0f);

    auto lerpColor = [](ImU32 a, ImU32 b, float t) -> ImU32
        {
            t = std::clamp(t, 0.0f, 1.0f);

            int ar = (a >> IM_COL32_R_SHIFT) & 0xFF;
            int ag = (a >> IM_COL32_G_SHIFT) & 0xFF;
            int ab = (a >> IM_COL32_B_SHIFT) & 0xFF;
            int aa = (a >> IM_COL32_A_SHIFT) & 0xFF;

            int br = (b >> IM_COL32_R_SHIFT) & 0xFF;
            int bg = (b >> IM_COL32_G_SHIFT) & 0xFF;
            int bb = (b >> IM_COL32_B_SHIFT) & 0xFF;
            int ba = (b >> IM_COL32_A_SHIFT) & 0xFF;

            return IM_COL32(
                (int)(ar + (br - ar) * t),
                (int)(ag + (bg - ag) * t),
                (int)(ab + (bb - ab) * t),
                (int)(aa + (ba - aa) * t));
        };

    auto gradient3 = [&](float t) -> ImU32
        {
            ImU32 c1 = IM_COL32(40, 170, 255, 235);
            ImU32 c2 = IM_COL32(120, 70, 255, 240);
            ImU32 c3 = IM_COL32(80, 255, 255, 245);

            if (t < 0.5f)
                return lerpColor(c1, c2, t * 2.0f);

            return lerpColor(c2, c3, (t - 0.5f) * 2.0f);
        };

    auto addSegment = [&](float x0, float x1, ImU32 col)
        {
            ImVec2 p0(barPos.x + skew + x0, barPos.y);
            ImVec2 p1(barPos.x + skew + x1, barPos.y);
            ImVec2 p2(barPos.x + x1, barPos.y + barSize.y);
            ImVec2 p3(barPos.x + x0, barPos.y + barSize.y);
            draw->AddQuadFilled(p0, p1, p2, p3, col);
        };

    ImVec2 bg0(barPos.x + skew, barPos.y);
    ImVec2 bg1(barPos.x + barSize.x + skew, barPos.y);
    ImVec2 bg2(barPos.x + barSize.x, barPos.y + barSize.y);
    ImVec2 bg3(barPos.x, barPos.y + barSize.y);

    draw->AddQuadFilled(
        ImVec2(bg0.x - 12, bg0.y - 8),
        ImVec2(bg1.x + 12, bg1.y - 8),
        ImVec2(bg2.x + 12, bg2.y + 8),
        ImVec2(bg3.x - 12, bg3.y + 8),
        IM_COL32(70, 110, 255, 15 + (int)(25 * breath)));

    draw->AddQuadFilled(bg0, bg1, bg2, bg3, IM_COL32(8, 12, 28, 220));

    float fillWidth = barSize.x * ratio;

    if (fillWidth > 0.0f)
    {
        const int slices = 96;

        for (int i = 0; i < slices; ++i)
        {
            float fullT0 = (float)i / slices;
            float fullT1 = (float)(i + 1) / slices;

            float x0 = barSize.x * fullT0;
            float x1 = barSize.x * fullT1;

            if (x0 >= fillWidth)
                break;

            x1 = min(x1, fillWidth);

            float gradientT = (x0 + x1) * 0.5f / barSize.x;
            ImU32 col = gradient3(gradientT);

            float scan = fmodf(time * 110.0f, barSize.x + 60.0f) - 30.0f;
            float dist = fabsf(((x0 + x1) * 0.5f) - scan);
            float shine = std::clamp(1.0f - dist / 18.0f, 0.0f, 1.0f);

            if (shine > 0.0f)
                col = lerpColor(col, IM_COL32(255, 255, 255, 255), shine * 0.55f);

            addSegment(x0, x1, col);
        }

        float edgeGlowX = fillWidth;
        if (edgeGlowX > 4.0f)
        {
            float glowW = 4.0f + 3.0f * breath;
            addSegment(
                max(0.0f, edgeGlowX - glowW),
                edgeGlowX,
                IM_COL32(220, 240, 255, 120 + (int)(80 * pulse)));
        }
    }

    draw->AddLine(
        ImVec2(barPos.x + skew + 4, barPos.y + 3),
        ImVec2(barPos.x + skew + barSize.x - 8, barPos.y + 3),
        IM_COL32(255, 255, 255, 28),
        1.0f);

    draw->AddQuad(
        ImVec2(bg0.x - 2, bg0.y - 2),
        ImVec2(bg1.x + 2, bg1.y - 2),
        ImVec2(bg2.x + 2, bg2.y + 2),
        ImVec2(bg3.x - 2, bg3.y + 2),
        IM_COL32(90, 170, 255, 90 + (int)(100 * breath)),
        2.0f);

    draw->AddQuad(
        bg0, bg1, bg2, bg3,
        IM_COL32(180, 210, 255, 150 + (int)(80 * pulse)),
        1.5f);

    ImVec2 textPos(
        textLeft,
        barPos.y + (barSize.y - textSize.y) * 0.5f);

    for (int ox = -2; ox <= 2; ++ox)
    {
        for (int oy = -2; oy <= 2; ++oy)
        {
            if (ox == 0 && oy == 0)
                continue;

            draw->AddText(
                font,
                fontSize,
                ImVec2(textPos.x + ox * 0.5f, textPos.y + oy * 0.5f),
                IM_COL32(5, 15, 40, 220),
                text);
        }
    }

    draw->AddText(
        font,
        fontSize,
        textPos,
        IM_COL32(235, 245, 255, 255),
        text);
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