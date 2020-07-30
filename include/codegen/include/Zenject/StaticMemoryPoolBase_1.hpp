// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.StaticMemoryPoolBaseBase`1
#include "Zenject/StaticMemoryPoolBaseBase_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.StaticMemoryPoolBase`1
  template<typename TValue>
  class StaticMemoryPoolBase_1 : public Zenject::StaticMemoryPoolBaseBase_1<TValue> {
    public:
    // public System.Void .ctor(System.Action`1<TValue> onDespawnedMethod)
    // Offset: 0x15DECAC
    // Implemented from: Zenject.StaticMemoryPoolBaseBase`1
    // Base method: System.Void StaticMemoryPoolBaseBase`1::.ctor(System.Action`1<TValue> onDespawnedMethod)
    static StaticMemoryPoolBase_1<TValue>* New_ctor(System::Action_1<TValue>* onDespawnedMethod) {
      return (StaticMemoryPoolBase_1<TValue>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<StaticMemoryPoolBase_1<TValue>*>::get(), onDespawnedMethod));
    }
    // protected override TValue Alloc()
    // Offset: 0x15DECD0
    // Implemented from: Zenject.StaticMemoryPoolBaseBase`1
    // Base method: TValue StaticMemoryPoolBaseBase`1::Alloc()
    TValue Alloc() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Alloc"));
    }
  }; // Zenject.StaticMemoryPoolBase`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::StaticMemoryPoolBase_1, "Zenject", "StaticMemoryPoolBase`1");
#pragma pack(pop)
