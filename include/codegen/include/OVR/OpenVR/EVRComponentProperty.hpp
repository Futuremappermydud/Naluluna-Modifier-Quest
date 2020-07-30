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
  // Autogenerated type: OVR.OpenVR.EVRComponentProperty
  struct EVRComponentProperty : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVR.OpenVR.EVRComponentProperty IsStatic
    static constexpr const int IsStatic = 1;
    // Get static field: static public OVR.OpenVR.EVRComponentProperty IsStatic
    static OVR::OpenVR::EVRComponentProperty _get_IsStatic();
    // Set static field: static public OVR.OpenVR.EVRComponentProperty IsStatic
    static void _set_IsStatic(OVR::OpenVR::EVRComponentProperty value);
    // static field const value: static public OVR.OpenVR.EVRComponentProperty IsVisible
    static constexpr const int IsVisible = 2;
    // Get static field: static public OVR.OpenVR.EVRComponentProperty IsVisible
    static OVR::OpenVR::EVRComponentProperty _get_IsVisible();
    // Set static field: static public OVR.OpenVR.EVRComponentProperty IsVisible
    static void _set_IsVisible(OVR::OpenVR::EVRComponentProperty value);
    // static field const value: static public OVR.OpenVR.EVRComponentProperty IsTouched
    static constexpr const int IsTouched = 4;
    // Get static field: static public OVR.OpenVR.EVRComponentProperty IsTouched
    static OVR::OpenVR::EVRComponentProperty _get_IsTouched();
    // Set static field: static public OVR.OpenVR.EVRComponentProperty IsTouched
    static void _set_IsTouched(OVR::OpenVR::EVRComponentProperty value);
    // static field const value: static public OVR.OpenVR.EVRComponentProperty IsPressed
    static constexpr const int IsPressed = 8;
    // Get static field: static public OVR.OpenVR.EVRComponentProperty IsPressed
    static OVR::OpenVR::EVRComponentProperty _get_IsPressed();
    // Set static field: static public OVR.OpenVR.EVRComponentProperty IsPressed
    static void _set_IsPressed(OVR::OpenVR::EVRComponentProperty value);
    // static field const value: static public OVR.OpenVR.EVRComponentProperty IsScrolled
    static constexpr const int IsScrolled = 16;
    // Get static field: static public OVR.OpenVR.EVRComponentProperty IsScrolled
    static OVR::OpenVR::EVRComponentProperty _get_IsScrolled();
    // Set static field: static public OVR.OpenVR.EVRComponentProperty IsScrolled
    static void _set_IsScrolled(OVR::OpenVR::EVRComponentProperty value);
    // Creating value type constructor for type: EVRComponentProperty
    EVRComponentProperty(int value_ = {}) : value{value_} {}
  }; // OVR.OpenVR.EVRComponentProperty
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRComponentProperty, "OVR.OpenVR", "EVRComponentProperty");
#pragma pack(pop)
