// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:04 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVR.OpenVR.ETrackingUniverseOrigin TrackingUniverseSeated
    static constexpr const int TrackingUniverseSeated = 0;
    // Get static field: static public OVR.OpenVR.ETrackingUniverseOrigin TrackingUniverseSeated
    static OVR::OpenVR::ETrackingUniverseOrigin _get_TrackingUniverseSeated();
    // Set static field: static public OVR.OpenVR.ETrackingUniverseOrigin TrackingUniverseSeated
    static void _set_TrackingUniverseSeated(OVR::OpenVR::ETrackingUniverseOrigin value);
    // static field const value: static public OVR.OpenVR.ETrackingUniverseOrigin TrackingUniverseStanding
    static constexpr const int TrackingUniverseStanding = 1;
    // Get static field: static public OVR.OpenVR.ETrackingUniverseOrigin TrackingUniverseStanding
    static OVR::OpenVR::ETrackingUniverseOrigin _get_TrackingUniverseStanding();
    // Set static field: static public OVR.OpenVR.ETrackingUniverseOrigin TrackingUniverseStanding
    static void _set_TrackingUniverseStanding(OVR::OpenVR::ETrackingUniverseOrigin value);
    // static field const value: static public OVR.OpenVR.ETrackingUniverseOrigin TrackingUniverseRawAndUncalibrated
    static constexpr const int TrackingUniverseRawAndUncalibrated = 2;
    // Get static field: static public OVR.OpenVR.ETrackingUniverseOrigin TrackingUniverseRawAndUncalibrated
    static OVR::OpenVR::ETrackingUniverseOrigin _get_TrackingUniverseRawAndUncalibrated();
    // Set static field: static public OVR.OpenVR.ETrackingUniverseOrigin TrackingUniverseRawAndUncalibrated
    static void _set_TrackingUniverseRawAndUncalibrated(OVR::OpenVR::ETrackingUniverseOrigin value);
    // Creating value type constructor for type: ETrackingUniverseOrigin
    ETrackingUniverseOrigin(int value_ = {}) : value{value_} {}
  }; // OVR.OpenVR.ETrackingUniverseOrigin
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::ETrackingUniverseOrigin, "OVR.OpenVR", "ETrackingUniverseOrigin");
#pragma pack(pop)
