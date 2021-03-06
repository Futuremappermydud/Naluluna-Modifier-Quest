// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightPairRotationEventEffect
#include "GlobalNamespace/LightPairRotationEventEffect.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LightPairRotationEventEffect/RotationData
  class LightPairRotationEventEffect::RotationData : public ::Il2CppObject {
    public:
    // public System.Boolean enabled
    // Offset: 0x10
    bool enabled;
    // public System.Single rotationSpeed
    // Offset: 0x14
    float rotationSpeed;
    // public UnityEngine.Quaternion startRotation
    // Offset: 0x18
    UnityEngine::Quaternion startRotation;
    // public UnityEngine.Transform transform
    // Offset: 0x28
    UnityEngine::Transform* transform;
    // public System.Single startRotationAngle
    // Offset: 0x30
    float startRotationAngle;
    // public System.Single rotationAngle
    // Offset: 0x34
    float rotationAngle;
    // public System.Void .ctor()
    // Offset: 0xBF9A2C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LightPairRotationEventEffect::RotationData* New_ctor();
  }; // LightPairRotationEventEffect/RotationData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightPairRotationEventEffect::RotationData*, "", "LightPairRotationEventEffect/RotationData");
#pragma pack(pop)
