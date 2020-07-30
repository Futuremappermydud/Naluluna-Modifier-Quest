// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:41 PM
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
  // Autogenerated type: JetBrains.Annotations.HtmlAttributeValueAttribute
  class HtmlAttributeValueAttribute : public System::Attribute {
    public:
    // private System.String <Name>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Name;
    // public System.Void .ctor(System.String name)
    // Offset: 0x19453A8
    static HtmlAttributeValueAttribute* New_ctor(::Il2CppString* name);
    // public System.String get_Name()
    // Offset: 0x19453DC
    ::Il2CppString* get_Name();
    // private System.Void set_Name(System.String value)
    // Offset: 0x19453E4
    void set_Name(::Il2CppString* value);
  }; // JetBrains.Annotations.HtmlAttributeValueAttribute
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::HtmlAttributeValueAttribute*, "JetBrains.Annotations", "HtmlAttributeValueAttribute");
#pragma pack(pop)
