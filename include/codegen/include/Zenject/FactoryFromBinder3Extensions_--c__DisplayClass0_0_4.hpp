// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.FactoryFromBinder3Extensions
#include "Zenject/FactoryFromBinder3Extensions.hpp"
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
  // Autogenerated type: Zenject.FactoryFromBinder3Extensions/<>c__DisplayClass0_0`4
  template<typename TParam1, typename TParam2, typename TParam3, typename TContract>
  class FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4 : public ::Il2CppObject {
    public:
    // public System.Guid factoryId
    // Offset: 0x0
    System::Guid factoryId;
    // Zenject.IProvider <FromIFactory>b__0(Zenject.DiContainer container)
    // Offset: 0x117E4A8
    Zenject::IProvider* $FromIFactory$b__0(Zenject::DiContainer* container) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<FromIFactory>b__0", container));
    }
    // public System.Void .ctor()
    // Offset: 0x117E490
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4<TParam1, TParam2, TParam3, TContract>* New_ctor() {
      return (FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4<TParam1, TParam2, TParam3, TContract>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4<TParam1, TParam2, TParam3, TContract>*>::get()));
    }
  }; // Zenject.FactoryFromBinder3Extensions/<>c__DisplayClass0_0`4
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4, "Zenject", "FactoryFromBinder3Extensions/<>c__DisplayClass0_0`4");
#pragma pack(pop)
