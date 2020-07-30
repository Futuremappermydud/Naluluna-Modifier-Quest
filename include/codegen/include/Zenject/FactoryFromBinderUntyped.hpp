// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.FactoryFromBinderBase
#include "Zenject/FactoryFromBinderBase.hpp"
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinderUntyped
  class FactoryFromBinderUntyped : public Zenject::FactoryFromBinderBase {
    public:
    // public System.Void .ctor(Zenject.DiContainer bindContainer, System.Type contractType, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xF1CA2C
    // Implemented from: Zenject.FactoryFromBinderBase
    // Base method: System.Void FactoryFromBinderBase::.ctor(Zenject.DiContainer bindContainer, System.Type contractType, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    static FactoryFromBinderUntyped* New_ctor(Zenject::DiContainer* bindContainer, System::Type* contractType, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo);
  }; // Zenject.FactoryFromBinderUntyped
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryFromBinderUntyped*, "Zenject", "FactoryFromBinderUntyped");
#pragma pack(pop)
