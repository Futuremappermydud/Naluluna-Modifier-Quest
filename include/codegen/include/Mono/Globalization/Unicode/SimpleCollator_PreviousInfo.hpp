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
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Autogenerated type: Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
  struct SimpleCollator::PreviousInfo : public System::ValueType {
    public:
    // public System.Int32 Code
    // Offset: 0x0
    int Code;
    // public System.Byte* SortKey
    // Offset: 0x8
    uint8_t* SortKey;
    // Creating value type constructor for type: PreviousInfo
    PreviousInfo(int Code_ = {}, uint8_t* SortKey_ = {}) : Code{Code_}, SortKey{SortKey_} {}
    // public System.Void .ctor(System.Boolean dummy)
    // Offset: 0xA3CBDC
    static SimpleCollator::PreviousInfo* New_ctor(bool dummy);
  }; // Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::SimpleCollator::PreviousInfo, "Mono.Globalization.Unicode", "SimpleCollator/PreviousInfo");
#pragma pack(pop)
