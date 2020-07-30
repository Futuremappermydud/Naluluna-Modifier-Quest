// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:06 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.HmdVector4_t
#include "OVR/OpenVR/HmdVector4_t.hpp"
// Including type: OVR.OpenVR.HmdQuaternionf_t
#include "OVR/OpenVR/HmdQuaternionf_t.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.VRBoneTransform_t
  struct VRBoneTransform_t : public System::ValueType {
    public:
    // public OVR.OpenVR.HmdVector4_t position
    // Offset: 0x0
    OVR::OpenVR::HmdVector4_t position;
    // public OVR.OpenVR.HmdQuaternionf_t orientation
    // Offset: 0x10
    OVR::OpenVR::HmdQuaternionf_t orientation;
    // Creating value type constructor for type: VRBoneTransform_t
    VRBoneTransform_t(OVR::OpenVR::HmdVector4_t position_ = {}, OVR::OpenVR::HmdQuaternionf_t orientation_ = {}) : position{position_}, orientation{orientation_} {}
  }; // OVR.OpenVR.VRBoneTransform_t
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VRBoneTransform_t, "OVR.OpenVR", "VRBoneTransform_t");
#pragma pack(pop)
