// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:46 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.IPrefabInstantiator
  class IPrefabInstantiator {
    public:
    // public System.Type get_ArgumentTarget()
    // Offset: 0xFFFFFFFF
    System::Type* get_ArgumentTarget();
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> get_ExtraArguments()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* get_ExtraArguments();
    // public Zenject.GameObjectCreationParameters get_GameObjectCreationParameters()
    // Offset: 0xFFFFFFFF
    Zenject::GameObjectCreationParameters* get_GameObjectCreationParameters();
    // public UnityEngine.GameObject Instantiate(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, System.Action injectAction)
    // Offset: 0xFFFFFFFF
    UnityEngine::GameObject* Instantiate(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction);
    // public UnityEngine.Object GetPrefab()
    // Offset: 0xFFFFFFFF
    UnityEngine::Object* GetPrefab();
  }; // Zenject.IPrefabInstantiator
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::IPrefabInstantiator*, "Zenject", "IPrefabInstantiator");
#pragma pack(pop)
