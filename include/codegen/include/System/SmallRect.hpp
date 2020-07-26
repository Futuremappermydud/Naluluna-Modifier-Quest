// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:28 PM
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
// Type namespace: System
namespace System {
  // Autogenerated type: System.SmallRect
  struct SmallRect : public System::ValueType {
    public:
    // public System.Int16 Left
    // Offset: 0x0
    int16_t Left;
    // public System.Int16 Top
    // Offset: 0x2
    int16_t Top;
    // public System.Int16 Right
    // Offset: 0x4
    int16_t Right;
    // public System.Int16 Bottom
    // Offset: 0x6
    int16_t Bottom;
    // Creating value type constructor for type: SmallRect
    SmallRect(int16_t Left_ = {}, int16_t Top_ = {}, int16_t Right_ = {}, int16_t Bottom_ = {}) : Left{Left_}, Top{Top_}, Right{Right_}, Bottom{Bottom_} {}
  }; // System.SmallRect
}
DEFINE_IL2CPP_ARG_TYPE(System::SmallRect, "System", "SmallRect");
#pragma pack(pop)
