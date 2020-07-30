// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:05 PM
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
  // Autogenerated type: OVR.OpenVR.VREvent_Chaperone_t
  struct VREvent_Chaperone_t : public System::ValueType {
    public:
    // public System.UInt64 m_nPreviousUniverse
    // Offset: 0x0
    uint64_t m_nPreviousUniverse;
    // public System.UInt64 m_nCurrentUniverse
    // Offset: 0x8
    uint64_t m_nCurrentUniverse;
    // Creating value type constructor for type: VREvent_Chaperone_t
    VREvent_Chaperone_t(uint64_t m_nPreviousUniverse_ = {}, uint64_t m_nCurrentUniverse_ = {}) : m_nPreviousUniverse{m_nPreviousUniverse_}, m_nCurrentUniverse{m_nCurrentUniverse_} {}
  }; // OVR.OpenVR.VREvent_Chaperone_t
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_Chaperone_t, "OVR.OpenVR", "VREvent_Chaperone_t");
#pragma pack(pop)
