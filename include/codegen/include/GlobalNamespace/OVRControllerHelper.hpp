// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:59 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRInput/Controller
#include "GlobalNamespace/OVRInput.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRControllerHelper
  class OVRControllerHelper : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVRControllerHelper::ControllerType
    struct ControllerType;
    // Autogenerated type: OVRControllerHelper/ControllerType
    struct ControllerType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public OVRControllerHelper/ControllerType GearVR
      static constexpr const int GearVR = 0;
      // Get static field: static public OVRControllerHelper/ControllerType GearVR
      static GlobalNamespace::OVRControllerHelper::ControllerType _get_GearVR();
      // Set static field: static public OVRControllerHelper/ControllerType GearVR
      static void _set_GearVR(GlobalNamespace::OVRControllerHelper::ControllerType value);
      // static field const value: static public OVRControllerHelper/ControllerType Go
      static constexpr const int Go = 1;
      // Get static field: static public OVRControllerHelper/ControllerType Go
      static GlobalNamespace::OVRControllerHelper::ControllerType _get_Go();
      // Set static field: static public OVRControllerHelper/ControllerType Go
      static void _set_Go(GlobalNamespace::OVRControllerHelper::ControllerType value);
      // static field const value: static public OVRControllerHelper/ControllerType QuestAndRiftS
      static constexpr const int QuestAndRiftS = 2;
      // Get static field: static public OVRControllerHelper/ControllerType QuestAndRiftS
      static GlobalNamespace::OVRControllerHelper::ControllerType _get_QuestAndRiftS();
      // Set static field: static public OVRControllerHelper/ControllerType QuestAndRiftS
      static void _set_QuestAndRiftS(GlobalNamespace::OVRControllerHelper::ControllerType value);
      // static field const value: static public OVRControllerHelper/ControllerType Rift
      static constexpr const int Rift = 3;
      // Get static field: static public OVRControllerHelper/ControllerType Rift
      static GlobalNamespace::OVRControllerHelper::ControllerType _get_Rift();
      // Set static field: static public OVRControllerHelper/ControllerType Rift
      static void _set_Rift(GlobalNamespace::OVRControllerHelper::ControllerType value);
      // Creating value type constructor for type: ControllerType
      ControllerType(int value_ = {}) : value{value_} {}
    }; // OVRControllerHelper/ControllerType
    // public UnityEngine.GameObject m_modelGearVrController
    // Offset: 0x18
    UnityEngine::GameObject* m_modelGearVrController;
    // public UnityEngine.GameObject m_modelOculusGoController
    // Offset: 0x20
    UnityEngine::GameObject* m_modelOculusGoController;
    // public UnityEngine.GameObject m_modelOculusTouchQuestAndRiftSLeftController
    // Offset: 0x28
    UnityEngine::GameObject* m_modelOculusTouchQuestAndRiftSLeftController;
    // public UnityEngine.GameObject m_modelOculusTouchQuestAndRiftSRightController
    // Offset: 0x30
    UnityEngine::GameObject* m_modelOculusTouchQuestAndRiftSRightController;
    // public UnityEngine.GameObject m_modelOculusTouchRiftLeftController
    // Offset: 0x38
    UnityEngine::GameObject* m_modelOculusTouchRiftLeftController;
    // public UnityEngine.GameObject m_modelOculusTouchRiftRightController
    // Offset: 0x40
    UnityEngine::GameObject* m_modelOculusTouchRiftRightController;
    // public OVRInput/Controller m_controller
    // Offset: 0x48
    GlobalNamespace::OVRInput::Controller m_controller;
    // private OVRControllerHelper/ControllerType activeControllerType
    // Offset: 0x4C
    GlobalNamespace::OVRControllerHelper::ControllerType activeControllerType;
    // private System.Boolean m_prevControllerConnected
    // Offset: 0x50
    bool m_prevControllerConnected;
    // private System.Boolean m_prevControllerConnectedCached
    // Offset: 0x51
    bool m_prevControllerConnectedCached;
    // private System.Void Start()
    // Offset: 0xCB5BA0
    void Start();
    // private System.Void Update()
    // Offset: 0xCB5DF4
    void Update();
    // public System.Void .ctor()
    // Offset: 0xCB6038
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRControllerHelper* New_ctor();
  }; // OVRControllerHelper
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRControllerHelper*, "", "OVRControllerHelper");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRControllerHelper::ControllerType, "", "OVRControllerHelper/ControllerType");
#pragma pack(pop)
