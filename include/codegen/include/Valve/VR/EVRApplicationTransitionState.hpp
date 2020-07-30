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
  // Autogenerated type: Valve.VR.EVRApplicationTransitionState
  struct EVRApplicationTransitionState : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_None
    static constexpr const int VRApplicationTransition_None = 0;
    // Get static field: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_None
    static Valve::VR::EVRApplicationTransitionState _get_VRApplicationTransition_None();
    // Set static field: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_None
    static void _set_VRApplicationTransition_None(Valve::VR::EVRApplicationTransitionState value);
    // static field const value: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_OldAppQuitSent
    static constexpr const int VRApplicationTransition_OldAppQuitSent = 10;
    // Get static field: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_OldAppQuitSent
    static Valve::VR::EVRApplicationTransitionState _get_VRApplicationTransition_OldAppQuitSent();
    // Set static field: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_OldAppQuitSent
    static void _set_VRApplicationTransition_OldAppQuitSent(Valve::VR::EVRApplicationTransitionState value);
    // static field const value: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_WaitingForExternalLaunch
    static constexpr const int VRApplicationTransition_WaitingForExternalLaunch = 11;
    // Get static field: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_WaitingForExternalLaunch
    static Valve::VR::EVRApplicationTransitionState _get_VRApplicationTransition_WaitingForExternalLaunch();
    // Set static field: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_WaitingForExternalLaunch
    static void _set_VRApplicationTransition_WaitingForExternalLaunch(Valve::VR::EVRApplicationTransitionState value);
    // static field const value: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_NewAppLaunched
    static constexpr const int VRApplicationTransition_NewAppLaunched = 20;
    // Get static field: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_NewAppLaunched
    static Valve::VR::EVRApplicationTransitionState _get_VRApplicationTransition_NewAppLaunched();
    // Set static field: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_NewAppLaunched
    static void _set_VRApplicationTransition_NewAppLaunched(Valve::VR::EVRApplicationTransitionState value);
    // Creating value type constructor for type: EVRApplicationTransitionState
    EVRApplicationTransitionState(int value_ = {}) : value{value_} {}
  }; // Valve.VR.EVRApplicationTransitionState
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRApplicationTransitionState, "Valve.VR", "EVRApplicationTransitionState");
#pragma pack(pop)
