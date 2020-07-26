// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:58 PM
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
  // Autogenerated type: OVR.OpenVR.EVRApplicationTransitionState
  struct EVRApplicationTransitionState : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVR.OpenVR.EVRApplicationTransitionState VRApplicationTransition_None
    static constexpr const int VRApplicationTransition_None = 0;
    // Get static field: static public OVR.OpenVR.EVRApplicationTransitionState VRApplicationTransition_None
    static OVR::OpenVR::EVRApplicationTransitionState _get_VRApplicationTransition_None();
    // Set static field: static public OVR.OpenVR.EVRApplicationTransitionState VRApplicationTransition_None
    static void _set_VRApplicationTransition_None(OVR::OpenVR::EVRApplicationTransitionState value);
    // static field const value: static public OVR.OpenVR.EVRApplicationTransitionState VRApplicationTransition_OldAppQuitSent
    static constexpr const int VRApplicationTransition_OldAppQuitSent = 10;
    // Get static field: static public OVR.OpenVR.EVRApplicationTransitionState VRApplicationTransition_OldAppQuitSent
    static OVR::OpenVR::EVRApplicationTransitionState _get_VRApplicationTransition_OldAppQuitSent();
    // Set static field: static public OVR.OpenVR.EVRApplicationTransitionState VRApplicationTransition_OldAppQuitSent
    static void _set_VRApplicationTransition_OldAppQuitSent(OVR::OpenVR::EVRApplicationTransitionState value);
    // static field const value: static public OVR.OpenVR.EVRApplicationTransitionState VRApplicationTransition_WaitingForExternalLaunch
    static constexpr const int VRApplicationTransition_WaitingForExternalLaunch = 11;
    // Get static field: static public OVR.OpenVR.EVRApplicationTransitionState VRApplicationTransition_WaitingForExternalLaunch
    static OVR::OpenVR::EVRApplicationTransitionState _get_VRApplicationTransition_WaitingForExternalLaunch();
    // Set static field: static public OVR.OpenVR.EVRApplicationTransitionState VRApplicationTransition_WaitingForExternalLaunch
    static void _set_VRApplicationTransition_WaitingForExternalLaunch(OVR::OpenVR::EVRApplicationTransitionState value);
    // static field const value: static public OVR.OpenVR.EVRApplicationTransitionState VRApplicationTransition_NewAppLaunched
    static constexpr const int VRApplicationTransition_NewAppLaunched = 20;
    // Get static field: static public OVR.OpenVR.EVRApplicationTransitionState VRApplicationTransition_NewAppLaunched
    static OVR::OpenVR::EVRApplicationTransitionState _get_VRApplicationTransition_NewAppLaunched();
    // Set static field: static public OVR.OpenVR.EVRApplicationTransitionState VRApplicationTransition_NewAppLaunched
    static void _set_VRApplicationTransition_NewAppLaunched(OVR::OpenVR::EVRApplicationTransitionState value);
    // Creating value type constructor for type: EVRApplicationTransitionState
    EVRApplicationTransitionState(int value_ = {}) : value{value_} {}
  }; // OVR.OpenVR.EVRApplicationTransitionState
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRApplicationTransitionState, "OVR.OpenVR", "EVRApplicationTransitionState");
#pragma pack(pop)
