// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Globalization.HebrewNumber/HS
#include "System/Globalization/HebrewNumber_HS.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Autogenerated type: System.Globalization.HebrewNumberParsingContext
  struct HebrewNumberParsingContext : public System::ValueType {
    public:
    // System.Globalization.HebrewNumber/HS state
    // Offset: 0x0
    System::Globalization::HebrewNumber::HS state;
    // System.Int32 result
    // Offset: 0x4
    int result;
    // Creating value type constructor for type: HebrewNumberParsingContext
    HebrewNumberParsingContext(System::Globalization::HebrewNumber::HS state_ = {}, int result_ = {}) : state{state_}, result{result_} {}
    // public System.Void .ctor(System.Int32 result)
    // Offset: 0xA3FF1C
    static HebrewNumberParsingContext* New_ctor(int result);
  }; // System.Globalization.HebrewNumberParsingContext
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::HebrewNumberParsingContext, "System.Globalization", "HebrewNumberParsingContext");
#pragma pack(pop)
