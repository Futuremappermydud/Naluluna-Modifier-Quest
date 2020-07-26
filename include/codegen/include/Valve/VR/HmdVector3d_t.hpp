// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:11 PM
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.HmdVector3d_t
  struct HmdVector3d_t : public System::ValueType {
    public:
    // public System.Double v0
    // Offset: 0x0
    double v0;
    // public System.Double v1
    // Offset: 0x8
    double v1;
    // public System.Double v2
    // Offset: 0x10
    double v2;
    // Creating value type constructor for type: HmdVector3d_t
    HmdVector3d_t(double v0_ = {}, double v1_ = {}, double v2_ = {}) : v0{v0_}, v1{v1_}, v2{v2_} {}
  }; // Valve.VR.HmdVector3d_t
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::HmdVector3d_t, "Valve.VR", "HmdVector3d_t");
#pragma pack(pop)
