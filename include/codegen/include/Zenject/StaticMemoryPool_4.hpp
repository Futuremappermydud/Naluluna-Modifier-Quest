// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.StaticMemoryPoolBase`1
#include "Zenject/StaticMemoryPoolBase_1.hpp"
// Including type: Zenject.IMemoryPool`4
#include "Zenject/IMemoryPool_4.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`4<T1, T2, T3, T4>
  template<typename T1, typename T2, typename T3, typename T4>
  class Action_4;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.StaticMemoryPool`4
  template<typename TValue, typename TParam1, typename TParam2, typename TParam3>
  class StaticMemoryPool_4 : public Zenject::StaticMemoryPoolBase_1<TValue>, public Zenject::IMemoryPool_4<TParam1, TParam2, TParam3, TValue>, public Zenject::IDespawnableMemoryPool_1<TValue>, public Zenject::IMemoryPool {
    public:
    // private System.Action`4<TParam1,TParam2,TParam3,TValue> _onSpawnMethod
    // Offset: 0x0
    System::Action_4<TParam1, TParam2, TParam3, TValue>* onSpawnMethod;
    // public System.Void .ctor(System.Action`4<TParam1,TParam2,TParam3,TValue> onSpawnMethod, System.Action`1<TValue> onDespawnedMethod)
    // Offset: 0x15DEF64
    static StaticMemoryPool_4<TValue, TParam1, TParam2, TParam3>* New_ctor(System::Action_4<TParam1, TParam2, TParam3, TValue>* onSpawnMethod, System::Action_1<TValue>* onDespawnedMethod) {
      return (StaticMemoryPool_4<TValue, TParam1, TParam2, TParam3>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<StaticMemoryPool_4<TValue, TParam1, TParam2, TParam3>*>::get(), onSpawnMethod, onDespawnedMethod));
    }
    // public System.Void set_OnSpawnMethod(System.Action`4<TParam1,TParam2,TParam3,TValue> value)
    // Offset: 0x15DEFC0
    void set_OnSpawnMethod(System::Action_4<TParam1, TParam2, TParam3, TValue>* value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "set_OnSpawnMethod", value));
    }
    // public TValue Spawn(TParam1 p1, TParam2 p2, TParam3 p3)
    // Offset: 0x15DEFC8
    TValue Spawn(TParam1 p1, TParam2 p2, TParam3 p3) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Spawn", p1, p2, p3));
    }
  }; // Zenject.StaticMemoryPool`4
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::StaticMemoryPool_4, "Zenject", "StaticMemoryPool`4");
#pragma pack(pop)
