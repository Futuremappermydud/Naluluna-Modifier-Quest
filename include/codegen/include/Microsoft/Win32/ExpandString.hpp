// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:38 PM
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
// Completed forward declares
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Autogenerated type: Microsoft.Win32.ExpandString
  class ExpandString : public ::Il2CppObject {
    public:
    // private System.String value
    // Offset: 0x10
    ::Il2CppString* value;
    // public System.Void .ctor(System.String s)
    // Offset: 0x1091A6C
    static ExpandString* New_ctor(::Il2CppString* s);
    // public System.String Expand()
    // Offset: 0x1091AA8
    ::Il2CppString* Expand();
    // public override System.String ToString()
    // Offset: 0x1091AA0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Microsoft.Win32.ExpandString
}
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::ExpandString*, "Microsoft.Win32", "ExpandString");
#pragma pack(pop)
