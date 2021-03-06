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
  // Autogenerated type: OVR.OpenVR.VRActiveActionSet_t
  struct VRActiveActionSet_t : public System::ValueType {
    public:
    // public System.UInt64 ulActionSet
    // Offset: 0x0
    uint64_t ulActionSet;
    // public System.UInt64 ulRestrictedToDevice
    // Offset: 0x8
    uint64_t ulRestrictedToDevice;
    // public System.UInt64 ulSecondaryActionSet
    // Offset: 0x10
    uint64_t ulSecondaryActionSet;
    // public System.UInt32 unPadding
    // Offset: 0x18
    uint unPadding;
    // public System.Int32 nPriority
    // Offset: 0x1C
    int nPriority;
    // Creating value type constructor for type: VRActiveActionSet_t
    VRActiveActionSet_t(uint64_t ulActionSet_ = {}, uint64_t ulRestrictedToDevice_ = {}, uint64_t ulSecondaryActionSet_ = {}, uint unPadding_ = {}, int nPriority_ = {}) : ulActionSet{ulActionSet_}, ulRestrictedToDevice{ulRestrictedToDevice_}, ulSecondaryActionSet{ulSecondaryActionSet_}, unPadding{unPadding_}, nPriority{nPriority_} {}
  }; // OVR.OpenVR.VRActiveActionSet_t
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VRActiveActionSet_t, "OVR.OpenVR", "VRActiveActionSet_t");
#pragma pack(pop)
