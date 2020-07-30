// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.MemoryPool`1
#include "Zenject/MemoryPool_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable
  class IPoolable;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MonoPoolableMemoryPool`1
  template<typename TValue>
  class MonoPoolableMemoryPool_1 : public Zenject::MemoryPool_1<TValue> {
    public:
    // private UnityEngine.Transform _originalParent
    // Offset: 0x0
    UnityEngine::Transform* originalParent;
    // public System.Void .ctor()
    // Offset: 0x15D34A8
    // Implemented from: Zenject.MemoryPool`1
    // Base method: System.Void MemoryPool`1::.ctor()
    // Base method: System.Void MemoryPoolBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static MonoPoolableMemoryPool_1<TValue>* New_ctor() {
      return (MonoPoolableMemoryPool_1<TValue>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoPoolableMemoryPool_1<TValue>*>::get()));
    }
    // protected override System.Void OnCreated(TValue item)
    // Offset: 0x15D34CC
    // Implemented from: Zenject.MemoryPoolBase`1
    // Base method: System.Void MemoryPoolBase`1::OnCreated(TValue item)
    void OnCreated(TValue item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnCreated", item));
    }
    // protected override System.Void OnDestroyed(TValue item)
    // Offset: 0x15D3534
    // Implemented from: Zenject.MemoryPoolBase`1
    // Base method: System.Void MemoryPoolBase`1::OnDestroyed(TValue item)
    void OnDestroyed(TValue item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroyed", item));
    }
    // protected override System.Void OnDespawned(TValue item)
    // Offset: 0x15D35B8
    // Implemented from: Zenject.MemoryPoolBase`1
    // Base method: System.Void MemoryPoolBase`1::OnDespawned(TValue item)
    void OnDespawned(TValue item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnDespawned", item));
    }
    // protected override System.Void Reinitialize(TValue item)
    // Offset: 0x15D3714
    // Implemented from: Zenject.MemoryPool`1
    // Base method: System.Void MemoryPool`1::Reinitialize(TValue item)
    void Reinitialize(TValue item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Reinitialize", item));
    }
  }; // Zenject.MonoPoolableMemoryPool`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MonoPoolableMemoryPool_1, "Zenject", "MonoPoolableMemoryPool`1");
#pragma pack(pop)
