// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:48 PM
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
  // Autogenerated type: Zenject.IFactory`6
  template<typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
  class IFactory_6 : public Zenject::IFactory {
    public:
    // public TValue Create(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5)
    // Offset: 0xFFFFFFFF
    TValue Zenject_IFactory_6_Create(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Create", param1, param2, param3, param4, param5));
    }
  }; // Zenject.IFactory`6
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IFactory_6, "Zenject", "IFactory`6");
#pragma pack(pop)
