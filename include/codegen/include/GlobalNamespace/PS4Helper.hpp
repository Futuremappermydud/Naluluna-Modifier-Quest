// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentSingleton`1
#include "GlobalNamespace/PersistentSingleton_1.hpp"
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
  // Autogenerated type: PS4Helper
  class PS4Helper : public GlobalNamespace::PersistentSingleton_1<GlobalNamespace::PS4Helper*> {
    public:
    // private System.Action didGoToBackgroundExecutionEvent
    // Offset: 0x18
    System::Action* didGoToBackgroundExecutionEvent;
    // private System.Action didGoToForegroundExecutionEvent
    // Offset: 0x20
    System::Action* didGoToForegroundExecutionEvent;
    // private System.Boolean _backgroundExecution
    // Offset: 0x28
    bool backgroundExecution;
    // public System.Void add_didGoToBackgroundExecutionEvent(System.Action value)
    // Offset: 0xBD16FC
    void add_didGoToBackgroundExecutionEvent(System::Action* value);
    // public System.Void remove_didGoToBackgroundExecutionEvent(System.Action value)
    // Offset: 0xBD17A0
    void remove_didGoToBackgroundExecutionEvent(System::Action* value);
    // public System.Void add_didGoToForegroundExecutionEvent(System.Action value)
    // Offset: 0xBD1844
    void add_didGoToForegroundExecutionEvent(System::Action* value);
    // public System.Void remove_didGoToForegroundExecutionEvent(System.Action value)
    // Offset: 0xBD18E8
    void remove_didGoToForegroundExecutionEvent(System::Action* value);
    // protected System.Void Update()
    // Offset: 0xBD198C
    void Update();
    // public System.Void .ctor()
    // Offset: 0xBD19B0
    // Implemented from: PersistentSingleton`1
    // Base method: System.Void PersistentSingleton`1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PS4Helper* New_ctor();
  }; // PS4Helper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4Helper*, "", "PS4Helper");
#pragma pack(pop)
