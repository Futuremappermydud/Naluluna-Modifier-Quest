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
  // Autogenerated type: System.Handles
  struct Handles : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Handles STD_INPUT
    static constexpr const int STD_INPUT = -10;
    // Get static field: static public System.Handles STD_INPUT
    static System::Handles _get_STD_INPUT();
    // Set static field: static public System.Handles STD_INPUT
    static void _set_STD_INPUT(System::Handles value);
    // static field const value: static public System.Handles STD_OUTPUT
    static constexpr const int STD_OUTPUT = -11;
    // Get static field: static public System.Handles STD_OUTPUT
    static System::Handles _get_STD_OUTPUT();
    // Set static field: static public System.Handles STD_OUTPUT
    static void _set_STD_OUTPUT(System::Handles value);
    // static field const value: static public System.Handles STD_ERROR
    static constexpr const int STD_ERROR = -12;
    // Get static field: static public System.Handles STD_ERROR
    static System::Handles _get_STD_ERROR();
    // Set static field: static public System.Handles STD_ERROR
    static void _set_STD_ERROR(System::Handles value);
    // Creating value type constructor for type: Handles
    Handles(int value_ = {}) : value{value_} {}
  }; // System.Handles
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Handles, "System", "Handles");
#pragma pack(pop)
