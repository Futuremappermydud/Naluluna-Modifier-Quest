// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.TypeInformation
  class TypeInformation : public ::Il2CppObject {
    public:
    // private System.String fullTypeName
    // Offset: 0x10
    ::Il2CppString* fullTypeName;
    // private System.String assemblyString
    // Offset: 0x18
    ::Il2CppString* assemblyString;
    // private System.Boolean hasTypeForwardedFrom
    // Offset: 0x20
    bool hasTypeForwardedFrom;
    // System.String get_FullTypeName()
    // Offset: 0xFF3650
    ::Il2CppString* get_FullTypeName();
    // System.String get_AssemblyString()
    // Offset: 0xFF3658
    ::Il2CppString* get_AssemblyString();
    // System.Boolean get_HasTypeForwardedFrom()
    // Offset: 0xFF3660
    bool get_HasTypeForwardedFrom();
    // System.Void .ctor(System.String fullTypeName, System.String assemblyString, System.Boolean hasTypeForwardedFrom)
    // Offset: 0xFF3668
    static TypeInformation* New_ctor(::Il2CppString* fullTypeName, ::Il2CppString* assemblyString, bool hasTypeForwardedFrom);
  }; // System.Runtime.Serialization.Formatters.Binary.TypeInformation
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::TypeInformation*, "System.Runtime.Serialization.Formatters.Binary", "TypeInformation");
#pragma pack(pop)
