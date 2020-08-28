// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRPlatformHelper
#include "GlobalNamespace/VRPlatformHelper.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: EventSystem
  class EventSystem;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: VRControllerManufacturerName because it is already included!
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Skipping declaration: XRNode because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OpenVRHelper
  class OpenVRHelper : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::OpenVRHelper::VRControllerManufacturerName
    struct VRControllerManufacturerName;
    // Autogenerated type: OpenVRHelper/VRControllerManufacturerName
    struct VRControllerManufacturerName : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public OpenVRHelper/VRControllerManufacturerName HTC
      static constexpr const int HTC = 0;
      // Get static field: static public OpenVRHelper/VRControllerManufacturerName HTC
      static GlobalNamespace::OpenVRHelper::VRControllerManufacturerName _get_HTC();
      // Set static field: static public OpenVRHelper/VRControllerManufacturerName HTC
      static void _set_HTC(GlobalNamespace::OpenVRHelper::VRControllerManufacturerName value);
      // static field const value: static public OpenVRHelper/VRControllerManufacturerName Oculus
      static constexpr const int Oculus = 1;
      // Get static field: static public OpenVRHelper/VRControllerManufacturerName Oculus
      static GlobalNamespace::OpenVRHelper::VRControllerManufacturerName _get_Oculus();
      // Set static field: static public OpenVRHelper/VRControllerManufacturerName Oculus
      static void _set_Oculus(GlobalNamespace::OpenVRHelper::VRControllerManufacturerName value);
      // static field const value: static public OpenVRHelper/VRControllerManufacturerName Valve
      static constexpr const int Valve = 2;
      // Get static field: static public OpenVRHelper/VRControllerManufacturerName Valve
      static GlobalNamespace::OpenVRHelper::VRControllerManufacturerName _get_Valve();
      // Set static field: static public OpenVRHelper/VRControllerManufacturerName Valve
      static void _set_Valve(GlobalNamespace::OpenVRHelper::VRControllerManufacturerName value);
      // static field const value: static public OpenVRHelper/VRControllerManufacturerName Unknown
      static constexpr const int Unknown = 3;
      // Get static field: static public OpenVRHelper/VRControllerManufacturerName Unknown
      static GlobalNamespace::OpenVRHelper::VRControllerManufacturerName _get_Unknown();
      // Set static field: static public OpenVRHelper/VRControllerManufacturerName Unknown
      static void _set_Unknown(GlobalNamespace::OpenVRHelper::VRControllerManufacturerName value);
      // static field const value: static public OpenVRHelper/VRControllerManufacturerName Undefined
      static constexpr const int Undefined = 4;
      // Get static field: static public OpenVRHelper/VRControllerManufacturerName Undefined
      static GlobalNamespace::OpenVRHelper::VRControllerManufacturerName _get_Undefined();
      // Set static field: static public OpenVRHelper/VRControllerManufacturerName Undefined
      static void _set_Undefined(GlobalNamespace::OpenVRHelper::VRControllerManufacturerName value);
      // Creating value type constructor for type: VRControllerManufacturerName
      VRControllerManufacturerName(int value_ = {}) : value{value_} {}
    }; // OpenVRHelper/VRControllerManufacturerName
    // private System.Action inputFocusWasCapturedEvent
    // Offset: 0x10
    System::Action* inputFocusWasCapturedEvent;
    // private System.Action inputFocusWasReleasedEvent
    // Offset: 0x18
    System::Action* inputFocusWasReleasedEvent;
    // private System.Action dashboardWasActivatedEvent
    // Offset: 0x20
    System::Action* dashboardWasActivatedEvent;
    // private System.Action dashboardWasDectivatedEvent
    // Offset: 0x28
    System::Action* dashboardWasDectivatedEvent;
    // private OpenVRHelper/VRControllerManufacturerName _vrControllerManufacturerName
    // Offset: 0x30
    GlobalNamespace::OpenVRHelper::VRControllerManufacturerName vrControllerManufacturerName;
    // private UnityEngine.EventSystems.EventSystem _disabledEventSystem
    // Offset: 0x38
    UnityEngine::EventSystems::EventSystem* disabledEventSystem;
    // private Valve.VR.TrackedDevicePose_t[] _poses
    // Offset: 0x40
    ::Array<Valve::VR::TrackedDevicePose_t>* poses;
    // private Valve.VR.TrackedDevicePose_t[] _gamePoses
    // Offset: 0x48
    ::Array<Valve::VR::TrackedDevicePose_t>* gamePoses;
    // public System.Void add_inputFocusWasCapturedEvent(System.Action value)
    // Offset: 0xCB9CA0
    void add_inputFocusWasCapturedEvent(System::Action* value);
    // public System.Void remove_inputFocusWasCapturedEvent(System.Action value)
    // Offset: 0xCB9D44
    void remove_inputFocusWasCapturedEvent(System::Action* value);
    // public System.Void add_inputFocusWasReleasedEvent(System.Action value)
    // Offset: 0xCB9DE8
    void add_inputFocusWasReleasedEvent(System::Action* value);
    // public System.Void remove_inputFocusWasReleasedEvent(System.Action value)
    // Offset: 0xCB9E8C
    void remove_inputFocusWasReleasedEvent(System::Action* value);
    // public System.Void add_dashboardWasActivatedEvent(System.Action value)
    // Offset: 0xCB9F30
    void add_dashboardWasActivatedEvent(System::Action* value);
    // public System.Void remove_dashboardWasActivatedEvent(System.Action value)
    // Offset: 0xCB9FD4
    void remove_dashboardWasActivatedEvent(System::Action* value);
    // public System.Void add_dashboardWasDectivatedEvent(System.Action value)
    // Offset: 0xCBA078
    void add_dashboardWasDectivatedEvent(System::Action* value);
    // public System.Void remove_dashboardWasDectivatedEvent(System.Action value)
    // Offset: 0xCBA11C
    void remove_dashboardWasDectivatedEvent(System::Action* value);
    // public OpenVRHelper/VRControllerManufacturerName get_vrControllerManufacturerName()
    // Offset: 0xCBA1C0
    GlobalNamespace::OpenVRHelper::VRControllerManufacturerName get_vrControllerManufacturerName();
    // private System.Void DisableEventSystem()
    // Offset: 0xCBA480
    void DisableEventSystem();
    // private System.Void EnableEventSystem()
    // Offset: 0xCBA5BC
    void EnableEventSystem();
    // private System.Void OnBeforeRender()
    // Offset: 0xCBA664
    void OnBeforeRender();
    // public System.Void Update()
    // Offset: 0xCBA6E4
    void Update();
    // public System.Void TriggerHapticPulse(UnityEngine.XR.XRNode node, System.Single strength)
    // Offset: 0xCBA92C
    void TriggerHapticPulse(UnityEngine::XR::XRNode node, float strength);
    // public VRPlatformHelper/VRNodeTransform GetNodePos(System.Int32 nodeIndex)
    // Offset: 0xCBA9F4
    GlobalNamespace::VRPlatformHelper::VRNodeTransform GetNodePos(int nodeIndex);
    // public System.Void .ctor()
    // Offset: 0xCBA3B8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OpenVRHelper* New_ctor();
  }; // OpenVRHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OpenVRHelper*, "", "OpenVRHelper");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OpenVRHelper::VRControllerManufacturerName, "", "OpenVRHelper/VRControllerManufacturerName");
#pragma pack(pop)
