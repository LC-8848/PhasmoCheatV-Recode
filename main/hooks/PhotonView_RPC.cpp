#include "../Includes.h"

using namespace PhasmoCheatV;

void Hooks::hkPhotonView_RPC(SDK::PhotonView* photonView, SDK::String* methodName, SDK::RpcTarget target, void* parameters, SDK::MethodInfo* methodInfo)
{
    LOG_RPC(
        "PhotonView address: 0x%p\n"
        "MethodName: %s\n"
        "Target: %d\n",
        photonView,
        methodName ? Utils::UnityStrToSysStr(*methodName).c_str() : "null",
        target
    );

    SDK::PhotonView_RPC(photonView, methodName, target, parameters, methodInfo);
}