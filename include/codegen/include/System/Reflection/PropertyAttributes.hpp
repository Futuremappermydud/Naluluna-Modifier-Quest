// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:43 PM
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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.PropertyAttributes
  struct PropertyAttributes : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Reflection.PropertyAttributes None
    static constexpr const int None = 0;
    // Get static field: static public System.Reflection.PropertyAttributes None
    static System::Reflection::PropertyAttributes _get_None();
    // Set static field: static public System.Reflection.PropertyAttributes None
    static void _set_None(System::Reflection::PropertyAttributes value);
    // static field const value: static public System.Reflection.PropertyAttributes SpecialName
    static constexpr const int SpecialName = 512;
    // Get static field: static public System.Reflection.PropertyAttributes SpecialName
    static System::Reflection::PropertyAttributes _get_SpecialName();
    // Set static field: static public System.Reflection.PropertyAttributes SpecialName
    static void _set_SpecialName(System::Reflection::PropertyAttributes value);
    // static field const value: static public System.Reflection.PropertyAttributes ReservedMask
    static constexpr const int ReservedMask = 62464;
    // Get static field: static public System.Reflection.PropertyAttributes ReservedMask
    static System::Reflection::PropertyAttributes _get_ReservedMask();
    // Set static field: static public System.Reflection.PropertyAttributes ReservedMask
    static void _set_ReservedMask(System::Reflection::PropertyAttributes value);
    // static field const value: static public System.Reflection.PropertyAttributes RTSpecialName
    static constexpr const int RTSpecialName = 1024;
    // Get static field: static public System.Reflection.PropertyAttributes RTSpecialName
    static System::Reflection::PropertyAttributes _get_RTSpecialName();
    // Set static field: static public System.Reflection.PropertyAttributes RTSpecialName
    static void _set_RTSpecialName(System::Reflection::PropertyAttributes value);
    // static field const value: static public System.Reflection.PropertyAttributes HasDefault
    static constexpr const int HasDefault = 4096;
    // Get static field: static public System.Reflection.PropertyAttributes HasDefault
    static System::Reflection::PropertyAttributes _get_HasDefault();
    // Set static field: static public System.Reflection.PropertyAttributes HasDefault
    static void _set_HasDefault(System::Reflection::PropertyAttributes value);
    // static field const value: static public System.Reflection.PropertyAttributes Reserved2
    static constexpr const int Reserved2 = 8192;
    // Get static field: static public System.Reflection.PropertyAttributes Reserved2
    static System::Reflection::PropertyAttributes _get_Reserved2();
    // Set static field: static public System.Reflection.PropertyAttributes Reserved2
    static void _set_Reserved2(System::Reflection::PropertyAttributes value);
    // static field const value: static public System.Reflection.PropertyAttributes Reserved3
    static constexpr const int Reserved3 = 16384;
    // Get static field: static public System.Reflection.PropertyAttributes Reserved3
    static System::Reflection::PropertyAttributes _get_Reserved3();
    // Set static field: static public System.Reflection.PropertyAttributes Reserved3
    static void _set_Reserved3(System::Reflection::PropertyAttributes value);
    // static field const value: static public System.Reflection.PropertyAttributes Reserved4
    static constexpr const int Reserved4 = 32768;
    // Get static field: static public System.Reflection.PropertyAttributes Reserved4
    static System::Reflection::PropertyAttributes _get_Reserved4();
    // Set static field: static public System.Reflection.PropertyAttributes Reserved4
    static void _set_Reserved4(System::Reflection::PropertyAttributes value);
    // Creating value type constructor for type: PropertyAttributes
    PropertyAttributes(int value_ = {}) : value{value_} {}
  }; // System.Reflection.PropertyAttributes
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::PropertyAttributes, "System.Reflection", "PropertyAttributes");
#pragma pack(pop)
