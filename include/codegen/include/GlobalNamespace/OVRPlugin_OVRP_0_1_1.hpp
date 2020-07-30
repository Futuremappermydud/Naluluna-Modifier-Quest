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
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/OVRP_0_1_1
  class OVRPlugin::OVRP_0_1_1 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Bool ovrp_SetOverlayQuad2(OVRPlugin/Bool onTop, OVRPlugin/Bool headLocked, System.IntPtr texture, System.IntPtr device, OVRPlugin/Posef pose, OVRPlugin/Vector3f scale)
    // Offset: 0xF2C518
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetOverlayQuad2(GlobalNamespace::OVRPlugin::Bool onTop, GlobalNamespace::OVRPlugin::Bool headLocked, System::IntPtr texture, System::IntPtr device, GlobalNamespace::OVRPlugin::Posef pose, GlobalNamespace::OVRPlugin::Vector3f scale);
    // static private System.Void .cctor()
    // Offset: 0xF2C600
    static void _cctor();
  }; // OVRPlugin/OVRP_0_1_1
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_0_1_1*, "", "OVRPlugin/OVRP_0_1_1");
#pragma pack(pop)
