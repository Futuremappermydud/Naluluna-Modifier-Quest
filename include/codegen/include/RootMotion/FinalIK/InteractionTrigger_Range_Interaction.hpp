// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:17 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: RootMotion.FinalIK.InteractionTrigger/Range
#include "RootMotion/FinalIK/InteractionTrigger_Range.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: InteractionObject
  class InteractionObject;
  // Forward declaring type: FullBodyBipedEffector
  struct FullBodyBipedEffector;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.InteractionTrigger/Range/Interaction
  class InteractionTrigger::Range::Interaction : public ::Il2CppObject {
    public:
    // public RootMotion.FinalIK.InteractionObject interactionObject
    // Offset: 0x10
    RootMotion::FinalIK::InteractionObject* interactionObject;
    // public RootMotion.FinalIK.FullBodyBipedEffector[] effectors
    // Offset: 0x18
    ::Array<RootMotion::FinalIK::FullBodyBipedEffector>* effectors;
    // public System.Void .ctor()
    // Offset: 0x1218D60
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static InteractionTrigger::Range::Interaction* New_ctor();
  }; // RootMotion.FinalIK.InteractionTrigger/Range/Interaction
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionTrigger::Range::Interaction*, "RootMotion.FinalIK", "InteractionTrigger/Range/Interaction");
#pragma pack(pop)
