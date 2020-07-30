// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.IFactory`2
#include "Zenject/IFactory_2.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PrefabFactory`1
  template<typename T>
  class PrefabFactory_1 : public ::Il2CppObject, public Zenject::IFactory_2<UnityEngine::Object*, T>, public Zenject::IFactory {
    public:
    // private readonly Zenject.DiContainer _container
    // Offset: 0x0
    Zenject::DiContainer* container;
    // public Zenject.DiContainer get_Container()
    // Offset: 0x15DCBFC
    Zenject::DiContainer* get_Container() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "get_Container"));
    }
    // public T Create(UnityEngine.Object prefab)
    // Offset: 0x15DCC04
    T Create(UnityEngine::Object* prefab) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<T>(this, "Create", prefab));
    }
    // public System.Void .ctor()
    // Offset: 0x15DCD08
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PrefabFactory_1<T>* New_ctor() {
      return (PrefabFactory_1<T>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PrefabFactory_1<T>*>::get()));
    }
  }; // Zenject.PrefabFactory`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PrefabFactory_1, "Zenject", "PrefabFactory`1");
#pragma pack(pop)
