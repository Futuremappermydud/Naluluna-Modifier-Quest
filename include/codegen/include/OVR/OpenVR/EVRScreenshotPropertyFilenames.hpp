// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:05 PM
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
  // Autogenerated type: OVR.OpenVR.EVRScreenshotPropertyFilenames
  struct EVRScreenshotPropertyFilenames : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVR.OpenVR.EVRScreenshotPropertyFilenames Preview
    static constexpr const int Preview = 0;
    // Get static field: static public OVR.OpenVR.EVRScreenshotPropertyFilenames Preview
    static OVR::OpenVR::EVRScreenshotPropertyFilenames _get_Preview();
    // Set static field: static public OVR.OpenVR.EVRScreenshotPropertyFilenames Preview
    static void _set_Preview(OVR::OpenVR::EVRScreenshotPropertyFilenames value);
    // static field const value: static public OVR.OpenVR.EVRScreenshotPropertyFilenames VR
    static constexpr const int VR = 1;
    // Get static field: static public OVR.OpenVR.EVRScreenshotPropertyFilenames VR
    static OVR::OpenVR::EVRScreenshotPropertyFilenames _get_VR();
    // Set static field: static public OVR.OpenVR.EVRScreenshotPropertyFilenames VR
    static void _set_VR(OVR::OpenVR::EVRScreenshotPropertyFilenames value);
    // Creating value type constructor for type: EVRScreenshotPropertyFilenames
    EVRScreenshotPropertyFilenames(int value_ = {}) : value{value_} {}
  }; // OVR.OpenVR.EVRScreenshotPropertyFilenames
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRScreenshotPropertyFilenames, "OVR.OpenVR", "EVRScreenshotPropertyFilenames");
#pragma pack(pop)
