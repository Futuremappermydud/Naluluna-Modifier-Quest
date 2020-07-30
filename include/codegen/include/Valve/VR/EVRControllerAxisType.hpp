// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:15 PM
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.EVRControllerAxisType
  struct EVRControllerAxisType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_None
    static constexpr const int k_eControllerAxis_None = 0;
    // Get static field: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_None
    static Valve::VR::EVRControllerAxisType _get_k_eControllerAxis_None();
    // Set static field: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_None
    static void _set_k_eControllerAxis_None(Valve::VR::EVRControllerAxisType value);
    // static field const value: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_TrackPad
    static constexpr const int k_eControllerAxis_TrackPad = 1;
    // Get static field: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_TrackPad
    static Valve::VR::EVRControllerAxisType _get_k_eControllerAxis_TrackPad();
    // Set static field: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_TrackPad
    static void _set_k_eControllerAxis_TrackPad(Valve::VR::EVRControllerAxisType value);
    // static field const value: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_Joystick
    static constexpr const int k_eControllerAxis_Joystick = 2;
    // Get static field: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_Joystick
    static Valve::VR::EVRControllerAxisType _get_k_eControllerAxis_Joystick();
    // Set static field: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_Joystick
    static void _set_k_eControllerAxis_Joystick(Valve::VR::EVRControllerAxisType value);
    // static field const value: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_Trigger
    static constexpr const int k_eControllerAxis_Trigger = 3;
    // Get static field: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_Trigger
    static Valve::VR::EVRControllerAxisType _get_k_eControllerAxis_Trigger();
    // Set static field: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_Trigger
    static void _set_k_eControllerAxis_Trigger(Valve::VR::EVRControllerAxisType value);
    // Creating value type constructor for type: EVRControllerAxisType
    EVRControllerAxisType(int value_ = {}) : value{value_} {}
  }; // Valve.VR.EVRControllerAxisType
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRControllerAxisType, "Valve.VR", "EVRControllerAxisType");
#pragma pack(pop)
