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
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum
  struct ValueFixupEnum : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Empty
    static constexpr const int Empty = 0;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Empty
    static System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum _get_Empty();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Empty
    static void _set_Empty(System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Array
    static constexpr const int Array = 1;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Array
    static System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum _get_Array();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Array
    static void _set_Array(System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Header
    static constexpr const int Header = 2;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Header
    static System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum _get_Header();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Header
    static void _set_Header(System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Member
    static constexpr const int Member = 3;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Member
    static System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum _get_Member();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Member
    static void _set_Member(System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum value);
    // Creating value type constructor for type: ValueFixupEnum
    ValueFixupEnum(int value_ = {}) : value{value_} {}
  }; // System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum, "System.Runtime.Serialization.Formatters.Binary", "ValueFixupEnum");
#pragma pack(pop)
