// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:58 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/TrackingOrigin
  struct OVRPlugin::TrackingOrigin : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVRPlugin/TrackingOrigin EyeLevel
    static constexpr const int EyeLevel = 0;
    // Get static field: static public OVRPlugin/TrackingOrigin EyeLevel
    static GlobalNamespace::OVRPlugin::TrackingOrigin _get_EyeLevel();
    // Set static field: static public OVRPlugin/TrackingOrigin EyeLevel
    static void _set_EyeLevel(GlobalNamespace::OVRPlugin::TrackingOrigin value);
    // static field const value: static public OVRPlugin/TrackingOrigin FloorLevel
    static constexpr const int FloorLevel = 1;
    // Get static field: static public OVRPlugin/TrackingOrigin FloorLevel
    static GlobalNamespace::OVRPlugin::TrackingOrigin _get_FloorLevel();
    // Set static field: static public OVRPlugin/TrackingOrigin FloorLevel
    static void _set_FloorLevel(GlobalNamespace::OVRPlugin::TrackingOrigin value);
    // static field const value: static public OVRPlugin/TrackingOrigin Stage
    static constexpr const int Stage = 2;
    // Get static field: static public OVRPlugin/TrackingOrigin Stage
    static GlobalNamespace::OVRPlugin::TrackingOrigin _get_Stage();
    // Set static field: static public OVRPlugin/TrackingOrigin Stage
    static void _set_Stage(GlobalNamespace::OVRPlugin::TrackingOrigin value);
    // static field const value: static public OVRPlugin/TrackingOrigin Count
    static constexpr const int Count = 3;
    // Get static field: static public OVRPlugin/TrackingOrigin Count
    static GlobalNamespace::OVRPlugin::TrackingOrigin _get_Count();
    // Set static field: static public OVRPlugin/TrackingOrigin Count
    static void _set_Count(GlobalNamespace::OVRPlugin::TrackingOrigin value);
    // Creating value type constructor for type: TrackingOrigin
    TrackingOrigin(int value_ = {}) : value{value_} {}
  }; // OVRPlugin/TrackingOrigin
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::TrackingOrigin, "", "OVRPlugin/TrackingOrigin");
#pragma pack(pop)
