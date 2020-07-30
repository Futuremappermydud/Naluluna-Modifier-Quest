// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:17 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: RootMotion.FinalIK.OffsetModifier
#include "RootMotion/FinalIK/OffsetModifier.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.Amplifier
  class Amplifier : public RootMotion::FinalIK::OffsetModifier {
    public:
    // Nested type: RootMotion::FinalIK::Amplifier::Body
    class Body;
    // public RootMotion.FinalIK.Amplifier/Body[] bodies
    // Offset: 0x30
    ::Array<RootMotion::FinalIK::Amplifier::Body*>* bodies;
    // protected override System.Void OnModifyOffset()
    // Offset: 0x1392D58
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::OnModifyOffset()
    void OnModifyOffset();
    // public System.Void .ctor()
    // Offset: 0x13932FC
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Amplifier* New_ctor();
  }; // RootMotion.FinalIK.Amplifier
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Amplifier*, "RootMotion.FinalIK", "Amplifier");
#pragma pack(pop)
