// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:43 PM
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
  // Autogenerated type: JetBrains.Annotations.AspMvcPartialViewLocationFormatAttribute
  class AspMvcPartialViewLocationFormatAttribute : public System::Attribute {
    public:
    // private System.String <Format>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Format;
    // public System.Void .ctor(System.String format)
    // Offset: 0x19450F0
    static AspMvcPartialViewLocationFormatAttribute* New_ctor(::Il2CppString* format);
    // public System.String get_Format()
    // Offset: 0x1945124
    ::Il2CppString* get_Format();
    // private System.Void set_Format(System.String value)
    // Offset: 0x194512C
    void set_Format(::Il2CppString* value);
  }; // JetBrains.Annotations.AspMvcPartialViewLocationFormatAttribute
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcPartialViewLocationFormatAttribute*, "JetBrains.Annotations", "AspMvcPartialViewLocationFormatAttribute");
#pragma pack(pop)
