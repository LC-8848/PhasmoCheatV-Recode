#pragma once
#include "LanguageManager.h" // Thanks @LingQiao1206 for the Chinese translation

inline void RegisterAllTranslations()
{
    // Base errors
    ADD_STR("NeedToBeInGame", "You need to be in the game.", u8"Вам нужно быть в игре.", u8"对局内才能使用此功能");
    ADD_STR("NeedMustBeHost", "You must be the host to use this feature.", u8"Вам нужно быть хостом дабы использовать эту функцию.", u8"房主才能使用此功能");

    // Feature Manager
    ADD_STR("Feature", "%s Features", u8"%s Функции", u8"%s功能");
    ADD_STR("SearchFeatures", "Search features...", u8"Поиск функций...", u8"在此搜索功能...");
    ADD_STR("NoFeaturesFound", "No features found matching '%s'", u8"Функции, соответствующие '%s', не найдены", u8"未找到包含“%s”的功能");
    ADD_STR("Unknown", "Unknown", u8"Неизвестно", u8"未知");
    ADD_STR("Visuals", "Visuals", u8"Визуалы", u8"视觉效果");
    ADD_STR("Players", "Players", u8"Игроки", u8"玩家");
    ADD_STR("Ghost", "Ghost", u8"Призрак", u8"鬼魂");
    ADD_STR("Cursed", "Cursed Items", u8"Проклятые предметы", u8"诅咒道具");
    ADD_STR("Movement", "Movement", u8"Движение", u8"移动");
    ADD_STR("Misc", "Misc", u8"Разное", u8"杂项");
    ADD_STR("Configs", "Configs", u8"Конфиги", u8"配置");
    ADD_STR("Difficulty", "Difficulty", u8"Сложность", u8"游戏难度");
    ADD_STR("Map", "Map", u8"Карта", u8"地图");
    ADD_STR("BackToCategories", "Back to Categories", u8"Вернуться к категориям", u8"返回分类");

    // Main Menu
    ADD_STR("Menu_Features", "FEATURES", u8"ФУНКЦИИ", u8"功能");
    ADD_STR("Menu_Settings", "SETTINGS", u8"НАСТРОЙКИ", u8"设置");
    ADD_STR("Menu_About", "ABOUT", u8"О МОДИФИКАЦИИ", u8"关于");
    ADD_STR("Menu_Hotkeys", "Hotkeys", u8"Бинды", u8"快捷键");
    ADD_STR("Menu_Unload", "UNLOAD CHEAT", u8"ВЫГРУЗИТЬ ЧИТ", u8"卸载作弊");
    ADD_STR("Menu_General", "General Settings", u8"Общие настройки", u8"常规设置");
    ADD_STR("Menu_ToggleKey", "Menu Toggle Key:", u8"Клавиша меню:", u8"菜单开关按键：");
    ADD_STR("Menu_SetKey", "Set New Key", u8"Задать клавишу", u8"设置新按键");
    ADD_STR("Menu_Language", "Language", u8"Язык", u8"选择语言");
    ADD_STR("Menu_Language_EN", "EN", u8"Английский", u8"英文");
    ADD_STR("Menu_Language_RU", "RU", u8"Русский", u8"俄语");
    ADD_STR("Menu_Language_CN", "CN", u8"Китайский", u8"中文");
    ADD_STR("Menu_Colors", "Colors", u8"Цвета", u8"颜色");
    ADD_STR("Menu_SaveColors", "Save Colors", u8"Сохранить цвета", u8"保存颜色");
    ADD_STR("Menu_ResetColors", "Reset Colors", u8"Сбросить цвета", u8"重置颜色");
    ADD_STR("Menu_PressKey", "Press any key to set as menu toggle...", u8"Нажмите любую клавишу для назначения меню", u8"请按任意键设置为菜单开关...");
    ADD_STR("Menu_Cancel", "Cancel", u8"Отмена", u8"取消");
    ADD_STR("Menu_NoFeatures", "Features not available", u8"Функции недоступны", u8"功能不可用");
    ADD_STR("Menu_OpenSource", "OPEN SOURCE", u8"ОТКРЫТЫЙ ИСХОДНЫЙ КОД", u8"开源");
    ADD_STR("Menu_GitHubRepo", "GitHub Repository", u8"Репозиторий GitHub", u8"GitHub仓库");
    ADD_STR("Menu_OpenGitHub", "Open GitHub", u8"Открыть GitHub", u8"打开GitHub");
    ADD_STR("Menu_License", "License: MIT", u8"Лицензия: MIT", u8"许可证：MIT");
    ADD_STR("Menu_OpenSourceDesc",
        "This project is open source and available under MIT License. Feel free to contribute!",
        u8"Этот проект имеет открытый исходный код и распространяется по лицензии MIT. Вы можете внести вклад!",
        u8"本项目基于MIT许可证开源，欢迎贡献代码！");
    ADD_STR("Menu_Credits", "CREDITS", u8"КОМАНДА", u8"制作人员");
    ADD_STR("Menu_SpecialThanks", "Special Thanks", u8"Отдельная благодарность", u8"特别鸣谢");
    ADD_STR("Menu_CheatInjected", "Cheat injected successfully. The menu opens on ", u8"Чит введен успешно. Меню откроется на ", u8"作弊注入成功，菜单开关按键：");
    ADD_STR("Menu_ClearCache", "Clear the cache", u8"Очистить кэш", u8"清除缓存");

    // Map modifier
    ADD_STR("MapModifier", "Map Modifier", u8"Модификатор карты", u8"地图修改器");
    ADD_STR("AutoSelectMap", "Auto Select Map", u8"Автоматический выбор карты", u8"自动选择地图");
    ADD_STR("SelectMap", "Select Map", u8"Выбрать карту", u8"选择地图");
    ADD_STR("CurrentMap", "Current Map %s", u8"Текущая карта %s", u8"当前地图：%s");
    ADD_STR("EnableMapModifier", "Enable Map Modifier", u8"Включить модификатор карты", u8"启用地图修改");
    ADD_STR("CustomMaxLights", "Custom max lights", u8"Пользовательский лимит ламп", u8"自定义最大灯光数");
    ADD_STR("MaxLights", "Max lights", u8"Макс. ламп", u8"最大灯光数");
    ADD_STR("ActivateAllLights", "Activate all lights switches", u8"Включить все выключатели света", u8"开启所有灯光");
    ADD_STR("DeactivateAllLights", "Deactivate all lights switches", u8"Выключить все выключатели света", u8"关闭所有灯光");
    ADD_STR("TriggerLightning", "Trigger lightning", u8"Вызвать молнию", u8"触发闪电（慎用）");
    ADD_STR("SwitchFuseBox", "Switch fuse box", u8"Переключить щиток", u8"开关电闸");
    ADD_STR("AllLightsActivated", "All light switches activated.", u8"Все выключатели света включены.", u8"所有灯光已开启");
    ADD_STR("AllLightsDeactivated", "All light switches deactivated.", u8"Все выключатели света выключены.", u8"所有灯光已关闭");
    ADD_STR("LightningTriggered", "Lightning has been triggered.", u8"Молния была вызвана.", u8"闪电已触发");
    ADD_STR("FuseBoxSwitched", "Fuse box has been switched.", u8"Щиток переключён.", u8"电闸状态已切换");
    ADD_STR("WeatherShouldBeHeavyRain", "The weather should be heavy rain.", u8"Погода должна быть сильным дождём.", u8"需要暴雨天气才能生效");

    // Activity Monitor
    ADD_STR("ActivityMonitor", "Activity Monitor", u8"монитор активности", u8"活动强度监视器");
    ADD_STR("EnableActivityMonitor", "Enable Activity Monitor", u8"Включить монитор активности", u8"启用活动强度监视器");

    // AntiKick
    ADD_STR("AntiKick", "AntiKick", u8"Анти-кик", u8"反踢出");
    ADD_STR("AntiKickEnable", "Enable AntiKick", u8"Включить AntiKick", u8"启用反踢出");
    ADD_STR("HostKickedYou", "The host tried to kick you out!", u8"Хост попытался кикнуть вас!", u8"房主试图将您踢出！");

    // CursedItemsControll
    ADD_STR("CursedItemsControll", "CursedItems Controll", u8"Контроль проклятых предметов", u8"诅咒道具控制");
    ADD_STR("BreakCursed", "Break cursed items##cursed", u8"Сломать проклятые предметы##cursed", u8"破坏诅咒道具##cursed");
    ADD_STR("UseCursed", "Use cursed items##cursed", u8"Использовать проклятые предметы##cursed", u8"使用诅咒道具##cursed");
    ADD_STR("TarotCardsModEnable", "Active tarot cards modifier##cursed", u8"Активировать модификации таро карт##cursed", u8"启用塔罗牌修改##cursed");
    ADD_STR("ForceTarotCards", "Force Card Type##cursed", u8"Подменить тип карты##cursed", u8"强制指定塔罗牌类型##cursed");
    ADD_STR("CardType", "Card Type##cursed", u8"Тип карты##cursed", u8"塔罗牌类型##cursed");
    ADD_STR("InfTarotCards", "Infinite cards##cursed", u8"Бесконечные карты##cursed", u8"无限塔罗牌##cursed");
    ADD_STR("SummoningCircleNotFound", "Summoning Circle not found!", u8"Круг призыва не найден!", u8"未找到召唤阵！");
    ADD_STR("LocalPlayerNotFound", "Local player not found!", u8"Локальный игрок не найден!", u8"未找到本地玩家！");
    ADD_STR("WarnNeedReportDev", "WARNING! Please report this error to the author immediately! By providing logs", u8"ВНИМАНИЕ! Пожалуйста, немедленно сообщите об этой ошибке автору! Предоставив логи", u8"警告！请立即向作者报告此错误（附带日志）");
    ADD_STR("SummoningCircleTransformNotFound", "Summoning Circle transform not found!", u8"Transform круга призыва не найден!", u8"未找到召唤阵的Transform组件！");
    ADD_STR("TooFarFromSummoningCircle", "Too far from the summoning circle", u8"Слишком далеко от круга призыва", u8"距离召唤阵太远");
    ADD_STR("NotEnoughSanity", "Not enough sanity", u8"Не хватает расудка", u8"理智值不足");
    ADD_STR("LitAllCandles", "You have lit a total of: %i candles", u8"Вы зажгли всего: %i свечей", u8"已点燃蜡烛数：%i");
    ADD_STR("UseMusicBox", "Use music box", u8"Использовать музыкальную шкатулку", u8"使用八音盒");
    ADD_STR("FixMusicBox", "Fix music box (SP)", u8"Починить музкальную шкатулку (SP)", u8"修复八音盒（单机）");
    ADD_STR("RitualStarted", "Ritual started", u8"Ритуал запущен", u8"仪式已开始");
    ADD_STR("StartRitual", "Start ritual of the summoning circle", u8"Начать ритуал круга призыва", u8"开始召唤阵仪式");
    ADD_STR("DisableHeartPin", "Disable heart pin", u8"Отключить пин сердца", u8"禁用心脏标记");
    ADD_STR("BeginRitualSummoningCircle", "Begin ritual summoning circle", u8"Начать ритуал круга призыва", u8"开始召唤阵仪式");

    // CustName
    ADD_STR("CustomName", "Custom name", u8"Пользовательское имя", u8"自定义名称");
    ADD_STR("SetName", "Set name##custname", u8"Установить имя##custname", u8"设置名字##custname");

    // CustomLookLimits
    ADD_STR("LookLimits", "Look Limits", u8"ограничения на просмотр", u8"视角限制");
    ADD_STR("LookLimitsEnable", "Enable Custom Look Limits", u8"Включить пользовательские ограничения на просмотр", u8"启用自定义视角限制");
    ADD_STR("NoLimits", "No Limits", u8"Отключить ограничения", u8"无限制");
    ADD_STR("MinX", "Min X", u8"Минимальный X", u8"最小X");
    ADD_STR("MaxX", "Max X", u8"Максимальный X", u8"最大X");

    // Custom speed
    ADD_STR("CustomSpeed", "Custom Speed", u8"Пользовательская скорость", u8"自定义速度");
    ADD_STR("CustomSpeedEnabled", "Enable custom speed##custSpeed", u8"Включить пользовательскую скорость##custSpeed", u8"启用自定义速度##custSpeed");
    ADD_STR("CustomSpeedSlider", "Custom speed##custSpeed", u8"Пользовательская скорость##custSpeed", u8"自定义速度##custSpeed");

    // Difficulty 
    ADD_STR("RequiredLevel", "RequiredLevel", u8"Требуемый уровень", u8"所需等级");
    ADD_STR("SanityPillRestoration", "SanityPillRestoration", u8"Восстановление санпайлов", u8"理智药水恢复理智值");
    ADD_STR("StartingSanity", "StartingSanity", u8"Начальное рассудка", u8"初始理智值");
    ADD_STR("SanityDrain", "SanityDrain", u8"Скорость потери рассудка", u8"理智值消耗速度");
    ADD_STR("Sprinting", "Sprinting", u8"Спринт", u8"奔跑");
    ADD_STR("Flashlights", "Flashlights", u8"Фонарики", u8"手电筒");
    ADD_STR("LoseItemsOnDeath", "LoseItemsOnDeath", u8"Потеря предметов при смерти", u8"死亡时丢失物品");
    ADD_STR("PlayerSpeed", "PlayerSpeed", u8"Скорость игрока", u8"玩家速度");
    ADD_STR("EvidenceGiven", "EvidenceGiven", u8"Количество улик", u8"证据数量");
    ADD_STR("ChangingFavouriteRoom", "ChangingFavouriteRoom", u8"Смена любимой комнаты", u8"更换鬼魂房间");
    ADD_STR("InteractionAmount", "InteractionAmount", u8"Количество взаимодействий", u8"互动频率");
    ADD_STR("EventFrequency", "EventFrequency", u8"Частота событий", u8"事件频率");
    ADD_STR("HuntDuration", "HuntDuration", u8"Длительность охоты", u8"猎杀持续时间");
    ADD_STR("GracePeriod", "GracePeriod", u8"Период безопасности", u8"猎杀徘徊期");
    ADD_STR("FingerprintChance", "FingerprintChance", u8"Шанс отпечатков", u8"指纹出现几率");
    ADD_STR("FingerprintDuration", "FingerprintDuration", u8"Длительность отпечатков", u8"指纹持续时间");
    ADD_STR("FriendlyGhost", "FriendlyGhost", u8"Дружелюбный призрак", u8"友善的鬼魂");
    ADD_STR("KillsExtendHunt", "KillsExtendHunt", u8"Убийства продлевают охоту", u8"击杀延长猎杀");
    ADD_STR("RoamingFrequency", "RoamingFrequency", u8"Частота блуждания", u8"游荡频率");
    ADD_STR("GhostSpeed", "GhostSpeed", u8"Скорость призрака", u8"鬼魂速度");
    ADD_STR("SetupTime", "SetupTime", u8"Время подготовки", u8"部署时间");
    ADD_STR("SelectedWeather", "SelectedWeather", u8"Выбранная погода", u8"天气");
    ADD_STR("DoorsOpen", "DoorsOpen", u8"Открытые двери", u8"开门状态");
    ADD_STR("HidingPlaces", "HidingPlaces", u8"Укрытия", u8"躲藏点");
    ADD_STR("SanityMonitor", "SanityMonitor", u8"Монитор рассудка", u8"理智值显示屏");
    ADD_STR("ActivityMonitor", "ActivityMonitor", u8"Монитор активности", u8"活动强度显示屏");
    ADD_STR("FuseBoxVisible", "FuseBoxVisible", u8"Щиток виден", u8"显示电闸位置");
    ADD_STR("FuseBoxStartPower", "FuseBoxStartPower", u8"Начальное состояние щитка", u8"开局电闸状态");
    ADD_STR("DifficultyModifier", "Difficulty Modifier", u8"модификатор сложности", u8"难度修改");
    ADD_STR("EnableDifficultyModifier", "Enable Difficulty Modifier", u8"Включить модификатор сложности", u8"启用难度修改");
    ADD_STR("AddSettingToModify", "Add setting to modify", u8"Добавить параметр для изменения", u8"添加要修改的设置项");
    ADD_STR("AddSetting", "Add", u8"Добавить", u8"添加");
    ADD_STR("SelectedSettings", "Selected settings", u8"Выбранные параметры", u8"已选设置");
    ADD_STR("ApplyChanges", "Apply changes", u8"Применить изменения", u8"应用更改");
    ADD_STR("ClearAll", "Clear all", u8"Очистить всё", u8"全部清除");
    ADD_STR("LevelValuesNotFound", "Level values not found", u8"LevelValues не найден", u8"未找到等级数值");
    ADD_STR("NoCurrentDifficulty", "No current difficulty", u8"Текущая сложность отсутствует", u8"无当前难度");
    ADD_STR("DifficultySettingsApplied", "Difficulty settings applied", u8"Настройки сложности применены", u8"难度设置已应用");
    ADD_STR("FailedApplyDifficultySettings", "Failed to apply difficulty settings", u8"Ошибка применения настроек сложности", u8"应用难度设置失败");
    ADD_STR("Off", "Off", u8"Выключено", u8"关闭");
    ADD_STR("On", "On", u8"Включено", u8"开启");
    ADD_STR("Yes", "Yes", u8"Да", u8"是");
    ADD_STR("No", "No", u8"Нет", u8"不是");
    ADD_STR("Infinite", "Infinite", u8"Бесконечно", u8"无限");
    ADD_STR("None", "None", u8"Нет", u8"无");
    ADD_STR("Low", "Low", u8"Низкий", u8"低");
    ADD_STR("Medium", "Medium", u8"Средний", u8"中");
    ADD_STR("High", "High", u8"Высокий", u8"高");
    ADD_STR("VeryHigh", "Very High", u8"Очень высокий", u8"非常高");
    ADD_STR("Random", "Random", u8"Случайно", u8"随机");
    ADD_STR("LightRain", "Light rain", u8"Лёгкий дождь", u8"小雨");
    ADD_STR("HeavyRain", "Heavy rain", u8"Сильный дождь", u8"大雨");
    ADD_STR("Snow", "Snow", u8"Снег", u8"雪");
    ADD_STR("Wind", "Wind", u8"Ветер", u8"风");
    ADD_STR("Clear", "Clear", u8"Ясно", u8"晴朗");
    ADD_STR("Fog", "Fog", u8"Туман", u8"雾");
    ADD_STR("Sunrise", "Sunrise", u8"Рассвет", u8"日出");
    ADD_STR("BloodMoon", "Blood moon", u8"Кровавая луна", u8"血月");
    ADD_STR("Broken", "Broken", u8"Сломан", u8"已损坏");

    // DoorMod
    ADD_STR("DoorModifier", "Door Modifier", u8"Модификатор дверей", u8"门修改器");
    ADD_STR("EnableDoorModifier", "Enable Door Modifier", u8"Включить модификацию дверей", u8"启用门修改器");
    ADD_STR("DisableDoorInteraction", "Disable Door Interaction", u8"Отключить взаимодействие с дверьми", u8"禁用门交互");
    ADD_STR("EnableDoorInteraction", "Enable Door Interaction", u8"Включить взаимодействие с дверьми", u8"启用门交互");
    ADD_STR("TeleportDoorsToPlayer", "Teleport Doors To Player (only client)", u8"Телепортировать двери к игроку (только клиент)", u8"传送所有门到玩家位置（仅客户端）");
    ADD_STR("DisableAllDoors", "Disable All Doors", u8"Отключить все двери", u8"禁用所有门");
    ADD_STR("EnableAllDoors", "Enable All Doors", u8"Включить все двери", u8"启用所有门");
    ADD_STR("DoorInteractionEnabled", "Door interaction is enabled.", u8"Взаимодействие с дверьми было включено.", u8"门交互已启用");
    ADD_STR("DoorInteractionDisabled", "Door interaction is disabled.", u8"Взаимодействие с дверьми было отключено.", u8"门交互已禁用");
    ADD_STR("DoorsTeleported", "Doors teleported to player.", u8"Двери были телепортированы к игроку.", u8"所有门已传送到玩家位置");
    ADD_STR("AllDoorsDisabled", "All doors disabled.", u8"Все двери отключены.", u8"所有门已禁用");
    ADD_STR("AllDoorsEnabled", "All doors enabled.", u8"Все двери включены.", u8"所有门已启用");

    // Evidence ESP
    ADD_STR("EvidenceESP", "Evidence ESP", u8"ESP улик", u8"证据绘制");
    ADD_STR("EnableEvidenceESP", "Enable Evidence ESP", u8"Включить ESP улик", u8"启用证据绘制");
    ADD_STR("CursedItem", "Cursed item", u8"Проклятые предметы", u8"诅咒道具");
    ADD_STR("DNAEvidence", "DNA evidence", u8"DNA-улики", u8"骨头证据");
    ADD_STR("EMFSpots", "EMF spots", u8"EMF-источники", u8"EMF点位");
    ADD_STR("GhostOrb", "Ghost Orb", u8"Призрачный огонёк", u8"灵球");
    ADD_STR("OtherEvidence", "Other evidence", u8"Прочие улики", u8"其他证据");
    ADD_STR("Color", "Color", u8"Цвет", u8"颜色");

    // ExitVanSolo
    ADD_STR("ExitVanSolo", "Exit van solo (HOST)", u8"Выход в фургоне одному (HOST)", u8"单人下车（房主）");
    ADD_STR("EnableExitVanSolo", "Enable exit van solo", u8"Включить выход в фургоне одному", u8"启用单人下车");

    // ForceStart
    ADD_STR("ForceStart", "Force Start", u8"Быстрый старт", u8"强制开局");
    ADD_STR("EnableForceStart", "Enable Force Start", u8"Включить быстрый старт", u8"启用强制开局");

    // FoVEditor
    ADD_STR("FoVEditor", "FoV Editor", u8"пользовательское FoV", u8"视野编辑器");
    ADD_STR("EnableCustomFoV", "Enable custom FoV", u8"Включить пользовательское FoV", u8"启用自定义视野");
    ADD_STR("CustomFoVValue", "Custom FoV Value", u8"Пользовательское значение FoV", u8"视野值");
    ADD_STR("ForceApply", "Force Apply", u8"Моментальное применение", u8"强制应用");
    ADD_STR("ResetToDefault", "Reset to Default", u8"Сбросить по умолчанию", u8"重置默认");

    // Fullbright
    ADD_STR("Fullbright", "Fullbright", u8"Fullbright", u8"高亮");
    ADD_STR("EnableFullbright", "Enable Fullbright", u8"Включить Fullbright", u8"启用高亮");

    // FuseEsp
    ADD_STR("FuseboxESP", "Fusebox ESP", u8"ESP на электрощиток", u8"电闸绘制");
    ADD_STR("EnableFuseboxEsp", "Enable fusebox esp", u8"Включить ESP на электрощиток", u8"启用电闸绘制");
    ADD_STR("ShowStatusFuseBox", "Show status fusebox", u8"Показать статус электрощитка", u8"显示电闸状态");

    // GhostDesign
    ADD_STR("GhostDesigner", "Ghost Designer (HOST)", u8"Редактор призрака (HOST)", u8"鬼魂编辑器（房主）");
    ADD_STR("EnableGhostDesigner", "Enable Ghost Designer", u8"Включить редактор призрака", u8"启用鬼魂编辑器");
    ADD_STR("GhostAge", "Ghost Age", u8"Возраст призрака", u8"鬼魂年龄");
    ADD_STR("GhostType", "Ghost Type", u8"Тип призрака", u8"鬼魂类型");
    ADD_STR("IsShy", "Is Shy", u8"Застенчивый призрак", u8"是否害羞");
    ADD_STR("EvidenceSettings", "Evidence Settings", u8"Настройки улик", u8"证据设置");
    ADD_STR("EvidenceMode", "Mode", u8"Режим", u8"模式");
    ADD_STR("EvidenceCount", "Evidence Count", u8"Количество улик", u8"证据数量");
    ADD_STR("Evidence", "Evidence", u8"Улика", u8"证据");
    ADD_STR("EvidenceModeRandom", "Random", u8"Случайно", u8"随机");
    ADD_STR("EvidenceModeSelected", "Selected", u8"Выборочно", u8"手动指定");

    // GhostESP
    ADD_STR("GhostESP", "Ghost ESP", u8"ESP призрака", u8"鬼魂绘制");
    ADD_STR("EnableGhostESP", "Enable Ghost ESP", u8"Включить ESP призрака", u8"启用鬼魂绘制");
    ADD_STR("BoxType", "Box Type", u8"Тип рамки", u8"方框类型");
    ADD_STR("BoxThickness", "Box Thickness", u8"Толщина рамки", u8"方框厚度");
    ADD_STR("ShowSkeleton", "Show Skeleton", u8"Показать скелет", u8"显示骨架");
    ADD_STR("SkeletonColor", "Skeleton Color", u8"Цвет скелета", u8"骨架颜色");
    ADD_STR("SkeletonThickness", "Skeleton Thickness", u8"Толщина скелета", u8"骨架厚度");
    ADD_STR("ShowPhotoESP", "Show Photo ESP", u8"Показать фото ESP", u8"显示照片绘制");
    ADD_STR("PhotoWidth", "Photo Width", u8"Ширина фото", u8"照片宽度");
    ADD_STR("PhotoHeight", "Photo Height", u8"Высота фото", u8"照片高度");
    ADD_STR("ResetPhotoSize", "Reset Photo Size", u8"Сбросить размер фото", u8"重置照片尺寸");
    ADD_STR("DefaultPhotoSize", "Default: 1.0 x 1.0", u8"По умолчанию: 1.0 x 1.0", u8"默认：1.0 x 1.0");
    ADD_STR("PhotoType", "Photo type", u8"Тип фото", u8"照片类型");
    ADD_STR("RefreshImages", "Refresh images", u8"Обновить изображения", u8"刷新图片");
    ADD_STR("NoImagesFound", "No images found", u8"Изображения не найдены", u8"未找到图片");
    ADD_STR("ImagesFolderHint", "Images folder", u8"Папка Images", u8"图片文件夹");
    ADD_STR("ShowBoxESP", "Show box ESP", u8"Показать бокс ESP", u8"显示方框ESP");
    ADD_STR("ShowBoxESP_Type_2DBOX", "2D Box", u8"2D рамка", u8"2D方框");
    ADD_STR("ShowBoxESP_Type_CornerBox", "Corner Box", u8"Угловая рамка", u8"四角方框");
    ADD_STR("ShowBoxESP_Type_FilledBox", "Filled Box", u8"Залитая рамка", u8"填充方框");
    ADD_STR("NameColor", "Name color", u8"Цвет имени", u8"名字颜色");

    // GhostInter
    ADD_STR("TriggerAbility", "Trigger ability", u8"Активировать способность", u8"触发鬼魂技能");
    ADD_STR("GenericInteraction", "Generic interaction", u8"Общее взаимодействие", u8"触发通用互动");
    ADD_STR("RandomLightSwitch", "Random light switch", u8"Случайное включение света", u8"随机开关灯");
    ADD_STR("RandomDoorInteraction", "Random door interaction", u8"Случайное взаимодействие с дверью", u8"随机门互动");
    ADD_STR("RandomPropInteraction", "Random prop interaction", u8"Случайное взаимодействие с предметами", u8"随机物品互动");
    ADD_STR("StandardInteraction", "Standard interaction", u8"Стандартное взаимодействие", u8"标准互动");
    ADD_STR("TwinInteraction", "Twin interaction", u8"Взаимодействие с близнецом", u8"孪魂互动");

    // GhostMod
    ADD_STR("GhostModifier", "Ghost Modifier", u8"модификацию призрака", u8"鬼魂修改器");
    ADD_STR("EnableGhostModifier", "Enable Ghost Modifier", u8"Включить модификацию призрака", u8"启用鬼魂修改器");
    ADD_STR("EnableCustomGhostSpeed", "Enable custom ghost speed", u8"Включить кастомную скорость призрака", u8"启用自定义鬼魂速度");
    ADD_STR("GhostSpeedMod", "Ghost Speed", u8"Скорость призрака", u8"鬼魂速度");
    ADD_STR("ForceAppear", "Force appear", u8"Принудительное появление", u8"强制显形");
    ADD_STR("ForcedType", "Forced type", u8"Принудительный тип", u8"强制类型");
    ADD_STR("ForceState", "Force State", u8"Принудительное состояние", u8"强制状态");
    ADD_STR("FreezeState", "Freeze State", u8"Заморозить состояние", u8"冻结状态");
    ADD_STR("SetGhostVisible", "Set ghost visible (only local)", u8"Установить видимость призрака (только локально)", u8"设置鬼魂可见（仅本地）");

    // Ghost Panel
    ADD_STR("GhostPanel", "Ghost Panel", u8"панель призрака", u8"鬼魂信息面板");
    ADD_STR("EnableGhostPanel", "Enable Ghost Panel", u8"Включить панель призрака", u8"启用鬼魂信息面板");
    ADD_STR("GhostPanel_Name", "Name", u8"Имя", u8"名称");
    ADD_STR("GhostPanel_Type", "Type", u8"Тип", u8"类型");
    ADD_STR("GhostPanel_Age", "Age", u8"Возраст", u8"年龄");
    ADD_STR("GhostPanel_State", "State", u8"Состояние", u8"状态");
    ADD_STR("GhostPanel_MimicType", "Mimic Type", u8"Тип мимика", u8"拟魂模仿类型");
    ADD_STR("GhostPanel_Target", "Target", u8"Цель", u8"女妖目标");
    ADD_STR("GhostPanel_Evidence", "Evidence", u8"Улики", u8"证据");
    ADD_STR("GhostPanel_Evidence_GhostWriting", "Writing", u8"Запись", u8"鬼魂笔记");
    ADD_STR("GhostPanel_Evidence_FreezingTemperature", "Freezing", u8"Холод", u8"刺骨寒温");
    ADD_STR("GhostPanel_FavoriteRoom", "Favorite Room", u8"Любимая комната", u8"鬼房");
    ADD_STR("GhostPanel_Location", "Location", u8"Местоположение", u8"所在位置");
    ADD_STR("GhostPanel_Status", "Status", u8"Статус", u8"猎杀状态");
    ADD_STR("GhostPanel_Status_HUNTING", "HUNTING", u8"ОХОТА", u8"猎杀");
    ADD_STR("GhostPanel_Status_PASSIVE", "PASSIVE", u8"ПАССИВНЫЙ", u8"正常");
    ADD_STR("ShowBansheeTarget", "Show Banshee target (CRASH RISK)", u8"Показывать цель Банши (Риск краша)", u8"显示女妖目标（有崩溃风险）");
    ADD_STR("IsHideSettingsTr", "Hide Settings", u8"Скрыть настройки", u8"隐藏设置");
    ADD_STR("HideName", "Hide Name", u8"Скрыть имя", u8"隐藏名字");
    ADD_STR("HideType", "Hide Type", u8"Скрыть тип", u8"隐藏类型");
    ADD_STR("HideAge", "Hide Age", u8"Скрыть возраст", u8"隐藏年龄");
    ADD_STR("HideState", "Hide State", u8"Скрыть состояние", u8"隐藏状态");
    ADD_STR("HideEvidence", "Hide Evidence", u8"Скрыть улики", u8"隐藏证据");
    ADD_STR("HideRoom", "Hide Favorite Room", u8"Скрыть любимую комнату", u8"隐藏鬼魂房间");
    ADD_STR("HideLocation", "Hide Location", u8"Скрыть текущую локацию", u8"隐藏当前位置");
    ADD_STR("HideMimicType", "Hide Mimic Type", u8"Скрыть тип мимика", u8"隐藏拟态类型");
    ADD_STR("HideBansheeTarget", "Hide Banshee Target", u8"Скрыть цель банши", u8"隐藏女妖目标");

    // GodMode
    ADD_STR("GodMode", "GodMode", u8"режим бога", u8"无敌模式");
    ADD_STR("GodModeEnable", "Enable GodMode", u8"Включить режим бога", u8"启用无敌模式");

    // GrabKey
    ADD_STR("GrabKeys", "Grab Keys", u8"Забрать ключи", u8"钥匙拾取");
    ADD_STR("GrabAllKeys", "Grab all keys", u8"Подобрать все ключи", u8"拾取所有钥匙");
    ADD_STR("AutoGrabAllKeys", "Auto grab all keys", u8"Автоматически подобрать все ключи", u8"自动拾取所有钥匙");
    ADD_STR("NoKeysFound", "No keys found.", u8"Ключи не найдены.", u8"未找到钥匙");

    // InfStamina
    ADD_STR("InfinityStaminaEnable", "Enable Infinite Stamina", u8"Включить бесконечную стамину", u8"启用无限体力");

    // LiftButtonSkipAnim
    ADD_STR("VanButtonModifier", "Van Button Modifier", u8"модификатор кнопки фургона", u8"按钮修改器");
    ADD_STR("VanButtonModifierEnable", "Enable Van button modifier", u8"Включить модификатор кнопки фургона", u8"启用货车按钮修改");
    ADD_STR("SkipVanAnim", "Enable Skip van animation", u8"Включить пропуск анимации открытия", u8"跳过货车开门动画");
    ADD_STR("AutoOpenVan", "Enable Auto open van", u8"Включить автоматическое открытие фургона", u8"自动开门");
    ADD_STR("SkipVanButtonDelay", "Enable Skip van button delay", u8"Включить пропуск задержки открытия фургона", u8"跳过开门延迟");

    // NoClip
    ADD_STR("NoClip", "NoClip", u8"Неклип", u8"穿墙");
    ADD_STR("CreditNoClip", "Thanks to Evelien for the NoClip feature!", u8"Спасибо Эвелин за NoClip функцию!", u8"感谢Evelien提供的无碰撞功能！");
    ADD_STR("EnabledNoClip", "Enabled NoClip", u8"Включить NoClip", u8"启用穿墙模式");
    ADD_STR("NoClipSpeed", "NoClip speed", u8"NoClip скорость", u8"穿墙速度");

    // NotifyInfo
    ADD_STR("NotifyInfo", "Notify Info", u8"уведомления о действиях в игре", u8"游戏通知");
    ADD_STR("EnableNotifyInfo", "Enable Notify Info", u8"Включить уведомления о действиях в игре", u8"启用游戏通知");
    ADD_STR("GhostTriedHunt", "Ghost tried to hunt.", u8"Призрак попытался начать охоту.", u8"鬼魂尝试猎杀");
    ADD_STR("GhostStartHunting", "Ghost started hunting!", u8"Призрак начал охоту!", u8"鬼魂开始猎杀！");
    ADD_STR("GhostStopHunting", "Ghost stopped hunting.", u8"Призрак остановил охоту.", u8"鬼魂停止猎杀");
    ADD_STR("BoneCollected", "Bone has been collected.", u8"Косточка была подобрана.", u8"骨头已被拾取");

    // Pickup
    ADD_STR("Pickup", "Pickup", u8"модификацию подбора", u8"拾取修改");
    ADD_STR("EnablePickup", "Enable Pickup", u8"Включить модификацию подбора", u8"启用拾取修改");
    ADD_STR("CustomThrow", "Custom throw", u8"Пользовательская сила броска", u8"自定义投掷力度");
    ADD_STR("ThrowMultiplier", "Throw multiplier", u8"Множитель силы броска", u8"投掷倍率");
    ADD_STR("CustomGrabDistance", "Custom grab distance", u8"Пользовательская дистанция захвата", u8"自定义拾取距离");
    ADD_STR("GrabDistance", "Grab distance", u8"Дистанция захвата", u8"拾取距离");
    ADD_STR("PickupEverything", "Pickup Everything", u8"Поднимать все объекты", u8"拾取一切物品");
    ADD_STR("PocketEverything", "Pocket Everything", u8"Класть всё в карман", u8"全部装入口袋");

    // PlayerESP
    ADD_STR("PlayerESP", "Player ESP", u8"ESP на игроков", u8"启用玩家绘制");
    ADD_STR("EnablePlayerESP", "Enable player ESP", u8"Включить ESP на игроков", u8"启用玩家绘制");
    ADD_STR("Show2DBox", "Show 2D box", u8"Показывать 2D коробку", u8"显示2D方框");
    ADD_STR("ShowPlayerSanity", "Show player sanity", u8"Показывать рассудок", u8"显示玩家理智值");
    ADD_STR("ShowDeadStatus", "Show dead status", u8"Показывать статус смерти", u8"显示死亡状态");
    ADD_STR("ShowCurrentRoom", "Show current room", u8"Показывать текущую комнату", u8"显示当前房间");
    ADD_STR("ShowPrestige", "Show prestige", u8"Показывать престиж", u8"显示转生等级");
    ADD_STR("ShowExperience", "Show experience", u8"Показывать опыт", u8"显示经验值");
    ADD_STR("ShowLevel", "Show level", u8"Показывать уровень", u8"显示等级");
    ADD_STR("ShowSprinting", "Show sprinting", u8"Показывать статус бега", u8"显示奔跑状态");
    ADD_STR("ErrorLoadingSettings", "Error loading PlayerESP settings", u8"Ошибка загрузки настроек PlayerESP", u8"加载玩家透视设置时出错");
    ADD_STR("PlayerESP_Room", "Room: ", u8"", u8"所在房间：");
    ADD_STR("PlayerESP_Prestige", "Prestige: ", u8"", u8"声望：");
    ADD_STR("PlayerESP_Exp", "Exp: ", u8"", u8"经验：");
    ADD_STR("PlayerESP_Level", "Level: ", u8"", u8"等级：");

    // PlayerMod
    ADD_STR("Player", "Player", u8"Игрок", u8"玩家");
    ADD_STR("Sanity", "Sanity", u8"Рассудок", u8"理智值");
    ADD_STR("Dead", "DEAD", u8"МЁРТВ", u8"死亡");
    ADD_STR("CurrentRoom", "Current room", u8"Текущая комната", u8"当前房间");
    ADD_STR("TeleportTo", "Teleport to", u8"Телепорт к", u8"传送至");
    ADD_STR("CantTeleportToYourself", "You can't teleport to yourself.", u8"Нельзя телепортироваться к себе", u8"不能传送到自己");
    ADD_STR("KillPlayer", "Kill player", u8"Убить игрока", u8"杀死玩家");
    ADD_STR("RevivePlayer", "Revive player", u8"Оживить игрока", u8"复活玩家");
    ADD_STR("FreezePlayer", "Freeze player", u8"Заморозить игрока", u8"冻结玩家");
    ADD_STR("UnfreezePlayer", "Unfreeze player", u8"Разморозить игрока", u8"解冻玩家");
    ADD_STR("PlayerAlreadyDead", "Player is already dead.", u8"Игрок уже мёртв", u8"玩家已经死亡");
    ADD_STR("PlayerAlreadyAlive", "Player is already revived.", u8"Игрок уже жив", u8"玩家已经存活");
    ADD_STR("SanityValue", "Sanity", u8"Рассудок", u8"理智值");
    ADD_STR("SetSanity", "Set sanity", u8"Установить рассудок", u8"设置理智值");

    // PlayerPanel
    ADD_STR("PlayersPanel", "Players Panel", u8"панель игроков", u8"玩家信息面板");
    ADD_STR("EnablePlayersPanel", "Enable Players Panel", u8"Включить панель игроков", u8"启用玩家信息面板");
    ADD_STR("ShowSanity", "Show Sanity", u8"Показывать рассудок", u8"显示理智值");
    ADD_STR("ShowCurrentRoom", "Show Current Room", u8"Показывать текущую комнату", u8"显示当前房间");
    ADD_STR("ShowTemperature", "Show Temperature", u8"Показывать температуру", u8"显示温度");
    ADD_STR("ShowLevel", "Show Level", u8"Показывать уровень", u8"显示等级");
    ADD_STR("ShowExperience", "Show Experience", u8"Показывать опыт", u8"显示经验值");
    ADD_STR("ShowPrestige", "Show Prestige", u8"Показывать престиж", u8"显示转生等级");
    ADD_STR("ShowHackerFlag", "Show Hacker Flag", u8"Показывать флаг читера", u8"显示作弊者标记");
    ADD_STR("ShowAverageSanity", "Show Average Sanity", u8"Показывать средний рассудок", u8"显示平均理智值");
    ADD_STR("PlayersPanel_You", "(You)", u8"(Вы)", u8"（自己）");
    ADD_STR("PlayersPanel_Temperature", "Temperature", u8"Температура", u8"温度值");
    ADD_STR("PlayersPanel_Level", "Level", u8"Уровень", u8"等级");
    ADD_STR("PlayersPanel_Experience", "Experience", u8"Опыт", u8"经验");
    ADD_STR("PlayersPanel_Prestige", "Prestige", u8"Престиж", u8"声望");
    ADD_STR("PlayersPanel_IsHacker", "Is Hacker", u8"Хакер", u8"是否为挂逼");
    ADD_STR("PlayersPanel_AverageSanity", "Average Sanity", u8"Средний рассудок", u8"平均理智值");

    // RewardMod
    ADD_STR("RewardModifier", "Reward Modifier", u8"Модификатор наград", u8"奖励修改器");
    ADD_STR("EnableRewardModifier", "Enable Reward Modifier", u8"Включить модификацию наград", u8"启用奖励修改");
    ADD_STR("AlwaysPerfectGame", "Always Perfect Game", u8"Всегда идеальное расследование", u8"总是完美通关");
    ADD_STR("AutoCompleteObjectives", "Auto Complete Objectives", u8"Автоматическое завершение заданий", u8"自动完成任务");
    ADD_STR("CustomInvestigationBonus", "Custom Investigation Bonus", u8"Пользовательский бонус за идеальное расследование", u8"自定义调查奖励");
    ADD_STR("InvestigationBonusValue", "Investigation Bonus Value", u8"Стоимость бонуса за расследование", u8"调查奖励金额");
    ADD_STR("CustomMediaBonus", "Custom Media Bonus", u8"Пользовательский бонус за медиа", u8"自定义媒体奖励");
    ADD_STR("MediaBonusValue", "Media Bonus Value", u8"Стоимость медиа-бонуса", u8"媒体奖励金额");

    // SaltMod
    ADD_STR("SaltModifier", "Salt Modifier (ONLY YOU)", u8"Модификатор соли (ТОЛЬКО ВЫ)", u8"盐修改器（仅限自身）");
    ADD_STR("EnableSaltModifier", "Enable Salt Modifier", u8"Включить модификацию соли", u8"启用盐修改器");
    ADD_STR("InfinitySalt", "Infinity Salt", u8"Бесконечная соль", u8"无限盐");
    ADD_STR("GhostNUseSalt", "Ghost doesn't use salt", u8"Призрак не наступает на соль", u8"鬼魂不触发盐");
    ADD_STR("ResetAllSalt", "Reset all salt", u8"Обновить всю соль", u8"重置所有盐");
    ADD_STR("UseAllSalt", "Use all salt", u8"Использовать всю соль", u8"使用所有盐");

    // ShopMod
    ADD_STR("ShopModifier", "Shop Modifier", u8"Модификатор магазина", u8"商店修改器");
    ADD_STR("EnableShopModifier", "Enable Shop Modifier", u8"Включить модификатор магазина", u8"启用商店修改器");
    ADD_STR("SkipShopTutorials", "Skip Shop Tutorials", u8"Пропустить обучение в магазина", u8"跳过商店教程");
    ADD_STR("CustomCost", "Custom Cost", u8"Своя цена", u8"自定义价格");
    ADD_STR("CustomCostValue", "Custom Cost Value", u8"Значение цены", u8"价格值");
    ADD_STR("CustomCount", "Custom Count", u8"Свое количество", u8"自定义数量");
    ADD_STR("CustomCountValue", "Custom Count Value", u8"Значение количества", u8"数量值");
    ADD_STR("CustomUpgradeCost", "Custom Upgrade Cost", u8"Своя цена улучшения", u8"自定义升级价格");
    ADD_STR("CustomUpgradeCostValue", "Custom Upgrade Cost Value", u8"Значение цены улучшения", u8"升级价格值");
    ADD_STR("CustomRequiredLevel", "Custom Required Level", u8"Свое требуемое уровень", u8"自定义所需等级");
    ADD_STR("CustomRequiredLevelValue", "Custom Required Level Value", u8"Значение требуемого уровня", u8"所需等级值");

    // StatsPanel
    ADD_STR("LevelStatsPanel", "LevelStats Panel", u8"панель статистики об контракте", u8"等级统计面板");
    ADD_STR("EnableLevelStatsPanel", "Enable Level Stats Panel", u8"Включить панель статистики об контракте", u8"启用等级统计面板");
    ADD_STR("BoneNotFound", "Bone not found.", u8"Кость не найдена.", u8"未找到骨头");
    ADD_STR("BoneCollected", "Bone collected.", u8"Кость была подобрана.", u8"骨头已收集");
    ADD_STR("LevelStatsPanel_BoneRoom", "Bone Room", u8"Комната с костью", u8"骨头所在房间");
    ADD_STR("LevelStatsPanel_BoneCollected", "Bone Collected", u8"Кость собрана", u8"骨头是否已采集");
    ADD_STR("LevelStatsPanel_CountHunts", "Count Hunts", u8"Количество охот", u8"猎杀次数");
    ADD_STR("LevelStatsPanel_CountInteractions", "Count Interactions", u8"Количество взаимодействий", u8"互动次数");
    ADD_STR("LevelStatsPanel_CountEvents", "Count Events", u8"Количество событий", u8"事件次数");
    ADD_STR("LevelStatsPanel_CollectBone", "Collect Bone", u8"Собрать кость", u8"收集骨头");

    // Teleport
    ADD_STR("Teleport", "Teleport", u8"Телепорт", u8"传送");
    ADD_STR("Teleport_SavePos", "Save current position", u8"Сохранить текущую позицию", u8"保存当前位置");
    ADD_STR("Teleport_ToSaved", "Teleport to saved point", u8"Телепорт к сохранённой точке", u8"传送到保存点");
    ADD_STR("Teleport_ToCoords", "Teleport to coordinates", u8"Телепорт по координатам", u8"传送到坐标");
    ADD_STR("Teleport_Items", "Items Teleport:", u8"Телепорт предметов:", u8"物品传送：");
    ADD_STR("Teleport_RefreshItems", "Refresh items list", u8"Обновить список предметов", u8"刷新物品列表");
    ADD_STR("Teleport_SelectItem", "Select item to teleport:", u8"Выберите предмет для телепорта", u8"选择要传送的物品：");
    ADD_STR("Teleport_Selected", "Teleport selected", u8"Телепорт выбранного", u8"传送所选物品");
    ADD_STR("Teleport_AllItems", "Teleport all items", u8"Телепортировать все предметы", u8"传送所有物品");
    ADD_STR("Teleport_Bone", "Teleport bone", u8"Телепорт кости", u8"传送骨头");
    ADD_STR("Teleport_Truck", "Teleport to Truck", u8"Телепорт в фургон", u8"传送到货车");
    ADD_STR("Teleport_Ghost", "Teleport to Ghost", u8"Телепорт к призраку", u8"传送到鬼魂");
    ADD_STR("Teleport_Entrance", "Teleport to Entrance", u8"Телепорт к входу", u8"传送到入口");
    ADD_STR("TP_ToEntrance", "Teleported to Entrance.", u8"Телепорт к входу.", u8"已传送到入口");
    ADD_STR("Teleport_Basement", "Basement", u8"Подвал", u8"地下室");
    ADD_STR("Teleport_LobbyArea", "Lobby area", u8"Лобби", u8"大厅区域");
    ADD_STR("Teleport_CabinKitchen", "Cabin Kitchen", u8"Кухня домика", u8"小屋厨房");
    ADD_STR("Teleport_Storage", "Storage", u8"Склад", u8"储藏室");
    ADD_STR("Teleport_MainCorridor", "Main Corridor", u8"Главный коридор", u8"主走廊");
    ADD_STR("Teleport_Attic", "Attic", u8"Чердак", u8"阁楼");
    ADD_STR("Teleport_Bathroom", "Bathroom", u8"Ванная", u8"浴室");
    ADD_STR("Teleport_FoodTent", "Food Tent", u8"Палатка с едой", u8"食品帐篷");
    ADD_STR("Teleport_Chapel", "Chapel", u8"Часовня", u8"小教堂");
    ADD_STR("TP_ItemsRefreshed", "Items list refreshed!", u8"Список предметов обновлён!", u8"物品列表已刷新！");
    ADD_STR("TP_NoItems", "No items found.", u8"Предметы не найдены.", u8"未找到物品");
    ADD_STR("TP_ItemTeleported", "Item teleported!", u8"Предмет телепортирован!", u8"物品已传送！");
    ADD_STR("TP_NoSavedPoint", "No saved point found.", u8"Сохранённая точка не найдена.", u8"未找到保存点");
    ADD_STR("TP_PosSaved", "Saved current position!", u8"Текущая позиция сохранена!", u8"当前位置已保存！");
    ADD_STR("TP_ToSaved", "Teleported to saved point!", u8"Телепорт к сохранённой точке.", u8"已传送到保存点！");
    ADD_STR("TP_ToTruck", "Teleported to Truck.", u8"Телепорт в фургон.", u8"已传送到货车");
    ADD_STR("TP_ToGhost", "Teleported to Ghost.", u8"Телепорт к призраку.", u8"已传送到鬼魂位置");
    ADD_STR("TP_BoneTeleported", "Bone teleported!", u8"Кость телепортирована.", u8"骨头已传送！");
    ADD_STR("TP_LocalPlayerMissing", "Local player not found.", u8"Локальный игрок не найден.", u8"未找到本地玩家");
    ADD_STR("TP_TruckNotFound", "Truck not found.", u8"Фургон не найден.", u8"未找到货车");

    // Watermark
    ADD_STR("Watermark", "Watermark", u8"Включить водяной знак", u8"水印");
    ADD_STR("EnableWatermark", "Enable Watermark", u8"Включить водяной знак", u8"显示水印");
    ADD_STR("Watermark_ShowFPS", "Show FPS", u8"Показывать FPS", u8"显示帧率");
    ADD_STR("Watermark_ShowSanity", "Show average sanity", u8"Показывать среднюю рассудочность", u8"显示平均理智");
    ADD_STR("Watermark_ShowPing", "Show ping", u8"Показывать пинг", u8"显示延迟");

    // Auto Photo
    ADD_STR("AutoPhotoEnable", "Enable auto photo", u8"Включить автоматические фотоснимки", u8"启用自动拍照");
    ADD_STR("WarningAutoPhoto", "Attention! To use this feature, you need to take the camera into your inventory and hold it in your hands.", u8"Внимание! Для использования данной функции необходимо взять камеру в инвентарь и держать её в руках.", u8"注意：使用此功能需要将相机放入背包并手持相机。");

    // Temperature Panel
    ADD_STR("TemperaturePanel", "Temperature Panel", u8"панель температуры", u8"温度面板");
    ADD_STR("TemperaturePanelEnable", "Enable temperature panel", u8"Включить панель температуры", u8"启用温度面板");

    // Fast Thermometer
    ADD_STR("FastThermometer", "Fast Thermometer", u8"Быстрый термометр", u8"快速温度计");
    ADD_STR("FastThermometerEnable", "Enable fast thermometer", u8"Включить быстрый термометр", u8"启用快速温度计");
    ADD_STR("FastThermometerInfo", "It only works for the second and third tiers", u8"Это работает только для второго и третьего тира", u8"仅对第二、三级温度计生效");

    // No End Game
    ADD_STR("NoEndGame", "No end game", u8"Бесконечная игра (No end game)", u8"无尽模式");
    ADD_STR("EnableNoEndGame", "Enable no end game", u8"Включить бесконечную игру (No end game)", u8"启用无尽模式");

    // Crosshair Modifier
    ADD_STR("CrosshairModifier", "Crosshair Modifier", u8"модификацию прицела", u8"准星修改");
    ADD_STR("CrosshairModifierEnable", "Enable Crosshair Modifier", u8"Включить модификацию прицела", u8"启用准星修改");
    ADD_STR("Apply", "Apply", u8"Применить", u8"应用");
    ADD_STR("RGBModeTr", "RGB Mode", u8"RGB Режим", u8"RGB模式");
    ADD_STR("CrosshairSizeTr", "Crosshair size", u8"Размер прицела", u8"准星大小");

    // Potatoe ESP Fun
    ADD_STR("PotatoeESP", "Potatoe ESP", u8"ESP на картофель", u8"土豆绘制");
    ADD_STR("PotatoeESPEn", "Enable Potatoe ESP (FuN)", u8"Включить ESP на картофель (FuN)", u8"启用土豆绘制（0.o）");

    // Flashlight Modifier
    ADD_STR("FlashlightModifier", "Flashlight Modifier", u8"Модификатор фонарика", u8"手电筒修改器");
    ADD_STR("FlashlightModifierEnable", "Enable flashlight modifier", u8"Включить модификацию фонарика", u8"启用手电筒修改");
    ADD_STR("NoFlashlightFlicker", "No flashlight flicker", u8"Отключить мерцание фонарика", u8"手电筒不闪烁");
    ADD_STR("DisableDifficultyCheck", "Disable the difficulty check", u8"Отключить проверку сложности", u8"禁用难度检查");

    // Always bloodmoon
    ADD_STR("AlwaysBloodmoon", "Always Bloodmoon", u8"Всегда кровавая луна", u8"永久血月");
    ADD_STR("AlwaysBloodmoonEnable", "Enable always bloodmoon", u8"Включить всегда кровавую луну", u8"启用永久血月");

    // Auto Pickup Bone
    ADD_STR("AutoPickupBone", "Auto Pickup Bone", u8"Автоматический подбор кости", u8"自动拾取骨头");
    ADD_STR("AutoPickupBoneEnable", "Enable auto pickup bone", u8"Включить автоматический подбор кости", u8"启用自动拾取骨头");

    // Photo Modifier
    ADD_STR("PhotoModifier", "Photo Modifier", u8"Модификатор фотографий", u8"照片修改器");
    ADD_STR("PhotoModifierEnable", "Enable photo modifier", u8"Включить модификацию фотографий", u8"启用照片修改");
    ADD_STR("X5Photo", "x5 Photo", u8"x5 Фотографии", u8"五倍照片");
    ADD_STR("AutoPhoto", "Auto photo ghost", u8"Автоматические фотографии призрака", u8"自动拍摄鬼魂照片");
    ADD_STR("NoDelayPhoto", "No delay between photos", u8"Нет задержки между фотографиями", u8"无拍照间隔");
    ADD_STR("SkipAnimationPhoto", "Skip photo animation", u8"Пропустить анимацию фотографирования", u8"跳过拍照动画");

    // Font Changer
    ADD_STR("FontChanger", "Font Changer", u8"смену шрифта", u8"字体修改");
    ADD_STR("EnableFontChanger", "Enable font changer", u8"Включить смену шрифта", u8"启用字体修改");

    // Journal Modifier
    ADD_STR("JournalModifier", "Journal Modifier", u8"Модификатор журнала", u8"日志修改器");
    ADD_STR("EnableJournalModifier", "Enable journal modifier", u8"Включить модификацию журнала", u8"启用日记修改");
    ADD_STR("OldGhostButtonPosition", "Old ghost button positions", u8"Старые позиции кнопок призраков", u8"旧版鬼魂按钮位置");
    ADD_STR("AutoSelectGhost", "Auto select ghost", u8"Автоматический выбор призрака", u8"自动选择鬼魂");
    ADD_STR("CorrectGhostAlwaysFirst", "Correct ghost always first", u8"Правильный призрак всегда первый", u8"正确鬼魂始终排在首位");

    // Jackalope ESP
    ADD_STR("JackalopeESP", "Jackalope ESP", u8"ESP на шакалоп", u8"鹿角兔绘制");
    ADD_STR("EnableJackalopeESP", "Enable Jackalope ESP", u8"Включить ESP на шакалоп", u8"启用鹿角兔绘制");
    ADD_STR("Jackalope_Name", "Jackalope", u8"Джекэлоп", u8"鹿角兔");
    ADD_STR("Jackalope_AttackChance", "Attack Chance: ", u8"Шанс атаки: ", u8"攻击几率：");
    ADD_STR("Jackalope_RunChance", "Run Chance: ", u8"Шанс побега: ", u8"逃跑几率：");

    // Player Modifier
    ADD_STR("PlayerModifier", "Player Modifier", u8"Модификатор игрока", u8"玩家修改器");

    // Ghost Interaction Control
    ADD_STR("GhostInteractionControl", "Ghost Interaction Control", u8"Контроль взаимодействия с призраками", u8"鬼魂互动控制");

    // Infinity Stamina
    ADD_STR("InfinityStamina", "Infinity Stamina", u8"бесконечную энергию", u8"无限体力");

    // Stamina Bar
    ADD_STR("StaminaBar", "Stamina Bar", u8"Полоса выносливости", u8"体力条");
    ADD_STR("StaminaBarEnable", "Enable StaminaBar", u8"Включить полосу выносливости", u8"绘制体力条");
    ADD_STR("StaminaBar_Stamina", "Stamina: ", u8"выносливости: ", u8"体力: ");
    
    // Configs Manager
    ADD_STR("ConfigsManager", "Configs Manager", u8"Менеджер конфигураций", u8"配置管理器");
    ADD_STR("ConfigsManager_CreateNew", "Create New", u8"Создать новый", u8"新建配置");
    ADD_STR("ConfigsManager_Import", "Import", u8"Импортировать", u8"导入配置");
    ADD_STR("ConfigsManager_SaveCurrent", "Save Current", u8"Сохранить текущий", u8"保存当前配置");
    ADD_STR("ConfigsManager_Name", "Name", u8"Название", u8"名称");
    ADD_STR("ConfigsManager_Modified", "Modified", u8"Изменён", u8"修改时间");
    ADD_STR("ConfigsManager_Actions", "Actions", u8"Действия", u8"操作");
    ADD_STR("ConfigsManager_Load", "Load##", u8"Загрузить##", u8"读取配置##");
    ADD_STR("ConfigsManager_Export", "Export##", u8"Экспортировать##", u8"导出配置##");
    ADD_STR("ConfigsManager_Delete", "Delete##", u8"Удалить##", u8"删除配置##");

    // GhostEvidence
    ADD_STR("GhostEvidence_EMFLevel5", "EMF Level 5", u8"ЭМП 5 уровня", u8"EMF 5级");
    ADD_STR("GhostEvidence_SpiritBox", "Spirit Box", u8"Рация", u8"通灵盒");
    ADD_STR("GhostEvidence_Ultraviolet", "Ultraviolet", u8"Ультрафиолет", u8"紫外线");
    ADD_STR("GhostEvidence_GhostOrb", "Ghost Orb", u8"Призрачный шар", u8"灵球");
    ADD_STR("GhostEvidence_GhostWriting", "Ghost Writing", u8"Записи призрака", u8"鬼魂笔记");
    ADD_STR("GhostEvidence_FreezingTemperature", "Freezing Temperature", u8"Леденящий холод", u8"刺骨寒温");
    ADD_STR("GhostEvidence_D.O.T.S.Projector", "D.O.T.S. Projector", u8"Проектор D.O.T.S.", u8"点阵投影仪");

    // GhostState
    ADD_STR("GhostState_Idle", "Idle", u8"Бездействие", u8"空闲");
    ADD_STR("GhostState_Wander", "Wander", u8"Блуждание", u8"游荡");
    ADD_STR("GhostState_Hunting", "Hunting", u8"Охота", u8"猎杀");
    ADD_STR("GhostState_FavoriteRoom", "Favorite Room", u8"Любимая комната", u8"鬼房");
    ADD_STR("GhostState_Light", "Light", u8"Свет", u8"灯光");
    ADD_STR("GhostState_Door", "Door", u8"Дверь", u8"门");
    ADD_STR("GhostState_Throwing", "Throwing", u8"Бросок", u8"投掷");
    ADD_STR("GhostState_FuseBox", "Fuse Box", u8"Щиток", u8"电箱");
    ADD_STR("GhostState_Appear", "Appear", u8"Появление", u8"现身");
    ADD_STR("GhostState_DoorKnock", "Door Knock", u8"Стук в дверь", u8"敲门");
    ADD_STR("GhostState_WindowKnock", "Window Knock", u8"Стук в окно", u8"敲窗");
    ADD_STR("GhostState_CarAlarm", "Car Alarm", u8"Сигнализация", u8"汽车警报");
    ADD_STR("GhostState_Flicker", "Flicker", u8"Мерцание", u8"闪烁");
    ADD_STR("GhostState_CCTV", "CCTV", u8"Камеры", u8"监控");
    ADD_STR("GhostState_RandomEvent", "Random Event", u8"Случайное событие", u8"随机事件");
    ADD_STR("GhostState_GhostAbility", "Ghost Ability", u8"Способность", u8"鬼魂能力");
    ADD_STR("GhostState_Mannequin", "Mannequin", u8"Манекен", u8"人体模型");
    ADD_STR("GhostState_TeleportObject", "Teleport Object", u8"Телепортация предмета", u8"传送物体");
    ADD_STR("GhostState_Interact", "Interact", u8"Взаимодействие", u8"互动");
    ADD_STR("GhostState_SummoningCircle", "Summoning Circle", u8"Круг призыва", u8"召唤阵");
    ADD_STR("GhostState_MusicBox", "Music Box", u8"Музыкальная шкатулка", u8"音乐盒");
    ADD_STR("GhostState_Dots", "Dots", u8"Проектор D.O.T.S.", u8"点阵");
    ADD_STR("GhostState_Salt", "Salt", u8"Соль", u8"盐");

    // GhostType
    ADD_STR("GhostType_Spirit", "Spirit", u8"Дух", u8"魂魄");
    ADD_STR("GhostType_Wraith", "Wraith", u8"Призрак", u8"魅影");
    ADD_STR("GhostType_Phantom", "Phantom", u8"Фантом", u8"幻影");
    ADD_STR("GhostType_Poltergeist", "Poltergeist", u8"Полтергейст", u8"捣蛋鬼（骚灵）");
    ADD_STR("GhostType_Banshee", "Banshee", u8"Банши", u8"女妖");
    ADD_STR("GhostType_Jinn", "Jinn", u8"Джинн", u8"巨灵");
    ADD_STR("GhostType_Mare", "Mare", u8"Мара", u8"梦魇");
    ADD_STR("GhostType_Revenant", "Revenant", u8"Ревенант", u8"亡魂");
    ADD_STR("GhostType_Shade", "Shade", u8"Тень", u8"暗影");
    ADD_STR("GhostType_Demon", "Demon", u8"Демон", u8"恶魔");
    ADD_STR("GhostType_Yurei", "Yurei", u8"Юрэй", u8"幽灵");
    ADD_STR("GhostType_Oni", "Oni", u8"Они", u8"赤鬼");
    ADD_STR("GhostType_Yokai", "Yokai", u8"Ёкай", u8"妖怪");
    ADD_STR("GhostType_Hantu", "Hantu", u8"Ханту", u8"寒魔");
    ADD_STR("GhostType_Goryo", "Goryo", u8"Горё", u8"御灵");
    ADD_STR("GhostType_Myling", "Myling", u8"Майлинг", u8"鬼婴");
    ADD_STR("GhostType_Onryo", "Onryo", u8"Онрё", u8"怨灵");
    ADD_STR("GhostType_TheTwins", "The Twins", u8"Близнецы", u8"孪魂");
    ADD_STR("GhostType_Raiju", "Raiju", u8"Райджу", u8"雷曾");
    ADD_STR("GhostType_Obake", "Obake", u8"Обакэ", u8"幻妖");
    ADD_STR("GhostType_Mimic", "The Mimic", u8"Мимик", u8"拟魂");
    ADD_STR("GhostType_Moroi", "Moroi", u8"Морой", u8"魔洛伊");
    ADD_STR("GhostType_Deogen", "Deogen", u8"Деоген", u8"雾影");
    ADD_STR("GhostType_Thaye", "Thaye", u8"Тайе", u8"刹耶");
    ADD_STR("GhostType_Gallu", "Gallu", u8"Галлу", u8"加鲁");
    ADD_STR("GhostType_Dayan", "Dayan", u8"Даян", u8"达彦");
    ADD_STR("GhostType_Obambo", "Obambo", u8"Обамбо", u8"奥班博");

    // EvidenceType
    ADD_STR("EvidenceType_EMFSpot", "EMF Spot", u8"Пятно ЭМП", u8"EMF 斑点");
    ADD_STR("EvidenceType_OuijaBoard", "Ouija Board", u8"Доска Уиджи", u8"通灵板");
    ADD_STR("EvidenceType_Fingerprint", "Fingerprint", u8"Отпечаток", u8"指纹");
    ADD_STR("EvidenceType_Footstep", "Footstep", u8"След", u8"脚印");
    ADD_STR("EvidenceType_DNA", "DNA", u8"DNA", u8"DNA");
    ADD_STR("EvidenceType_Ghost", "Ghost", u8"Призрак", u8"鬼魂");
    ADD_STR("EvidenceType_DeadBody", "Dead Body", u8"Труп", u8"尸体");
    ADD_STR("EvidenceType_DirtyWater", "Dirty Water", u8"Грязная вода", u8"脏水");
    ADD_STR("EvidenceType_MusicBox", "Music Box", u8"Музыкальная шкатулка", u8"音乐盒");
    ADD_STR("EvidenceType_TarotCards", "Tarot Cards", u8"Карты Таро", u8"塔罗牌");
    ADD_STR("EvidenceType_SummoningCircle", "Summoning Circle", u8"Круг призыва", u8"召唤阵");
    ADD_STR("EvidenceType_HauntedMirror", "Haunted Mirror", u8"Зеркало с призраком", u8"鬼镜");
    ADD_STR("EvidenceType_VoodooDoll", "Voodoo Doll", u8"Кукла вуду", u8"巫毒娃娃");
    ADD_STR("EvidenceType_GhostWriting", "Ghost Writing", u8"Запись призрака", u8"鬼魂笔记");
    ADD_STR("EvidenceType_UsedCrucifix", "Used Crucifix", u8"Использованное распятие", u8"使用过的十字架");
    ADD_STR("EvidenceType_DotsGhost", "DOTS Ghost", u8"Призрак в D.O.T.S.", u8"点阵鬼魂");
    ADD_STR("EvidenceType_MonkeyPaw", "Monkey Paw", u8"Обезьянья лапа", u8"猴爪");
    ADD_STR("EvidenceType_MoonAlter", "Moon Alter", u8"Алтарь луны", u8"月亮祭坛");
    ADD_STR("EvidenceType_GhostOrb", "Ghost Orb", u8"Призрачный шар", u8"灵球");
    ADD_STR("EvidenceType_LightSource", "Light Source", u8"Источник света", u8"光源");
    ADD_STR("EvidenceType_None", "None", u8"Нет", u8"无");
    ADD_STR("EvidenceType_EmfReader", "EMF Reader", u8"ЭМП-датчик", u8"EMF 读取器");
    ADD_STR("EvidenceType_Salt", "Salt", u8"Соль", u8"盐");
    ADD_STR("EvidenceType_FreezingTemperature", "Freezing Temperature", u8"Леденящий холод", u8"刺骨寒温");
    ADD_STR("EvidenceType_GhostSmoke", "Ghost Smoke", u8"Призрачный дым", u8"鬼烟");
    ADD_STR("EvidenceType_CamoGhost", "Camo Ghost", u8"Камуфляжный призрак", u8"迷彩鬼");
    ADD_STR("EvidenceType_ParanormalSound", "Paranormal Sound", u8"Паранормальный звук", u8"灵异声音");
    ADD_STR("EvidenceType_SpiritBox", "Spirit Box", u8"Рация", u8"通灵盒");
    ADD_STR("EvidenceType_GhostHunt", "Ghost Hunt", u8"Охота", u8"猎杀");
    ADD_STR("EvidenceType_BansheeWail", "Banshee Wail", u8"Вопль банши", u8"女妖哀嚎");
    ADD_STR("EvidenceType_TeddyBear", "Teddy Bear", u8"Плюшевый мишка", u8"泰迪熊");
    ADD_STR("EvidenceType_SpiritBoxBreath", "Spirit Box Breath", u8"Дыхание в рацию", u8"通灵盒呼吸声");
    ADD_STR("EvidenceType_MotionSensor", "Motion Sensor", u8"Датчик движения", u8"运动传感器");
    ADD_STR("EvidenceType_ShadowGhost", "Shadow Ghost", u8"Призрак-тень", u8"影子鬼");
    ADD_STR("EvidenceType_GhostGroan", "Ghost Groan", u8"Стон призрака", u8"鬼魂呻吟");
    ADD_STR("EvidenceType_GhostLaugh", "Ghost Laugh", u8"Смех призрака", u8"鬼笑");
    ADD_STR("EvidenceType_GhostTalk", "Ghost Talk", u8"Разговор призрака", u8"鬼说话");
    ADD_STR("EvidenceType_GhostWhisper", "Ghost Whisper", u8"Шёпот призрака", u8"鬼低语");
    ADD_STR("EvidenceType_ObakeFingerprint", "Obake Fingerprint", u8"Отпечаток обакэ", u8"幻妖指纹");
    ADD_STR("EvidenceType_BurningChapelCrucifix", "Burning Chapel Crucifix", u8"Горящее распятие в часовне", u8"燃烧教堂十字架");
    ADD_STR("EvidenceType_ObakeShapeshift", "Obake Shapeshift", u8"Смена облика обакэ", u8"幻妖变形");

    // Settings items
    ADD_STR("RequiredLevel", "Required Level", u8"Требуемый уровень", u8"要求级别");
    ADD_STR("SanityPillRestoration", "Sanity Pill Restoration", u8"Восстановление таблетками", u8"理智药恢复");
    ADD_STR("StartingSanity", "Starting Sanity", u8"Начальный рассудок", u8"初始理智");
    ADD_STR("SanityDrain", "Sanity Drain", u8"Потеря рассудка", u8"理智消耗");
    ADD_STR("Sprinting", "Sprinting", u8"Спринт", u8"冲刺");
    ADD_STR("Flashlights", "Flashlights", u8"Фонарики", u8"手电筒");
    ADD_STR("LoseItemsOnDeath", "Lose Items On Death", u8"Потеря предметов при смерти", u8"死亡掉落物品");
    ADD_STR("PlayerSpeed", "Player Speed", u8"Скорость игрока", u8"玩家速度");
    ADD_STR("EvidenceGiven", "Evidence Given", u8"Количество улик", u8"证据数量");
    ADD_STR("ChangingFavouriteRoom", "Changing Favourite Room", u8"Смена любимой комнаты", u8"更换鬼房");
    ADD_STR("InteractionAmount", "Interaction Amount", u8"Количество взаимодействий", u8"互动数量");
    ADD_STR("EventFrequency", "Event Frequency", u8"Частота событий", u8"事件频率");
    ADD_STR("HuntDuration", "Hunt Duration", u8"Длительность охоты", u8"猎杀持续时间");
    ADD_STR("GracePeriod", "Grace Period", u8"Льготный период", u8"宽限期");
    ADD_STR("FingerprintChance", "Fingerprint Chance", u8"Шанс отпечатков", u8"指纹几率");
    ADD_STR("FingerprintDuration", "Fingerprint Duration", u8"Длительность отпечатков", u8"指纹持续时间");
    ADD_STR("FriendlyGhost", "Friendly Ghost", u8"Дружелюбный призрак", u8"友善鬼魂");
    ADD_STR("KillsExtendHunt", "Kills Extend Hunt", u8"Убийства продлевают охоту", u8"击杀延长猎杀");
    ADD_STR("RoamingFrequency", "Roaming Frequency", u8"Частота блуждания", u8"游荡频率");
    ADD_STR("GhostSpeed", "Ghost Speed", u8"Скорость призрака", u8"鬼魂速度");
    ADD_STR("SetupTime", "Setup Time", u8"Время подготовки", u8"准备时间");
    ADD_STR("SelectedWeather", "Selected Weather", u8"Выбранная погода", u8"选定天气");
    ADD_STR("DoorsOpen", "Doors Open", u8"Открытые двери", u8"门已开启");
    ADD_STR("HidingPlaces", "Hiding Places", u8"Укрытия", u8"躲藏点");
    ADD_STR("SanityMonitor", "Sanity Monitor", u8"Монитор рассудка", u8"理智监视器");
    ADD_STR("ActivityMonitor", "Activity Monitor", u8"Монитор активности", u8"活动监视器");
    ADD_STR("FuseBoxVisible", "Fuse Box Visible", u8"Видимый щиток", u8"电箱可见");
    ADD_STR("FuseBoxStartPower", "Fuse Box Start Power", u8"Щиток включён в начале", u8"电箱初始供电");

    // Template
    ADD_STR("", "", u8"", u8"");
}