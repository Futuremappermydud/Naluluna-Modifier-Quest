// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:59 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.HmdVector3_t
#include "OVR/OpenVR/HmdVector3_t.hpp"
// Including type: OVR.OpenVR.HmdVector2_t
#include "OVR/OpenVR/HmdVector2_t.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.VROverlayIntersectionResults_t
  struct VROverlayIntersectionResults_t : public System::ValueType {
    public:
    // public OVR.OpenVR.HmdVector3_t vPoint
    // Offset: 0x0
    OVR::OpenVR::HmdVector3_t vPoint;
    // public OVR.OpenVR.HmdVector3_t vNormal
    // Offset: 0xC
    OVR::OpenVR::HmdVector3_t vNormal;
    // public OVR.OpenVR.HmdVector2_t vUVs
    // Offset: 0x18
    OVR::OpenVR::HmdVector2_t vUVs;
    // public System.Single fDistance
    // Offset: 0x20
    float fDistance;
    // Creating value type constructor for type: VROverlayIntersectionResults_t
    VROverlayIntersectionResults_t(OVR::OpenVR::HmdVector3_t vPoint_ = {}, OVR::OpenVR::HmdVector3_t vNormal_ = {}, OVR::OpenVR::HmdVector2_t vUVs_ = {}, float fDistance_ = {}) : vPoint{vPoint_}, vNormal{vNormal_}, vUVs{vUVs_}, fDistance{fDistance_} {}
  }; // OVR.OpenVR.VROverlayIntersectionResults_t
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VROverlayIntersectionResults_t, "OVR.OpenVR", "VROverlayIntersectionResults_t");
#pragma pack(pop)
