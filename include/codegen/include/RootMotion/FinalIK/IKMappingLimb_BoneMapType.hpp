// Autogenerated from CppHeaderCreator on 7/24/2020 3:59:59 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: RootMotion.FinalIK.IKMappingLimb
#include "RootMotion/FinalIK/IKMappingLimb.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.IKMappingLimb/BoneMapType
  struct IKMappingLimb::BoneMapType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Parent
    static constexpr const int Parent = 0;
    // Get static field: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Parent
    static RootMotion::FinalIK::IKMappingLimb::BoneMapType _get_Parent();
    // Set static field: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Parent
    static void _set_Parent(RootMotion::FinalIK::IKMappingLimb::BoneMapType value);
    // static field const value: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Bone1
    static constexpr const int Bone1 = 1;
    // Get static field: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Bone1
    static RootMotion::FinalIK::IKMappingLimb::BoneMapType _get_Bone1();
    // Set static field: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Bone1
    static void _set_Bone1(RootMotion::FinalIK::IKMappingLimb::BoneMapType value);
    // static field const value: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Bone2
    static constexpr const int Bone2 = 2;
    // Get static field: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Bone2
    static RootMotion::FinalIK::IKMappingLimb::BoneMapType _get_Bone2();
    // Set static field: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Bone2
    static void _set_Bone2(RootMotion::FinalIK::IKMappingLimb::BoneMapType value);
    // static field const value: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Bone3
    static constexpr const int Bone3 = 3;
    // Get static field: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Bone3
    static RootMotion::FinalIK::IKMappingLimb::BoneMapType _get_Bone3();
    // Set static field: static public RootMotion.FinalIK.IKMappingLimb/BoneMapType Bone3
    static void _set_Bone3(RootMotion::FinalIK::IKMappingLimb::BoneMapType value);
    // Creating value type constructor for type: BoneMapType
    BoneMapType(int value_ = {}) : value{value_} {}
  }; // RootMotion.FinalIK.IKMappingLimb/BoneMapType
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKMappingLimb::BoneMapType, "RootMotion.FinalIK", "IKMappingLimb/BoneMapType");
#pragma pack(pop)
