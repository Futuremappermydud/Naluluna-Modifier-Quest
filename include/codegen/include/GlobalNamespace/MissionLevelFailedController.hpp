// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PrepareLevelCompletionResults
  class PrepareLevelCompletionResults;
  // Forward declaring type: LevelFailedTextEffect
  class LevelFailedTextEffect;
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
  // Forward declaring type: MissionObjectiveCheckersManager
  class MissionObjectiveCheckersManager;
  // Forward declaring type: BeatmapObjectSpawnController
  class BeatmapObjectSpawnController;
  // Forward declaring type: GameSongController
  class GameSongController;
  // Forward declaring type: ILevelEndActions
  class ILevelEndActions;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionLevelFailedController
  class MissionLevelFailedController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MissionLevelFailedController::InitData
    class InitData;
    // Nested type: GlobalNamespace::MissionLevelFailedController::$LevelFailedCoroutine$d__13
    class $LevelFailedCoroutine$d__13;
    // private PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Offset: 0x18
    GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // private LevelFailedTextEffect _levelFailedTextEffect
    // Offset: 0x20
    GlobalNamespace::LevelFailedTextEffect* levelFailedTextEffect;
    // private MissionLevelScenesTransitionSetupDataSO _missionLevelSceneSetupData
    // Offset: 0x28
    GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelSceneSetupData;
    // private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    // Offset: 0x30
    GlobalNamespace::MissionObjectiveCheckersManager* missionObjectiveCheckersManager;
    // private MissionLevelFailedController/InitData _initData
    // Offset: 0x38
    GlobalNamespace::MissionLevelFailedController::InitData* initData;
    // private BeatmapObjectSpawnController _beatmapObjectSpawnController
    // Offset: 0x40
    GlobalNamespace::BeatmapObjectSpawnController* beatmapObjectSpawnController;
    // private GameSongController _gameSongController
    // Offset: 0x48
    GlobalNamespace::GameSongController* gameSongController;
    // private ILevelEndActions _gameplayManager
    // Offset: 0x50
    GlobalNamespace::ILevelEndActions* gameplayManager;
    // private BeatmapObjectManager _beatmapObjectManager
    // Offset: 0x58
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // protected System.Void Start()
    // Offset: 0xC0538C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xC05474
    void OnDestroy();
    // private System.Void HandleLevelFailed()
    // Offset: 0xC0556C
    void HandleLevelFailed();
    // private System.Collections.IEnumerator LevelFailedCoroutine()
    // Offset: 0xC05598
    System::Collections::IEnumerator* LevelFailedCoroutine();
    // public System.Void .ctor()
    // Offset: 0xC05640
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionLevelFailedController* New_ctor();
  }; // MissionLevelFailedController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelFailedController*, "", "MissionLevelFailedController");
#pragma pack(pop)
