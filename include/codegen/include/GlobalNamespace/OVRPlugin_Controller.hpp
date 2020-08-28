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
  // Autogenerated type: OVRPlugin/Controller
  struct OVRPlugin::Controller : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVRPlugin/Controller None
    static constexpr const int None = 0;
    // Get static field: static public OVRPlugin/Controller None
    static GlobalNamespace::OVRPlugin::Controller _get_None();
    // Set static field: static public OVRPlugin/Controller None
    static void _set_None(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller LTouch
    static constexpr const int LTouch = 1;
    // Get static field: static public OVRPlugin/Controller LTouch
    static GlobalNamespace::OVRPlugin::Controller _get_LTouch();
    // Set static field: static public OVRPlugin/Controller LTouch
    static void _set_LTouch(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller RTouch
    static constexpr const int RTouch = 2;
    // Get static field: static public OVRPlugin/Controller RTouch
    static GlobalNamespace::OVRPlugin::Controller _get_RTouch();
    // Set static field: static public OVRPlugin/Controller RTouch
    static void _set_RTouch(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller Touch
    static constexpr const int Touch = 3;
    // Get static field: static public OVRPlugin/Controller Touch
    static GlobalNamespace::OVRPlugin::Controller _get_Touch();
    // Set static field: static public OVRPlugin/Controller Touch
    static void _set_Touch(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller Remote
    static constexpr const int Remote = 4;
    // Get static field: static public OVRPlugin/Controller Remote
    static GlobalNamespace::OVRPlugin::Controller _get_Remote();
    // Set static field: static public OVRPlugin/Controller Remote
    static void _set_Remote(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller Gamepad
    static constexpr const int Gamepad = 16;
    // Get static field: static public OVRPlugin/Controller Gamepad
    static GlobalNamespace::OVRPlugin::Controller _get_Gamepad();
    // Set static field: static public OVRPlugin/Controller Gamepad
    static void _set_Gamepad(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller LHand
    static constexpr const int LHand = 32;
    // Get static field: static public OVRPlugin/Controller LHand
    static GlobalNamespace::OVRPlugin::Controller _get_LHand();
    // Set static field: static public OVRPlugin/Controller LHand
    static void _set_LHand(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller RHand
    static constexpr const int RHand = 64;
    // Get static field: static public OVRPlugin/Controller RHand
    static GlobalNamespace::OVRPlugin::Controller _get_RHand();
    // Set static field: static public OVRPlugin/Controller RHand
    static void _set_RHand(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller Hands
    static constexpr const int Hands = 96;
    // Get static field: static public OVRPlugin/Controller Hands
    static GlobalNamespace::OVRPlugin::Controller _get_Hands();
    // Set static field: static public OVRPlugin/Controller Hands
    static void _set_Hands(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller Touchpad
    static constexpr const int Touchpad = 134217728;
    // Get static field: static public OVRPlugin/Controller Touchpad
    static GlobalNamespace::OVRPlugin::Controller _get_Touchpad();
    // Set static field: static public OVRPlugin/Controller Touchpad
    static void _set_Touchpad(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller LTrackedRemote
    static constexpr const int LTrackedRemote = 16777216;
    // Get static field: static public OVRPlugin/Controller LTrackedRemote
    static GlobalNamespace::OVRPlugin::Controller _get_LTrackedRemote();
    // Set static field: static public OVRPlugin/Controller LTrackedRemote
    static void _set_LTrackedRemote(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller RTrackedRemote
    static constexpr const int RTrackedRemote = 33554432;
    // Get static field: static public OVRPlugin/Controller RTrackedRemote
    static GlobalNamespace::OVRPlugin::Controller _get_RTrackedRemote();
    // Set static field: static public OVRPlugin/Controller RTrackedRemote
    static void _set_RTrackedRemote(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller Active
    static constexpr const int Active = -2147483648;
    // Get static field: static public OVRPlugin/Controller Active
    static GlobalNamespace::OVRPlugin::Controller _get_Active();
    // Set static field: static public OVRPlugin/Controller Active
    static void _set_Active(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller All
    static constexpr const int All = -1;
    // Get static field: static public OVRPlugin/Controller All
    static GlobalNamespace::OVRPlugin::Controller _get_All();
    // Set static field: static public OVRPlugin/Controller All
    static void _set_All(GlobalNamespace::OVRPlugin::Controller value);
    // Creating value type constructor for type: Controller
    Controller(int value_ = {}) : value{value_} {}
  }; // OVRPlugin/Controller
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Controller, "", "OVRPlugin/Controller");
#pragma pack(pop)
