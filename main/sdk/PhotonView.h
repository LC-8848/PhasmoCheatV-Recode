#pragma once
#include "sdk.h"

namespace SDK
{
	struct PhotonView;

	enum RpcTarget : int32_t
	{
		All,
		Others,
		MasterClient,
		AllBuffered,
		OthersBuffered,
		AllViaServer,
		AllBufferedViaServer
	};

	DEC_MET(PhotonView_RequestOwnership, void(*)(PhotonView* photonView, MethodInfo* methodInfo), "PhotonUnityNetworking", "Photon.Pun", "PhotonView", "RequestOwnership", 0);
	DEC_MET(PhotonView_RPC, void(*)(PhotonView* photonView, String* methodName, RpcTarget target, void* parameters, MethodInfo* methodInfo), "PhotonUnityNetworking", "Photon.Pun", "PhotonView", "RPC", 3);
}