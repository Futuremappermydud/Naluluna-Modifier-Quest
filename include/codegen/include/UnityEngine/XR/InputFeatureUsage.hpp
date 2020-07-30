// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:40 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.XR.InputFeatureType
#include "UnityEngine/XR/InputFeatureType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Autogenerated type: UnityEngine.XR.InputFeatureUsage
  struct InputFeatureUsage : public System::ValueType, public System::IEquatable_1<UnityEngine::XR::InputFeatureUsage> {
    public:
    // System.String m_Name
    // Offset: 0x0
    ::Il2CppString* m_Name;
    // UnityEngine.XR.InputFeatureType m_InternalType
    // Offset: 0x8
    UnityEngine::XR::InputFeatureType m_InternalType;
    // Creating value type constructor for type: InputFeatureUsage
    InputFeatureUsage(::Il2CppString* m_Name_ = {}, UnityEngine::XR::InputFeatureType m_InternalType_ = {}) : m_Name{m_Name_}, m_InternalType{m_InternalType_} {}
    // public System.String get_name()
    // Offset: 0xA5B3B4
    ::Il2CppString* get_name();
    // UnityEngine.XR.InputFeatureType get_internalType()
    // Offset: 0xA5B3BC
    UnityEngine::XR::InputFeatureType get_internalType();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xA5B3C4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(UnityEngine.XR.InputFeatureUsage other)
    // Offset: 0xA5B3CC
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.XR.InputFeatureUsage other)
    bool Equals(UnityEngine::XR::InputFeatureUsage other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA5B410
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.XR.InputFeatureUsage
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::InputFeatureUsage, "UnityEngine.XR", "InputFeatureUsage");
#pragma pack(pop)
