// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:13 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Autogenerated type: System.ComponentModel.TypeConverter
  class TypeConverter : public ::Il2CppObject {
    public:
    // Nested type: System::ComponentModel::TypeConverter::StandardValuesCollection
    class StandardValuesCollection;
    // static field const value: static private System.String s_UseCompatibleTypeConverterBehavior
    static constexpr const char* s_UseCompatibleTypeConverterBehavior = "UseCompatibleTypeConverterBehavior";
    // Get static field: static private System.String s_UseCompatibleTypeConverterBehavior
    static ::Il2CppString* _get_s_UseCompatibleTypeConverterBehavior();
    // Set static field: static private System.String s_UseCompatibleTypeConverterBehavior
    static void _set_s_UseCompatibleTypeConverterBehavior(::Il2CppString* value);
    // Get static field: static private System.Boolean useCompatibleTypeConversion
    static bool _get_useCompatibleTypeConversion();
    // Set static field: static private System.Boolean useCompatibleTypeConversion
    static void _set_useCompatibleTypeConversion(bool value);
    // public System.Void .ctor()
    // Offset: 0xF44D9C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TypeConverter* New_ctor();
  }; // System.ComponentModel.TypeConverter
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::TypeConverter*, "System.ComponentModel", "TypeConverter");
#pragma pack(pop)
