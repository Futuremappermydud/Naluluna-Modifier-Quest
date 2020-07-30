// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.MemoryPoolBase`1
#include "Zenject/MemoryPoolBase_1.hpp"
// Including type: Zenject.IMemoryPool`2
#include "Zenject/IMemoryPool_2.hpp"
// Including type: Zenject.IFactory`2
#include "Zenject/IFactory_2.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MemoryPool`2
  template<typename TValue, typename TParam1>
  class MemoryPool_2 : public Zenject::MemoryPoolBase_1<TValue>, public Zenject::IMemoryPool_2<TParam1, TValue>, public Zenject::IDespawnableMemoryPool_1<TValue>, public Zenject::IMemoryPool, public Zenject::IFactory_2<TParam1, TValue>, public Zenject::IFactory {
    public:
    // public TValue Spawn(TParam1 param)
    // Offset: 0x15CCF84
    TValue Spawn(TParam1 param) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Spawn", param));
    }
    // protected System.Void Reinitialize(TParam1 p1, TValue item)
    // Offset: 0x15CD014
    void Reinitialize(TParam1 p1, TValue item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Reinitialize", p1, item));
    }
    // private TValue Zenject.IFactory<TParam1,TValue>.Create(TParam1 p1)
    // Offset: 0x15CD018
    // Implemented from: Zenject.IFactory`2
    // Base method: TValue IFactory`2::Create(TParam1 p1)
    TValue Zenject_IFactory_2_Create(TParam1 p1) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Zenject.IFactory<TParam1,TValue>.Create", p1));
    }
    // public System.Void .ctor()
    // Offset: 0x15CD03C
    // Implemented from: Zenject.MemoryPoolBase`1
    // Base method: System.Void MemoryPoolBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static MemoryPool_2<TValue, TParam1>* New_ctor() {
      return (MemoryPool_2<TValue, TParam1>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MemoryPool_2<TValue, TParam1>*>::get()));
    }
  }; // Zenject.MemoryPool`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPool_2, "Zenject", "MemoryPool`2");
#pragma pack(pop)
