// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:06 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.HmdMatrix34_t
#include "OVR/OpenVR/HmdMatrix34_t.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.RenderModel_ComponentState_t
  struct RenderModel_ComponentState_t : public System::ValueType {
    public:
    // public OVR.OpenVR.HmdMatrix34_t mTrackingToComponentRenderModel
    // Offset: 0x0
    OVR::OpenVR::HmdMatrix34_t mTrackingToComponentRenderModel;
    // public OVR.OpenVR.HmdMatrix34_t mTrackingToComponentLocal
    // Offset: 0x30
    OVR::OpenVR::HmdMatrix34_t mTrackingToComponentLocal;
    // public System.UInt32 uProperties
    // Offset: 0x60
    uint uProperties;
    // Creating value type constructor for type: RenderModel_ComponentState_t
    RenderModel_ComponentState_t(OVR::OpenVR::HmdMatrix34_t mTrackingToComponentRenderModel_ = {}, OVR::OpenVR::HmdMatrix34_t mTrackingToComponentLocal_ = {}, uint uProperties_ = {}) : mTrackingToComponentRenderModel{mTrackingToComponentRenderModel_}, mTrackingToComponentLocal{mTrackingToComponentLocal_}, uProperties{uProperties_} {}
  }; // OVR.OpenVR.RenderModel_ComponentState_t
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::RenderModel_ComponentState_t, "OVR.OpenVR", "RenderModel_ComponentState_t");
#pragma pack(pop)
