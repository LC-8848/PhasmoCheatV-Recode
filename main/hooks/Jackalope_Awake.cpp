#include "../Includes.h"

using namespace PhasmoCheatV;

void Hooks::hkJackalope_Awake(SDK::Jackalope* jackalope, SDK::MethodInfo* methodInfo)
{
	LOG_CALL("Called Jackalope_Awake");

	if (CheatWork)
	{
		auto* jackalope_gobj = SDK::Component_Get_GameObject(reinterpret_cast<SDK::Component*>(jackalope), nullptr);
		bool act = SDK::GameObject_get_activeSelf(jackalope_gobj, nullptr);
		if (act)
			InGame::jackalope.push_back(jackalope);
	}

	SDK::Jackalope_Awake(jackalope, methodInfo);
}