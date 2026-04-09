#pragma once
#include "../Includes.h"

using Id3DPresent = HRESULT(__stdcall*)(IDXGISwapChain* this_, UINT sync_, UINT flags_);
using Id3DResizeBuffers = HRESULT(__stdcall*)(IDXGISwapChain* this_, UINT bufferCount_, UINT width_, UINT height_, DXGI_FORMAT newFormat_, UINT swapChainFlags_);

namespace PhasmoCheatV
{
	class Hooking
	{
		friend Hooks;

	public:
		explicit Hooking();
		~Hooking();

		void AddHook(const std::string& functionName, PVOID* originalFunction, PVOID hookFunction);
		void ApplyHooks() const;
		void RemoveHooks() const;
		Id3DPresent OriginalPresent{};
		Id3DResizeBuffers OriginalResizeBuffers{};
		WNDPROC OriginalWndproc{};

	private:
		std::vector<std::tuple<std::string, PVOID*, PVOID>> hooks_;
	};

	inline Hooking* hooking{};
}

#define AHK(orig, hook) PhasmoCheatV::hooking->AddHook(#orig, reinterpret_cast<PVOID*>(&(orig)), reinterpret_cast<PVOID>(hook))
#define AHKA(name) AHK(SDK::name, Hooks::hk##name)
#define PHK(NAME, HOOK) \
    PhasmoCheatV::hooking->AddHook( \
        #NAME, \
        reinterpret_cast<PVOID*>(&SDK::GetOriginal_##NAME()), \
        reinterpret_cast<PVOID>(HOOK) \
    )