// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:15 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ILevelRestartController
#include "GlobalNamespace/ILevelRestartController.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TutorialScenesTransitionSetupDataSO
  class TutorialScenesTransitionSetupDataSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TutorialRestartController
  class TutorialRestartController : public UnityEngine::MonoBehaviour, public GlobalNamespace::ILevelRestartController {
    public:
    // private TutorialScenesTransitionSetupDataSO _tutorialSceneSetupData
    // Offset: 0x18
    GlobalNamespace::TutorialScenesTransitionSetupDataSO* tutorialSceneSetupData;
    // public System.Void RestartLevel()
    // Offset: 0xC3543C
    // Implemented from: ILevelRestartController
    // Base method: System.Void ILevelRestartController::RestartLevel()
    void RestartLevel();
    // public System.Void .ctor()
    // Offset: 0xC35458
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TutorialRestartController* New_ctor();
  }; // TutorialRestartController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialRestartController*, "", "TutorialRestartController");
#pragma pack(pop)
