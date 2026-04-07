#include "utils.h"

using namespace PhasmoCheatV;
namespace fs = std::filesystem;

std::string Utils::GetPhasmoCheatVDirectory()
{
	return "C:\\PhasmoCheatV";
}

void Utils::CreatePhasmoCheatVDirectory()
{
	const std::string configDirectoryPath = GetPhasmoCheatVDirectory();
	if (!std::filesystem::exists(configDirectoryPath))
	{
		LOG_INFO("PhasmoCheatV directory not found, creating one.");
		std::filesystem::create_directory(configDirectoryPath);
	}

	const std::string configsPath = configDirectoryPath + "\\configs";
	const std::string imagesPath = configDirectoryPath + "\\Images";
	const std::string fontsPath = configDirectoryPath + "\\fonts";

	if (!std::filesystem::exists(configsPath))
	{
		LOG_INFO("Creating configs folder.");
		std::filesystem::create_directory(configsPath);
	}

	if (!std::filesystem::exists(imagesPath))
	{
		LOG_INFO("Creating Images folder.");
		std::filesystem::create_directory(imagesPath);
	}

	if (!std::filesystem::exists(fontsPath))
	{
		LOG_INFO("Creating fonts folder.");
		std::filesystem::create_directory(fontsPath);
	}
}

ImVec4 Utils::HSV2RGB(float h, float s, float v)
{
	float r, g, b;

	int i = int(h * 6.0f);
	float f = h * 6.0f - i;
	float p = v * (1.0f - s);
	float q = v * (1.0f - f * s);
	float t = v * (1.0f - (1.0f - f) * s);

	switch (i % 6)
	{
	case 0: r = v; g = t; b = p; break;
	case 1: r = q; g = v; b = p; break;
	case 2: r = p; g = v; b = t; break;
	case 3: r = p; g = q; b = v; break;
	case 4: r = t; g = p; b = v; break;
	case 5: r = v; g = p; b = q; break;
	}

	return ImVec4(r, g, b, 1.0f);
}

SDK::Network* Utils::GetNetwork()
{
	if (InGame::network)
		return InGame::network;

	SDK::Network* network = SDK::Network_Get_Network(nullptr);

	if (network == nullptr)
		return nullptr;

	InGame::network = network;

	return network;
}

SDK::ListPlayer* Utils::GetAllPlayers()
{
	if (InGame::mapController == nullptr)
		return nullptr;

	return InGame::mapController->Fields.Players;
}

int Utils::GetPlayerInx(const SDK::Player* player)
{
	const auto players = GetAllPlayers();
	if (!players)
		return -1;

	for (int playerIndex = 0; playerIndex < players->Fields.Size; playerIndex++)
	{
		if (players->Fields.Items->Vector[playerIndex] == player)
			return playerIndex;
	}

	return -1;
}

SDK::NetworkPlayerSpot* Utils::GetNetworkPlayerSpot(const SDK::Player* player)
{
	if (!GetNetwork())
		return nullptr;

	return InGame::network->Fields.NetworkPlayerSpots->Fields.Items->Vector[GetPlayerInx(player)];
}

SDK::Player* Utils::GetLocalPlayer()
{
	if (!GetNetwork())
		return nullptr;
	return InGame::network->Fields.localPlayer;
}

std::string Utils::getKeyName(int keyCode)
{
	switch (keyCode)
	{
	case VK_INSERT: return "INSERT";
	case VK_DELETE: return "DELETE";
	case VK_HOME: return "HOME";
	case VK_END: return "END";
	case VK_PRIOR: return "PAGE UP";
	case VK_NEXT: return "PAGE DOWN";
	case VK_F1: return "F1";
	case VK_F2: return "F2";
	case VK_F3: return "F3";
	case VK_F4: return "F4";
	case VK_F5: return "F5";
	case VK_F6: return "F6";
	case VK_F7: return "F7";
	case VK_F8: return "F8";
	case VK_F9: return "F9";
	case VK_F10: return "F10";
	case VK_F11: return "F11";
	case VK_F12: return "F12";
	case VK_RETURN: return "Enter";
	default:
		if (keyCode >= 'A' && keyCode <= 'Z')
			return std::string(1, (char)keyCode);
		else if (keyCode >= '0' && keyCode <= '9')
			return std::string(1, (char)keyCode);
		else
			return "Key " + std::to_string(keyCode);
	}
}


std::string Utils::GhostEnumToStr(SDK::GhostState ghostState)
{
	switch (ghostState)
	{
	case SDK::GhostState::Idle:							return LANG("GhostState_Idle");
	case SDK::GhostState::Wander:					return LANG("GhostState_Wander");
	case SDK::GhostState::Hunting:					return LANG("GhostState_Hunting");
	case SDK::GhostState::FavoriteRoom:			return LANG("GhostState_FavoriteRoom");
	case SDK::GhostState::Light:						return LANG("GhostState_Light");
	case SDK::GhostState::Door:						return LANG("GhostState_Door");
	case SDK::GhostState::Throwing:					return LANG("GhostState_Throwing");
	case SDK::GhostState::FuseBox:					return LANG("GhostState_FuseBox");
	case SDK::GhostState::Appear:					return LANG("GhostState_Appear");
	case SDK::GhostState::DoorKnock:				return LANG("GhostState_DoorKnock");
	case SDK::GhostState::WindowKnock:			return LANG("GhostState_WindowKnock");
	case SDK::GhostState::CarAlarm:					return LANG("GhostState_CarAlarm");
	case SDK::GhostState::Flicker:						return LANG("GhostState_Flicker");
	case SDK::GhostState::CCTV:						return LANG("GhostState_CCTV");
	case SDK::GhostState::RandomEvent:			return LANG("GhostState_RandomEvent");
	case SDK::GhostState::GhostAbility:			return LANG("GhostState_GhostAbility");
	case SDK::GhostState::Mannequin:				return LANG("GhostState_Mannequin");
	case SDK::GhostState::TeleportObject:		return LANG("GhostState_TeleportObject");
	case SDK::GhostState::Interact:					return LANG("GhostState_Interact");
	case SDK::GhostState::SummoningCircle:	return LANG("GhostState_SummoningCircle");
	case SDK::GhostState::MusicBox:					return LANG("GhostState_MusicBox");
	case SDK::GhostState::Dots:							return LANG("GhostState_Dots");
	case SDK::GhostState::Salt:							return LANG("GhostState_Salt");
	default:														return LANG("Unknown");
	}
}

std::string Utils::GhostEnumToStr(SDK::GhostType ghostType)
{
	switch (ghostType)
	{
	case SDK::GhostType::Spirit:			return LANG("GhostType_Spirit");
	case SDK::GhostType::Wraith:			return LANG("GhostType_Wraith");
	case SDK::GhostType::Phantom:		return LANG("GhostType_Phantom");
	case SDK::GhostType::Poltergeist:	return LANG("GhostType_Poltergeist");
	case SDK::GhostType::Banshee:		return LANG("GhostType_Banshee");
	case SDK::GhostType::Jinn:				return LANG("GhostType_Jinn");
	case SDK::GhostType::Mare:			return LANG("GhostType_Mare");
	case SDK::GhostType::Revenant:		return LANG("GhostType_Revenant");
	case SDK::GhostType::Shade:			return LANG("GhostType_Shade");
	case SDK::GhostType::Demon:			return LANG("GhostType_Demon");
	case SDK::GhostType::Yurei:			return LANG("GhostType_Yurei");
	case SDK::GhostType::Oni:				return LANG("GhostType_Oni");
	case SDK::GhostType::Yokai:			return LANG("GhostType_Yokai");
	case SDK::GhostType::Hantu:			return LANG("GhostType_Hantu");
	case SDK::GhostType::Goryo:			return LANG("GhostType_Goryo");
	case SDK::GhostType::Myling:			return LANG("GhostType_Myling");
	case SDK::GhostType::Onryo:			return LANG("GhostType_Onryo");
	case SDK::GhostType::TheTwins:		return LANG("GhostType_TheTwins");
	case SDK::GhostType::Raiju:				return LANG("GhostType_Raiju");
	case SDK::GhostType::Obake:			return LANG("GhostType_Obake");
	case SDK::GhostType::Mimic:			return LANG("GhostType_Mimic");
	case SDK::GhostType::Moroi:			return LANG("GhostType_Moroi");
	case SDK::GhostType::Deogen:		return LANG("GhostType_Deogen");
	case SDK::GhostType::Thaye:			return LANG("GhostType_Thaye");
	case SDK::GhostType::Gallu:			return LANG("GhostType_Gallu");
	case SDK::GhostType::Dayan:			return LANG("GhostType_Dayan");
	case SDK::GhostType::Obambo:		return LANG("GhostType_Obambo");
	default:											return LANG("Unknown");
	}
}

std::string Utils::GhostEnumToStr(const SDK::GhostEvidence ghostEvidence)
{
	std::string evidenceTypeString;

	switch (ghostEvidence)
	{
	case SDK::GhostEvidence::None:
		evidenceTypeString = LANG("None");
		break;
	case SDK::GhostEvidence::EMF:
		evidenceTypeString = LANG("GhostEvidence_EMFLevel5");
		break;
	case SDK::GhostEvidence::SpiritBox:
		evidenceTypeString = LANG("GhostEvidence_SpiritBox");
		break;
	case SDK::GhostEvidence::Ultraviolet:
		evidenceTypeString = LANG("GhostEvidence_Ultraviolet");
		break;
	case SDK::GhostEvidence::GhostOrb:
		evidenceTypeString = LANG("GhostEvidence_GhostOrb");
		break;
	case SDK::GhostEvidence::GhostWritingBook:
		evidenceTypeString = LANG("GhostEvidence_GhostWriting");
		break;
	case SDK::GhostEvidence::Temperature:
		evidenceTypeString = LANG("GhostEvidence_FreezingTemperature");
		break;
	case SDK::GhostEvidence::DotsProjector:
		evidenceTypeString = LANG("GhostEvidence_D.O.T.S.Projector");
		break;
	default:
		evidenceTypeString = LANG("Unknown");
		break;
	}

	return evidenceTypeString;
}

std::string Utils::UnityStrToSysStr(const SDK::String& string)
{
	int length = string.Fields.StringLength;

	if (length <= 0)
	{
		return "UNKNOWN";
	}

	const uint16_t* chars = &string.Fields.FirstChar;

	std::wstring wideStr(chars, chars + length);
	std::string result;
	result.reserve(length);

	for (wchar_t wc : wideStr)
	{
		if (wc < 0x80)
			result.push_back(static_cast<char>(wc));
		else
		{
			if (wc < 0x800)
			{
				result.push_back(static_cast<char>(0xC0 | (wc >> 6)));
				result.push_back(static_cast<char>(0x80 | (wc & 0x3F)));
			}
			else
			{
				result.push_back(static_cast<char>(0xE0 | (wc >> 12)));
				result.push_back(static_cast<char>(0x80 | ((wc >> 6) & 0x3F)));
				result.push_back(static_cast<char>(0x80 | (wc & 0x3F)));
			}
		}
	}

	return result;
}

SDK::String* Utils::SysStrToUnityStr(const std::string& string)
{
	if (!il2cpp_initialize()) return nullptr;

	Il2CppDomain* domain = il2cpp_domain_get();
	if (!domain) return nullptr;

	il2cpp_thread_attach(domain);

	int len = MultiByteToWideChar(CP_UTF8, 0, string.c_str(), (int)string.size(), nullptr, 0);
	if (len == 0) return nullptr;

	std::wstring wstr(len, 0);
	MultiByteToWideChar(CP_UTF8, 0, string.c_str(), (int)string.size(), &wstr[0], len);

	Il2CppString* il2cppStr = il2cpp_string_new_utf16_wrap((const wchar_t*)wstr.c_str(), len);
	return reinterpret_cast<SDK::String*>(il2cppStr);
}

std::string Utils::GetPlayerName(const SDK::Player* player)
{
	if (!player)
		return {};

	try
	{
		const auto networkPlayerSpot = GetNetworkPlayerSpot(player);
		if (!networkPlayerSpot)
			return {};

		const auto& accountName = networkPlayerSpot->Fields.AccountName;
		if (!accountName)
			return {};

		return UnityStrToSysStr(*accountName);
	}
	catch (const std::exception& e)
	{
		LOG_ERROR("Failed to get player name: {}", e.what());
		return {};
	}
}

bool Utils::WTS(const SDK::Vector3& worldPos, SDK::Vector3& displayPos)
{
	SDK::Camera* playerCamera = GetLocalPlayer()->Fields.Camera; if (!playerCamera) return false;

	SDK::Vector3 projected = SDK::Camera_WorldToScreenPoint(playerCamera, worldPos, nullptr); if (projected.Z <= 0.0f) return false;

	float screenHeight = SDK::Screen_Get_Height(nullptr);

	displayPos.X = projected.X;
	displayPos.Y = screenHeight - projected.Y;
	displayPos.Z = projected.Z;

	return true;
}

SDK::Transform* Utils::GetPlayerTransformCamera(const SDK::Player* player)
{
	return SDK::Component_Get_Transform(reinterpret_cast<SDK::Component*>(player->Fields.Camera), nullptr);
}

SDK::Vector3 Utils::GetPosVec3(const SDK::Player* player)
{
	auto pos1 = GetPosVec3(GetPlayerTransformCamera(player));
	SDK::Vector3 newpos = { pos1.X, pos1.Y - 1.5f, pos1.Z };
	return newpos;
}

SDK::Vector3 Utils::GetPosVec3(const SDK::GhostAI* ghostAI)
{
	return GetPosVec3(ghostAI->Fields.huntingRaycastPoint);
}

SDK::Vector3 Utils::GetPosVec3(SDK::Component* component)
{
	return GetPosVec3(SDK::Component_Get_Transform(component, nullptr));
}

SDK::Vector3 Utils::GetPosVec3(SDK::Transform* transform)
{
	return SDK::Transform_Get_Position(transform, nullptr);
}

std::string Utils::GhostEnumToStr(SDK::EvidenceType evidenceType)
{
	switch (evidenceType)
	{
	case SDK::EvidenceType::emfSpot:							return LANG("EvidenceType_EMFSpot");
	case SDK::EvidenceType::ouijaBoard:						return LANG("EvidenceType_OuijaBoard");
	case SDK::EvidenceType::fingerprint:						return LANG("EvidenceType_Fingerprint");
	case SDK::EvidenceType::footstep:							return LANG("EvidenceType_Footstep");
	case SDK::EvidenceType::DNA:								return "";
	case SDK::EvidenceType::ghost:								return LANG("EvidenceType_Ghost");
	case SDK::EvidenceType::deadBody:						return LANG("EvidenceType_DeadBody");
	case SDK::EvidenceType::dirtyWater:						return LANG("EvidenceType_DirtyWater");
	case SDK::EvidenceType::musicBox:							return LANG("EvidenceType_MusicBox");
	case SDK::EvidenceType::tarotCards:						return LANG("EvidenceType_TarotCards");
	case SDK::EvidenceType::summoningCicle:				return LANG("EvidenceType_SummoningCircle"); // 这里存在拼写错误
	case SDK::EvidenceType::hauntedMirror:				return LANG("EvidenceType_HauntedMirror");
	case SDK::EvidenceType::voodooDoll:						return LANG("EvidenceType_VoodooDoll");
	case SDK::EvidenceType::ghostWriting:					return LANG("EvidenceType_GhostWriting");
	case SDK::EvidenceType::usedCrucifix:					return LANG("EvidenceType_UsedCrucifix");
	case SDK::EvidenceType::dotsGhost:						return LANG("EvidenceType_DotsGhost");
	case SDK::EvidenceType::monkeyPaw:					return LANG("EvidenceType_MonkeyPaw");
	case SDK::EvidenceType::moonAlter:						return LANG("EvidenceType_MoonAlter");
	case SDK::EvidenceType::ghostOrb:							return LANG("EvidenceType_GhostOrb");
	case SDK::EvidenceType::lightSource:						return LANG("EvidenceType_LightSource");
	case SDK::EvidenceType::none:								return LANG("EvidenceType_None");
	case SDK::EvidenceType::emfReader:						return LANG("EvidenceType_EmfReader");
	case SDK::EvidenceType::salt:									return LANG("EvidenceType_Salt");
	case SDK::EvidenceType::freezingTemperature:		return LANG("EvidenceType_FreezingTemperature");
	case SDK::EvidenceType::ghostSmoke:					return LANG("EvidenceType_GhostSmoke");
	case SDK::EvidenceType::camoGhost:						return LANG("EvidenceType_CamoGhost");
	case SDK::EvidenceType::paranormalSound:			return LANG("EvidenceType_ParanormalSound");
	case SDK::EvidenceType::spiritBox:							return LANG("EvidenceType_SpiritBox");
	case SDK::EvidenceType::ghostHunt:						return LANG("EvidenceType_GhostHunt");
	case SDK::EvidenceType::bansheeWail:					return LANG("EvidenceType_BansheeWail");
	case SDK::EvidenceType::teddyBear:						return LANG("EvidenceType_TeddyBear");
	case SDK::EvidenceType::spiritBoxBreath:				return LANG("EvidenceType_SpiritBoxBreath");
	case SDK::EvidenceType::motionSensor:					return LANG("EvidenceType_MotionSensor");
	case SDK::EvidenceType::shadowGhost:					return LANG("EvidenceType_ShadowGhost");
	case SDK::EvidenceType::ghostGroan:						return LANG("EvidenceType_GhostGroan");
	case SDK::EvidenceType::ghostLaugh:						return LANG("EvidenceType_GhostLaugh");
	case SDK::EvidenceType::ghostTalk:						return LANG("EvidenceType_GhostTalk");
	case SDK::EvidenceType::ghostWhisper:					return LANG("EvidenceType_GhostWhisper");
	case SDK::EvidenceType::obakeFingerprint:			return LANG("EvidenceType_ObakeFingerprint");
	case SDK::EvidenceType::burningChapelCrucifix:	return LANG("EvidenceType_BurningChapelCrucifix");
	case SDK::EvidenceType::obakeShapeshift:				return LANG("EvidenceType_ObakeShapeshift");
	default:																	return LANG("Unknown");
	}
}

bool Utils::IsCursedItem(SDK::EvidenceType evidenceType)
{
	switch (evidenceType)
	{
	case SDK::EvidenceType::voodooDoll:
	case SDK::EvidenceType::tarotCards:
	case SDK::EvidenceType::ouijaBoard:
	case SDK::EvidenceType::hauntedMirror:
	case SDK::EvidenceType::musicBox:
	case SDK::EvidenceType::summoningCicle:
	case SDK::EvidenceType::monkeyPaw:
		return true;
	default:
		return false;
	}
}

SDK::LevelStats* Utils::GetLevelStats() 
{
	return SDK::LevelStats_get_Instance(nullptr);
}

double Utils::GetCheatUptimeSeconds()
{
	auto now = std::chrono::steady_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::duration<double>>(now - CheatInjectedTime);
	return duration.count();
}

float Utils::GetPlayerSanity(SDK::Player* player)
{
	return player->Fields.PlayerSanity->Fields.insanity;
}

bool Utils::IsLocalMasterClient()
{
	return SDK::PhotonNetwork_Get_IsMasterClient(nullptr);
}

void Utils::TpPlayerToVec3(SDK::Player* player, const SDK::Vector3& position)
{
	SDK::Player_Teleport(player, position, nullptr);
}

void Utils::TpPlayerToPlayer(SDK::Player* player, const SDK::Player* twoplayer)
{
	TpPlayerToVec3(player, GetPosVec3(twoplayer));
}

SDK::LevelValues* Utils::GetLevelValues()
{
	return SDK::LevelValues_get_Instance(nullptr);
}

SDK::Map* Utils::GetMap()
{
	return SDK::LevelValues_get_map(GetLevelValues(), nullptr);
}

std::string Utils::GetActiveSceneName()
{
	SDK::Scene scene = SDK::SceneManager_GetActiveScene(nullptr);
	SDK::String* namePtr = SDK::Scene_get_name(&scene, nullptr);
	if (!namePtr)
		return "UNKNOWN";
	return UnityStrToSysStr(*namePtr);
}

SDK::GameObject* Utils::FindObjectByName(std::string name)
{
	return SDK::GameObject_Find(SysStrToUnityStr(name), nullptr);
}

SDK::ObjectArray* Utils::FindObjectsOfType(std::string type)
{
	auto* goType = SDK::System_Type_GetType(SysStrToUnityStr(type), nullptr);
	if (!goType) return nullptr;

	auto* all = SDK::Resources_FindObjectsOfTypeAll(goType, nullptr);
	if (!all) return nullptr;

	return all;
}

SDK::StoreItemInfo* Utils::GetStoreItemInfo()
{
	auto* list = FindObjectsOfType("UnityEngine.GameObject");
	if (!list) return nullptr;

	for (uint32_t i = 0; i < 65535; i++)
	{
		auto raw = list->Vector[i];
		if (!raw) continue;

		auto* go = reinterpret_cast<SDK::GameObject*>(raw);

		auto* nameUnity = SDK::Object_Get_Name(reinterpret_cast<SDK::Object*>(go), nullptr);
		if (!nameUnity) continue;

		auto name = UnityStrToSysStr(*nameUnity);
		if (name != "Inspect Panel")
			continue;

		auto comp = SDK::GameObject_GetComponentByName(
			go,
			SysStrToUnityStr("StoreItemInfo"),
			nullptr
		);

		if (comp)
			return reinterpret_cast<SDK::StoreItemInfo*>(comp);
	}

	return nullptr;
}

SDK::JournalController* Utils::GetMainMenuJournal()
{
	auto sceneName = GetActiveSceneName();
	LOG_INFO(sceneName);

	if (sceneName == "HideAndDontSave")
		return nullptr;

	auto* list = FindObjectsOfType("JournalController");
	if (!list) {
		LOG_INFO("JournalController list null");
		return nullptr;
	}

	for (uint32_t i = 0; i < 65535; i++)
	{
		auto raw = list->Vector[i];
		if (!raw) continue;

		auto* jc = reinterpret_cast<SDK::JournalController*>(raw);
		if (!jc) continue;

		LOG_INFO("Found JournalController");
		return jc;
	}

	LOG_INFO("None found");
	return nullptr;
}

SDK::PhotonMessageInfo* Utils::CreatePhotonMessageInfo(SDK::PhotonView* photonView)
{
	if (!il2cpp_initialize()) return nullptr;

	Il2CppDomain* domain = il2cpp_domain_get();
	if (!domain) return nullptr;

	il2cpp_thread_attach(domain);

	Il2CppClass* pmiClass =
		il2cpp_get_class("PhotonUnityNetworking", "Photon.Pun", "PhotonMessageInfo");
	if (!pmiClass) return nullptr;

	Il2CppObject* pmi = il2cpp_object_new_from_class(pmiClass);
	if (!pmi) return nullptr;

	auto* localPlayer = SDK::PhotonNetwork_Get_LocalPlayer(nullptr);
	int timestamp = SDK::PhotonNetwork_Get_ServerTimestamp(nullptr);

	void* ctorArgs[3] = { localPlayer, &timestamp, photonView };
	const MethodInfo_I* ctor = il2cpp_class_get_method_from_name_wrap(pmiClass, ".ctor", 3);
	if (ctor)
		il2cpp_runtime_invoke_wrap(ctor, pmi, ctorArgs, nullptr);

	return reinterpret_cast<SDK::PhotonMessageInfo*>(pmi);
}


SDK::ExitLevel* Utils::GetExitLevel()
{
	auto* list = Utils::FindObjectsOfType("ExitLevel");
	if (!list) return nullptr;

	for (uint32_t i = 0; i < 65535; i++)
	{
		auto* raw = list->Vector[i];
		if (!raw) continue;

		auto* exitLevel = reinterpret_cast<SDK::ExitLevel*>(raw);
		if (!exitLevel) continue;

		LOG_INFO("Found ExitLevel");
		return exitLevel;
	}

	return nullptr;
}

SDK::ServerManager* Utils::GetServerManager()
{
	auto* gameLobbyObj = FindObjectByName("Game Lobby");
	if (!gameLobbyObj) return nullptr;

	auto* type = SDK::System_Type_GetType(SysStrToUnityStr("ServerManager"), nullptr);
	if (!type) return nullptr;

	auto* serverManagerComp = reinterpret_cast<SDK::ServerManager*>(SDK::GameObject_GetComponent(gameLobbyObj, type, nullptr));
	if (!serverManagerComp) return nullptr;

	return serverManagerComp;
}

void Utils::SetTagOnGObject(SDK::GameObject* gameObject, const std::string& tag)
{
	auto unityStrTag = SysStrToUnityStr(tag);
	SDK::GameObject_set_tag(gameObject, unityStrTag, nullptr);
}

std::string Utils::GetTagOnGObject(SDK::GameObject* gameObject)
{
	auto unityStrTag = SDK::GameObject_get_tag(gameObject, nullptr);
	if (!unityStrTag)
		return "UNKNOWN";
	return UnityStrToSysStr(*unityStrTag);
}

bool Utils::CheckIsValidObjectByTag(SDK::GameObject* gameObject, const std::string& tag)
{
	if (!gameObject) return false;

	auto* unityTag = SysStrToUnityStr(tag);
	auto* result = SDK::GameObject_FindGameObjectsWithTag(unityTag, nullptr);
	if (!result) return false;

	for (uint32_t i = 0; i < 65535; i++)
	{
		SDK::GameObject* obj = result->Vector[i];
		if (!obj) break;
		if (obj == gameObject) return true;
	}

	return false;
}

// I'm lazy and I didn't want to use the Unity method. Yes, you can do it, but who cares :)
void Utils::GetComponentsInChildren(SDK::GameObject* root, const char* componentName, std::vector<SDK::Component*>& outComponents, bool includeInactive)
{
	SDK::Transform* rootTransform = SDK::GameObject_get_transform(root, nullptr);

	std::function<void(SDK::Transform*)> Traverse = [&](SDK::Transform* t)
		{
			SDK::GameObject* go = SDK::Component_Get_GameObject((SDK::Component*)t, nullptr);

			if (includeInactive || SDK::GameObject_get_activeSelf(go, nullptr))
			{
				SDK::Component* comp = SDK::GameObject_GetComponentByName(go, SysStrToUnityStr(componentName), nullptr);
				if (comp != nullptr)
				{
					outComponents.push_back(comp);
					LOG_INFO("Found component on object: ", UnityStrToSysStr(*SDK::Object_Get_Name((SDK::Object*)(go), nullptr)));
				}
			}

			int childCount = SDK::Transform_get_childCount(t, nullptr);
			for (int i = 0; i < childCount; i++)
			{
				SDK::Transform* child = SDK::Transform_GetChild(t, i, nullptr);
				Traverse(child);
			}
		};

	Traverse(rootTransform);
}

// Only for fun
void Utils::DumpAllMethodsByClass(const char* className, const char* namespaze, const char* assemblyName)
{
	if (!il2cpp_initialize())
	{
		LOG_ERROR("[IL2CPP] init failed");
		return;
	}

	Il2CppDomain* domain = il2cpp_domain_get();
	if (!domain)
	{
		LOG_ERROR("[IL2CPP] domain null");
		return;
	}

	Il2CppAssembly* assembly = il2cpp_domain_assembly_open_wrap(domain, assemblyName);
	if (!assembly)
	{
		LOG_ERROR("[IL2CPP] assembly not found: ", assemblyName);
		return;
	}

	Il2CppImage* image = il2cpp_assembly_get_image_wrap(assembly);
	if (!image)
	{
		LOG_ERROR("[IL2CPP] image null");
		return;
	}

	Il2CppClass* klass = il2cpp_class_from_name_wrap(image, namespaze, className);
	if (!klass)
	{
		LOG_ERROR("[IL2CPP] class not found: ", namespaze, className);
		return;
	}

	LOG_INFO("[IL2CPP] \n",
		(namespaze && namespaze[0]) ? namespaze : "<global>",
		className,
		assemblyName
	);

	void* iter = nullptr;
	MethodInfo_I* method = nullptr;

	while ((method = il2cpp_class_get_methods_wrap(klass, &iter)))
	{
		LOG_INFO("  └─ \n",
			il2cpp_method_get_name_wrap2(method),
			method->parameters_count
		);
	}

	LOG_INFO("[IL2CPP] dump end\n\n");
}

SDK::HandCamera* Utils::get_PlayerHandCamera(SDK::Player* player)
{
	//PCPlayer(Player script)
	//	PCPlayerHead
	//	   CameraItemSpot
	//	      Photo Camera TIER.NUMBER


	auto* g_object_player = SDK::Component_Get_GameObject(reinterpret_cast<SDK::Component*>(player), nullptr);
	std::string o_name_player = UnityStrToSysStr(*SDK::Object_Get_Name(reinterpret_cast<SDK::Object*>(g_object_player), nullptr));

	LOG_INFO("[get_PlayerHandCamera] o_name_player = ", o_name_player);

	if (o_name_player.rfind("PCPlayer", 0) != 0)
		return nullptr;


	auto* playerTr = SDK::GameObject_get_transform(g_object_player, nullptr);
	if (!playerTr)
		return nullptr;

	SDK::Transform* headTr = nullptr;

	int playerChildCount = SDK::Transform_get_childCount(playerTr, nullptr);
	for (int i = 0; i < playerChildCount; ++i)
	{
		auto* child = SDK::Transform_GetChild(playerTr, i, nullptr);

		auto* childGO = SDK::Component_Get_GameObject(
			reinterpret_cast<SDK::Component*>(child), nullptr);

		std::string name = UnityStrToSysStr(
			*SDK::Object_Get_Name(reinterpret_cast<SDK::Object*>(childGO), nullptr));

		if (name == "PCPlayerHead")
		{
			headTr = child;
			break;
		}
	}

	if (!headTr)
		return nullptr;

	SDK::Transform* cameraSpotTr = nullptr;

	int headChildCount = SDK::Transform_get_childCount(headTr, nullptr);
	for (int i = 0; i < headChildCount; ++i)
	{
		auto* child = SDK::Transform_GetChild(headTr, i, nullptr);

		auto* childGO = SDK::Component_Get_GameObject(
			reinterpret_cast<SDK::Component*>(child), nullptr);

		std::string name = UnityStrToSysStr(
			*SDK::Object_Get_Name(reinterpret_cast<SDK::Object*>(childGO), nullptr));

		if (name == "CameraItemSpot")
		{
			cameraSpotTr = child;
			break;
		}
	}

	if (!cameraSpotTr)
		return nullptr;

	int camChildCount = SDK::Transform_get_childCount(cameraSpotTr, nullptr);
	for (int i = 0; i < camChildCount; ++i)
	{
		auto* child = SDK::Transform_GetChild(cameraSpotTr, i, nullptr);

		auto* childGO = SDK::Component_Get_GameObject(
			reinterpret_cast<SDK::Component*>(child), nullptr);

		std::string name = UnityStrToSysStr(*SDK::Object_Get_Name(reinterpret_cast<SDK::Object*>(childGO), nullptr));

		SDK::Type* handCamera_T = SDK::System_Type_GetType(SysStrToUnityStr("HandCamera"), nullptr);

		if (name.rfind("Photo Camera", 0) == 0)
		{
			return reinterpret_cast<SDK::HandCamera*>(SDK::GameObject_GetComponent(childGO, handCamera_T, nullptr));
		}
	}

	return nullptr;
}

bool Utils::IsGhostVisible(SDK::GhostAI* ghostAI)
{
	if (!ghostAI)
		return false;

	auto* currentModel = ghostAI->Fields.currentModel;
	if (!currentModel)
		return false;

	auto* myRends = currentModel->Fields.myRends;
	if (!myRends)
		return false;

	for (uint32_t i = 0; i < 65535; i++)
	{
		SDK::Render* rend = myRends->Vector[i];
		if (!rend) break;

		if (SDK::Render_get_enabled(rend, nullptr))
			return true;
	}

	return false;
}


bool Utils::IsPlayerVisibleGhost(SDK::Camera* camera, SDK::Transform* ghostTransform)
{
	if (!camera || !ghostTransform)
	{
		return false;
	}

	SDK::Transform* camTr = SDK::Component_Get_Transform((SDK::Component*)camera, nullptr);
	SDK::Vector3 camPos = SDK::Transform_Get_Position(camTr, nullptr);
	SDK::Vector3 ghostPos = SDK::Transform_Get_Position(ghostTransform, nullptr);

	SDK::Vector3 dir = ghostPos - camPos;
	float dist = SDK::Vector3_get_magnitude(&dir, nullptr);

	if (dist < 0.05f)
	{
		return true;
	}

	dir = SDK::Vector3_get_normalized(&dir, nullptr);

	SDK::PhysicsScene scene = SDK::Physics_get_defaultPhysicsScene(nullptr);
	SDK::Vector3 currentOrigin = camPos + dir * 0.02f;
	float traveled = 0.f;
	int maxHits = 32;

	const int blockingLayers[] = { 12, 13, 14, 21, 26, 28, 30 };

	for (int i = 0; i < maxHits && traveled < dist; i++)
	{
		SDK::RaycastHit hit{};
		bool hasHit = SDK::PhysicsScene_Raycast(
			&scene,
			currentOrigin,
			dir,
			&hit,
			dist - traveled,
			-1,
			SDK::QueryTriggerInteraction::Ignore,
			nullptr
		);

		if (!hasHit)
		{
			break;
		}

		int32_t colID = hit.Collider;
		if (!colID)
		{
			break;
		}

		SDK::Collider* col = reinterpret_cast<SDK::Collider*>(SDK::Object_FindObjectFromInstanceID(colID, nullptr));
		SDK::GameObject* go = col ? SDK::Component_Get_GameObject((SDK::Component*)col, nullptr) : nullptr;
		int hitLayer = go ? SDK::GameObject_Get_Layer(go, nullptr) : -1;

		for (int layer : blockingLayers)
		{
			if (hitLayer == layer)
			{
				return false;
			}
		}

		traveled += hit.Distance + 0.01f;
		currentOrigin = currentOrigin + dir * (hit.Distance + 0.01f);
	}

	SDK::Vector3 vp = SDK::Camera_WorldToViewportPoint(camera, ghostPos, nullptr);

	if (vp.Z <= 0.f)
	{
		return false;
	}

	if (vp.X < 0.f || vp.X > 1.f || vp.Y < 0.f || vp.Y > 1.f)
	{
		return false;
	}

	return true;
}

void Utils::DumpAllLayers()
{
	for (int i = 0; i < 32; i++)
	{
		SDK::String* name = SDK::LayerMask_LayerToName(i, nullptr);
		if (name)
		{
			std::string cstr = UnityStrToSysStr(*name);
			LOG_INFO("Layer ", i, cstr);
		}
		else
		{
			LOG_INFO("Empty layer ", i);
		}
	}
}

SDK::GameObject* Utils::GetPlayerCrosshairObj(SDK::Player* player)
{
	if (!player)
		return nullptr;

	auto* playerGO = SDK::Component_Get_GameObject(
		reinterpret_cast<SDK::Component*>(player), nullptr);

	if (!playerGO)
		return nullptr;

	std::string playerName = UnityStrToSysStr(
		*SDK::Object_Get_Name(reinterpret_cast<SDK::Object*>(playerGO), nullptr));

	// LOG_INFO("[GetPlayerCrosshairObj] playerName = ", playerName);

	if (playerName.rfind("PCPlayer", 0) != 0)
		return nullptr;

	auto* playerTr = SDK::GameObject_get_transform(playerGO, nullptr);
	if (!playerTr)
		return nullptr;

	SDK::Transform* canvasTr = nullptr;

	int childCount = SDK::Transform_get_childCount(playerTr, nullptr);
	for (int i = 0; i < childCount; ++i)
	{
		auto* childTr = SDK::Transform_GetChild(playerTr, i, nullptr);
		if (!childTr)
			continue;

		auto* childGO = SDK::Component_Get_GameObject(
			reinterpret_cast<SDK::Component*>(childTr), nullptr);

		if (!childGO)
			continue;

		std::string name = UnityStrToSysStr(
			*SDK::Object_Get_Name(reinterpret_cast<SDK::Object*>(childGO), nullptr));

		if (name == "Canvas")
		{
			canvasTr = childTr;
			break;
		}
	}

	if (!canvasTr)
		return nullptr;

	int canvasChildCount = SDK::Transform_get_childCount(canvasTr, nullptr);
	for (int i = 0; i < canvasChildCount; ++i)
	{
		auto* childTr = SDK::Transform_GetChild(canvasTr, i, nullptr);
		if (!childTr)
			continue;

		auto* childGO = SDK::Component_Get_GameObject(
			reinterpret_cast<SDK::Component*>(childTr), nullptr);

		if (!childGO)
			continue;

		std::string name = UnityStrToSysStr(
			*SDK::Object_Get_Name(reinterpret_cast<SDK::Object*>(childGO), nullptr));

		if (name.rfind("CrosshairImage", 0) == 0)
		{
			// LOG_INFO("[GetPlayerCrosshairObj] Found CrosshairImage: ", name); 
			return childGO;
		}
	}

	return nullptr;
}

SDK::GhostAI* Utils::GetGhostAI()
{
	auto* ghostAIArray = SDK::GameObject_FindGameObjectsWithTag(SysStrToUnityStr("Ghost"), nullptr);
	if (!ghostAIArray) return nullptr;

	for (uint32_t i = 0; i < 65535; i++)
	{
		SDK::GameObject* obj = ghostAIArray->Vector[i];
		if (!obj) break;
		return reinterpret_cast<SDK::GhostAI*>(SDK::GameObject_GetComponent(obj, SDK::System_Type_GetType(SysStrToUnityStr("GhostAI"), nullptr), nullptr));
	}
	return nullptr;
}

SDK::Transform* Utils::GetPotatoe()
{
	auto* Potatoe_Obj = SDK::GameObject_Find(SysStrToUnityStr("Potatoe"), nullptr); if (!Potatoe_Obj) return nullptr;
	auto* Potatoe_Trans = SDK::GameObject_get_transform(Potatoe_Obj, nullptr); if (!Potatoe_Trans) return nullptr;

	return Potatoe_Trans;
}

SDK::Type* Utils::GetType(std::string string)
{
	if (string.empty())
		return nullptr;

	return SDK::System_Type_GetType(SysStrToUnityStr(string), nullptr);
}

std::vector<std::tuple<std::string, SDK::GhostButton*, SDK::GameObject*>> Utils::get_AllGhostButtonsWithGO()
{
	// Journal2.0Canvas > Content > GhostHuntingBookContent > Evidence.2 > All Ghosts > GHOST NAME

	std::vector<std::tuple<std::string, SDK::GhostButton*, SDK::GameObject*>> result;

	auto* canvasGO = SDK::GameObject_Find(SysStrToUnityStr("Journal2.0Canvas"), nullptr);
	if (!canvasGO)
		return result;

	auto* canvasTr = SDK::GameObject_get_transform(canvasGO, nullptr);
	if (!canvasTr)
		return result;

	SDK::Transform* contentTr = nullptr;
	int canvasChildCount = SDK::Transform_get_childCount(canvasTr, nullptr);
	for (int i = 0; i < canvasChildCount; ++i)
	{
		auto* child = SDK::Transform_GetChild(canvasTr, i, nullptr);
		auto* childGO = SDK::Component_Get_GameObject(reinterpret_cast<SDK::Component*>(child), nullptr);
		std::string name = UnityStrToSysStr(*SDK::Object_Get_Name(reinterpret_cast<SDK::Object*>(childGO), nullptr));

		if (name == "Content")
		{
			contentTr = child;
			break;
		}
	}
	if (!contentTr) return result;

	SDK::Transform* bookContentTr = nullptr;
	int contentChildCount = SDK::Transform_get_childCount(contentTr, nullptr);
	for (int i = 0; i < contentChildCount; ++i)
	{
		auto* child = SDK::Transform_GetChild(contentTr, i, nullptr);
		auto* childGO = SDK::Component_Get_GameObject(reinterpret_cast<SDK::Component*>(child), nullptr);
		std::string name = UnityStrToSysStr(*SDK::Object_Get_Name(reinterpret_cast<SDK::Object*>(childGO), nullptr));

		if (name == "GhostHuntingBookContent")
		{
			bookContentTr = child;
			break;
		}
	}
	if (!bookContentTr) return result;

	SDK::Transform* evidenceTr = nullptr;
	int bookChildCount = SDK::Transform_get_childCount(bookContentTr, nullptr);
	for (int i = 0; i < bookChildCount; ++i)
	{
		auto* child = SDK::Transform_GetChild(bookContentTr, i, nullptr);
		auto* childGO = SDK::Component_Get_GameObject(reinterpret_cast<SDK::Component*>(child), nullptr);
		std::string name = UnityStrToSysStr(*SDK::Object_Get_Name(reinterpret_cast<SDK::Object*>(childGO), nullptr));

		if (name == "Evidence.2")
		{
			evidenceTr = child;
			break;
		}
	}
	if (!evidenceTr) return result;

	SDK::Transform* allGhostsTr = nullptr;
	int evidenceChildCount = SDK::Transform_get_childCount(evidenceTr, nullptr);
	for (int i = 0; i < evidenceChildCount; ++i)
	{
		auto* child = SDK::Transform_GetChild(evidenceTr, i, nullptr);
		auto* childGO = SDK::Component_Get_GameObject(reinterpret_cast<SDK::Component*>(child), nullptr);
		std::string name = UnityStrToSysStr(*SDK::Object_Get_Name(reinterpret_cast<SDK::Object*>(childGO), nullptr));

		if (name == "All Ghosts")
		{
			allGhostsTr = child;
			break;
		}
	}
	if (!allGhostsTr) return result;

	int ghostCount = SDK::Transform_get_childCount(allGhostsTr, nullptr);
	for (int i = 0; i < ghostCount; ++i)
	{
		auto* ghostTr = SDK::Transform_GetChild(allGhostsTr, i, nullptr);
		auto* ghostGO = SDK::Component_Get_GameObject(reinterpret_cast<SDK::Component*>(ghostTr), nullptr);
		std::string ghostName = UnityStrToSysStr(*SDK::Object_Get_Name(reinterpret_cast<SDK::Object*>(ghostGO), nullptr));

		if (ghostName.find("New Ghost") != std::string::npos)
			continue;

		SDK::Type* ghostButtonType = SDK::System_Type_GetType(SysStrToUnityStr("GhostButton"), nullptr);
		auto* ghostButton = reinterpret_cast<SDK::GhostButton*>(SDK::GameObject_GetComponent(ghostGO, ghostButtonType, nullptr));

		if (ghostButton)
			result.emplace_back(ghostName, ghostButton, ghostGO);
	}

	return result;
}

bool Utils::DownloadFile(const std::string& url, const std::string& path)
{
	HRESULT hr = URLDownloadToFileA(nullptr, url.c_str(), path.c_str(), 0, nullptr);
	return SUCCEEDED(hr);
}

bool Utils::ExtractZip(const std::string& zipPath, const std::string& extractPath)
{
	std::string command = "powershell -Command \"Expand-Archive -Path '"
		+ zipPath + "' -DestinationPath '" + extractPath + "' -Force\"";

	return system(command.c_str()) == 0;
}

bool Utils::InstallChineseFont()
{
	std::string baseDir = GetPhasmoCheatVDirectory();
	std::string tempDir = baseDir + "\\ph_temp_font";
	std::string zipPath = tempDir + "\\ph_font.zip";
	std::string finalFont = baseDir + "\\ChinaLang.ttf";

	try
	{
		if (fs::exists(finalFont))
		{
			LOG_INFO("Chinese font already exists, skipping installation.");
			return true;
		}

		fs::create_directories(tempDir);
		if (!DownloadFile("https://github.com/MonadABXY/mona-font/releases/download/2026.03.27/MonaS_20260327_0901.zip", zipPath))
		{
			LOG_ERROR("Download file was failed!");
			return false;
		}

		if (!ExtractZip(zipPath, tempDir))
		{
			LOG_ERROR("Extract zip was failed!");
			fs::remove_all(tempDir);
			return false; 
		}

		std::string fontPath = tempDir + "\\ttf\\01_Main\\MonaS12.ttf";
		if (!fs::exists(fontPath))
		{
			LOG_ERROR("Font %s not found!", fontPath);
			fs::remove_all(tempDir);
			return false;
		}

		fs::copy_file(fontPath, finalFont, fs::copy_options::overwrite_existing);

		fs::remove_all(tempDir);

		return true;
	}
	catch (...)
	{
		return false;
	}
}

std::string Utils::GetGameVersion()
{
	auto* u_string = SDK::Application_get_version(0);
	auto version = UnityStrToSysStr(*u_string);
	return version;
}

std::string Utils::GetUnityVersion()
{
	auto* u_string = SDK::Application_get_unityVersion(0);
	auto version = UnityStrToSysStr(*u_string);
	return version;
}

bool Utils::Checks_IsRealSender(SDK::Player* pn_sender, SDK::PhotonView* view)
{
	if (pn_sender == nullptr || view == nullptr)
		return 0; // In game code return true

	if (pn_sender != SDK::PhotonView_get_Owner(view, 0))
		return 0;

	if (!SDK::PhotonNetwork_Get_InRoom(0))
		return 1;

	if (SDK::PhotonNetwork_Get_OfflineMode(0))
		return 1;
}

float Utils::Distance(const SDK::Vector3& a, const SDK::Vector3& b)
{
	float dx = a.X - b.X;
	float dy = a.Y - b.Y;
	float dz = a.Z - b.Z;

	return std::sqrt(dx * dx + dy * dy + dz * dz);
}