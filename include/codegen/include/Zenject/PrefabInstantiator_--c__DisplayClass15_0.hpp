// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:46 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.PrefabInstantiator
#include "Zenject/PrefabInstantiator.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PrefabInstantiator/<>c__DisplayClass15_0
  class PrefabInstantiator::$$c__DisplayClass15_0 : public ::Il2CppObject {
    public:
    // public Zenject.PrefabInstantiator <>4__this
    // Offset: 0x10
    Zenject::PrefabInstantiator* $$4__this;
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> args
    // Offset: 0x18
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* args;
    // public UnityEngine.GameObject gameObject
    // Offset: 0x20
    UnityEngine::GameObject* gameObject;
    // public Zenject.InjectContext context
    // Offset: 0x28
    Zenject::InjectContext* context;
    // public System.Boolean shouldMakeActive
    // Offset: 0x30
    bool shouldMakeActive;
    // System.Void <Instantiate>b__0()
    // Offset: 0xFAF390
    void $Instantiate$b__0();
    // public System.Void .ctor()
    // Offset: 0xFAF388
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PrefabInstantiator::$$c__DisplayClass15_0* New_ctor();
  }; // Zenject.PrefabInstantiator/<>c__DisplayClass15_0
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabInstantiator::$$c__DisplayClass15_0*, "Zenject", "PrefabInstantiator/<>c__DisplayClass15_0");
#pragma pack(pop)
