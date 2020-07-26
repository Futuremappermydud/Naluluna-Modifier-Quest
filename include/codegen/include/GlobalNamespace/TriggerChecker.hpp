// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:02 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TriggerChecker
  class TriggerChecker : public UnityEngine::MonoBehaviour {
    public:
    // public System.Action TriggerCheckerOnEnterEvent
    // Offset: 0x18
    System::Action* TriggerCheckerOnEnterEvent;
    // public System.Action TriggerCheckerOnExitEvent
    // Offset: 0x20
    System::Action* TriggerCheckerOnExitEvent;
    // public System.Action TriggerCheckerOnStayEvent
    // Offset: 0x28
    System::Action* TriggerCheckerOnStayEvent;
    // private System.Void OnTriggerEnter(UnityEngine.Collider other)
    // Offset: 0xCA88E8
    void OnTriggerEnter(UnityEngine::Collider* other);
    // private System.Void OnTriggerExit(UnityEngine.Collider other)
    // Offset: 0xCA88FC
    void OnTriggerExit(UnityEngine::Collider* other);
    // private System.Void OnTriggerStay(UnityEngine.Collider other)
    // Offset: 0xCA8910
    void OnTriggerStay(UnityEngine::Collider* other);
    // public System.Void .ctor()
    // Offset: 0xCA8924
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TriggerChecker* New_ctor();
  }; // TriggerChecker
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TriggerChecker*, "", "TriggerChecker");
#pragma pack(pop)
