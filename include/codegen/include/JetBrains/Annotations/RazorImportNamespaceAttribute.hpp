// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:44 PM
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
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Autogenerated type: JetBrains.Annotations.RazorImportNamespaceAttribute
  class RazorImportNamespaceAttribute : public System::Attribute {
    public:
    // private System.String <Name>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Name;
    // public System.Void .ctor(System.String name)
    // Offset: 0x1945794
    static RazorImportNamespaceAttribute* New_ctor(::Il2CppString* name);
    // public System.String get_Name()
    // Offset: 0x19457C8
    ::Il2CppString* get_Name();
    // private System.Void set_Name(System.String value)
    // Offset: 0x19457D0
    void set_Name(::Il2CppString* value);
  }; // JetBrains.Annotations.RazorImportNamespaceAttribute
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::RazorImportNamespaceAttribute*, "JetBrains.Annotations", "RazorImportNamespaceAttribute");
#pragma pack(pop)
