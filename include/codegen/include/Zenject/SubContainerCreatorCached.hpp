// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:46 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.ISubContainerCreator
#include "Zenject/ISubContainerCreator.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.SubContainerCreatorCached
  class SubContainerCreatorCached : public ::Il2CppObject, public Zenject::ISubContainerCreator {
    public:
    // private readonly Zenject.ISubContainerCreator _subCreator
    // Offset: 0x10
    Zenject::ISubContainerCreator* subCreator;
    // private System.Boolean _isLookingUp
    // Offset: 0x18
    bool isLookingUp;
    // private Zenject.DiContainer _subContainer
    // Offset: 0x20
    Zenject::DiContainer* subContainer;
    // public System.Void .ctor(Zenject.ISubContainerCreator subCreator)
    // Offset: 0xFB9850
    static SubContainerCreatorCached* New_ctor(Zenject::ISubContainerCreator* subCreator);
    // public Zenject.DiContainer CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    // Offset: 0xFBB508
    // Implemented from: Zenject.ISubContainerCreator
    // Base method: Zenject.DiContainer ISubContainerCreator::CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    Zenject::DiContainer* CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* context);
  }; // Zenject.SubContainerCreatorCached
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorCached*, "Zenject", "SubContainerCreatorCached");
#pragma pack(pop)
