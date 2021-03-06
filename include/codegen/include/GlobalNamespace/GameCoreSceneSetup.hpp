// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BasicSaberModelController
  class BasicSaberModelController;
  // Forward declaring type: ScreenCaptureAfterDelay
  class ScreenCaptureAfterDelay;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: GameCoreSceneSetupData
  class GameCoreSceneSetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameCoreSceneSetup
  class GameCoreSceneSetup : public Zenject::MonoInstaller {
    public:
    // private BasicSaberModelController _basicSaberModelControllerPrefab
    // Offset: 0x20
    GlobalNamespace::BasicSaberModelController* basicSaberModelControllerPrefab;
    // private ScreenCaptureAfterDelay _screenCaptureAfterDelayPrefab
    // Offset: 0x28
    GlobalNamespace::ScreenCaptureAfterDelay* screenCaptureAfterDelayPrefab;
    // private MainSettingsModelSO _mainSettingsModel
    // Offset: 0x30
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // private GameCoreSceneSetupData _sceneSetupData
    // Offset: 0x38
    GlobalNamespace::GameCoreSceneSetupData* sceneSetupData;
    // static field const value: static private System.Single kPauseButtonPressDurationMultiplier
    static constexpr const float kPauseButtonPressDurationMultiplier = 0.75;
    // Get static field: static private System.Single kPauseButtonPressDurationMultiplier
    static float _get_kPauseButtonPressDurationMultiplier();
    // Set static field: static private System.Single kPauseButtonPressDurationMultiplier
    static void _set_kPauseButtonPressDurationMultiplier(float value);
    // public override System.Void InstallBindings()
    // Offset: 0xBF3214
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0xBF364C
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GameCoreSceneSetup* New_ctor();
  }; // GameCoreSceneSetup
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameCoreSceneSetup*, "", "GameCoreSceneSetup");
#pragma pack(pop)
