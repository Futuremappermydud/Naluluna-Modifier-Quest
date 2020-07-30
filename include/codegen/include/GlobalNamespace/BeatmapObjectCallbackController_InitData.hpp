// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:28 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: BeatmapObjectCallbackController
#include "GlobalNamespace/BeatmapObjectCallbackController.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapData
  class BeatmapData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapObjectCallbackController/InitData
  class BeatmapObjectCallbackController::InitData : public ::Il2CppObject {
    public:
    // public readonly BeatmapData beatmapData
    // Offset: 0x10
    GlobalNamespace::BeatmapData* beatmapData;
    // public readonly System.Single spawningStartTime
    // Offset: 0x18
    float spawningStartTime;
    // public System.Void .ctor(BeatmapData beatmapData, System.Single spawningStartTime)
    // Offset: 0xB57988
    static BeatmapObjectCallbackController::InitData* New_ctor(GlobalNamespace::BeatmapData* beatmapData, float spawningStartTime);
  }; // BeatmapObjectCallbackController/InitData
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectCallbackController::InitData*, "", "BeatmapObjectCallbackController/InitData");
#pragma pack(pop)
