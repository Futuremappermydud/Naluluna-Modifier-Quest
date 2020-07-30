// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:31 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: SmoothCamera
  class SmoothCamera;
}
// Forward declaring namespace: LIV::SDK::Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: LIV
  class LIV;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SmoothCameraController
  class SmoothCameraController : public UnityEngine::MonoBehaviour {
    public:
    // private MainSettingsModelSO _mainSettingsModel
    // Offset: 0x18
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // private SmoothCamera _smoothCamera
    // Offset: 0x20
    GlobalNamespace::SmoothCamera* smoothCamera;
    // private LIV.SDK.Unity.LIV _liv
    // Offset: 0x28
    LIV::SDK::Unity::LIV* liv;
    // protected System.Void Start()
    // Offset: 0xB85CC0
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xB85E50
    void OnDestroy();
    // private System.Void HandleLIVDidActivate()
    // Offset: 0xB85E54
    void HandleLIVDidActivate();
    // private System.Void HandleLIVDidDeactivate()
    // Offset: 0xB85EA4
    void HandleLIVDidDeactivate();
    // private System.Void ActivateSmoothCameraIfNeeded()
    // Offset: 0xB85CC4
    void ActivateSmoothCameraIfNeeded();
    // public System.Void .ctor()
    // Offset: 0xB85EA8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SmoothCameraController* New_ctor();
  }; // SmoothCameraController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SmoothCameraController*, "", "SmoothCameraController");
#pragma pack(pop)
