// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:17 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: RootMotion.FinalIK.InteractionTarget
#include "RootMotion/FinalIK/InteractionTarget.hpp"
// Including type: RootMotion.FinalIK.InteractionObject/WeightCurve/Type
#include "RootMotion/FinalIK/InteractionObject.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.InteractionTarget/Multiplier
  class InteractionTarget::Multiplier : public ::Il2CppObject {
    public:
    // public RootMotion.FinalIK.InteractionObject/WeightCurve/Type curve
    // Offset: 0x10
    RootMotion::FinalIK::InteractionObject::WeightCurve::Type curve;
    // public System.Single multiplier
    // Offset: 0x14
    float multiplier;
    // public System.Void .ctor()
    // Offset: 0x1217AF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static InteractionTarget::Multiplier* New_ctor();
  }; // RootMotion.FinalIK.InteractionTarget/Multiplier
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionTarget::Multiplier*, "RootMotion.FinalIK", "InteractionTarget/Multiplier");
#pragma pack(pop)
