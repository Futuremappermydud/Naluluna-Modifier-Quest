// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:26 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.HumanLimit
  struct HumanLimit : public System::ValueType {
    public:
    // private UnityEngine.Vector3 m_Min
    // Offset: 0x0
    UnityEngine::Vector3 m_Min;
    // private UnityEngine.Vector3 m_Max
    // Offset: 0xC
    UnityEngine::Vector3 m_Max;
    // private UnityEngine.Vector3 m_Center
    // Offset: 0x18
    UnityEngine::Vector3 m_Center;
    // private System.Single m_AxisLength
    // Offset: 0x24
    float m_AxisLength;
    // private System.Int32 m_UseDefaultValues
    // Offset: 0x28
    int m_UseDefaultValues;
    // Creating value type constructor for type: HumanLimit
    HumanLimit(UnityEngine::Vector3 m_Min_ = {}, UnityEngine::Vector3 m_Max_ = {}, UnityEngine::Vector3 m_Center_ = {}, float m_AxisLength_ = {}, int m_UseDefaultValues_ = {}) : m_Min{m_Min_}, m_Max{m_Max_}, m_Center{m_Center_}, m_AxisLength{m_AxisLength_}, m_UseDefaultValues{m_UseDefaultValues_} {}
  }; // UnityEngine.HumanLimit
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HumanLimit, "UnityEngine", "HumanLimit");
#pragma pack(pop)
