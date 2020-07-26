// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:11 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.EVROverlayIntersectionMaskPrimitiveType
#include "Valve/VR/EVROverlayIntersectionMaskPrimitiveType.hpp"
// Including type: Valve.VR.VROverlayIntersectionMaskPrimitive_Data_t
#include "Valve/VR/VROverlayIntersectionMaskPrimitive_Data_t.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.VROverlayIntersectionMaskPrimitive_t
  struct VROverlayIntersectionMaskPrimitive_t : public System::ValueType {
    public:
    // public Valve.VR.EVROverlayIntersectionMaskPrimitiveType m_nPrimitiveType
    // Offset: 0x0
    Valve::VR::EVROverlayIntersectionMaskPrimitiveType m_nPrimitiveType;
    // public Valve.VR.VROverlayIntersectionMaskPrimitive_Data_t m_Primitive
    // Offset: 0x4
    Valve::VR::VROverlayIntersectionMaskPrimitive_Data_t m_Primitive;
    // Creating value type constructor for type: VROverlayIntersectionMaskPrimitive_t
    VROverlayIntersectionMaskPrimitive_t(Valve::VR::EVROverlayIntersectionMaskPrimitiveType m_nPrimitiveType_ = {}, Valve::VR::VROverlayIntersectionMaskPrimitive_Data_t m_Primitive_ = {}) : m_nPrimitiveType{m_nPrimitiveType_}, m_Primitive{m_Primitive_} {}
  }; // Valve.VR.VROverlayIntersectionMaskPrimitive_t
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VROverlayIntersectionMaskPrimitive_t, "Valve.VR", "VROverlayIntersectionMaskPrimitive_t");
#pragma pack(pop)
