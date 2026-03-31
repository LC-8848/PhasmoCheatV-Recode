#pragma once
#include "../Includes.h"

namespace PhasmoCheatV::Features::Visuals
{
    class GhostESP final : public FeatureCore
    {
    public:
        GhostESP();
        ~GhostESP() override = default;

        void OnActivate() override {}
        void OnDeactivate() override {}
        void OnRender() override;
        void OnMenuRender() override;

        static void SetD3D11Device(ID3D11Device* device);
    private:
        void Draw2DBox(const SDK::GhostAI* ghostAI, const ImColor& color, float thickness);
        void DrawCornerBox(const SDK::GhostAI* ghostAI, const ImColor& color, float thickness);
        void DrawName(const SDK::GhostAI* ghostAI, const ImColor& color);
        void DrawFilledBox(const SDK::GhostAI* ghostAI, const ImColor& color, float thickness);
        void DrawSkeleton(const SDK::GhostAI* ghostAI, const ImColor& color, float thickness);

        void LoadAvailablePhotos();
        bool LoadTexture(const std::string& filename, ID3D11ShaderResourceView** out_srv, int* out_width, int* out_height);
        void DrawPhotoESP(const SDK::GhostAI* ghostAI);
        void CleanupTextures();

        struct TextureData {
            ID3D11ShaderResourceView* SRV = nullptr;
            int Width = 0;
            int Height = 0;
        };
        std::unordered_map<std::string, TextureData> loadedTextures;

        static ID3D11Device* g_pd3dDevice;

        std::vector<std::string> availablePhotos;
    };
}