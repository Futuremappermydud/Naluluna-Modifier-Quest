// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:05 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.VRTextureDepthInfo_t
#include "OVR/OpenVR/VRTextureDepthInfo_t.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.VRTextureWithPoseAndDepth_t
  struct VRTextureWithPoseAndDepth_t : public System::ValueType {
    public:
    // public OVR.OpenVR.VRTextureDepthInfo_t depth
    // Offset: 0x0
    OVR::OpenVR::VRTextureDepthInfo_t depth;
    // Creating value type constructor for type: VRTextureWithPoseAndDepth_t
    VRTextureWithPoseAndDepth_t(OVR::OpenVR::VRTextureDepthInfo_t depth_ = {}) : depth{depth_} {}
  }; // OVR.OpenVR.VRTextureWithPoseAndDepth_t
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VRTextureWithPoseAndDepth_t, "OVR.OpenVR", "VRTextureWithPoseAndDepth_t");
#pragma pack(pop)
