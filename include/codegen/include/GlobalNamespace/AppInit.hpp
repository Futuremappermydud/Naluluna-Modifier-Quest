// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
// Including type: AppInitScenesTransitionSetupDataSO
#include "GlobalNamespace/AppInitScenesTransitionSetupDataSO.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AppInit
  class AppInit : public Zenject::MonoInstaller {
    public:
    // Nested type: GlobalNamespace::AppInit::AppStartType
    struct AppStartType;
    // Nested type: GlobalNamespace::AppInit::$$c
    class $$c;
    // Nested type: GlobalNamespace::AppInit::$StartCoroutine$d__7
    class $StartCoroutine$d__7;
    // private UnityEngine.GameObject _cameraGO
    // Offset: 0x20
    UnityEngine::GameObject* cameraGO;
    // private AppInitScenesTransitionSetupDataSO/AppInitSceneSetupData _sceneSetupData
    // Offset: 0x28
    GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData* sceneSetupData;
    // private GameScenesManager _gameScenesManager
    // Offset: 0x30
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // protected GameScenesManager get_gameScenesManager()
    // Offset: 0xB88110
    GlobalNamespace::GameScenesManager* get_gameScenesManager();
    // private System.Collections.IEnumerator StartCoroutine()
    // Offset: 0xB88244
    System::Collections::IEnumerator* StartCoroutine();
    // protected System.Void OnDestroy()
    // Offset: 0xB882EC
    void OnDestroy();
    // private System.Void HandleBeforeDismissingScenes()
    // Offset: 0xB883C0
    void HandleBeforeDismissingScenes();
    // protected AppInit/AppStartType GetAppStartType()
    // Offset: 0xB881EC
    GlobalNamespace::AppInit::AppStartType GetAppStartType();
    // protected System.Void AppStartAndMultiSceneEditorSetup()
    // Offset: 0xFFFFFFFF
    void AppStartAndMultiSceneEditorSetup();
    // protected System.Void RepeatableSetup()
    // Offset: 0xFFFFFFFF
    void RepeatableSetup();
    // protected System.Void TransitionToNextScene()
    // Offset: 0xFFFFFFFF
    void TransitionToNextScene();
    // public override System.Void Start()
    // Offset: 0xB88118
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::Start()
    void Start();
    // protected System.Void .ctor()
    // Offset: 0xB88460
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AppInit* New_ctor();
  }; // AppInit
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AppInit*, "", "AppInit");
#pragma pack(pop)
