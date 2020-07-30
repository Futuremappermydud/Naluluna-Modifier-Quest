// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:19 PM
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VisibilityChecker
  class VisibilityChecker : public UnityEngine::MonoBehaviour {
    public:
    // private System.Action OnBecameVisibleEvent
    // Offset: 0x18
    System::Action* OnBecameVisibleEvent;
    // private System.Action OnBecameInvisibleEvent
    // Offset: 0x20
    System::Action* OnBecameInvisibleEvent;
    // public System.Void add_OnBecameVisibleEvent(System.Action value)
    // Offset: 0xCAAA94
    void add_OnBecameVisibleEvent(System::Action* value);
    // public System.Void remove_OnBecameVisibleEvent(System.Action value)
    // Offset: 0xCAAB38
    void remove_OnBecameVisibleEvent(System::Action* value);
    // public System.Void add_OnBecameInvisibleEvent(System.Action value)
    // Offset: 0xCAABDC
    void add_OnBecameInvisibleEvent(System::Action* value);
    // public System.Void remove_OnBecameInvisibleEvent(System.Action value)
    // Offset: 0xCAAC80
    void remove_OnBecameInvisibleEvent(System::Action* value);
    // private System.Void OnBecameVisible()
    // Offset: 0xCAAD24
    void OnBecameVisible();
    // private System.Void OnBecameInvisible()
    // Offset: 0xCAAD38
    void OnBecameInvisible();
    // public System.Void .ctor()
    // Offset: 0xCAAD4C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static VisibilityChecker* New_ctor();
  }; // VisibilityChecker
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VisibilityChecker*, "", "VisibilityChecker");
#pragma pack(pop)
