// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: HealthWarningSceneSetupData
  class HealthWarningSceneSetupData : public GlobalNamespace::SceneSetupData {
    public:
    // private ScenesTransitionSetupDataSO _nextScenesTransitionSetupData
    // Offset: 0x10
    GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData;
    // public ScenesTransitionSetupDataSO get_nextScenesTransitionSetupData()
    // Offset: 0xB447A0
    GlobalNamespace::ScenesTransitionSetupDataSO* get_nextScenesTransitionSetupData();
    // public System.Void .ctor(ScenesTransitionSetupDataSO nextScenesTransitionSetupData)
    // Offset: 0xB447A8
    static HealthWarningSceneSetupData* New_ctor(GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);
  }; // HealthWarningSceneSetupData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HealthWarningSceneSetupData*, "", "HealthWarningSceneSetupData");
#pragma pack(pop)
