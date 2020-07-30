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
  // Autogenerated type: OVRPlugin/OVRP_1_21_0
  class OVRPlugin::OVRP_1_21_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Result ovrp_GetTiledMultiResSupported(OVRPlugin/Bool foveationSupported)
    // Offset: 0xF2FB98
    static GlobalNamespace::OVRPlugin::Result ovrp_GetTiledMultiResSupported(GlobalNamespace::OVRPlugin::Bool& foveationSupported);
    // static public OVRPlugin/Result ovrp_GetTiledMultiResLevel(OVRPlugin/FixedFoveatedRenderingLevel level)
    // Offset: 0xF2FC18
    static GlobalNamespace::OVRPlugin::Result ovrp_GetTiledMultiResLevel(GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel& level);
    // static public OVRPlugin/Result ovrp_SetTiledMultiResLevel(OVRPlugin/FixedFoveatedRenderingLevel level)
    // Offset: 0xF2FC98
    static GlobalNamespace::OVRPlugin::Result ovrp_SetTiledMultiResLevel(GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel level);
    // static public OVRPlugin/Result ovrp_GetGPUUtilSupported(OVRPlugin/Bool gpuUtilSupported)
    // Offset: 0xF2FD18
    static GlobalNamespace::OVRPlugin::Result ovrp_GetGPUUtilSupported(GlobalNamespace::OVRPlugin::Bool& gpuUtilSupported);
    // static public OVRPlugin/Result ovrp_GetGPUUtilLevel(System.Single gpuUtil)
    // Offset: 0xF2FD98
    static GlobalNamespace::OVRPlugin::Result ovrp_GetGPUUtilLevel(float& gpuUtil);
    // static public OVRPlugin/Result ovrp_GetSystemDisplayFrequency2(System.Single systemDisplayFrequency)
    // Offset: 0xF2FE18
    static GlobalNamespace::OVRPlugin::Result ovrp_GetSystemDisplayFrequency2(float& systemDisplayFrequency);
    // static public OVRPlugin/Result ovrp_GetSystemDisplayAvailableFrequencies(System.IntPtr systemDisplayAvailableFrequencies, System.Int32 numFrequencies)
    // Offset: 0xF2FE98
    static GlobalNamespace::OVRPlugin::Result ovrp_GetSystemDisplayAvailableFrequencies(System::IntPtr systemDisplayAvailableFrequencies, int& numFrequencies);
    // static public OVRPlugin/Result ovrp_SetSystemDisplayFrequency(System.Single requestedFrequency)
    // Offset: 0xF2FF28
    static GlobalNamespace::OVRPlugin::Result ovrp_SetSystemDisplayFrequency(float requestedFrequency);
    // static public OVRPlugin/Result ovrp_GetAppAsymmetricFov(OVRPlugin/Bool useAsymmetricFov)
    // Offset: 0xF2FFB0
    static GlobalNamespace::OVRPlugin::Result ovrp_GetAppAsymmetricFov(GlobalNamespace::OVRPlugin::Bool& useAsymmetricFov);
    // static private System.Void .cctor()
    // Offset: 0xF30030
    static void _cctor();
  }; // OVRPlugin/OVRP_1_21_0
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_21_0*, "", "OVRPlugin/OVRP_1_21_0");
#pragma pack(pop)
