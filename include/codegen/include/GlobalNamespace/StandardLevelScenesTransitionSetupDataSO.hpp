// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:36 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: ScenesTransitionSetupDataSO
#include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SceneInfo
  class SceneInfo;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: OverrideEnvironmentSettings
  class OverrideEnvironmentSettings;
  // Forward declaring type: ColorScheme
  class ColorScheme;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: PracticeSettings
  class PracticeSettings;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO : public GlobalNamespace::ScenesTransitionSetupDataSO {
    public:
    // private SceneInfo _standardGameplaySceneInfo
    // Offset: 0x28
    GlobalNamespace::SceneInfo* standardGameplaySceneInfo;
    // private SceneInfo _gameplayCoreSceneInfo
    // Offset: 0x30
    GlobalNamespace::SceneInfo* gameplayCoreSceneInfo;
    // private SceneInfo _gameCoreSceneInfo
    // Offset: 0x38
    GlobalNamespace::SceneInfo* gameCoreSceneInfo;
    // private System.Action`2<StandardLevelScenesTransitionSetupDataSO,LevelCompletionResults> didFinishEvent
    // Offset: 0x40
    System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*>* didFinishEvent;
    // public System.Void add_didFinishEvent(System.Action`2<StandardLevelScenesTransitionSetupDataSO,LevelCompletionResults> value)
    // Offset: 0xB882E4
    void add_didFinishEvent(System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<StandardLevelScenesTransitionSetupDataSO,LevelCompletionResults> value)
    // Offset: 0xB88418
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*>* value);
    // public System.Void Init(IDifficultyBeatmap difficultyBeatmap, OverrideEnvironmentSettings overrideEnvironmentSettings, ColorScheme overrideColorScheme, GameplayModifiers gameplayModifiers, PlayerSpecificSettings playerSpecificSettings, PracticeSettings practiceSettings, System.String backButtonText, System.Boolean useTestNoteCutSoundEffects)
    // Offset: 0xB900E8
    void Init(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, GlobalNamespace::ColorScheme* overrideColorScheme, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, GlobalNamespace::PracticeSettings* practiceSettings, ::Il2CppString* backButtonText, bool useTestNoteCutSoundEffects);
    // public System.Void Finish(LevelCompletionResults levelCompletionResults)
    // Offset: 0xB8E7BC
    void Finish(GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // public System.Void .ctor()
    // Offset: 0xB906CC
    // Implemented from: ScenesTransitionSetupDataSO
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static StandardLevelScenesTransitionSetupDataSO* New_ctor();
  }; // StandardLevelScenesTransitionSetupDataSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, "", "StandardLevelScenesTransitionSetupDataSO");
#pragma pack(pop)
