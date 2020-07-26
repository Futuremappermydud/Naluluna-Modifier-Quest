// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:17 PM
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainCamera
  class MainCamera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SmoothCamera
  class SmoothCamera : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Camera _camera
    // Offset: 0x18
    UnityEngine::Camera* camera;
    // private MainCamera _mainCamera
    // Offset: 0x20
    GlobalNamespace::MainCamera* mainCamera;
    // private UnityEngine.Vector3 _thirdPersonPosition
    // Offset: 0x28
    UnityEngine::Vector3 thirdPersonPosition;
    // private UnityEngine.Vector3 _thirdPersonEulerAngles
    // Offset: 0x34
    UnityEngine::Vector3 thirdPersonEulerAngles;
    // private System.Boolean _thirdPersonEnabled
    // Offset: 0x40
    bool thirdPersonEnabled;
    // private System.Single _rotationSmooth
    // Offset: 0x44
    float rotationSmooth;
    // private System.Single _positionSmooth
    // Offset: 0x48
    float positionSmooth;
    // public System.Void Init(System.Single fieldOfView, System.Single positionSmooth, System.Single rotationSmooth, System.Boolean thirdPersonEnabled, UnityEngine.Vector3 thirdPersonPosition, UnityEngine.Vector3 thirdPersonEulerAngles)
    // Offset: 0xB85890
    void Init(float fieldOfView, float positionSmooth, float rotationSmooth, bool thirdPersonEnabled, UnityEngine::Vector3 thirdPersonPosition, UnityEngine::Vector3 thirdPersonEulerAngles);
    // protected System.Void OnEnable()
    // Offset: 0xB85A3C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xB85A5C
    void OnDisable();
    // protected System.Void LateUpdate()
    // Offset: 0xB85A7C
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0xB85CB8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SmoothCamera* New_ctor();
  }; // SmoothCamera
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SmoothCamera*, "", "SmoothCamera");
#pragma pack(pop)
