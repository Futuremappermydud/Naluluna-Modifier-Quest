// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:23 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TagUnitType
  struct TagUnitType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public TMPro.TagUnitType Pixels
    static constexpr const int Pixels = 0;
    // Get static field: static public TMPro.TagUnitType Pixels
    static TMPro::TagUnitType _get_Pixels();
    // Set static field: static public TMPro.TagUnitType Pixels
    static void _set_Pixels(TMPro::TagUnitType value);
    // static field const value: static public TMPro.TagUnitType FontUnits
    static constexpr const int FontUnits = 1;
    // Get static field: static public TMPro.TagUnitType FontUnits
    static TMPro::TagUnitType _get_FontUnits();
    // Set static field: static public TMPro.TagUnitType FontUnits
    static void _set_FontUnits(TMPro::TagUnitType value);
    // static field const value: static public TMPro.TagUnitType Percentage
    static constexpr const int Percentage = 2;
    // Get static field: static public TMPro.TagUnitType Percentage
    static TMPro::TagUnitType _get_Percentage();
    // Set static field: static public TMPro.TagUnitType Percentage
    static void _set_Percentage(TMPro::TagUnitType value);
    // Creating value type constructor for type: TagUnitType
    TagUnitType(int value_ = {}) : value{value_} {}
  }; // TMPro.TagUnitType
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TagUnitType, "TMPro", "TagUnitType");
#pragma pack(pop)
