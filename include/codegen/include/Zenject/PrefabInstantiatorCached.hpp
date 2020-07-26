// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:50 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.IPrefabInstantiator
#include "Zenject/IPrefabInstantiator.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PrefabInstantiatorCached
  class PrefabInstantiatorCached : public ::Il2CppObject, public Zenject::IPrefabInstantiator {
    public:
    // private readonly Zenject.IPrefabInstantiator _subInstantiator
    // Offset: 0x10
    Zenject::IPrefabInstantiator* subInstantiator;
    // private UnityEngine.GameObject _gameObject
    // Offset: 0x18
    UnityEngine::GameObject* gameObject;
    // public System.Void .ctor(Zenject.IPrefabInstantiator subInstantiator)
    // Offset: 0xFAE9F0
    static PrefabInstantiatorCached* New_ctor(Zenject::IPrefabInstantiator* subInstantiator);
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> get_ExtraArguments()
    // Offset: 0xFAF840
    // Implemented from: Zenject.IPrefabInstantiator
    // Base method: System.Collections.Generic.List`1<Zenject.TypeValuePair> IPrefabInstantiator::get_ExtraArguments()
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* get_ExtraArguments();
    // public System.Type get_ArgumentTarget()
    // Offset: 0xFAF8F4
    // Implemented from: Zenject.IPrefabInstantiator
    // Base method: System.Type IPrefabInstantiator::get_ArgumentTarget()
    System::Type* get_ArgumentTarget();
    // public Zenject.GameObjectCreationParameters get_GameObjectCreationParameters()
    // Offset: 0xFAF9A4
    // Implemented from: Zenject.IPrefabInstantiator
    // Base method: Zenject.GameObjectCreationParameters IPrefabInstantiator::get_GameObjectCreationParameters()
    Zenject::GameObjectCreationParameters* get_GameObjectCreationParameters();
    // public UnityEngine.Object GetPrefab()
    // Offset: 0xFAFA58
    // Implemented from: Zenject.IPrefabInstantiator
    // Base method: UnityEngine.Object IPrefabInstantiator::GetPrefab()
    UnityEngine::Object* GetPrefab();
    // public UnityEngine.GameObject Instantiate(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, System.Action injectAction)
    // Offset: 0xFAFB0C
    // Implemented from: Zenject.IPrefabInstantiator
    // Base method: UnityEngine.GameObject IPrefabInstantiator::Instantiate(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, System.Action injectAction)
    UnityEngine::GameObject* Instantiate(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction);
  }; // Zenject.PrefabInstantiatorCached
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabInstantiatorCached*, "Zenject", "PrefabInstantiatorCached");
#pragma pack(pop)
