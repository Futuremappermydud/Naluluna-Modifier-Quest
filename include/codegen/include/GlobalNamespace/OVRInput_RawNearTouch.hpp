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
  // Autogenerated type: OVRInput/RawNearTouch
  struct OVRInput::RawNearTouch : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVRInput/RawNearTouch None
    static constexpr const int None = 0;
    // Get static field: static public OVRInput/RawNearTouch None
    static GlobalNamespace::OVRInput::RawNearTouch _get_None();
    // Set static field: static public OVRInput/RawNearTouch None
    static void _set_None(GlobalNamespace::OVRInput::RawNearTouch value);
    // static field const value: static public OVRInput/RawNearTouch LIndexTrigger
    static constexpr const int LIndexTrigger = 1;
    // Get static field: static public OVRInput/RawNearTouch LIndexTrigger
    static GlobalNamespace::OVRInput::RawNearTouch _get_LIndexTrigger();
    // Set static field: static public OVRInput/RawNearTouch LIndexTrigger
    static void _set_LIndexTrigger(GlobalNamespace::OVRInput::RawNearTouch value);
    // static field const value: static public OVRInput/RawNearTouch LThumbButtons
    static constexpr const int LThumbButtons = 2;
    // Get static field: static public OVRInput/RawNearTouch LThumbButtons
    static GlobalNamespace::OVRInput::RawNearTouch _get_LThumbButtons();
    // Set static field: static public OVRInput/RawNearTouch LThumbButtons
    static void _set_LThumbButtons(GlobalNamespace::OVRInput::RawNearTouch value);
    // static field const value: static public OVRInput/RawNearTouch RIndexTrigger
    static constexpr const int RIndexTrigger = 4;
    // Get static field: static public OVRInput/RawNearTouch RIndexTrigger
    static GlobalNamespace::OVRInput::RawNearTouch _get_RIndexTrigger();
    // Set static field: static public OVRInput/RawNearTouch RIndexTrigger
    static void _set_RIndexTrigger(GlobalNamespace::OVRInput::RawNearTouch value);
    // static field const value: static public OVRInput/RawNearTouch RThumbButtons
    static constexpr const int RThumbButtons = 8;
    // Get static field: static public OVRInput/RawNearTouch RThumbButtons
    static GlobalNamespace::OVRInput::RawNearTouch _get_RThumbButtons();
    // Set static field: static public OVRInput/RawNearTouch RThumbButtons
    static void _set_RThumbButtons(GlobalNamespace::OVRInput::RawNearTouch value);
    // static field const value: static public OVRInput/RawNearTouch Any
    static constexpr const int Any = -1;
    // Get static field: static public OVRInput/RawNearTouch Any
    static GlobalNamespace::OVRInput::RawNearTouch _get_Any();
    // Set static field: static public OVRInput/RawNearTouch Any
    static void _set_Any(GlobalNamespace::OVRInput::RawNearTouch value);
    // Creating value type constructor for type: RawNearTouch
    RawNearTouch(int value_ = {}) : value{value_} {}
  }; // OVRInput/RawNearTouch
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::RawNearTouch, "", "OVRInput/RawNearTouch");
#pragma pack(pop)
