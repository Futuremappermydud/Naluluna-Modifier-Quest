// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:48 PM
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
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE
  struct InternalArrayTypeE : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Empty
    static constexpr const int Empty = 0;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Empty
    static System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE _get_Empty();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Empty
    static void _set_Empty(System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Single
    static constexpr const int Single = 1;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Single
    static System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE _get_Single();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Single
    static void _set_Single(System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Jagged
    static constexpr const int Jagged = 2;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Jagged
    static System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE _get_Jagged();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Jagged
    static void _set_Jagged(System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Rectangular
    static constexpr const int Rectangular = 3;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Rectangular
    static System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE _get_Rectangular();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Rectangular
    static void _set_Rectangular(System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Base64
    static constexpr const int Base64 = 4;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Base64
    static System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE _get_Base64();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Base64
    static void _set_Base64(System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE value);
    // Creating value type constructor for type: InternalArrayTypeE
    InternalArrayTypeE(int value_ = {}) : value{value_} {}
  }; // System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE, "System.Runtime.Serialization.Formatters.Binary", "InternalArrayTypeE");
#pragma pack(pop)
