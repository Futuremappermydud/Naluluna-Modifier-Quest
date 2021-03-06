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
// Type namespace: System.Resources
namespace System::Resources {
  // Autogenerated type: System.Resources.SatelliteContractVersionAttribute
  class SatelliteContractVersionAttribute : public System::Attribute {
    public:
    // private System.String _version
    // Offset: 0x10
    ::Il2CppString* version;
    // public System.Void .ctor(System.String version)
    // Offset: 0x114E23C
    static SatelliteContractVersionAttribute* New_ctor(::Il2CppString* version);
    // public System.String get_Version()
    // Offset: 0x114E2E0
    ::Il2CppString* get_Version();
  }; // System.Resources.SatelliteContractVersionAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Resources::SatelliteContractVersionAttribute*, "System.Resources", "SatelliteContractVersionAttribute");
#pragma pack(pop)
