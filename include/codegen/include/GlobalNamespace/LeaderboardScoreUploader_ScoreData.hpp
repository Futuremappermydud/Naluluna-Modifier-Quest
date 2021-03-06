// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LeaderboardScoreUploader
#include "GlobalNamespace/LeaderboardScoreUploader.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LeaderboardScoreUploader/ScoreData
  class LeaderboardScoreUploader::ScoreData : public ::Il2CppObject {
    public:
    // private System.String <playerId>k__BackingField
    // Offset: 0x10
    ::Il2CppString* playerId;
    // private IDifficultyBeatmap <beatmap>k__BackingField
    // Offset: 0x18
    GlobalNamespace::IDifficultyBeatmap* beatmap;
    // private GameplayModifiers <gameplayModifiers>k__BackingField
    // Offset: 0x20
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // private System.Int32 <rawScore>k__BackingField
    // Offset: 0x28
    int rawScore;
    // private System.Int32 <modifiedScore>k__BackingField
    // Offset: 0x2C
    int modifiedScore;
    // private System.Boolean <fullCombo>k__BackingField
    // Offset: 0x30
    bool fullCombo;
    // private System.Int32 <goodCutsCount>k__BackingField
    // Offset: 0x34
    int goodCutsCount;
    // private System.Int32 <badCutsCount>k__BackingField
    // Offset: 0x38
    int badCutsCount;
    // private System.Int32 <missedCount>k__BackingField
    // Offset: 0x3C
    int missedCount;
    // private System.Int32 <maxCombo>k__BackingField
    // Offset: 0x40
    int maxCombo;
    // public System.Int32 uploadAttemptCount
    // Offset: 0x44
    int uploadAttemptCount;
    // public System.Int32 currentUploadAttemptCount
    // Offset: 0x48
    int currentUploadAttemptCount;
    // public System.String get_playerId()
    // Offset: 0xB47954
    ::Il2CppString* get_playerId();
    // private System.Void set_playerId(System.String value)
    // Offset: 0xB4795C
    void set_playerId(::Il2CppString* value);
    // public IDifficultyBeatmap get_beatmap()
    // Offset: 0xB47964
    GlobalNamespace::IDifficultyBeatmap* get_beatmap();
    // private System.Void set_beatmap(IDifficultyBeatmap value)
    // Offset: 0xB4796C
    void set_beatmap(GlobalNamespace::IDifficultyBeatmap* value);
    // public GameplayModifiers get_gameplayModifiers()
    // Offset: 0xB47974
    GlobalNamespace::GameplayModifiers* get_gameplayModifiers();
    // private System.Void set_gameplayModifiers(GameplayModifiers value)
    // Offset: 0xB4797C
    void set_gameplayModifiers(GlobalNamespace::GameplayModifiers* value);
    // public System.Int32 get_rawScore()
    // Offset: 0xB47984
    int get_rawScore();
    // private System.Void set_rawScore(System.Int32 value)
    // Offset: 0xB4798C
    void set_rawScore(int value);
    // public System.Int32 get_modifiedScore()
    // Offset: 0xB47994
    int get_modifiedScore();
    // private System.Void set_modifiedScore(System.Int32 value)
    // Offset: 0xB4799C
    void set_modifiedScore(int value);
    // public System.Boolean get_fullCombo()
    // Offset: 0xB479A4
    bool get_fullCombo();
    // private System.Void set_fullCombo(System.Boolean value)
    // Offset: 0xB479AC
    void set_fullCombo(bool value);
    // public System.Int32 get_goodCutsCount()
    // Offset: 0xB479B8
    int get_goodCutsCount();
    // private System.Void set_goodCutsCount(System.Int32 value)
    // Offset: 0xB479C0
    void set_goodCutsCount(int value);
    // public System.Int32 get_badCutsCount()
    // Offset: 0xB479C8
    int get_badCutsCount();
    // private System.Void set_badCutsCount(System.Int32 value)
    // Offset: 0xB479D0
    void set_badCutsCount(int value);
    // public System.Int32 get_missedCount()
    // Offset: 0xB479D8
    int get_missedCount();
    // private System.Void set_missedCount(System.Int32 value)
    // Offset: 0xB479E0
    void set_missedCount(int value);
    // public System.Int32 get_maxCombo()
    // Offset: 0xB479E8
    int get_maxCombo();
    // private System.Void set_maxCombo(System.Int32 value)
    // Offset: 0xB479F0
    void set_maxCombo(int value);
    // public System.Void .ctor(System.String playerId, IDifficultyBeatmap beatmap, System.Int32 rawScore, System.Int32 modifiedScore, System.Boolean fullCombo, System.Int32 goodCutsCount, System.Int32 badCutsCount, System.Int32 missedCount, System.Int32 maxCombo, GameplayModifiers gameplayModifiers)
    // Offset: 0xB479F8
    static LeaderboardScoreUploader::ScoreData* New_ctor(::Il2CppString* playerId, GlobalNamespace::IDifficultyBeatmap* beatmap, int rawScore, int modifiedScore, bool fullCombo, int goodCutsCount, int badCutsCount, int missedCount, int maxCombo, GlobalNamespace::GameplayModifiers* gameplayModifiers);
  }; // LeaderboardScoreUploader/ScoreData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardScoreUploader::ScoreData*, "", "LeaderboardScoreUploader/ScoreData");
#pragma pack(pop)
