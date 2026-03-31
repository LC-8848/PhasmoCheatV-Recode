#include "../Includes.h"
#include "../features/features_includes.h"

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

	CALL_METHOD_IF_ACTIVE_ARGS(Misc, PhotoModifier, PhotoModifierX5Photo, photonView, methodName, target, parameters, methodInfo);

    SDK::PhotonView_RPC(photonView, methodName, target, parameters, methodInfo);
}