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
  // Autogenerated type: JetBrains.Annotations.AspMvcViewLocationFormatAttribute
  class AspMvcViewLocationFormatAttribute : public System::Attribute {
    public:
    // private System.String <Format>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Format;
    // public System.Void .ctor(System.String format)
    // Offset: 0x194515C
    static AspMvcViewLocationFormatAttribute* New_ctor(::Il2CppString* format);
    // public System.String get_Format()
    // Offset: 0x1945190
    ::Il2CppString* get_Format();
    // private System.Void set_Format(System.String value)
    // Offset: 0x1945198
    void set_Format(::Il2CppString* value);
  }; // JetBrains.Annotations.AspMvcViewLocationFormatAttribute
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcViewLocationFormatAttribute*, "JetBrains.Annotations", "AspMvcViewLocationFormatAttribute");
#pragma pack(pop)
