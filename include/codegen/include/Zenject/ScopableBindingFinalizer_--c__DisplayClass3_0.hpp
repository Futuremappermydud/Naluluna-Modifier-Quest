// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.ScopableBindingFinalizer
#include "Zenject/ScopableBindingFinalizer.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IProvider
  class IProvider;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ScopableBindingFinalizer/<>c__DisplayClass3_0
  class ScopableBindingFinalizer::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    // public Zenject.ScopableBindingFinalizer <>4__this
    // Offset: 0x10
    Zenject::ScopableBindingFinalizer* $$4__this;
    // public Zenject.DiContainer container
    // Offset: 0x18
    Zenject::DiContainer* container;
    // Zenject.IProvider <FinalizeBindingConcrete>b__0(Zenject.DiContainer _, System.Type concreteType)
    // Offset: 0xFB66FC
    Zenject::IProvider* $FinalizeBindingConcrete$b__0(Zenject::DiContainer* _, System::Type* concreteType);
    // public System.Void .ctor()
    // Offset: 0xFB66EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ScopableBindingFinalizer::$$c__DisplayClass3_0* New_ctor();
  }; // Zenject.ScopableBindingFinalizer/<>c__DisplayClass3_0
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ScopableBindingFinalizer::$$c__DisplayClass3_0*, "Zenject", "ScopableBindingFinalizer/<>c__DisplayClass3_0");
#pragma pack(pop)
