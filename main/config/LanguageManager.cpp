#include "LanguageManager.h"
#include "../Includes.h"
#include <fstream>
#include <algorithm>
#include "Translations.h" 

namespace PhasmoCheatV {

    Language LanguageManager::currentLanguage = Language::EN;
    std::unordered_map<std::string, TranslationEntry> LanguageManager::translations;
    bool LanguageManager::isInitialized = false;

    std::string LanguageManager::GetLanguagePath() {
        return Utils::GetPhasmoCheatVDirectory() + "\\Language.json";
    }

    void LanguageManager::Init() {
        if (isInitialized) return;

        ::RegisterAllTranslations();

        LoadFromJSON();

        auto translatePath = Utils::GetPhasmoCheatVDirectory() + "\\Translate.json";
        if (!std::filesystem::exists(translatePath)) {
            try {
                nlohmann::json example;
                example["LKEY"] = { {"EN", "English text"}, {"RU", "Russian text"} };

                std::ofstream out(translatePath);
                out << example.dump(4);
            }
            catch (...) {
                LOG_ERROR("Failed to create Translate.json with example");
            }
        }

        LoadCustomOverrides();

        isInitialized = true;
    }

    void LanguageManager::AddString(const std::string& key, const std::string& en, const char8_t* ru_utf8) {
        std::string ru(reinterpret_cast<const char*>(ru_utf8));

        if (translations.find(key) == translations.end()) {
            translations[key] = { en, ru };
        }
        else {
            translations[key] = { en, ru };
        }
    }

    const char* LanguageManager::Get(const std::string& key) {
        if (!isInitialized || translations.empty()) {
            Init();
        }

        auto it = translations.find(key);
        if (it != translations.end()) {
            const auto& entry = it->second;
            return (currentLanguage == Language::EN ? entry.en : entry.ru).c_str();
        }

        return key.c_str();
    }

    void LanguageManager::SetLanguage(Language lang) {
        currentLanguage = lang;
    }

    void LanguageManager::SetLanguage(const std::string& langCode) {
        std::string upper = langCode;
        std::transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
        currentLanguage = (upper == "RU") ? Language::RU : Language::EN;
    }

    void LanguageManager::SaveLanguage() {
        try {
            nlohmann::json data;
            data["language"] = (currentLanguage == Language::RU ? "RU" : "EN");

            std::ofstream out(GetLanguagePath());
            out << data.dump(4);
        }
        catch (...) {}
    }

    void LanguageManager::LoadFromJSON() {
        try {
            auto path = GetLanguagePath();
            if (!std::filesystem::exists(path)) return;

            std::ifstream f(path);
            if (!f.good() || f.peek() == EOF) return;

            nlohmann::json data;
            f >> data;

            if (data.contains("language")) {
                SetLanguage(data["language"].get<std::string>());
            }
        }
        catch (...) {
        }
    }

    void LanguageManager::LoadCustomOverrides() {
        try {
            auto path = Utils::GetPhasmoCheatVDirectory() + "\\Translate.json";
            if (!std::filesystem::exists(path)) return;

            std::ifstream f(path);
            if (!f.good() || f.peek() == EOF) return;

            nlohmann::json customData;
            f >> customData;

            for (auto& [key, translationsObj] : customData.items()) {
                std::string en = translationsObj.value("EN", "");
                std::string ru = translationsObj.value("RU", "");

                if (!en.empty() || !ru.empty()) {
                    translations[key] = { en, ru };
                }
            }
        }
        catch (...) {
        }
    }

    Language LanguageManager::GetCurrentLanguage() {
        return currentLanguage;
    }
}