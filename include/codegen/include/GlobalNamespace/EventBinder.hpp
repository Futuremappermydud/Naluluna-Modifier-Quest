// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EventBinder
  class EventBinder : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.List`1<System.Action> _unsubscribes
    // Offset: 0x10
    System::Collections::Generic::List_1<System::Action*>* unsubscribes;
    // public System.Void Bind(System.Action subscribe, System.Action unsubscribe)
    // Offset: 0xCB069C
    void Bind(System::Action* subscribe, System::Action* unsubscribe);
    // public System.Void ClearAllBindings()
    // Offset: 0xCB0718
    void ClearAllBindings();
    // public System.Void .ctor()
    // Offset: 0xCB0828
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static EventBinder* New_ctor();
  }; // EventBinder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EventBinder*, "", "EventBinder");
#pragma pack(pop)
