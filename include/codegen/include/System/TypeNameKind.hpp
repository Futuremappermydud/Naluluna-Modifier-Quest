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
  // Autogenerated type: System.TypeNameKind
  struct TypeNameKind : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.TypeNameKind Name
    static constexpr const int Name = 0;
    // Get static field: static public System.TypeNameKind Name
    static System::TypeNameKind _get_Name();
    // Set static field: static public System.TypeNameKind Name
    static void _set_Name(System::TypeNameKind value);
    // static field const value: static public System.TypeNameKind ToString
    static constexpr const int ToString = 1;
    // Get static field: static public System.TypeNameKind ToString
    static System::TypeNameKind _get_ToString();
    // Set static field: static public System.TypeNameKind ToString
    static void _set_ToString(System::TypeNameKind value);
    // static field const value: static public System.TypeNameKind SerializationName
    static constexpr const int SerializationName = 2;
    // Get static field: static public System.TypeNameKind SerializationName
    static System::TypeNameKind _get_SerializationName();
    // Set static field: static public System.TypeNameKind SerializationName
    static void _set_SerializationName(System::TypeNameKind value);
    // static field const value: static public System.TypeNameKind FullName
    static constexpr const int FullName = 3;
    // Get static field: static public System.TypeNameKind FullName
    static System::TypeNameKind _get_FullName();
    // Set static field: static public System.TypeNameKind FullName
    static void _set_FullName(System::TypeNameKind value);
    // Creating value type constructor for type: TypeNameKind
    TypeNameKind(int value_ = {}) : value{value_} {}
  }; // System.TypeNameKind
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::TypeNameKind, "System", "TypeNameKind");
#pragma pack(pop)
