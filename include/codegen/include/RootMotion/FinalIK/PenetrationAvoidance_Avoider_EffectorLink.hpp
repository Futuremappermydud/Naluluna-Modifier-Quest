// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: RootMotion.FinalIK.PenetrationAvoidance/Avoider
#include "RootMotion/FinalIK/PenetrationAvoidance_Avoider.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.PenetrationAvoidance/Avoider/EffectorLink
  class PenetrationAvoidance::Avoider::EffectorLink : public ::Il2CppObject {
    public:
    // public RootMotion.FinalIK.FullBodyBipedEffector effector
    // Offset: 0x10
    RootMotion::FinalIK::FullBodyBipedEffector effector;
    // public System.Single weight
    // Offset: 0x14
    float weight;
    // public System.Void .ctor()
    // Offset: 0x121BADC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PenetrationAvoidance::Avoider::EffectorLink* New_ctor();
  }; // RootMotion.FinalIK.PenetrationAvoidance/Avoider/EffectorLink
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::PenetrationAvoidance::Avoider::EffectorLink*, "RootMotion.FinalIK", "PenetrationAvoidance/Avoider/EffectorLink");
#pragma pack(pop)
