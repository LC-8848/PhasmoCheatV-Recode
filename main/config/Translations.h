#pragma once
#include "LanguageManager.h"

inline void RegisterAllTranslations()
{
    // Base errors
    ADD_STR("NeedToBeInGame", "You need to be in the game.", u8"Вам нужно быть в игре.");
    ADD_STR("NeedMustBeHost", "You must be the host to use this feature.", u8"Вам нужно быть хостом дабы использовать эту функцию.");

    // Feature Manager
    ADD_STR("SearchFeatures", "Search features...", u8"Поиск функций...");
    ADD_STR("NoFeaturesFound", "No features found matching '%s'", u8"Функции, соответствующие '%s', не найдены");
    ADD_STR("Unknown", "Unknown", u8"Неизвестно");
    ADD_STR("Visuals", "Visuals", u8"Визуалы");
    ADD_STR("Players", "Players", u8"Игроки");
    ADD_STR("Ghost", "Ghost", u8"Призрак");
    ADD_STR("Cursed", "Cursed Items", u8"Проклятые предметы");
    ADD_STR("Movement", "Movement", u8"Движение");
    ADD_STR("Misc", "Misc", u8"Разное");
    ADD_STR("Configs", "Configs", u8"Конфиги");
    ADD_STR("Difficulty", "Difficulty", u8"Сложность");
    ADD_STR("Map", "Map", u8"Карта");
    ADD_STR("BackToCategories", "Back to Categories", u8"Вернуться к категориям");

    // Main Menu
    ADD_STR("Menu_Features", "FEATURES", u8"ФУНКЦИИ");
    ADD_STR("Menu_Settings", "SETTINGS", u8"НАСТРОЙКИ");
    ADD_STR("Menu_About", "ABOUT", u8"О МОДИФИКАЦИИ");
    ADD_STR("Menu_Unload", "UNLOAD CHEAT", u8"ВЫГРУЗИТЬ ЧИТ");
    ADD_STR("Menu_General", "General Settings", u8"Общие настройки");
    ADD_STR("Menu_ToggleKey", "Menu Toggle Key:", u8"Клавиша меню:");
    ADD_STR("Menu_SetKey", "Set New Key", u8"Задать клавишу");
    ADD_STR("Menu_PressKey", "Press any key to set as menu toggle...", u8"Нажмите любую клавишу для назначения меню");
    ADD_STR("Menu_Cancel", "Cancel", u8"Отмена");
    ADD_STR("Menu_NoFeatures", "Features not available", u8"Функции недоступны");
    ADD_STR("Menu_OpenSource", "OPEN SOURCE", u8"ОТКРЫТЫЙ ИСХОДНЫЙ КОД");
    ADD_STR("Menu_GitHubRepo", "GitHub Repository", u8"Репозиторий GitHub");
    ADD_STR("Menu_OpenGitHub", "Open GitHub", u8"Открыть GitHub");
    ADD_STR("Menu_License", "License: MIT", u8"Лицензия: MIT");
    ADD_STR("Menu_OpenSourceDesc",
        "This project is open source and available under MIT License. Feel free to contribute!",
        u8"Этот проект имеет открытый исходный код и распространяется по лицензии MIT. Вы можете внести вклад!");
    ADD_STR("Menu_Credits", "CREDITS", u8"КОМАНДА");
    ADD_STR("Menu_SpecialThanks", "Special Thanks", u8"Отдельная благодарность");
    ADD_STR("Menu_CheatInjected", "Cheat injected successfully. The menu opens on ", u8"Чит введен успешно. Меню откроется на ");
    ADD_STR("Menu_ClearCache", "Clear the cache", u8"Очистить кэш");

    // Map modifier
    ADD_STR("AutoSelectMap", "Auto Select Map", u8"Автоматический выбор карты");
    ADD_STR("SelectMap", "Select Map", u8"Выбрать карту");
    ADD_STR("CurrentMap", "Current Map %s", u8"Текущая карта %s");
    ADD_STR("EnableMapModifier", "Enable Map Modifier", u8"Включить модификатор карты");
    ADD_STR("CustomMaxLights", "Custom max lights", u8"Пользовательский лимит ламп");
    ADD_STR("MaxLights", "Max lights", u8"Макс. ламп");
    ADD_STR("ActivateAllLights", "Activate all lights switches", u8"Включить все выключатели света");
    ADD_STR("DeactivateAllLights", "Deactivate all lights switches", u8"Выключить все выключатели света");
    ADD_STR("TriggerLightning", "Trigger lightning", u8"Вызвать молнию");
    ADD_STR("SwitchFuseBox", "Switch fuse box", u8"Переключить щиток");
    ADD_STR("AllLightsActivated", "All light switches activated.", u8"Все выключатели света включены.");
    ADD_STR("AllLightsDeactivated", "All light switches deactivated.", u8"Все выключатели света выключены.");
    ADD_STR("LightningTriggered", "Lightning has been triggered.", u8"Молния была вызвана.");
    ADD_STR("FuseBoxSwitched", "Fuse box has been switched.", u8"Щиток переключён.");
    ADD_STR("WeatherShouldBeHeavyRain", "The weather should be heavy rain.", u8"Погода должна быть сильным дождём.");

    // Activity Monitor
    ADD_STR("EnableActivityMonitor", "Enable Activity Monitor", u8"Включить монитор активности");

    // AntiKick
    ADD_STR("AntiKickEnable", "Enable AntiKick", u8"Включить AntiKick");
    ADD_STR("HostKickedYou", "The host tried to kick you out!", u8"Хост попытался кикнуть вас!");

    // CursedItemsControll
    ADD_STR("BreakCursed", "Break cursed items##cursed", u8"Сломать проклятые предметы##cursed");
    ADD_STR("UseCursed", "Use cursed items##cursed", u8"Использовать проклятые предметы##cursed");
    ADD_STR("TarotCardsModEnable", "Active tarot cards modifier##cursed", u8"Активировать модификации таро карт##cursed");
    ADD_STR("ForceTarotCards", "Force Card Type##cursed", u8"Подменить тип карты##cursed");
    ADD_STR("CardType", "Card Type##cursed", u8"Тип карты##cursed");
    ADD_STR("InfTarotCards", "Infinite cards##cursed", u8"Бесконечные карты##cursed");

    // CustName
    ADD_STR("SetName", "Set name##custname", u8"Установить имя##custname");

    // CustomLookLimits
    ADD_STR("LookLimitsEnable", "Enable Custom Look Limits", u8"Включить пользовательские ограничения на просмотр");
    ADD_STR("NoLimits", "No Limits", u8"Отключить ограничения");
    ADD_STR("MinX", "Min X", u8"Минимальный X");
    ADD_STR("MaxX", "Max X", u8"Максимальный X");

    // Custom speed
    ADD_STR("CustomSpeedEnabled", "Enable custom speed##custSpeed", u8"Включить пользовательскую скорость##custSpeed");
    ADD_STR("CustomSpeedSlider", "Custom speed##custSpeed", u8"Пользовательская скорость##custSpeed");

    // Difficulty 
    ADD_STR("RequiredLevel", "RequiredLevel", u8"Требуемый уровень");
    ADD_STR("SanityPillRestoration", "SanityPillRestoration", u8"Восстановление санпайлов");
    ADD_STR("StartingSanity", "StartingSanity", u8"Начальное рассудка");
    ADD_STR("SanityDrain", "SanityDrain", u8"Скорость потери рассудка");
    ADD_STR("Sprinting", "Sprinting", u8"Спринт");
    ADD_STR("Flashlights", "Flashlights", u8"Фонарики");
    ADD_STR("LoseItemsOnDeath", "LoseItemsOnDeath", u8"Потеря предметов при смерти");
    ADD_STR("PlayerSpeed", "PlayerSpeed", u8"Скорость игрока");
    ADD_STR("EvidenceGiven", "EvidenceGiven", u8"Количество улик");
    ADD_STR("ChangingFavouriteRoom", "ChangingFavouriteRoom", u8"Смена любимой комнаты");
    ADD_STR("InteractionAmount", "InteractionAmount", u8"Количество взаимодействий");
    ADD_STR("EventFrequency", "EventFrequency", u8"Частота событий");
    ADD_STR("HuntDuration", "HuntDuration", u8"Длительность охоты");
    ADD_STR("GracePeriod", "GracePeriod", u8"Период безопасности");
    ADD_STR("FingerprintChance", "FingerprintChance", u8"Шанс отпечатков");
    ADD_STR("FingerprintDuration", "FingerprintDuration", u8"Длительность отпечатков");
    ADD_STR("FriendlyGhost", "FriendlyGhost", u8"Дружелюбный призрак");
    ADD_STR("KillsExtendHunt", "KillsExtendHunt", u8"Убийства продлевают охоту");
    ADD_STR("RoamingFrequency", "RoamingFrequency", u8"Частота блуждания");
    ADD_STR("GhostSpeed", "GhostSpeed", u8"Скорость призрака");
    ADD_STR("SetupTime", "SetupTime", u8"Время подготовки");
    ADD_STR("SelectedWeather", "SelectedWeather", u8"Выбранная погода");
    ADD_STR("DoorsOpen", "DoorsOpen", u8"Открытые двери");
    ADD_STR("HidingPlaces", "HidingPlaces", u8"Укрытия");
    ADD_STR("SanityMonitor", "SanityMonitor", u8"Монитор рассудка");
    ADD_STR("ActivityMonitor", "ActivityMonitor", u8"Монитор активности");
    ADD_STR("FuseBoxVisible", "FuseBoxVisible", u8"Щиток виден");
    ADD_STR("FuseBoxStartPower", "FuseBoxStartPower", u8"Начальное состояние щитка");

    // DoorMod
    ADD_STR("EnableDoorModifier", "Enable Door Modifier", u8"Включить модификацию дверей");
    ADD_STR("DisableDoorInteraction", "Disable Door Interaction", u8"Отключить взаимодействие с дверьми");
    ADD_STR("EnableDoorInteraction", "Enable Door Interaction", u8"Включить взаимодействие с дверьми");
    ADD_STR("TeleportDoorsToPlayer", "Teleport Doors To Player (only client)", u8"Телепортировать двери к игроку (только клиент)");
    ADD_STR("DisableAllDoors", "Disable All Doors", u8"Отключить все двери");
    ADD_STR("EnableAllDoors", "Enable All Doors", u8"Включить все двери");
    ADD_STR("DoorInteractionEnabled", "Door interaction is enabled.", u8"Взаимодействие с дверьми было включено.");
    ADD_STR("DoorInteractionDisabled", "Door interaction is disabled.", u8"Взаимодействие с дверьми было отключено.");
    ADD_STR("DoorsTeleported", "Doors teleported to player.", u8"Двери были телепортированы к игроку.");
    ADD_STR("AllDoorsDisabled", "All doors disabled.", u8"Все двери отключены.");
    ADD_STR("AllDoorsEnabled", "All doors enabled.", u8"Все двери включены.");

    // Evidence ESP
    ADD_STR("EnableEvidenceESP", "Enable Evidence ESP", u8"Включить ESP улик");
    ADD_STR("CursedItem", "Cursed item", u8"Проклятые предметы");
    ADD_STR("DNAEvidence", "DNA evidence", u8"DNA-улики");
    ADD_STR("EMFSpots", "EMF spots", u8"EMF-источники");
    ADD_STR("GhostOrb", "Ghost Orb", u8"Призрачный огонёк");
    ADD_STR("OtherEvidence", "Other evidence", u8"Прочие улики");
    ADD_STR("Color", "Color", u8"Цвет");

    // ExitVanSolo
    ADD_STR("EnableExitVanSolo", "Enable exit van solo", u8"Включить выход в фургоне одному");

    // ForceStart
    ADD_STR("EnableForceStart", "Enable Force Start", u8"Включить быстрый старт");
    
    // FoVEditor
    ADD_STR("EnableCustomFoV", "Enable custom FoV", u8"Включить пользовательское FoV");
    ADD_STR("CustomFoVValue", "Custom FoV Value", u8"Пользовательское значение FoV");
    ADD_STR("ForceApply", "Force Apply", u8"Моментальное применение");
    ADD_STR("ResetToDefault", "Reset to Default", u8"Сбросить по умолчанию");

    // Fullbright
    ADD_STR("EnableFullbright", "Enable Fullbright", u8"Включить Fullbright");

    // FuseEsp
    ADD_STR("EnableFuseboxEsp", "Enable fusebox esp", u8"Включить ESP на электрощиток");
    ADD_STR("ShowStatusFuseBox", "Show status fusebox", u8"Показать статус электрощитка");

    // GhostDesign
    ADD_STR("EnableGhostDesigner", "Enable Ghost Designer", u8"Включить редактор призрака");
    ADD_STR("GhostAge", "Ghost Age", u8"Возраст призрака");
    ADD_STR("GhostType", "Ghost Type", u8"Тип призрака");
    ADD_STR("IsShy", "Is Shy", u8"Застенчивый призрак");
    ADD_STR("EvidenceSettings", "Evidence Settings", u8"Настройки улик");
    ADD_STR("EvidenceMode", "Mode", u8"Режим");
    ADD_STR("EvidenceCount", "Evidence Count", u8"Количество улик");
    ADD_STR("Evidence", "Evidence", u8"Улика");
    ADD_STR("EvidenceModeRandom", "Random", u8"Случайно");
    ADD_STR("EvidenceModeSelected", "Selected", u8"Выборочно");

    // GhostESP
    ADD_STR("EnableGhostESP", "Enable Ghost ESP", u8"Включить ESP призрака");
    ADD_STR("BoxType", "Box Type", u8"Тип рамки");
    ADD_STR("BoxThickness", "Box Thickness", u8"Толщина рамки");
    ADD_STR("ShowSkeleton", "Show Skeleton", u8"Показать скелет");
    ADD_STR("SkeletonColor", "Skeleton Color", u8"Цвет скелета");
    ADD_STR("SkeletonThickness", "Skeleton Thickness", u8"Толщина скелета");
    ADD_STR("ShowPhotoESP", "Show Photo ESP", u8"Показать фото ESP");
    ADD_STR("PhotoWidth", "Photo Width", u8"Ширина фото");
    ADD_STR("PhotoHeight", "Photo Height", u8"Высота фото");
    ADD_STR("ResetPhotoSize", "Reset Photo Size", u8"Сбросить размер фото");
    ADD_STR("DefaultPhotoSize", "Default: 1.0 x 1.0", u8"По умолчанию: 1.0 x 1.0");
    ADD_STR("PhotoType", "Photo type", u8"Тип фото");
    ADD_STR("RefreshImages", "Refresh images", u8"Обновить изображения");
    ADD_STR("NoImagesFound", "No images found", u8"Изображения не найдены");
    ADD_STR("ImagesFolderHint", "Images folder", u8"Папка Images");

    // GhostInter
    ADD_STR("TriggerAbility", "Trigger ability", u8"Активировать способность");
    ADD_STR("GenericInteraction", "Generic interaction", u8"Общее взаимодействие");
    ADD_STR("RandomLightSwitch", "Random light switch", u8"Случайное включение света");
    ADD_STR("RandomDoorInteraction", "Random door interaction", u8"Случайное взаимодействие с дверью");
    ADD_STR("RandomPropInteraction", "Random prop interaction", u8"Случайное взаимодействие с предметами");
    ADD_STR("StandardInteraction", "Standard interaction", u8"Стандартное взаимодействие");
    ADD_STR("TwinInteraction", "Twin interaction", u8"Взаимодействие с близнецом");

    // GhostMod
    ADD_STR("EnableGhostModifier", "Enable Ghost Modifier", u8"Включить модификацию призрака");
    ADD_STR("EnableCustomGhostSpeed", "Enable custom ghost speed", u8"Включить кастомную скорость призрака");
    ADD_STR("GhostSpeed", "Ghost Speed", u8"Скорость призрака");
    ADD_STR("ForceAppear", "Force appear", u8"Принудительное появление");
    ADD_STR("ForcedType", "Forced type", u8"Принудительный тип");
    ADD_STR("ForceState", "Force State", u8"Принудительное состояние");
    ADD_STR("FreezeState", "Freeze State", u8"Заморозить состояние");
    ADD_STR("SetGhostVisible", "Set ghost visible (only local)", u8"Установить видимость призрака (только локально)");

    // Ghost Panel
    ADD_STR("EnableGhostPanel", "Enable Ghost Panel", u8"Включить панель призрака");
    ADD_STR("ShowBansheeTarget", "Show Banshee target (CRASH RISK)", u8"Показывать цель Банши (Риск краша)");
    ADD_STR("IsHideSettingsTr", "Hide Settings", u8"Скрыть настройки");
    ADD_STR("HideName", "Hide Name", u8"Скрыть имя");
    ADD_STR("HideType", "Hide Type", u8"Скрыть тип");
    ADD_STR("HideAge", "Hide Age", u8"Скрыть возраст");
    ADD_STR("HideState", "Hide State", u8"Скрыть состояние");
    ADD_STR("HideEvidence", "Hide Evidence", u8"Скрыть улики");
    ADD_STR("HideRoom", "Hide Favorite Room", u8"Скрыть любимую комнату");
    ADD_STR("HideLocation", "Hide Location", u8"Скрыть текущую локацию");
    ADD_STR("HideMimicType", "Hide Mimic Type", u8"Скрыть тип мимика");
    ADD_STR("HideBansheeTarget", "Hide Banshee Target", u8"Скрыть цель банши");

    // GodMode
    ADD_STR("GodModeEnable", "Enable GodMode", u8"Включить режим бога");

    // GrabKey
    ADD_STR("GrabAllKeys", "Grab all keys", u8"Подобрать все ключи");
    ADD_STR("AutoGrabAllKeys", "Auto grab all keys", u8"Автоматически подобрать все ключи");
    ADD_STR("NoKeysFound", "No keys found.", u8"Ключи не найдены.");

    // InfStamina
    ADD_STR("InfinityStaminaEnable", "Enable Infinite Stamina", u8"Включить бесконечную стамину");

    // LiftButtonSkipAnim
    ADD_STR("LiftButtonSkipAnimEnable", "Enable skip van animation", u8"Включить пропуск анимации открытия фургона");

    // NoClip
    ADD_STR("CreditNoClip", "Thanks to Evelien for the NoClip feature!", u8"Спасибо Эвелин за NoClip функцию!");
    ADD_STR("EnabledNoClip", "Enabled NoClip", u8"Включить NoClip");
    ADD_STR("NoClipSpeed", "NoClip speed", u8"NoClip скорость");

    // NotifyInfo
    ADD_STR("EnableNotifyInfo", "Enable Notify Info", u8"Включить уведомления о действиях в игре");
    ADD_STR("GhostTriedHunt", "Ghost tried to hunt.", u8"Призрак попытался начать охоту.");
    ADD_STR("GhostStartHunting", "Ghost started hunting!", u8"Призрак начал охоту!");
    ADD_STR("GhostStopHunting", "Ghost stopped hunting.", u8"Призрак остановил охоту.");
    ADD_STR("BoneCollected", "Bone has been collected.", u8"Косточка была подобрана.");

    // Pickup
    ADD_STR("EnablePickup", "Enable Pickup", u8"Включить модификацию подбора");
    ADD_STR("CustomThrow", "Custom throw", u8"Пользовательская сила броска");
    ADD_STR("ThrowMultiplier", "Throw multiplier", u8"Множитель силы броска");
    ADD_STR("CustomGrabDistance", "Custom grab distance", u8"Пользовательская дистанция захвата");
    ADD_STR("GrabDistance", "Grab distance", u8"Дистанция захвата");
    ADD_STR("PickupEverything", "Pickup Everything", u8"Поднимать все объекты");
    ADD_STR("PocketEverything", "Pocket Everything", u8"Класть всё в карман");

    // PlayerESP
    ADD_STR("EnablePlayerESP", "Enable player ESP", u8"Включить ESP на игроков");
    ADD_STR("Show2DBox", "Show 2D box", u8"Показывать 2D коробку");
    ADD_STR("ShowPlayerSanity", "Show player sanity", u8"Показывать рассудок");
    ADD_STR("ShowDeadStatus", "Show dead status", u8"Показывать статус смерти");
    ADD_STR("ShowCurrentRoom", "Show current room", u8"Показывать текущую комнату");
    ADD_STR("ShowPrestige", "Show prestige", u8"Показывать престиж");
    ADD_STR("ShowExperience", "Show experience", u8"Показывать опыт");
    ADD_STR("ShowLevel", "Show level", u8"Показывать уровень");
    ADD_STR("ShowSprinting", "Show sprinting", u8"Показывать статус бега");
    ADD_STR("ErrorLoadingSettings", "Error loading PlayerESP settings", u8"Ошибка загрузки настроек PlayerESP");

    // PlayerMod
    ADD_STR("Player", "Player", u8"Игрок");
    ADD_STR("Sanity", "Sanity", u8"Рассудок");
    ADD_STR("Dead", "DEAD", u8"МЁРТВ");
    ADD_STR("CurrentRoom", "Current room", u8"Текущая комната");
    ADD_STR("TeleportTo", "Teleport to", u8"Телепорт к");
    ADD_STR("CantTeleportToYourself", "You can't teleport to yourself.", u8"Нельзя телепортироваться к себе");
    ADD_STR("KillPlayer", "Kill player", u8"Убить игрока");
    ADD_STR("RevivePlayer", "Revive player", u8"Оживить игрока");
    ADD_STR("FreezePlayer", "Freeze player", u8"Заморозить игрока");
    ADD_STR("UnfreezePlayer", "Unfreeze player", u8"Разморозить игрока");
    ADD_STR("PlayerAlreadyDead", "Player is already dead.", u8"Игрок уже мёртв");
    ADD_STR("PlayerAlreadyAlive", "Player is already revived.", u8"Игрок уже жив");
    ADD_STR("SanityValue", "Sanity", u8"Рассудок");
    ADD_STR("SetSanity", "Set sanity", u8"Установить рассудок");


    // PlayerPanel
    ADD_STR("EnablePlayersPanel", "Enable Players Panel", u8"Включить панель игроков");
    ADD_STR("ShowSanity", "Show Sanity", u8"Показывать рассудок");
    ADD_STR("ShowCurrentRoom", "Show Current Room", u8"Показывать текущую комнату");
    ADD_STR("ShowTemperature", "Show Temperature", u8"Показывать температуру");
    ADD_STR("ShowLevel", "Show Level", u8"Показывать уровень");
    ADD_STR("ShowExperience", "Show Experience", u8"Показывать опыт");
    ADD_STR("ShowPrestige", "Show Prestige", u8"Показывать престиж");
    ADD_STR("ShowHackerFlag", "Show Hacker Flag", u8"Показывать флаг читера");
    ADD_STR("ShowAverageSanity", "Show Average Sanity", u8"Показывать средний рассудок");

    // RewardMod
    ADD_STR("EnableRewardModifier", "Enable Reward Modifier", u8"Включить модификацию наград");
    ADD_STR("AlwaysPerfectGame", "Always Perfect Game", u8"Всегда идеальное расследование");
    ADD_STR("AutoCompleteObjectives", "Auto Complete Objectives", u8"Автоматическое завершение заданий");
    ADD_STR("CustomInvestigationBonus", "Custom Investigation Bonus", u8"Пользовательский бонус за идеальное расследование");
    ADD_STR("InvestigationBonusValue", "Investigation Bonus Value", u8"Стоимость бонуса за расследование");
    ADD_STR("CustomMediaBonus", "Custom Media Bonus", u8"Пользовательский бонус за медиа");
    ADD_STR("MediaBonusValue", "Media Bonus Value", u8"Стоимость медиа-бонуса");

    // SaltMod
    ADD_STR("EnableSaltModifier", "Enable Salt Modifier", u8"Включить модификацию соли");
    ADD_STR("InfinitySalt", "Infinity Salt", u8"Бесконечная соль");
    ADD_STR("GhostNUseSalt", "Ghost doesn't use salt", u8"Призрак не наступает на соль");
    ADD_STR("ResetAllSalt", "Reset all salt", u8"Обновить всю соль");
    ADD_STR("UseAllSalt", "Use all salt", u8"Использовать всю соль");

    // ShopMod
    ADD_STR("EnableShopModifier", "Enable Shop Modifier", u8"Включить модификатор магазина");
    ADD_STR("SkipShopTutorials", "Skip Shop Tutorials", u8"Пропустить обучение в магазина");
    ADD_STR("CustomCost", "Custom Cost", u8"Своя цена");
    ADD_STR("CustomCostValue", "Custom Cost Value", u8"Значение цены");
    ADD_STR("CustomCount", "Custom Count", u8"Свое количество");
    ADD_STR("CustomCountValue", "Custom Count Value", u8"Значение количества");
    ADD_STR("CustomUpgradeCost", "Custom Upgrade Cost", u8"Своя цена улучшения");
    ADD_STR("CustomUpgradeCostValue", "Custom Upgrade Cost Value", u8"Значение цены улучшения");
    ADD_STR("CustomRequiredLevel", "Custom Required Level", u8"Свое требуемое уровень");
    ADD_STR("CustomRequiredLevelValue", "Custom Required Level Value", u8"Значение требуемого уровня");

    // StatsPanel
    ADD_STR("EnableLevelStatsPanel", "Enable Level Stats Panel", u8"Включить панель статистики об контракте");
    ADD_STR("BoneNotFound", "Bone not found.", u8"Кость не найдена.");
    ADD_STR("BoneCollected", "Bone collected.", u8"Кость была подобрана.");

    // Teleport
    ADD_STR("Teleport_SavePos", "Save current position", u8"Сохранить текущую позицию");
    ADD_STR("Teleport_ToSaved", "Teleport to saved point", u8"Телепорт к сохранённой точке");
    ADD_STR("Teleport_ToCoords", "Teleport to coordinates", u8"Телепорт по координатам");
    ADD_STR("Teleport_Items", "Items Teleport:", u8"Телепорт предметов:");
    ADD_STR("Teleport_RefreshItems", "Refresh items list", u8"Обновить список предметов");
    ADD_STR("Teleport_SelectItem", "Select item to teleport:", u8"Выберите предмет для телепорта");
    ADD_STR("Teleport_Selected", "Teleport selected", u8"Телепорт выбранного");
    ADD_STR("Teleport_AllItems", "Teleport all items", u8"Телепортировать все предметы");
    ADD_STR("Teleport_Bone", "Teleport bone", u8"Телепорт кости");
    ADD_STR("Teleport_Truck", "Teleport to Truck", u8"Телепорт в фургон");
    ADD_STR("Teleport_Ghost", "Teleport to Ghost", u8"Телепорт к призраку");
    ADD_STR("TP_ItemsRefreshed", "Items list refreshed!", u8"Список предметов обновлён!");
    ADD_STR("TP_NoItems", "No items found.", u8"Предметы не найдены.");
    ADD_STR("TP_ItemTeleported", "Item teleported!", u8"Предмет телепортирован!");
    ADD_STR("TP_NoSavedPoint", "No saved point found.", u8"Сохранённая точка не найдена.");
    ADD_STR("TP_PosSaved", "Saved current position!", u8"Текущая позиция сохранена!");
    ADD_STR("TP_ToSaved", "Teleported to saved point!", u8"Телепорт к сохранённой точке.");
    ADD_STR("TP_ToTruck", "Teleported to Truck.", u8"Телепорт в фургон.");
    ADD_STR("TP_ToGhost", "Teleported to Ghost.", u8"Телепорт к призраку.");
    ADD_STR("TP_BoneTeleported", "Bone teleported!", u8"Кость телепортирована.");
    ADD_STR("TP_LocalPlayerMissing", "Local player not found.", u8"Локальный игрок не найден.");
    ADD_STR("TP_TruckNotFound", "Truck not found.", u8"Фургон не найден.");

    // Watermark
    ADD_STR("EnableWatermark", "Enable Watermark", u8"Включить водяной знак");
    ADD_STR("Watermark_ShowFPS", "Show FPS", u8"Показывать FPS");
    ADD_STR("Watermark_ShowSanity", "Show average sanity", u8"Показывать среднюю рассудочность");
    ADD_STR("Watermark_ShowPing", "Show ping", u8"Показывать пинг");

    // Auto Photo
    ADD_STR("AutoPhotoEnable", "Enable auto photo", u8"Включить автоматические фотоснимки");
    ADD_STR("WarningAutoPhoto", "Attention! To use this feature, you need to take the camera into your inventory and hold it in your hands.", u8"Внимание! Для использования данной функции необходимо взять камеру в инвентарь и держать её в руках.");
    
    // Temperature Panel
    ADD_STR("TemperaturePanelEnable", "Enable temperature panel", u8"Включить панель температуры");

    // Fast Thermometer
    ADD_STR("FastThermometerEnable", "Enable fast thermometer", u8"Включить быстрый термометр");
    ADD_STR("FastThermometerInfo", "It only works for the second and third tiers", u8"Это работает только для второго и третьего тира");

    // No End Game
    ADD_STR("EnableNoEndGame", "Enable no end game", u8"Включить бесконечную игру (No end game)");

    // Crosshair Modifier
    ADD_STR("CrosshairModifierEnable", "Enable Crosshair Modifier", u8"Включить модификацию прицела");
    ADD_STR("Apply", "Apply", u8"Применить");
    ADD_STR("RGBModeTr", "RGB Mode", u8"RGB Режим");
    ADD_STR("CrosshairSizeTr", "Crosshair size", u8"Размер прицела");

    // Potatoe ESP Fun
    ADD_STR("PotatoeESPEn", "Enable Potatoe ESP (FuN)", u8"Включить ESP на картофель (FuN)");

    // Template
    ADD_STR("", "", u8"");
}