// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.VREvent_Data_t
#include "Valve/VR/VREvent_Data_t.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: VREvent_t
  struct VREvent_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.VREvent_t_Packed
  struct VREvent_t_Packed : public System::ValueType {
    public:
    // public System.UInt32 eventType
    // Offset: 0x0
    uint eventType;
    // public System.UInt32 trackedDeviceIndex
    // Offset: 0x4
    uint trackedDeviceIndex;
    // public System.Single eventAgeSeconds
    // Offset: 0x8
    float eventAgeSeconds;
    // public Valve.VR.VREvent_Data_t data
    // Offset: 0xC
    Valve::VR::VREvent_Data_t data;
    // Creating value type constructor for type: VREvent_t_Packed
    VREvent_t_Packed(uint eventType_ = {}, uint trackedDeviceIndex_ = {}, float eventAgeSeconds_ = {}, Valve::VR::VREvent_Data_t data_ = {}) : eventType{eventType_}, trackedDeviceIndex{trackedDeviceIndex_}, eventAgeSeconds{eventAgeSeconds_}, data{data_} {}
    // public System.Void .ctor(Valve.VR.VREvent_t unpacked)
    // Offset: 0xA59BF0
    static VREvent_t_Packed* New_ctor(Valve::VR::VREvent_t unpacked);
    // public System.Void Unpack(Valve.VR.VREvent_t unpacked)
    // Offset: 0xA59C40
    void Unpack(Valve::VR::VREvent_t& unpacked);
  }; // Valve.VR.VREvent_t_Packed
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VREvent_t_Packed, "Valve.VR", "VREvent_t_Packed");
#pragma pack(pop)
