// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:42 PM
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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.AssemblyCompanyAttribute
  class AssemblyCompanyAttribute : public System::Attribute {
    public:
    // private System.String m_company
    // Offset: 0x10
    ::Il2CppString* m_company;
    // public System.Void .ctor(System.String company)
    // Offset: 0x134CAB8
    static AssemblyCompanyAttribute* New_ctor(::Il2CppString* company);
  }; // System.Reflection.AssemblyCompanyAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyCompanyAttribute*, "System.Reflection", "AssemblyCompanyAttribute");
#pragma pack(pop)
