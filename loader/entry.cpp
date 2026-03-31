#include "entry.h"
#include <thread>

extern "C" DWORD WINAPI PhasmoCheatVThread();

void StartCheat(HMODULE hModule)
{
    globalModule = hModule;
    CheatWork = true;

    DisableThreadLibraryCalls(hModule);

    HANDLE hThread = CreateThread(
        nullptr,
        0,
        reinterpret_cast<LPTHREAD_START_ROUTINE>(PhasmoCheatVThread),
        nullptr,
        0,
        nullptr
    );

    if (hThread)
        CloseHandle(hThread);
}