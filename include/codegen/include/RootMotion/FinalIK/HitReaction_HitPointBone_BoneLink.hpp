// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:17 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: RootMotion.FinalIK.HitReaction/HitPointBone
#include "RootMotion/FinalIK/HitReaction_HitPointBone.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.HitReaction/HitPointBone/BoneLink
  class HitReaction::HitPointBone::BoneLink : public ::Il2CppObject {
    public:
    // public UnityEngine.Transform bone
    // Offset: 0x10
    UnityEngine::Transform* bone;
    // public System.Single weight
    // Offset: 0x18
    float weight;
    // private UnityEngine.Quaternion lastValue
    // Offset: 0x1C
    UnityEngine::Quaternion lastValue;
    // private UnityEngine.Quaternion current
    // Offset: 0x2C
    UnityEngine::Quaternion current;
    // public System.Void Apply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, UnityEngine.Quaternion offset, System.Single crossFader)
    // Offset: 0x13641A4
    void Apply(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, UnityEngine::Quaternion offset, float crossFader);
    // public System.Void CrossFadeStart()
    // Offset: 0x1363F2C
    void CrossFadeStart();
    // public System.Void .ctor()
    // Offset: 0x1364314
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static HitReaction::HitPointBone::BoneLink* New_ctor();
  }; // RootMotion.FinalIK.HitReaction/HitPointBone/BoneLink
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReaction::HitPointBone::BoneLink*, "RootMotion.FinalIK", "HitReaction/HitPointBone/BoneLink");
#pragma pack(pop)
