// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:59 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/OVRP_0_1_0
  class OVRPlugin::OVRP_0_1_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Sizei ovrp_GetEyeTextureSize(OVRPlugin/Eye eyeId)
    // Offset: 0xF2C41C
    static GlobalNamespace::OVRPlugin::Sizei ovrp_GetEyeTextureSize(GlobalNamespace::OVRPlugin::Eye eyeId);
    // static private System.Void .cctor()
    // Offset: 0xF2C49C
    static void _cctor();
  }; // OVRPlugin/OVRP_0_1_0
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_0_1_0*, "", "OVRPlugin/OVRP_0_1_0");
#pragma pack(pop)
