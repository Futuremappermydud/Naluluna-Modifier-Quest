// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:40 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Autogenerated type: System.Runtime.CompilerServices.TypeDependencyAttribute
  class TypeDependencyAttribute : public System::Attribute {
    public:
    // private System.String typeName
    // Offset: 0x10
    ::Il2CppString* typeName;
    // public System.Void .ctor(System.String typeName)
    // Offset: 0x11503C4
    static TypeDependencyAttribute* New_ctor(::Il2CppString* typeName);
  }; // System.Runtime.CompilerServices.TypeDependencyAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::TypeDependencyAttribute*, "System.Runtime.CompilerServices", "TypeDependencyAttribute");
#pragma pack(pop)
