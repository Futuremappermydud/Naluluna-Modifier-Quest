// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:24 PM
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
// Type namespace: System
namespace System {
  // Autogenerated type: System.MonoTODOAttribute
  class MonoTODOAttribute : public System::Attribute {
    public:
    // private System.String comment
    // Offset: 0x10
    ::Il2CppString* comment;
    // public System.Void .ctor(System.String comment)
    // Offset: 0x1003070
    static MonoTODOAttribute* New_ctor(::Il2CppString* comment);
    // public System.Void .ctor()
    // Offset: 0x1003068
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static MonoTODOAttribute* New_ctor();
  }; // System.MonoTODOAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::MonoTODOAttribute*, "System", "MonoTODOAttribute");
#pragma pack(pop)
