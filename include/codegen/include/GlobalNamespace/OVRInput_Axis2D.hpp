// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:48 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRInput/Axis2D
  struct OVRInput::Axis2D : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVRInput/Axis2D None
    static constexpr const int None = 0;
    // Get static field: static public OVRInput/Axis2D None
    static GlobalNamespace::OVRInput::Axis2D _get_None();
    // Set static field: static public OVRInput/Axis2D None
    static void _set_None(GlobalNamespace::OVRInput::Axis2D value);
    // static field const value: static public OVRInput/Axis2D PrimaryThumbstick
    static constexpr const int PrimaryThumbstick = 1;
    // Get static field: static public OVRInput/Axis2D PrimaryThumbstick
    static GlobalNamespace::OVRInput::Axis2D _get_PrimaryThumbstick();
    // Set static field: static public OVRInput/Axis2D PrimaryThumbstick
    static void _set_PrimaryThumbstick(GlobalNamespace::OVRInput::Axis2D value);
    // static field const value: static public OVRInput/Axis2D PrimaryTouchpad
    static constexpr const int PrimaryTouchpad = 4;
    // Get static field: static public OVRInput/Axis2D PrimaryTouchpad
    static GlobalNamespace::OVRInput::Axis2D _get_PrimaryTouchpad();
    // Set static field: static public OVRInput/Axis2D PrimaryTouchpad
    static void _set_PrimaryTouchpad(GlobalNamespace::OVRInput::Axis2D value);
    // static field const value: static public OVRInput/Axis2D SecondaryThumbstick
    static constexpr const int SecondaryThumbstick = 2;
    // Get static field: static public OVRInput/Axis2D SecondaryThumbstick
    static GlobalNamespace::OVRInput::Axis2D _get_SecondaryThumbstick();
    // Set static field: static public OVRInput/Axis2D SecondaryThumbstick
    static void _set_SecondaryThumbstick(GlobalNamespace::OVRInput::Axis2D value);
    // static field const value: static public OVRInput/Axis2D SecondaryTouchpad
    static constexpr const int SecondaryTouchpad = 8;
    // Get static field: static public OVRInput/Axis2D SecondaryTouchpad
    static GlobalNamespace::OVRInput::Axis2D _get_SecondaryTouchpad();
    // Set static field: static public OVRInput/Axis2D SecondaryTouchpad
    static void _set_SecondaryTouchpad(GlobalNamespace::OVRInput::Axis2D value);
    // static field const value: static public OVRInput/Axis2D Any
    static constexpr const int Any = -1;
    // Get static field: static public OVRInput/Axis2D Any
    static GlobalNamespace::OVRInput::Axis2D _get_Any();
    // Set static field: static public OVRInput/Axis2D Any
    static void _set_Any(GlobalNamespace::OVRInput::Axis2D value);
    // Creating value type constructor for type: Axis2D
    Axis2D(int value_ = {}) : value{value_} {}
  }; // OVRInput/Axis2D
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::Axis2D, "", "OVRInput/Axis2D");
#pragma pack(pop)
