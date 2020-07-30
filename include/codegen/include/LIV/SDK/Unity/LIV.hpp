// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Autogenerated type: LIV.SDK.Unity.LIV
  class LIV : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Transform TrackedSpaceOrigin
    // Offset: 0x18
    UnityEngine::Transform* TrackedSpaceOrigin;
    // public UnityEngine.Camera HMDCamera
    // Offset: 0x20
    UnityEngine::Camera* HMDCamera;
    // public System.Boolean DisableStandardAssets
    // Offset: 0x28
    bool DisableStandardAssets;
    // public UnityEngine.LayerMask SpectatorLayerMask
    // Offset: 0x2C
    UnityEngine::LayerMask SpectatorLayerMask;
    // public System.Void .ctor()
    // Offset: 0x1967C8C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LIV* New_ctor();
  }; // LIV.SDK.Unity.LIV
}
DEFINE_IL2CPP_ARG_TYPE(LIV::SDK::Unity::LIV*, "LIV.SDK.Unity", "LIV");
#pragma pack(pop)
