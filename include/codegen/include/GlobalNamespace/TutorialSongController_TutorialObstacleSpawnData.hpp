// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TutorialSongController
#include "GlobalNamespace/TutorialSongController.hpp"
// Including type: TutorialSongController/TutorialObjectSpawnData
#include "GlobalNamespace/TutorialSongController_TutorialObjectSpawnData.hpp"
// Including type: ObstacleType
#include "GlobalNamespace/ObstacleType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TutorialSongController/TutorialObstacleSpawnData
  class TutorialSongController::TutorialObstacleSpawnData : public GlobalNamespace::TutorialSongController::TutorialObjectSpawnData {
    public:
    // public System.Int32 lineIndex
    // Offset: 0x20
    int lineIndex;
    // public System.Int32 width
    // Offset: 0x24
    int width;
    // public ObstacleType obstacleType
    // Offset: 0x28
    GlobalNamespace::ObstacleType obstacleType;
    // public System.Void .ctor(Signal gameEvent, System.Int32 firstTimeBeatOffset, System.Int32 beatOffset, System.Int32 lineIndex, System.Int32 width, ObstacleType obstacleType)
    // Offset: 0xC4B07C
    static TutorialSongController::TutorialObstacleSpawnData* New_ctor(GlobalNamespace::Signal* gameEvent, int firstTimeBeatOffset, int beatOffset, int lineIndex, int width, GlobalNamespace::ObstacleType obstacleType);
  }; // TutorialSongController/TutorialObstacleSpawnData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialSongController::TutorialObstacleSpawnData*, "", "TutorialSongController/TutorialObstacleSpawnData");
#pragma pack(pop)
