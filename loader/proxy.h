#pragma once
#include <Windows.h>

namespace Proxy
{
    void Initialize(HMODULE hModule);
    void Shutdown();

    void LoadRealD3D11();
}