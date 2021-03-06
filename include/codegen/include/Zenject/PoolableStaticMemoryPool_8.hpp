// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.StaticMemoryPool`8
#include "Zenject/StaticMemoryPool_8.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7>
  class IPoolable_7;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PoolableStaticMemoryPool`8
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TValue>
  class PoolableStaticMemoryPool_8 : public Zenject::StaticMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue> {
    public:
    // static private System.Void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TValue value)
    // Offset: 0x15DCA40
    static void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TValue value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableStaticMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*>::get(), "OnSpawned", p1, p2, p3, p4, p5, p6, p7, value));
    }
    // static private System.Void OnDespawned(TValue value)
    // Offset: 0x15DCB50
    static void OnDespawned(TValue value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableStaticMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*>::get(), "OnDespawned", value));
    }
    // public System.Void .ctor()
    // Offset: 0x15DC96C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PoolableStaticMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* New_ctor() {
      return (PoolableStaticMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableStaticMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*>::get()));
    }
  }; // Zenject.PoolableStaticMemoryPool`8
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableStaticMemoryPool_8, "Zenject", "PoolableStaticMemoryPool`8");
#pragma pack(pop)
