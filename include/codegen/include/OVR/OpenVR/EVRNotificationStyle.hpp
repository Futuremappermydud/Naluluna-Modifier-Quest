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
  // Autogenerated type: OVR.OpenVR.EVRNotificationStyle
  struct EVRNotificationStyle : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVR.OpenVR.EVRNotificationStyle None
    static constexpr const int None = 0;
    // Get static field: static public OVR.OpenVR.EVRNotificationStyle None
    static OVR::OpenVR::EVRNotificationStyle _get_None();
    // Set static field: static public OVR.OpenVR.EVRNotificationStyle None
    static void _set_None(OVR::OpenVR::EVRNotificationStyle value);
    // static field const value: static public OVR.OpenVR.EVRNotificationStyle Application
    static constexpr const int Application = 100;
    // Get static field: static public OVR.OpenVR.EVRNotificationStyle Application
    static OVR::OpenVR::EVRNotificationStyle _get_Application();
    // Set static field: static public OVR.OpenVR.EVRNotificationStyle Application
    static void _set_Application(OVR::OpenVR::EVRNotificationStyle value);
    // static field const value: static public OVR.OpenVR.EVRNotificationStyle Contact_Disabled
    static constexpr const int Contact_Disabled = 200;
    // Get static field: static public OVR.OpenVR.EVRNotificationStyle Contact_Disabled
    static OVR::OpenVR::EVRNotificationStyle _get_Contact_Disabled();
    // Set static field: static public OVR.OpenVR.EVRNotificationStyle Contact_Disabled
    static void _set_Contact_Disabled(OVR::OpenVR::EVRNotificationStyle value);
    // static field const value: static public OVR.OpenVR.EVRNotificationStyle Contact_Enabled
    static constexpr const int Contact_Enabled = 201;
    // Get static field: static public OVR.OpenVR.EVRNotificationStyle Contact_Enabled
    static OVR::OpenVR::EVRNotificationStyle _get_Contact_Enabled();
    // Set static field: static public OVR.OpenVR.EVRNotificationStyle Contact_Enabled
    static void _set_Contact_Enabled(OVR::OpenVR::EVRNotificationStyle value);
    // static field const value: static public OVR.OpenVR.EVRNotificationStyle Contact_Active
    static constexpr const int Contact_Active = 202;
    // Get static field: static public OVR.OpenVR.EVRNotificationStyle Contact_Active
    static OVR::OpenVR::EVRNotificationStyle _get_Contact_Active();
    // Set static field: static public OVR.OpenVR.EVRNotificationStyle Contact_Active
    static void _set_Contact_Active(OVR::OpenVR::EVRNotificationStyle value);
    // Creating value type constructor for type: EVRNotificationStyle
    EVRNotificationStyle(int value_ = {}) : value{value_} {}
  }; // OVR.OpenVR.EVRNotificationStyle
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRNotificationStyle, "OVR.OpenVR", "EVRNotificationStyle");
#pragma pack(pop)
