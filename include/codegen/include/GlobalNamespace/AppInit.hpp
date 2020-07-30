// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
// Including type: AppInitScenesTransitionSetupDataSO
#include "GlobalNamespace/AppInitScenesTransitionSetupDataSO.hpp"
#include "utils/il2cpp-utils.hpp"
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
    // Offset: 0x196D24C
    GlobalNamespace::GameScenesManager* get_gameScenesManager();
    // private System.Collections.IEnumerator StartCoroutine()
    // Offset: 0x196D380
    System::Collections::IEnumerator* StartCoroutine();
    // protected System.Void OnDestroy()
    // Offset: 0x196D428
    void OnDestroy();
    // private System.Void HandleBeforeDismissingScenes()
    // Offset: 0x196D4FC
    void HandleBeforeDismissingScenes();
    // protected AppInit/AppStartType GetAppStartType()
    // Offset: 0x196D328
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
    // Offset: 0x196D254
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::Start()
    void Start();
    // protected System.Void .ctor()
    // Offset: 0x196D59C
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
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AppInit*, "", "AppInit");
#pragma pack(pop)
