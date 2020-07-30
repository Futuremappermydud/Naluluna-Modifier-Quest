// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:59 PM
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
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Cubemap
  class Cubemap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRCubemapCapture
  class OVRCubemapCapture : public UnityEngine::MonoBehaviour {
    public:
    // public System.Boolean autoTriggerAfterLaunch
    // Offset: 0x18
    bool autoTriggerAfterLaunch;
    // public System.Single autoTriggerDelay
    // Offset: 0x1C
    float autoTriggerDelay;
    // private System.Single autoTriggerElapse
    // Offset: 0x20
    float autoTriggerElapse;
    // public UnityEngine.KeyCode triggeredByKey
    // Offset: 0x24
    UnityEngine::KeyCode triggeredByKey;
    // public System.String pathName
    // Offset: 0x28
    ::Il2CppString* pathName;
    // public System.Int32 cubemapSize
    // Offset: 0x30
    int cubemapSize;
    // private System.Void Update()
    // Offset: 0xCB6048
    void Update();
    // static public System.Void TriggerCubemapCapture(UnityEngine.Vector3 capturePos, System.Int32 cubemapSize, System.String pathName)
    // Offset: 0xCB6100
    static void TriggerCubemapCapture(UnityEngine::Vector3 capturePos, int cubemapSize, ::Il2CppString* pathName);
    // static public System.Void RenderIntoCubemap(UnityEngine.Camera ownerCamera, UnityEngine.Cubemap outCubemap)
    // Offset: 0xCB6378
    static void RenderIntoCubemap(UnityEngine::Camera* ownerCamera, UnityEngine::Cubemap* outCubemap);
    // static public System.Boolean SaveCubemapCapture(UnityEngine.Cubemap cubemap, System.String pathName)
    // Offset: 0xCB69D4
    static bool SaveCubemapCapture(UnityEngine::Cubemap* cubemap, ::Il2CppString* pathName);
    // public System.Void .ctor()
    // Offset: 0xCB70CC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRCubemapCapture* New_ctor();
  }; // OVRCubemapCapture
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRCubemapCapture*, "", "OVRCubemapCapture");
#pragma pack(pop)
