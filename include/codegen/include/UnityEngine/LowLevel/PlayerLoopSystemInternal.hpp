// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:30 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.LowLevel.PlayerLoopSystem
#include "UnityEngine/LowLevel/PlayerLoopSystem.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.LowLevel
namespace UnityEngine::LowLevel {
  // Autogenerated type: UnityEngine.LowLevel.PlayerLoopSystemInternal
  struct PlayerLoopSystemInternal : public System::ValueType {
    public:
    // public System.Type type
    // Offset: 0x0
    System::Type* type;
    // public UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction updateDelegate
    // Offset: 0x8
    UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction* updateDelegate;
    // public System.IntPtr updateFunction
    // Offset: 0x10
    System::IntPtr updateFunction;
    // public System.IntPtr loopConditionFunction
    // Offset: 0x18
    System::IntPtr loopConditionFunction;
    // public System.Int32 numSubSystems
    // Offset: 0x20
    int numSubSystems;
    // Creating value type constructor for type: PlayerLoopSystemInternal
    PlayerLoopSystemInternal(System::Type* type_ = {}, UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction* updateDelegate_ = {}, System::IntPtr updateFunction_ = {}, System::IntPtr loopConditionFunction_ = {}, int numSubSystems_ = {}) : type{type_}, updateDelegate{updateDelegate_}, updateFunction{updateFunction_}, loopConditionFunction{loopConditionFunction_}, numSubSystems{numSubSystems_} {}
  }; // UnityEngine.LowLevel.PlayerLoopSystemInternal
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LowLevel::PlayerLoopSystemInternal, "UnityEngine.LowLevel", "PlayerLoopSystemInternal");
#pragma pack(pop)
