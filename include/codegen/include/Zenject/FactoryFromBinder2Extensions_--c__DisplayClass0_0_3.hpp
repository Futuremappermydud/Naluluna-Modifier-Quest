// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.FactoryFromBinder2Extensions
#include "Zenject/FactoryFromBinder2Extensions.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinder2Extensions/<>c__DisplayClass0_0`3
  template<typename TParam1, typename TParam2, typename TContract>
  class FactoryFromBinder2Extensions::$$c__DisplayClass0_0_3 : public ::Il2CppObject {
    public:
    // public System.Guid factoryId
    // Offset: 0x0
    System::Guid factoryId;
    // Zenject.IProvider <FromIFactory>b__0(Zenject.DiContainer container)
    // Offset: 0x117E090
    Zenject::IProvider* $FromIFactory$b__0(Zenject::DiContainer* container) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<FromIFactory>b__0", container));
    }
    // public System.Void .ctor()
    // Offset: 0x117E078
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FactoryFromBinder2Extensions::$$c__DisplayClass0_0_3<TParam1, TParam2, TContract>* New_ctor() {
      return (FactoryFromBinder2Extensions::$$c__DisplayClass0_0_3<TParam1, TParam2, TContract>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder2Extensions::$$c__DisplayClass0_0_3<TParam1, TParam2, TContract>*>::get()));
    }
  }; // Zenject.FactoryFromBinder2Extensions/<>c__DisplayClass0_0`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder2Extensions::$$c__DisplayClass0_0_3, "Zenject", "FactoryFromBinder2Extensions/<>c__DisplayClass0_0`3");
#pragma pack(pop)
