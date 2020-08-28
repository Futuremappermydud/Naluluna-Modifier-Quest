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
  // Autogenerated type: System.UriKind
  struct UriKind : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.UriKind RelativeOrAbsolute
    static constexpr const int RelativeOrAbsolute = 0;
    // Get static field: static public System.UriKind RelativeOrAbsolute
    static System::UriKind _get_RelativeOrAbsolute();
    // Set static field: static public System.UriKind RelativeOrAbsolute
    static void _set_RelativeOrAbsolute(System::UriKind value);
    // static field const value: static public System.UriKind Absolute
    static constexpr const int Absolute = 1;
    // Get static field: static public System.UriKind Absolute
    static System::UriKind _get_Absolute();
    // Set static field: static public System.UriKind Absolute
    static void _set_Absolute(System::UriKind value);
    // static field const value: static public System.UriKind Relative
    static constexpr const int Relative = 2;
    // Get static field: static public System.UriKind Relative
    static System::UriKind _get_Relative();
    // Set static field: static public System.UriKind Relative
    static void _set_Relative(System::UriKind value);
    // Creating value type constructor for type: UriKind
    UriKind(int value_ = {}) : value{value_} {}
  }; // System.UriKind
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::UriKind, "System", "UriKind");
#pragma pack(pop)
