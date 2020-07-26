// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:10 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StandardLevelInfoSaveData
  class StandardLevelInfoSaveData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet
    class DifficultyBeatmapSet;
    // Nested type: GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap
    class DifficultyBeatmap;
    // Nested type: GlobalNamespace::StandardLevelInfoSaveData::VersionCheck
    class VersionCheck;
    // static field const value: static private System.String kCurrentVersion
    static constexpr const char* kCurrentVersion = "2.0.0";
    // Get static field: static private System.String kCurrentVersion
    static ::Il2CppString* _get_kCurrentVersion();
    // Set static field: static private System.String kCurrentVersion
    static void _set_kCurrentVersion(::Il2CppString* value);
    // static field const value: static private System.String kDefaultBeatmapCharacteristicName
    static constexpr const char* kDefaultBeatmapCharacteristicName = "Standard";
    // Get static field: static private System.String kDefaultBeatmapCharacteristicName
    static ::Il2CppString* _get_kDefaultBeatmapCharacteristicName();
    // Set static field: static private System.String kDefaultBeatmapCharacteristicName
    static void _set_kDefaultBeatmapCharacteristicName(::Il2CppString* value);
    // private System.String _version
    // Offset: 0x10
    ::Il2CppString* version;
    // private System.String _songName
    // Offset: 0x18
    ::Il2CppString* songName;
    // private System.String _songSubName
    // Offset: 0x20
    ::Il2CppString* songSubName;
    // private System.String _songAuthorName
    // Offset: 0x28
    ::Il2CppString* songAuthorName;
    // private System.String _levelAuthorName
    // Offset: 0x30
    ::Il2CppString* levelAuthorName;
    // private System.Single _beatsPerMinute
    // Offset: 0x38
    float beatsPerMinute;
    // private System.Single _songTimeOffset
    // Offset: 0x3C
    float songTimeOffset;
    // private System.Single _shuffle
    // Offset: 0x40
    float shuffle;
    // private System.Single _shufflePeriod
    // Offset: 0x44
    float shufflePeriod;
    // private System.Single _previewStartTime
    // Offset: 0x48
    float previewStartTime;
    // private System.Single _previewDuration
    // Offset: 0x4C
    float previewDuration;
    // private System.String _songFilename
    // Offset: 0x50
    ::Il2CppString* songFilename;
    // private System.String _coverImageFilename
    // Offset: 0x58
    ::Il2CppString* coverImageFilename;
    // private System.String _environmentName
    // Offset: 0x60
    ::Il2CppString* environmentName;
    // private System.String _allDirectionsEnvironmentName
    // Offset: 0x68
    ::Il2CppString* allDirectionsEnvironmentName;
    // private StandardLevelInfoSaveData/DifficultyBeatmapSet[] _difficultyBeatmapSets
    // Offset: 0x70
    ::Array<GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet*>* difficultyBeatmapSets;
    // public System.String get_version()
    // Offset: 0xB8F45C
    ::Il2CppString* get_version();
    // public System.String get_songName()
    // Offset: 0xB8F464
    ::Il2CppString* get_songName();
    // public System.String get_songSubName()
    // Offset: 0xB8F46C
    ::Il2CppString* get_songSubName();
    // public System.String get_songAuthorName()
    // Offset: 0xB8F474
    ::Il2CppString* get_songAuthorName();
    // public System.String get_levelAuthorName()
    // Offset: 0xB8F47C
    ::Il2CppString* get_levelAuthorName();
    // public System.Single get_beatsPerMinute()
    // Offset: 0xB8F484
    float get_beatsPerMinute();
    // public System.Single get_songTimeOffset()
    // Offset: 0xB8F48C
    float get_songTimeOffset();
    // public System.Single get_shuffle()
    // Offset: 0xB8F494
    float get_shuffle();
    // public System.Single get_shufflePeriod()
    // Offset: 0xB8F49C
    float get_shufflePeriod();
    // public System.Single get_previewStartTime()
    // Offset: 0xB8F4A4
    float get_previewStartTime();
    // public System.Single get_previewDuration()
    // Offset: 0xB8F4AC
    float get_previewDuration();
    // public System.String get_songFilename()
    // Offset: 0xB8F4B4
    ::Il2CppString* get_songFilename();
    // public System.String get_coverImageFilename()
    // Offset: 0xB8F4BC
    ::Il2CppString* get_coverImageFilename();
    // public System.String get_environmentName()
    // Offset: 0xB8F4C4
    ::Il2CppString* get_environmentName();
    // public System.String get_allDirectionsEnvironmentName()
    // Offset: 0xB8F4CC
    ::Il2CppString* get_allDirectionsEnvironmentName();
    // public StandardLevelInfoSaveData/DifficultyBeatmapSet[] get_difficultyBeatmapSets()
    // Offset: 0xB8F4D4
    ::Array<GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet*>* get_difficultyBeatmapSets();
    // public System.Void .ctor(System.String songName, System.String songSubName, System.String songAuthorName, System.String levelAuthorName, System.Single beatsPerMinute, System.Single songTimeOffset, System.Single shuffle, System.Single shufflePeriod, System.Single previewStartTime, System.Single previewDuration, System.String songFilename, System.String coverImageFilename, System.String environmentName, System.String allDirectionsEnvironmentName, StandardLevelInfoSaveData/DifficultyBeatmapSet[] difficultyBeatmapSets)
    // Offset: 0xB8F4DC
    static StandardLevelInfoSaveData* New_ctor(::Il2CppString* songName, ::Il2CppString* songSubName, ::Il2CppString* songAuthorName, ::Il2CppString* levelAuthorName, float beatsPerMinute, float songTimeOffset, float shuffle, float shufflePeriod, float previewStartTime, float previewDuration, ::Il2CppString* songFilename, ::Il2CppString* coverImageFilename, ::Il2CppString* environmentName, ::Il2CppString* allDirectionsEnvironmentName, ::Array<GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet*>* difficultyBeatmapSets);
    // public System.Boolean get_hasAllData()
    // Offset: 0xB8F650
    bool get_hasAllData();
    // public System.Void SetSongFilename(System.String songFilename)
    // Offset: 0xB8F6B4
    void SetSongFilename(::Il2CppString* songFilename);
    // public System.String SerializeToJSONString()
    // Offset: 0xB8F6BC
    ::Il2CppString* SerializeToJSONString();
    // static public StandardLevelInfoSaveData DeserializeFromJSONString(System.String stringData)
    // Offset: 0xB8F6C4
    static GlobalNamespace::StandardLevelInfoSaveData* DeserializeFromJSONString(::Il2CppString* stringData);
  }; // StandardLevelInfoSaveData
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelInfoSaveData*, "", "StandardLevelInfoSaveData");
#pragma pack(pop)
