// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:41 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: System.TypeSpec
#include "System/TypeSpec.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.TypeSpec/DisplayNameFormat
  struct TypeSpec::DisplayNameFormat : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.TypeSpec/DisplayNameFormat Default
    static constexpr const int Default = 0;
    // Get static field: static public System.TypeSpec/DisplayNameFormat Default
    static System::TypeSpec::DisplayNameFormat _get_Default();
    // Set static field: static public System.TypeSpec/DisplayNameFormat Default
    static void _set_Default(System::TypeSpec::DisplayNameFormat value);
    // static field const value: static public System.TypeSpec/DisplayNameFormat WANT_ASSEMBLY
    static constexpr const int WANT_ASSEMBLY = 1;
    // Get static field: static public System.TypeSpec/DisplayNameFormat WANT_ASSEMBLY
    static System::TypeSpec::DisplayNameFormat _get_WANT_ASSEMBLY();
    // Set static field: static public System.TypeSpec/DisplayNameFormat WANT_ASSEMBLY
    static void _set_WANT_ASSEMBLY(System::TypeSpec::DisplayNameFormat value);
    // static field const value: static public System.TypeSpec/DisplayNameFormat NO_MODIFIERS
    static constexpr const int NO_MODIFIERS = 2;
    // Get static field: static public System.TypeSpec/DisplayNameFormat NO_MODIFIERS
    static System::TypeSpec::DisplayNameFormat _get_NO_MODIFIERS();
    // Set static field: static public System.TypeSpec/DisplayNameFormat NO_MODIFIERS
    static void _set_NO_MODIFIERS(System::TypeSpec::DisplayNameFormat value);
    // Creating value type constructor for type: DisplayNameFormat
    DisplayNameFormat(int value_ = {}) : value{value_} {}
  }; // System.TypeSpec/DisplayNameFormat
}
DEFINE_IL2CPP_ARG_TYPE(System::TypeSpec::DisplayNameFormat, "System", "TypeSpec/DisplayNameFormat");
#pragma pack(pop)
