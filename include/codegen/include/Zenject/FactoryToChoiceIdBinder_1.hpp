// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:43 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: Zenject.FactoryArgumentsToChoiceBinder`1
#include "Zenject/FactoryArgumentsToChoiceBinder_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryToChoiceIdBinder`1
  template<typename TContract>
  class FactoryToChoiceIdBinder_1 : public Zenject::FactoryArgumentsToChoiceBinder_1<TContract> {
    public:
    // public Zenject.FactoryArgumentsToChoiceBinder`1<TContract> WithId(System.Object identifier)
    // Offset: 0x13A8308
    Zenject::FactoryArgumentsToChoiceBinder_1<TContract>* WithId(::Il2CppObject* identifier) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>(this, "WithId", identifier));
    }
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0x13A82E4
    // Implemented from: Zenject.FactoryArgumentsToChoiceBinder`1
    // Base method: System.Void FactoryArgumentsToChoiceBinder`1::.ctor(Zenject.DiContainer container, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Base method: System.Void FactoryToChoiceBinder`1::.ctor(Zenject.DiContainer container, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Base method: System.Void FactoryFromBinder`1::.ctor(Zenject.DiContainer container, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    static FactoryToChoiceIdBinder_1<TContract>* New_ctor(Zenject::DiContainer* container, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      return (FactoryToChoiceIdBinder_1<TContract>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryToChoiceIdBinder_1<TContract>*>::get(), container, bindInfo, factoryBindInfo));
    }
  }; // Zenject.FactoryToChoiceIdBinder`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryToChoiceIdBinder_1, "Zenject", "FactoryToChoiceIdBinder`1");
#pragma pack(pop)
