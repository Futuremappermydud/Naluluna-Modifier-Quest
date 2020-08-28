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
  // Autogenerated type: OVRPlugin/CameraDevice
  struct OVRPlugin::CameraDevice : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVRPlugin/CameraDevice None
    static constexpr const int None = 0;
    // Get static field: static public OVRPlugin/CameraDevice None
    static GlobalNamespace::OVRPlugin::CameraDevice _get_None();
    // Set static field: static public OVRPlugin/CameraDevice None
    static void _set_None(GlobalNamespace::OVRPlugin::CameraDevice value);
    // static field const value: static public OVRPlugin/CameraDevice WebCamera0
    static constexpr const int WebCamera0 = 100;
    // Get static field: static public OVRPlugin/CameraDevice WebCamera0
    static GlobalNamespace::OVRPlugin::CameraDevice _get_WebCamera0();
    // Set static field: static public OVRPlugin/CameraDevice WebCamera0
    static void _set_WebCamera0(GlobalNamespace::OVRPlugin::CameraDevice value);
    // static field const value: static public OVRPlugin/CameraDevice WebCamera1
    static constexpr const int WebCamera1 = 101;
    // Get static field: static public OVRPlugin/CameraDevice WebCamera1
    static GlobalNamespace::OVRPlugin::CameraDevice _get_WebCamera1();
    // Set static field: static public OVRPlugin/CameraDevice WebCamera1
    static void _set_WebCamera1(GlobalNamespace::OVRPlugin::CameraDevice value);
    // static field const value: static public OVRPlugin/CameraDevice ZEDCamera
    static constexpr const int ZEDCamera = 300;
    // Get static field: static public OVRPlugin/CameraDevice ZEDCamera
    static GlobalNamespace::OVRPlugin::CameraDevice _get_ZEDCamera();
    // Set static field: static public OVRPlugin/CameraDevice ZEDCamera
    static void _set_ZEDCamera(GlobalNamespace::OVRPlugin::CameraDevice value);
    // Creating value type constructor for type: CameraDevice
    CameraDevice(int value_ = {}) : value{value_} {}
  }; // OVRPlugin/CameraDevice
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::CameraDevice, "", "OVRPlugin/CameraDevice");
#pragma pack(pop)
