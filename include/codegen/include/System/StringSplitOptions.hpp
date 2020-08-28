// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.StringSplitOptions
  struct StringSplitOptions : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.StringSplitOptions None
    static constexpr const int None = 0;
    // Get static field: static public System.StringSplitOptions None
    static System::StringSplitOptions _get_None();
    // Set static field: static public System.StringSplitOptions None
    static void _set_None(System::StringSplitOptions value);
    // static field const value: static public System.StringSplitOptions RemoveEmptyEntries
    static constexpr const int RemoveEmptyEntries = 1;
    // Get static field: static public System.StringSplitOptions RemoveEmptyEntries
    static System::StringSplitOptions _get_RemoveEmptyEntries();
    // Set static field: static public System.StringSplitOptions RemoveEmptyEntries
    static void _set_RemoveEmptyEntries(System::StringSplitOptions value);
    // Creating value type constructor for type: StringSplitOptions
    StringSplitOptions(int value_ = {}) : value{value_} {}
  }; // System.StringSplitOptions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::StringSplitOptions, "System", "StringSplitOptions");
#pragma pack(pop)
