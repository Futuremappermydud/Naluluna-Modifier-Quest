// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Mono.Globalization.Unicode.SimpleCollator
#include "Mono/Globalization/Unicode/SimpleCollator.hpp"
// Including type: System.Globalization.CompareOptions
#include "System/Globalization/CompareOptions.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Autogenerated type: Mono.Globalization.Unicode.SimpleCollator/Context
  struct SimpleCollator::Context : public System::ValueType {
    public:
    // public readonly System.Globalization.CompareOptions Option
    // Offset: 0x0
    System::Globalization::CompareOptions Option;
    // public readonly System.Byte* NeverMatchFlags
    // Offset: 0x8
    uint8_t* NeverMatchFlags;
    // public readonly System.Byte* AlwaysMatchFlags
    // Offset: 0x10
    uint8_t* AlwaysMatchFlags;
    // public System.Byte* Buffer1
    // Offset: 0x18
    uint8_t* Buffer1;
    // public System.Byte* Buffer2
    // Offset: 0x20
    uint8_t* Buffer2;
    // public System.Int32 PrevCode
    // Offset: 0x28
    int PrevCode;
    // public System.Byte* PrevSortKey
    // Offset: 0x30
    uint8_t* PrevSortKey;
    // Creating value type constructor for type: Context
    Context(System::Globalization::CompareOptions Option_ = {}, uint8_t* NeverMatchFlags_ = {}, uint8_t* AlwaysMatchFlags_ = {}, uint8_t* Buffer1_ = {}, uint8_t* Buffer2_ = {}, int PrevCode_ = {}, uint8_t* PrevSortKey_ = {}) : Option{Option_}, NeverMatchFlags{NeverMatchFlags_}, AlwaysMatchFlags{AlwaysMatchFlags_}, Buffer1{Buffer1_}, Buffer2{Buffer2_}, PrevCode{PrevCode_}, PrevSortKey{PrevSortKey_} {}
    // public System.Void .ctor(System.Globalization.CompareOptions opt, System.Byte* alwaysMatchFlags, System.Byte* neverMatchFlags, System.Byte* buffer1, System.Byte* buffer2, System.Byte* prev1)
    // Offset: 0xA3CAF4
    static SimpleCollator::Context* New_ctor(System::Globalization::CompareOptions opt, uint8_t* alwaysMatchFlags, uint8_t* neverMatchFlags, uint8_t* buffer1, uint8_t* buffer2, uint8_t* prev1);
  }; // Mono.Globalization.Unicode.SimpleCollator/Context
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::SimpleCollator::Context, "Mono.Globalization.Unicode", "SimpleCollator/Context");
#pragma pack(pop)
