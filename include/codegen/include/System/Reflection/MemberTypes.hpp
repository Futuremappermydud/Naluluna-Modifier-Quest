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
  // Autogenerated type: System.Reflection.MemberTypes
  struct MemberTypes : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Reflection.MemberTypes Constructor
    static constexpr const int Constructor = 1;
    // Get static field: static public System.Reflection.MemberTypes Constructor
    static System::Reflection::MemberTypes _get_Constructor();
    // Set static field: static public System.Reflection.MemberTypes Constructor
    static void _set_Constructor(System::Reflection::MemberTypes value);
    // static field const value: static public System.Reflection.MemberTypes Event
    static constexpr const int Event = 2;
    // Get static field: static public System.Reflection.MemberTypes Event
    static System::Reflection::MemberTypes _get_Event();
    // Set static field: static public System.Reflection.MemberTypes Event
    static void _set_Event(System::Reflection::MemberTypes value);
    // static field const value: static public System.Reflection.MemberTypes Field
    static constexpr const int Field = 4;
    // Get static field: static public System.Reflection.MemberTypes Field
    static System::Reflection::MemberTypes _get_Field();
    // Set static field: static public System.Reflection.MemberTypes Field
    static void _set_Field(System::Reflection::MemberTypes value);
    // static field const value: static public System.Reflection.MemberTypes Method
    static constexpr const int Method = 8;
    // Get static field: static public System.Reflection.MemberTypes Method
    static System::Reflection::MemberTypes _get_Method();
    // Set static field: static public System.Reflection.MemberTypes Method
    static void _set_Method(System::Reflection::MemberTypes value);
    // static field const value: static public System.Reflection.MemberTypes Property
    static constexpr const int Property = 16;
    // Get static field: static public System.Reflection.MemberTypes Property
    static System::Reflection::MemberTypes _get_Property();
    // Set static field: static public System.Reflection.MemberTypes Property
    static void _set_Property(System::Reflection::MemberTypes value);
    // static field const value: static public System.Reflection.MemberTypes TypeInfo
    static constexpr const int TypeInfo = 32;
    // Get static field: static public System.Reflection.MemberTypes TypeInfo
    static System::Reflection::MemberTypes _get_TypeInfo();
    // Set static field: static public System.Reflection.MemberTypes TypeInfo
    static void _set_TypeInfo(System::Reflection::MemberTypes value);
    // static field const value: static public System.Reflection.MemberTypes Custom
    static constexpr const int Custom = 64;
    // Get static field: static public System.Reflection.MemberTypes Custom
    static System::Reflection::MemberTypes _get_Custom();
    // Set static field: static public System.Reflection.MemberTypes Custom
    static void _set_Custom(System::Reflection::MemberTypes value);
    // static field const value: static public System.Reflection.MemberTypes NestedType
    static constexpr const int NestedType = 128;
    // Get static field: static public System.Reflection.MemberTypes NestedType
    static System::Reflection::MemberTypes _get_NestedType();
    // Set static field: static public System.Reflection.MemberTypes NestedType
    static void _set_NestedType(System::Reflection::MemberTypes value);
    // static field const value: static public System.Reflection.MemberTypes All
    static constexpr const int All = 191;
    // Get static field: static public System.Reflection.MemberTypes All
    static System::Reflection::MemberTypes _get_All();
    // Set static field: static public System.Reflection.MemberTypes All
    static void _set_All(System::Reflection::MemberTypes value);
    // Creating value type constructor for type: MemberTypes
    MemberTypes(int value_ = {}) : value{value_} {}
  }; // System.Reflection.MemberTypes
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MemberTypes, "System.Reflection", "MemberTypes");
#pragma pack(pop)
