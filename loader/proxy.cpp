#include "proxy.h"
#include <string>
#include "../Includes.h"

#define REAL_D3D11 "C:\\Windows\\System32\\d3d11.dll"

static HMODULE hRealD3D11 = nullptr;

void Proxy::LoadRealD3D11()
{
    if (!hRealD3D11)
    {
        hRealD3D11 = LoadLibraryA(REAL_D3D11);
    }
}

void Proxy::Initialize(HMODULE hModule)
{
    if (IsProxyMode(hModule))
    {
        LoadRealD3D11();
    }
}

void Proxy::Shutdown()
{
    if (hRealD3D11)
    {
        FreeLibrary(hRealD3D11);
        hRealD3D11 = nullptr;
    }
}

#define EXPORT_FUNC(func, ordinal) \
    __pragma(comment(linker, "/export:" #func "=" REAL_D3D11 "." #func ",@" #ordinal))

EXPORT_FUNC(CreateDirect3D11DeviceFromDXGIDevice, 16)
EXPORT_FUNC(CreateDirect3D11SurfaceFromDXGISurface, 17)
EXPORT_FUNC(D3D11CoreCreateDevice, 18)
EXPORT_FUNC(D3D11CoreCreateLayeredDevice, 19)
EXPORT_FUNC(D3D11CoreGetLayeredDeviceSize, 20)
EXPORT_FUNC(D3D11CoreRegisterLayers, 21)
EXPORT_FUNC(D3D11CreateDevice, 22)
EXPORT_FUNC(D3D11CreateDeviceAndSwapChain, 23)
EXPORT_FUNC(D3D11CreateDeviceForD3D12, 1)
EXPORT_FUNC(D3D11On12CreateDevice, 24)
EXPORT_FUNC(D3DKMTCloseAdapter, 2)
EXPORT_FUNC(D3DKMTCreateAllocation, 25)
EXPORT_FUNC(D3DKMTCreateContext, 26)
EXPORT_FUNC(D3DKMTCreateDevice, 27)
EXPORT_FUNC(D3DKMTCreateSynchronizationObject, 28)
EXPORT_FUNC(D3DKMTDestroyAllocation, 3)
EXPORT_FUNC(D3DKMTDestroyContext, 4)
EXPORT_FUNC(D3DKMTDestroyDevice, 5)
EXPORT_FUNC(D3DKMTDestroySynchronizationObject, 6)
EXPORT_FUNC(D3DKMTEscape, 29)
EXPORT_FUNC(D3DKMTGetContextSchedulingPriority, 30)
EXPORT_FUNC(D3DKMTGetDeviceState, 31)
EXPORT_FUNC(D3DKMTGetDisplayModeList, 32)
EXPORT_FUNC(D3DKMTGetMultisampleMethodList, 33)
EXPORT_FUNC(D3DKMTGetRuntimeData, 34)
EXPORT_FUNC(D3DKMTGetSharedPrimaryHandle, 35)
EXPORT_FUNC(D3DKMTLock, 36)
EXPORT_FUNC(D3DKMTOpenAdapterFromHdc, 37)
EXPORT_FUNC(D3DKMTOpenResource, 38)
EXPORT_FUNC(D3DKMTPresent, 7)
EXPORT_FUNC(D3DKMTQueryAdapterInfo, 8)
EXPORT_FUNC(D3DKMTQueryAllocationResidency, 39)
EXPORT_FUNC(D3DKMTQueryResourceInfo, 40)
EXPORT_FUNC(D3DKMTRender, 41)
EXPORT_FUNC(D3DKMTSetAllocationPriority, 42)
EXPORT_FUNC(D3DKMTSetContextSchedulingPriority, 43)
EXPORT_FUNC(D3DKMTSetDisplayMode, 44)
EXPORT_FUNC(D3DKMTSetDisplayPrivateDriverFormat, 9)
EXPORT_FUNC(D3DKMTSetGammaRamp, 45)
EXPORT_FUNC(D3DKMTSetVidPnSourceOwner, 46)
EXPORT_FUNC(D3DKMTSignalSynchronizationObject, 10)
EXPORT_FUNC(D3DKMTUnlock, 11)
EXPORT_FUNC(D3DKMTWaitForSynchronizationObject, 12)
EXPORT_FUNC(D3DKMTWaitForVerticalBlankEvent, 47)
EXPORT_FUNC(D3DPerformance_BeginEvent, 48)
EXPORT_FUNC(D3DPerformance_EndEvent, 49)
EXPORT_FUNC(D3DPerformance_GetStatus, 50)
EXPORT_FUNC(D3DPerformance_SetMarker, 51)
EXPORT_FUNC(EnableFeatureLevelUpgrade, 13)
EXPORT_FUNC(OpenAdapter10, 14)
EXPORT_FUNC(OpenAdapter10_2, 15)