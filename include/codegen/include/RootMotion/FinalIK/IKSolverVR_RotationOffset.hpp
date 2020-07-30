// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:17 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR
#include "RootMotion/FinalIK/IKSolverVR.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.IKSolverVR/RotationOffset
  struct IKSolverVR::RotationOffset : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public RootMotion.FinalIK.IKSolverVR/RotationOffset Pelvis
    static constexpr const int Pelvis = 0;
    // Get static field: static public RootMotion.FinalIK.IKSolverVR/RotationOffset Pelvis
    static RootMotion::FinalIK::IKSolverVR::RotationOffset _get_Pelvis();
    // Set static field: static public RootMotion.FinalIK.IKSolverVR/RotationOffset Pelvis
    static void _set_Pelvis(RootMotion::FinalIK::IKSolverVR::RotationOffset value);
    // static field const value: static public RootMotion.FinalIK.IKSolverVR/RotationOffset Chest
    static constexpr const int Chest = 1;
    // Get static field: static public RootMotion.FinalIK.IKSolverVR/RotationOffset Chest
    static RootMotion::FinalIK::IKSolverVR::RotationOffset _get_Chest();
    // Set static field: static public RootMotion.FinalIK.IKSolverVR/RotationOffset Chest
    static void _set_Chest(RootMotion::FinalIK::IKSolverVR::RotationOffset value);
    // static field const value: static public RootMotion.FinalIK.IKSolverVR/RotationOffset Head
    static constexpr const int Head = 2;
    // Get static field: static public RootMotion.FinalIK.IKSolverVR/RotationOffset Head
    static RootMotion::FinalIK::IKSolverVR::RotationOffset _get_Head();
    // Set static field: static public RootMotion.FinalIK.IKSolverVR/RotationOffset Head
    static void _set_Head(RootMotion::FinalIK::IKSolverVR::RotationOffset value);
    // Creating value type constructor for type: RotationOffset
    RotationOffset(int value_ = {}) : value{value_} {}
  }; // RootMotion.FinalIK.IKSolverVR/RotationOffset
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverVR::RotationOffset, "RootMotion.FinalIK", "IKSolverVR/RotationOffset");
#pragma pack(pop)
