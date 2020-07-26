// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:00 PM
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
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.InteractionTrigger/CharacterPosition
  class InteractionTrigger::CharacterPosition : public ::Il2CppObject {
    public:
    // public System.Boolean use
    // Offset: 0x10
    bool use;
    // public UnityEngine.Vector2 offset
    // Offset: 0x14
    UnityEngine::Vector2 offset;
    // public System.Single angleOffset
    // Offset: 0x1C
    float angleOffset;
    // public System.Single maxAngle
    // Offset: 0x20
    float maxAngle;
    // public System.Single radius
    // Offset: 0x24
    float radius;
    // public System.Boolean orbit
    // Offset: 0x28
    bool orbit;
    // public System.Boolean fixYAxis
    // Offset: 0x29
    bool fixYAxis;
    // public UnityEngine.Vector3 get_offset3D()
    // Offset: 0x121858C
    UnityEngine::Vector3 get_offset3D();
    // public UnityEngine.Vector3 get_direction3D()
    // Offset: 0x12185C8
    UnityEngine::Vector3 get_direction3D();
    // public System.Boolean IsInRange(UnityEngine.Transform character, UnityEngine.Transform trigger, System.Single error)
    // Offset: 0x12186C0
    bool IsInRange(UnityEngine::Transform* character, UnityEngine::Transform* trigger, float& error);
    // public System.Void .ctor()
    // Offset: 0x1218D3C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static InteractionTrigger::CharacterPosition* New_ctor();
  }; // RootMotion.FinalIK.InteractionTrigger/CharacterPosition
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionTrigger::CharacterPosition*, "RootMotion.FinalIK", "InteractionTrigger/CharacterPosition");
#pragma pack(pop)
