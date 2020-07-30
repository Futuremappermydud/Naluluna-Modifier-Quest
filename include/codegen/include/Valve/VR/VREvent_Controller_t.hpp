// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:16 PM
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
  // Autogenerated type: Valve.VR.VREvent_Controller_t
  struct VREvent_Controller_t : public System::ValueType {
    public:
    // public System.UInt32 button
    // Offset: 0x0
    uint button;
    // Creating value type constructor for type: VREvent_Controller_t
    VREvent_Controller_t(uint button_ = {}) : button{button_} {}
  }; // Valve.VR.VREvent_Controller_t
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VREvent_Controller_t, "Valve.VR", "VREvent_Controller_t");
#pragma pack(pop)
