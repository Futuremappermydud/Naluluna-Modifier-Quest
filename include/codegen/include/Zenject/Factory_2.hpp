// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.PlaceholderFactory`2
#include "Zenject/PlaceholderFactory_2.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.Factory`2
  template<typename TParam1, typename TValue>
  class Factory_2 : public Zenject::PlaceholderFactory_2<TParam1, TValue> {
    public:
    // public System.Void .ctor()
    // Offset: 0x13A85B0
    // Implemented from: Zenject.PlaceholderFactory`2
    // Base method: System.Void PlaceholderFactory`2::.ctor()
    // Base method: System.Void PlaceholderFactoryBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static Factory_2<TParam1, TValue>* New_ctor() {
      return (Factory_2<TParam1, TValue>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Factory_2<TParam1, TValue>*>::get()));
    }
  }; // Zenject.Factory`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Factory_2, "Zenject", "Factory`2");
#pragma pack(pop)
