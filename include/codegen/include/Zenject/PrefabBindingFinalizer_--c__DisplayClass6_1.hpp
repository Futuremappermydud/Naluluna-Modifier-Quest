// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.PrefabBindingFinalizer
#include "Zenject/PrefabBindingFinalizer.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: PrefabInstantiatorCached
  class PrefabInstantiatorCached;
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
  // Autogenerated type: Zenject.PrefabBindingFinalizer/<>c__DisplayClass6_1
  class PrefabBindingFinalizer::$$c__DisplayClass6_1 : public ::Il2CppObject {
    public:
    // public Zenject.PrefabInstantiatorCached prefabCreator
    // Offset: 0x10
    Zenject::PrefabInstantiatorCached* prefabCreator;
    // public Zenject.PrefabBindingFinalizer/<>c__DisplayClass6_0 CS$<>8__locals1
    // Offset: 0x18
    Zenject::PrefabBindingFinalizer::$$c__DisplayClass6_0* CS$$$8__locals1;
    // Zenject.IProvider <FinalizeBindingSelf>b__1(Zenject.DiContainer _, System.Type contractType)
    // Offset: 0xFAEEB8
    Zenject::IProvider* $FinalizeBindingSelf$b__1(Zenject::DiContainer* _, System::Type* contractType);
    // public System.Void .ctor()
    // Offset: 0xFAEC08
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PrefabBindingFinalizer::$$c__DisplayClass6_1* New_ctor();
  }; // Zenject.PrefabBindingFinalizer/<>c__DisplayClass6_1
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabBindingFinalizer::$$c__DisplayClass6_1*, "Zenject", "PrefabBindingFinalizer/<>c__DisplayClass6_1");
#pragma pack(pop)
