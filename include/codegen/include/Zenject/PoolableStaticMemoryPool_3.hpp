// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.StaticMemoryPool`3
#include "Zenject/StaticMemoryPool_3.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`2<TParam1, TParam2>
  template<typename TParam1, typename TParam2>
  class IPoolable_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PoolableStaticMemoryPool`3
  template<typename TParam1, typename TParam2, typename TValue>
  class PoolableStaticMemoryPool_3 : public Zenject::StaticMemoryPool_3<TParam1, TParam2, TValue> {
    public:
    // static private System.Void OnSpawned(TParam1 p1, TParam2 p2, TValue value)
    // Offset: 0x15DBE58
    static void OnSpawned(TParam1 p1, TParam2 p2, TValue value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableStaticMemoryPool_3<TParam1, TParam2, TValue>*>::get(), "OnSpawned", p1, p2, value));
    }
    // static private System.Void OnDespawned(TValue value)
    // Offset: 0x15DBF20
    static void OnDespawned(TValue value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableStaticMemoryPool_3<TParam1, TParam2, TValue>*>::get(), "OnDespawned", value));
    }
    // public System.Void .ctor()
    // Offset: 0x15DBD84
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PoolableStaticMemoryPool_3<TParam1, TParam2, TValue>* New_ctor() {
      return (PoolableStaticMemoryPool_3<TParam1, TParam2, TValue>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableStaticMemoryPool_3<TParam1, TParam2, TValue>*>::get()));
    }
  }; // Zenject.PoolableStaticMemoryPool`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableStaticMemoryPool_3, "Zenject", "PoolableStaticMemoryPool`3");
#pragma pack(pop)
