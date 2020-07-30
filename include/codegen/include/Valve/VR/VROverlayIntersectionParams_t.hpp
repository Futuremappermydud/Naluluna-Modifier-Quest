// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.HmdVector3_t
#include "Valve/VR/HmdVector3_t.hpp"
// Including type: Valve.VR.ETrackingUniverseOrigin
#include "Valve/VR/ETrackingUniverseOrigin.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.VROverlayIntersectionParams_t
  struct VROverlayIntersectionParams_t : public System::ValueType {
    public:
    // public Valve.VR.HmdVector3_t vSource
    // Offset: 0x0
    Valve::VR::HmdVector3_t vSource;
    // public Valve.VR.HmdVector3_t vDirection
    // Offset: 0xC
    Valve::VR::HmdVector3_t vDirection;
    // public Valve.VR.ETrackingUniverseOrigin eOrigin
    // Offset: 0x18
    Valve::VR::ETrackingUniverseOrigin eOrigin;
    // Creating value type constructor for type: VROverlayIntersectionParams_t
    VROverlayIntersectionParams_t(Valve::VR::HmdVector3_t vSource_ = {}, Valve::VR::HmdVector3_t vDirection_ = {}, Valve::VR::ETrackingUniverseOrigin eOrigin_ = {}) : vSource{vSource_}, vDirection{vDirection_}, eOrigin{eOrigin_} {}
  }; // Valve.VR.VROverlayIntersectionParams_t
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VROverlayIntersectionParams_t, "Valve.VR", "VROverlayIntersectionParams_t");
#pragma pack(pop)
