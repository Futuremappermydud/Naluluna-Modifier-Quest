// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.IFactory
#include "Zenject/IFactory.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.IFactory`2
  template<typename TValue, typename TParam1>
  class IFactory_2 : public Zenject::IFactory {
    public:
    // public TValue Create(TParam1 param)
    // Offset: 0xFFFFFFFF
    TValue Zenject_IFactory_2_Create(TParam1 param) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Create", param));
    }
  }; // Zenject.IFactory`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IFactory_2, "Zenject", "IFactory`2");
#pragma pack(pop)
