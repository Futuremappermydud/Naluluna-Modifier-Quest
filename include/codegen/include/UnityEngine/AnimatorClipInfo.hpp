// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:24 PM
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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AnimatorClipInfo
  struct AnimatorClipInfo : public System::ValueType {
    public:
    // private System.Int32 m_ClipInstanceID
    // Offset: 0x0
    int m_ClipInstanceID;
    // private System.Single m_Weight
    // Offset: 0x4
    float m_Weight;
    // Creating value type constructor for type: AnimatorClipInfo
    AnimatorClipInfo(int m_ClipInstanceID_ = {}, float m_Weight_ = {}) : m_ClipInstanceID{m_ClipInstanceID_}, m_Weight{m_Weight_} {}
  }; // UnityEngine.AnimatorClipInfo
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimatorClipInfo, "UnityEngine", "AnimatorClipInfo");
#pragma pack(pop)
