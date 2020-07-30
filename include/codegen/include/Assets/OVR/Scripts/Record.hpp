// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:06 PM
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
// Type namespace: Assets.OVR.Scripts
namespace Assets::OVR::Scripts {
  // Autogenerated type: Assets.OVR.Scripts.Record
  class Record : public ::Il2CppObject {
    public:
    // public System.String category
    // Offset: 0x10
    ::Il2CppString* category;
    // public System.String message
    // Offset: 0x18
    ::Il2CppString* message;
    // public System.Void .ctor(System.String cat, System.String msg)
    // Offset: 0xEAB87C
    static Record* New_ctor(::Il2CppString* cat, ::Il2CppString* msg);
  }; // Assets.OVR.Scripts.Record
}
DEFINE_IL2CPP_ARG_TYPE(Assets::OVR::Scripts::Record*, "Assets.OVR.Scripts", "Record");
#pragma pack(pop)
