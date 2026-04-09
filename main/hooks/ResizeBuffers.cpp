#include "../includes.h"

HRESULT __stdcall Hooks::HkResizeBuffers(IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags)
{
	Renderer::CleanupImGuiAndDX();
	menu.Initialized = false;
	return hooking->OriginalResizeBuffers(pSwapChain, BufferCount, Width, Height, NewFormat, SwapChainFlags);
}