// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:17 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: RootMotion.FinalIK.InteractionTrigger
#include "RootMotion/FinalIK/InteractionTrigger.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: RaycastHit
  struct RaycastHit;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.InteractionTrigger/CameraPosition
  class InteractionTrigger::CameraPosition : public ::Il2CppObject {
    public:
    // public UnityEngine.Collider lookAtTarget
    // Offset: 0x10
    UnityEngine::Collider* lookAtTarget;
    // public UnityEngine.Vector3 direction
    // Offset: 0x18
    UnityEngine::Vector3 direction;
    // public System.Single maxDistance
    // Offset: 0x24
    float maxDistance;
    // public System.Single maxAngle
    // Offset: 0x28
    float maxAngle;
    // public System.Boolean fixYAxis
    // Offset: 0x2C
    bool fixYAxis;
    // public UnityEngine.Quaternion GetRotation()
    // Offset: 0x1218078
    UnityEngine::Quaternion GetRotation();
    // public System.Boolean IsInRange(UnityEngine.Transform raycastFrom, UnityEngine.RaycastHit hit, UnityEngine.Transform trigger, System.Single error)
    // Offset: 0x1218220
    bool IsInRange(UnityEngine::Transform* raycastFrom, UnityEngine::RaycastHit hit, UnityEngine::Transform* trigger, float& error);
    // public System.Void .ctor()
    // Offset: 0x1218500
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static InteractionTrigger::CameraPosition* New_ctor();
  }; // RootMotion.FinalIK.InteractionTrigger/CameraPosition
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionTrigger::CameraPosition*, "RootMotion.FinalIK", "InteractionTrigger/CameraPosition");
#pragma pack(pop)
