// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:43 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass35_0
  class FromBinder::$$c__DisplayClass35_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.GameObject gameObject
    // Offset: 0x10
    UnityEngine::GameObject* gameObject;
    // public Zenject.FromBinder <>4__this
    // Offset: 0x18
    Zenject::FromBinder* $$4__this;
    // Zenject.IProvider <FromNewComponentOn>b__0(Zenject.DiContainer container, System.Type type)
    // Offset: 0xF203B0
    Zenject::IProvider* $FromNewComponentOn$b__0(Zenject::DiContainer* container, System::Type* type);
    // public System.Void .ctor()
    // Offset: 0xF1D804
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FromBinder::$$c__DisplayClass35_0* New_ctor();
  }; // Zenject.FromBinder/<>c__DisplayClass35_0
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass35_0*, "Zenject", "FromBinder/<>c__DisplayClass35_0");
#pragma pack(pop)
