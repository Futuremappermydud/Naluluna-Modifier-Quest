// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:36 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: SingleFixedSceneScenesTransitionSetupDataSO
#include "GlobalNamespace/SingleFixedSceneScenesTransitionSetupDataSO.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AppInitScenesTransitionSetupDataSO
  class AppInitScenesTransitionSetupDataSO : public GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
    public:
    // Nested type: GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType
    struct AppInitOverrideStartType;
    // Nested type: GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData
    class AppInitSceneSetupData;
    // public System.Void Init()
    // Offset: 0x196D950
    void Init();
    // public System.Void __Init(AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType appInitOverrideStartType)
    // Offset: 0x196D9C0
    void __Init(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType appInitOverrideStartType);
    // public System.Void .ctor()
    // Offset: 0x196DA38
    // Implemented from: SingleFixedSceneScenesTransitionSetupDataSO
    // Base method: System.Void SingleFixedSceneScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AppInitScenesTransitionSetupDataSO* New_ctor();
  }; // AppInitScenesTransitionSetupDataSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AppInitScenesTransitionSetupDataSO*, "", "AppInitScenesTransitionSetupDataSO");
#pragma pack(pop)
