#pragma once
#include "../Includes.h"

namespace PhasmoCheatV::Features::Players
{
    class CrosshairModifier final : public FeatureCore
    {
    public:
        explicit CrosshairModifier();
        ~CrosshairModifier() override = default;

        void OnActivate() override {}
        void OnDeactivate() override {}
        void OnRender() override {}
        void OnMenuRender() override;
        void CrosshairModifierMain();
    };
}