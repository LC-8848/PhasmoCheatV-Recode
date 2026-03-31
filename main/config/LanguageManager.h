#pragma once

#include <string>
#include <unordered_map>
#include <utility>

namespace PhasmoCheatV {
    struct TranslationEntry {
        std::string en;
        std::string ru;
        std::string zh;
    };

    enum class Language {
        EN,
        RU,
        ZH
    };

    class LanguageManager {
    private:
        static Language currentLanguage;
        static std::unordered_map<std::string, TranslationEntry> translations;
        static bool isInitialized;
        static std::string GetLanguagePath();
        static void LoadFromJSON();
        static void LoadCustomOverrides();

    public:
        static void Init();
        static void AddString(const std::string& key, const std::string& en, const char8_t* ru_utf8, const char8_t* zh_utf8 = u8"");
        static const char* Get(const std::string& key);
        static void SetLanguage(Language lang);
        static void SetLanguage(const std::string& langCode);
        static void SaveLanguage();
        static Language GetCurrentLanguage();
    };
#define ADD_STR(...) PhasmoCheatV::LanguageManager::AddString(__VA_ARGS__)
#define LANG(key) PhasmoCheatV::LanguageManager::Get(key)
}