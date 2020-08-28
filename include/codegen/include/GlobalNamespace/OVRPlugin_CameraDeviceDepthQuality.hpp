// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/CameraDeviceDepthQuality
  struct OVRPlugin::CameraDeviceDepthQuality : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVRPlugin/CameraDeviceDepthQuality Low
    static constexpr const int Low = 0;
    // Get static field: static public OVRPlugin/CameraDeviceDepthQuality Low
    static GlobalNamespace::OVRPlugin::CameraDeviceDepthQuality _get_Low();
    // Set static field: static public OVRPlugin/CameraDeviceDepthQuality Low
    static void _set_Low(GlobalNamespace::OVRPlugin::CameraDeviceDepthQuality value);
    // static field const value: static public OVRPlugin/CameraDeviceDepthQuality Medium
    static constexpr const int Medium = 1;
    // Get static field: static public OVRPlugin/CameraDeviceDepthQuality Medium
    static GlobalNamespace::OVRPlugin::CameraDeviceDepthQuality _get_Medium();
    // Set static field: static public OVRPlugin/CameraDeviceDepthQuality Medium
    static void _set_Medium(GlobalNamespace::OVRPlugin::CameraDeviceDepthQuality value);
    // static field const value: static public OVRPlugin/CameraDeviceDepthQuality High
    static constexpr const int High = 2;
    // Get static field: static public OVRPlugin/CameraDeviceDepthQuality High
    static GlobalNamespace::OVRPlugin::CameraDeviceDepthQuality _get_High();
    // Set static field: static public OVRPlugin/CameraDeviceDepthQuality High
    static void _set_High(GlobalNamespace::OVRPlugin::CameraDeviceDepthQuality value);
    // Creating value type constructor for type: CameraDeviceDepthQuality
    CameraDeviceDepthQuality(int value_ = {}) : value{value_} {}
  }; // OVRPlugin/CameraDeviceDepthQuality
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::CameraDeviceDepthQuality, "", "OVRPlugin/CameraDeviceDepthQuality");
#pragma pack(pop)
