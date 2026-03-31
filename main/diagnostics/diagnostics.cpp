#include "diagnostics.h"
#include <thread>
#include <cstring>

namespace Diagnostics
{
    static HANDLE hPipe = INVALID_HANDLE_VALUE;
    static std::atomic<bool> running = false;
    static std::thread worker;
    static const char* PIPE_NAME = "\\\\.\\pipe\\VT_Diagnostics";

    bool Connect()
    {
        if (hPipe != INVALID_HANDLE_VALUE)
            return true;

        hPipe = CreateFileA(
            PIPE_NAME,
            GENERIC_WRITE,
            0,
            nullptr,
            OPEN_EXISTING,
            0,
            nullptr
        );

        return hPipe != INVALID_HANDLE_VALUE;
    }

    void Disconnect()
    {
        if (hPipe != INVALID_HANDLE_VALUE)
        {
            CloseHandle(hPipe);
            hPipe = INVALID_HANDLE_VALUE;
        }
    }

    void WorkerThread()
    {
        while (running)
        {
            if (!Connect())
            {
                Sleep(1000);
                continue;
            }
            Sleep(1000);
        }
    }

    bool Init()
    {
        running = true;
        worker = std::thread(WorkerThread);
        return true;
    }

    void Shutdown()
    {
        running = false;
        if (worker.joinable())
            worker.join();
        Disconnect();
    }

    void Send(const std::string& key, const std::string& value)
    {
        if (!Connect())
            return;

        Packet packet{};
        packet.type = PacketType::Info;

        strncpy_s(packet.key, key.c_str(), MAX_MSG_SIZE - 1);
        strncpy_s(packet.value, value.c_str(), MAX_MSG_SIZE - 1);

        DWORD written = 0;
        if (!WriteFile(hPipe, &packet, sizeof(packet), &written, nullptr))
        {
            Disconnect();
        }
    }
}