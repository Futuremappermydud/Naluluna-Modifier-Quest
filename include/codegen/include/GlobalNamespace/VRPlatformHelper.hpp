// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.XR.XRNodeState
#include "UnityEngine/XR/XRNodeState.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OculusVRHelper
  class OculusVRHelper;
  // Forward declaring type: OpenVRHelper
  class OpenVRHelper;
  // Skipping declaration: VRPlatformSDK because it is already included!
  // Skipping declaration: XRDeviceModel because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Skipping declaration: XRNode because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRPlatformHelper
  class VRPlatformHelper : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::VRPlatformHelper::VRPlatformSDK
    struct VRPlatformSDK;
    // Nested type: GlobalNamespace::VRPlatformHelper::VRNodeTransform
    struct VRNodeTransform;
    // Nested type: GlobalNamespace::VRPlatformHelper::XRDeviceModel
    struct XRDeviceModel;
    // Autogenerated type: VRPlatformHelper/VRPlatformSDK
    struct VRPlatformSDK : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public VRPlatformHelper/VRPlatformSDK OpenVR
      static constexpr const int OpenVR = 0;
      // Get static field: static public VRPlatformHelper/VRPlatformSDK OpenVR
      static GlobalNamespace::VRPlatformHelper::VRPlatformSDK _get_OpenVR();
      // Set static field: static public VRPlatformHelper/VRPlatformSDK OpenVR
      static void _set_OpenVR(GlobalNamespace::VRPlatformHelper::VRPlatformSDK value);
      // static field const value: static public VRPlatformHelper/VRPlatformSDK Oculus
      static constexpr const int Oculus = 1;
      // Get static field: static public VRPlatformHelper/VRPlatformSDK Oculus
      static GlobalNamespace::VRPlatformHelper::VRPlatformSDK _get_Oculus();
      // Set static field: static public VRPlatformHelper/VRPlatformSDK Oculus
      static void _set_Oculus(GlobalNamespace::VRPlatformHelper::VRPlatformSDK value);
      // static field const value: static public VRPlatformHelper/VRPlatformSDK Unknown
      static constexpr const int Unknown = 2;
      // Get static field: static public VRPlatformHelper/VRPlatformSDK Unknown
      static GlobalNamespace::VRPlatformHelper::VRPlatformSDK _get_Unknown();
      // Set static field: static public VRPlatformHelper/VRPlatformSDK Unknown
      static void _set_Unknown(GlobalNamespace::VRPlatformHelper::VRPlatformSDK value);
      // Creating value type constructor for type: VRPlatformSDK
      VRPlatformSDK(int value_ = {}) : value{value_} {}
    }; // VRPlatformHelper/VRPlatformSDK
    // Autogenerated type: VRPlatformHelper/XRDeviceModel
    struct XRDeviceModel : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public VRPlatformHelper/XRDeviceModel Unknown
      static constexpr const int Unknown = 0;
      // Get static field: static public VRPlatformHelper/XRDeviceModel Unknown
      static GlobalNamespace::VRPlatformHelper::XRDeviceModel _get_Unknown();
      // Set static field: static public VRPlatformHelper/XRDeviceModel Unknown
      static void _set_Unknown(GlobalNamespace::VRPlatformHelper::XRDeviceModel value);
      // static field const value: static public VRPlatformHelper/XRDeviceModel OculusRift
      static constexpr const int OculusRift = 1;
      // Get static field: static public VRPlatformHelper/XRDeviceModel OculusRift
      static GlobalNamespace::VRPlatformHelper::XRDeviceModel _get_OculusRift();
      // Set static field: static public VRPlatformHelper/XRDeviceModel OculusRift
      static void _set_OculusRift(GlobalNamespace::VRPlatformHelper::XRDeviceModel value);
      // static field const value: static public VRPlatformHelper/XRDeviceModel OculusQuest
      static constexpr const int OculusQuest = 2;
      // Get static field: static public VRPlatformHelper/XRDeviceModel OculusQuest
      static GlobalNamespace::VRPlatformHelper::XRDeviceModel _get_OculusQuest();
      // Set static field: static public VRPlatformHelper/XRDeviceModel OculusQuest
      static void _set_OculusQuest(GlobalNamespace::VRPlatformHelper::XRDeviceModel value);
      // static field const value: static public VRPlatformHelper/XRDeviceModel OculusQuestLink
      static constexpr const int OculusQuestLink = 3;
      // Get static field: static public VRPlatformHelper/XRDeviceModel OculusQuestLink
      static GlobalNamespace::VRPlatformHelper::XRDeviceModel _get_OculusQuestLink();
      // Set static field: static public VRPlatformHelper/XRDeviceModel OculusQuestLink
      static void _set_OculusQuestLink(GlobalNamespace::VRPlatformHelper::XRDeviceModel value);
      // static field const value: static public VRPlatformHelper/XRDeviceModel Other
      static constexpr const int Other = 4;
      // Get static field: static public VRPlatformHelper/XRDeviceModel Other
      static GlobalNamespace::VRPlatformHelper::XRDeviceModel _get_Other();
      // Set static field: static public VRPlatformHelper/XRDeviceModel Other
      static void _set_Other(GlobalNamespace::VRPlatformHelper::XRDeviceModel value);
      // Creating value type constructor for type: XRDeviceModel
      XRDeviceModel(int value_ = {}) : value{value_} {}
    }; // VRPlatformHelper/XRDeviceModel
    // private System.Action inputFocusWasCapturedEvent
    // Offset: 0x18
    System::Action* inputFocusWasCapturedEvent;
    // private System.Action inputFocusWasReleasedEvent
    // Offset: 0x20
    System::Action* inputFocusWasReleasedEvent;
    // private System.Action dashboardWasActivatedEvent
    // Offset: 0x28
    System::Action* dashboardWasActivatedEvent;
    // private System.Action dashboardWasDectivatedEvent
    // Offset: 0x30
    System::Action* dashboardWasDectivatedEvent;
    // private System.Action hmdUnmountedEvent
    // Offset: 0x38
    System::Action* hmdUnmountedEvent;
    // private System.Action hmdMountedEvent
    // Offset: 0x40
    System::Action* hmdMountedEvent;
    // private VRPlatformHelper/VRPlatformSDK <vrPlatformSDK>k__BackingField
    // Offset: 0x48
    GlobalNamespace::VRPlatformHelper::VRPlatformSDK vrPlatformSDK;
    // private VRPlatformHelper/XRDeviceModel <currentXRDeviceModel>k__BackingField
    // Offset: 0x4C
    GlobalNamespace::VRPlatformHelper::XRDeviceModel currentXRDeviceModel;
    // private OpenVRHelper _openVRHeper
    // Offset: 0x50
    GlobalNamespace::OpenVRHelper* openVRHeper;
    // private OculusVRHelper _oculusVRHelper
    // Offset: 0x58
    GlobalNamespace::OculusVRHelper* oculusVRHelper;
    // private System.Boolean _didGetNodeStatesThisFrame
    // Offset: 0x60
    bool didGetNodeStatesThisFrame;
    // private System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> _nodeStates
    // Offset: 0x68
    System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState>* nodeStates;
    // public System.Void add_inputFocusWasCapturedEvent(System.Action value)
    // Offset: 0xCA9C04
    void add_inputFocusWasCapturedEvent(System::Action* value);
    // public System.Void remove_inputFocusWasCapturedEvent(System.Action value)
    // Offset: 0xCA9CA8
    void remove_inputFocusWasCapturedEvent(System::Action* value);
    // public System.Void add_inputFocusWasReleasedEvent(System.Action value)
    // Offset: 0xCA9D4C
    void add_inputFocusWasReleasedEvent(System::Action* value);
    // public System.Void remove_inputFocusWasReleasedEvent(System.Action value)
    // Offset: 0xCA9DF0
    void remove_inputFocusWasReleasedEvent(System::Action* value);
    // public System.Void add_dashboardWasActivatedEvent(System.Action value)
    // Offset: 0xCA9E94
    void add_dashboardWasActivatedEvent(System::Action* value);
    // public System.Void remove_dashboardWasActivatedEvent(System.Action value)
    // Offset: 0xCA9F38
    void remove_dashboardWasActivatedEvent(System::Action* value);
    // public System.Void add_dashboardWasDectivatedEvent(System.Action value)
    // Offset: 0xCA9FDC
    void add_dashboardWasDectivatedEvent(System::Action* value);
    // public System.Void remove_dashboardWasDectivatedEvent(System.Action value)
    // Offset: 0xCAA080
    void remove_dashboardWasDectivatedEvent(System::Action* value);
    // public System.Void add_hmdUnmountedEvent(System.Action value)
    // Offset: 0xCAA124
    void add_hmdUnmountedEvent(System::Action* value);
    // public System.Void remove_hmdUnmountedEvent(System.Action value)
    // Offset: 0xCAA1C8
    void remove_hmdUnmountedEvent(System::Action* value);
    // public System.Void add_hmdMountedEvent(System.Action value)
    // Offset: 0xCAA26C
    void add_hmdMountedEvent(System::Action* value);
    // public System.Void remove_hmdMountedEvent(System.Action value)
    // Offset: 0xCAA310
    void remove_hmdMountedEvent(System::Action* value);
    // public VRPlatformHelper/VRPlatformSDK get_vrPlatformSDK()
    // Offset: 0xCAA3B4
    GlobalNamespace::VRPlatformHelper::VRPlatformSDK get_vrPlatformSDK();
    // private System.Void set_vrPlatformSDK(VRPlatformHelper/VRPlatformSDK value)
    // Offset: 0xCAA3BC
    void set_vrPlatformSDK(GlobalNamespace::VRPlatformHelper::VRPlatformSDK value);
    // public VRPlatformHelper/XRDeviceModel get_currentXRDeviceModel()
    // Offset: 0xCAA3C4
    GlobalNamespace::VRPlatformHelper::XRDeviceModel get_currentXRDeviceModel();
    // private System.Void set_currentXRDeviceModel(VRPlatformHelper/XRDeviceModel value)
    // Offset: 0xCAA3CC
    void set_currentXRDeviceModel(GlobalNamespace::VRPlatformHelper::XRDeviceModel value);
    // public System.Boolean get_isAlwaysWireless()
    // Offset: 0xCAA3D4
    bool get_isAlwaysWireless();
    // protected System.Void Awake()
    // Offset: 0xCAA3E4
    void Awake();
    // protected System.Void Update()
    // Offset: 0xCAA6D4
    void Update();
    // private System.Void FixedUpdate()
    // Offset: 0xCAA6F4
    void FixedUpdate();
    // protected System.Void LateUpdate()
    // Offset: 0xCAA704
    void LateUpdate();
    // private System.Void HandleInputFocusWasCaptured()
    // Offset: 0xCAA730
    void HandleInputFocusWasCaptured();
    // private System.Void HandleInputFocusWasReleased()
    // Offset: 0xCAA744
    void HandleInputFocusWasReleased();
    // private System.Void HandleHMDMounted()
    // Offset: 0xCAA758
    void HandleHMDMounted();
    // private System.Void HandleHMDUnmounted()
    // Offset: 0xCAA76C
    void HandleHMDUnmounted();
    // private System.Void HandleDashboardWasActivated()
    // Offset: 0xCAA780
    void HandleDashboardWasActivated();
    // private System.Void HandleDashboardWasDectivated()
    // Offset: 0xCAA794
    void HandleDashboardWasDectivated();
    // public System.Boolean GetNodePose(UnityEngine.XR.XRNode nodeType, System.Int32 idx, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
    // Offset: 0xCA9430
    bool GetNodePose(UnityEngine::XR::XRNode nodeType, int idx, UnityEngine::Vector3& pos, UnityEngine::Quaternion& rot);
    // public System.Void TriggerHapticPulse(UnityEngine.XR.XRNode node, System.Single strength)
    // Offset: 0xCA15E4
    void TriggerHapticPulse(UnityEngine::XR::XRNode node, float strength);
    // public System.Void AdjustPlatformSpecificControllerTransform(UnityEngine.XR.XRNode node, UnityEngine.Transform transform, UnityEngine.Vector3 addPosition, UnityEngine.Vector3 addRotation)
    // Offset: 0xCA9700
    void AdjustPlatformSpecificControllerTransform(UnityEngine::XR::XRNode node, UnityEngine::Transform* transform, UnityEngine::Vector3 addPosition, UnityEngine::Vector3 addRotation);
    // public System.Void .ctor()
    // Offset: 0xCAA878
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static VRPlatformHelper* New_ctor();
  }; // VRPlatformHelper
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRPlatformHelper*, "", "VRPlatformHelper");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRPlatformHelper::VRPlatformSDK, "", "VRPlatformHelper/VRPlatformSDK");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRPlatformHelper::XRDeviceModel, "", "VRPlatformHelper/XRDeviceModel");
#pragma pack(pop)
