#include "../Includes.h"
#include "../features/features_includes.h"

using namespace PhasmoCheatV;

bool Hooks::hkHandCamera_MoveNext(SDK::HandCamera* handCamera, SDK::MethodInfo* methodInfo)
{
    auto* func = SDK::Get_HandCamera_MoveNext();

	CALL_METHOD_ARGS(Misc, PhotoModifier, PhotoModifierMain, handCamera);

    return SDK::HandCamera_MoveNext_original(handCamera, methodInfo);
}