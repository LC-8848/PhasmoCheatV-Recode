#pragma once
#include <Windows.h>
#include <string>
#include <atomic>

namespace Diagnostics
{
    enum class PacketType : int
    {
        Info = 0,
    };

    constexpr size_t MAX_MSG_SIZE = 256;

    struct Packet
    {
        PacketType type;
        char key[MAX_MSG_SIZE];
        char value[MAX_MSG_SIZE];
    };

    bool Init();
    void Shutdown();

    void Send(const std::string& key, const std::string& value);
}