// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:49 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.MemoryPool`3
#include "Zenject/MemoryPool_3.hpp"
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
  // Autogenerated type: Zenject.PoolableMemoryPool`3
  template<typename TParam1, typename TParam2, typename TValue>
  class PoolableMemoryPool_3 : public Zenject::MemoryPool_3<TParam1, TParam2, TValue> {
    public:
    // protected System.Void OnDespawned(TValue item)
    // Offset: 0x15DADB8
    void OnDespawned(TValue item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnDespawned", item));
    }
    // protected System.Void Reinitialize(TParam1 p1, TParam2 p2, TValue item)
    // Offset: 0x15DAE54
    // Implemented from: Zenject.MemoryPool`3
    // Base method: System.Void MemoryPool`3::Reinitialize(TParam1 p1, TParam2 p2, TValue item)
    void Reinitialize(TParam1 p1, TParam2 p2, TValue item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Reinitialize", p1, p2, item));
    }
    // public System.Void .ctor()
    // Offset: 0x15DAF0C
    // Implemented from: Zenject.MemoryPool`3
    // Base method: System.Void MemoryPool`3::.ctor()
    // Base method: System.Void MemoryPoolBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static PoolableMemoryPool_3<TParam1, TParam2, TValue>* New_ctor() {
      return (PoolableMemoryPool_3<TParam1, TParam2, TValue>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableMemoryPool_3<TParam1, TParam2, TValue>*>::get()));
    }
  }; // Zenject.PoolableMemoryPool`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableMemoryPool_3, "Zenject", "PoolableMemoryPool`3");
#pragma pack(pop)
