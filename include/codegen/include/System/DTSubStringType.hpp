// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:26 PM
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
// Type namespace: System
namespace System {
  // Autogenerated type: System.DTSubStringType
  struct DTSubStringType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.DTSubStringType Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public System.DTSubStringType Unknown
    static System::DTSubStringType _get_Unknown();
    // Set static field: static public System.DTSubStringType Unknown
    static void _set_Unknown(System::DTSubStringType value);
    // static field const value: static public System.DTSubStringType Invalid
    static constexpr const int Invalid = 1;
    // Get static field: static public System.DTSubStringType Invalid
    static System::DTSubStringType _get_Invalid();
    // Set static field: static public System.DTSubStringType Invalid
    static void _set_Invalid(System::DTSubStringType value);
    // static field const value: static public System.DTSubStringType Number
    static constexpr const int Number = 2;
    // Get static field: static public System.DTSubStringType Number
    static System::DTSubStringType _get_Number();
    // Set static field: static public System.DTSubStringType Number
    static void _set_Number(System::DTSubStringType value);
    // static field const value: static public System.DTSubStringType End
    static constexpr const int End = 3;
    // Get static field: static public System.DTSubStringType End
    static System::DTSubStringType _get_End();
    // Set static field: static public System.DTSubStringType End
    static void _set_End(System::DTSubStringType value);
    // static field const value: static public System.DTSubStringType Other
    static constexpr const int Other = 4;
    // Get static field: static public System.DTSubStringType Other
    static System::DTSubStringType _get_Other();
    // Set static field: static public System.DTSubStringType Other
    static void _set_Other(System::DTSubStringType value);
    // Creating value type constructor for type: DTSubStringType
    DTSubStringType(int value_ = {}) : value{value_} {}
  }; // System.DTSubStringType
}
DEFINE_IL2CPP_ARG_TYPE(System::DTSubStringType, "System", "DTSubStringType");
#pragma pack(pop)
