// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:06 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.VREvent_ScreenshotProgress_t
  struct VREvent_ScreenshotProgress_t : public System::ValueType {
    public:
    // public System.Single progress
    // Offset: 0x0
    float progress;
    // Creating value type constructor for type: VREvent_ScreenshotProgress_t
    VREvent_ScreenshotProgress_t(float progress_ = {}) : progress{progress_} {}
  }; // OVR.OpenVR.VREvent_ScreenshotProgress_t
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_ScreenshotProgress_t, "OVR.OpenVR", "VREvent_ScreenshotProgress_t");
#pragma pack(pop)
