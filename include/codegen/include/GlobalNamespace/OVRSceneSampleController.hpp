// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:52 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRPlayerController
  class OVRPlayerController;
  // Forward declaring type: OVRCameraRig
  class OVRCameraRig;
  // Forward declaring type: OVRGridCube
  class OVRGridCube;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRSceneSampleController
  class OVRSceneSampleController : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.KeyCode quitKey
    // Offset: 0x18
    UnityEngine::KeyCode quitKey;
    // public UnityEngine.Texture fadeInTexture
    // Offset: 0x20
    UnityEngine::Texture* fadeInTexture;
    // public System.Single speedRotationIncrement
    // Offset: 0x28
    float speedRotationIncrement;
    // private OVRPlayerController playerController
    // Offset: 0x30
    GlobalNamespace::OVRPlayerController* playerController;
    // private OVRCameraRig cameraController
    // Offset: 0x38
    GlobalNamespace::OVRCameraRig* cameraController;
    // public System.String layerName
    // Offset: 0x40
    ::Il2CppString* layerName;
    // private System.Boolean visionMode
    // Offset: 0x48
    bool visionMode;
    // private OVRGridCube gridCube
    // Offset: 0x50
    GlobalNamespace::OVRGridCube* gridCube;
    // private System.Void Awake()
    // Offset: 0xF38D6C
    void Awake();
    // private System.Void Start()
    // Offset: 0xF38F14
    void Start();
    // private System.Void Update()
    // Offset: 0xF39010
    void Update();
    // private System.Void UpdateVisionMode()
    // Offset: 0xF391C0
    void UpdateVisionMode();
    // private System.Void UpdateSpeedAndRotationScaleMultiplier()
    // Offset: 0xF392A4
    void UpdateSpeedAndRotationScaleMultiplier();
    // private System.Void UpdateRecenterPose()
    // Offset: 0xF390F4
    void UpdateRecenterPose();
    // public System.Void .ctor()
    // Offset: 0xF39398
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRSceneSampleController* New_ctor();
  }; // OVRSceneSampleController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSceneSampleController*, "", "OVRSceneSampleController");
#pragma pack(pop)
