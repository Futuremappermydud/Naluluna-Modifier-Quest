// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: Zenject.ConcreteBinderNonGeneric
#include "Zenject/ConcreteBinderNonGeneric.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: BindStatement
  class BindStatement;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ConcreteIdBinderNonGeneric
  class ConcreteIdBinderNonGeneric : public Zenject::ConcreteBinderNonGeneric {
    public:
    // public Zenject.ConcreteBinderNonGeneric WithId(System.Object identifier)
    // Offset: 0xD54E28
    Zenject::ConcreteBinderNonGeneric* WithId(::Il2CppObject* identifier);
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    // Offset: 0xD54E00
    // Implemented from: Zenject.ConcreteBinderNonGeneric
    // Base method: System.Void ConcreteBinderNonGeneric::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    // Base method: System.Void FromBinderNonGeneric::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    // Base method: System.Void FromBinder::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    static ConcreteIdBinderNonGeneric* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::BindStatement* bindStatement);
  }; // Zenject.ConcreteIdBinderNonGeneric
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConcreteIdBinderNonGeneric*, "Zenject", "ConcreteIdBinderNonGeneric");
#pragma pack(pop)
