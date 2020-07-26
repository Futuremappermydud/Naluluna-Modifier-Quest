// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:11 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.HmdVector2_t
#include "Valve/VR/HmdVector2_t.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.HmdRect2_t
  struct HmdRect2_t : public System::ValueType {
    public:
    // public Valve.VR.HmdVector2_t vTopLeft
    // Offset: 0x0
    Valve::VR::HmdVector2_t vTopLeft;
    // public Valve.VR.HmdVector2_t vBottomRight
    // Offset: 0x8
    Valve::VR::HmdVector2_t vBottomRight;
    // Creating value type constructor for type: HmdRect2_t
    HmdRect2_t(Valve::VR::HmdVector2_t vTopLeft_ = {}, Valve::VR::HmdVector2_t vBottomRight_ = {}) : vTopLeft{vTopLeft_}, vBottomRight{vBottomRight_} {}
  }; // Valve.VR.HmdRect2_t
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::HmdRect2_t, "Valve.VR", "HmdRect2_t");
#pragma pack(pop)
