// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:47 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: StaticMemoryPool`1<TValue>
  template<typename TValue>
  class StaticMemoryPool_1;
  // Forward declaring type: IDespawnableMemoryPool`1<TValue>
  template<typename TValue>
  class IDespawnableMemoryPool_1;
  // Forward declaring type: IMemoryPool`1<TValue>
  template<typename TValue>
  class IMemoryPool_1;
  // Forward declaring type: IMemoryPool`2<TValue, TParam1>
  template<typename TValue, typename TParam1>
  class IMemoryPool_2;
  // Forward declaring type: IMemoryPool`3<TValue, TParam1, TParam2>
  template<typename TValue, typename TParam1, typename TParam2>
  class IMemoryPool_3;
  // Forward declaring type: IMemoryPool`4<TValue, TParam1, TParam2, TParam3>
  template<typename TValue, typename TParam1, typename TParam2, typename TParam3>
  class IMemoryPool_4;
  // Forward declaring type: IMemoryPool`5<TValue, TParam1, TParam2, TParam3, TParam4>
  template<typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4>
  class IMemoryPool_5;
  // Forward declaring type: IMemoryPool`6<TValue, TParam1, TParam2, TParam3, TParam4, TParam5>
  template<typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
  class IMemoryPool_6;
  // Forward declaring type: IMemoryPool`7<TValue, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>
  template<typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
  class IMemoryPool_7;
  // Forward declaring type: IMemoryPool`8<TValue, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7>
  template<typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7>
  class IMemoryPool_8;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.DisposeBlock
  class DisposeBlock : public ::Il2CppObject, public System::IDisposable {
    public:
    // Nested type: Zenject::DisposeBlock::SpawnedObjectPoolPair
    struct SpawnedObjectPoolPair;
    // Autogenerated type: Zenject.DisposeBlock/SpawnedObjectPoolPair
    struct SpawnedObjectPoolPair : public System::ValueType {
      public:
      // public Zenject.IMemoryPool Pool
      // Offset: 0x0
      Zenject::IMemoryPool* Pool;
      // public System.Object Object
      // Offset: 0x8
      ::Il2CppObject* Object;
      // Creating value type constructor for type: SpawnedObjectPoolPair
      SpawnedObjectPoolPair(Zenject::IMemoryPool* Pool_ = {}, ::Il2CppObject* Object_ = {}) : Pool{Pool_}, Object{Object_} {}
    }; // Zenject.DisposeBlock/SpawnedObjectPoolPair
    // Get static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.DisposeBlock> _pool
    static Zenject::StaticMemoryPool_1<Zenject::DisposeBlock*>* _get__pool();
    // Set static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.DisposeBlock> _pool
    static void _set__pool(Zenject::StaticMemoryPool_1<Zenject::DisposeBlock*>* value);
    // private System.Collections.Generic.List`1<System.IDisposable> _disposables
    // Offset: 0x10
    System::Collections::Generic::List_1<System::IDisposable*>* disposables;
    // private System.Collections.Generic.List`1<Zenject.DisposeBlock/SpawnedObjectPoolPair> _objectPoolPairs
    // Offset: 0x18
    System::Collections::Generic::List_1<Zenject::DisposeBlock::SpawnedObjectPoolPair>* objectPoolPairs;
    // static private System.Void OnSpawned(Zenject.DisposeBlock that)
    // Offset: 0xF19BB8
    static void OnSpawned(Zenject::DisposeBlock* that);
    // static private System.Void OnDespawned(Zenject.DisposeBlock that)
    // Offset: 0xF19BF0
    static void OnDespawned(Zenject::DisposeBlock* that);
    // private System.Void LazyInitializeDisposableList()
    // Offset: 0xF19E80
    void LazyInitializeDisposableList();
    // public System.Void AddRange(System.Collections.Generic.IList`1<T> disposables)
    // Offset: 0xC4DDC4
    template<class T>
    void AddRange(System::Collections::Generic::IList_1<T>* disposables) {
      static_assert(std::is_convertible_v<T, System::IDisposable*>);
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod(this, "AddRange", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, disposables));
    }
    // public System.Void Add(System.IDisposable disposable)
    // Offset: 0xF19F28
    void Add(System::IDisposable* disposable);
    // public System.Void Remove(System.IDisposable disposable)
    // Offset: 0xF19FC4
    void Remove(System::IDisposable* disposable);
    // private System.Void StoreSpawnedObject(T obj, Zenject.IDespawnableMemoryPool`1<T> pool)
    // Offset: 0xC4DF64
    template<class T>
    void StoreSpawnedObject(T obj, Zenject::IDespawnableMemoryPool_1<T>* pool) {
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod(this, "StoreSpawnedObject", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, obj, pool));
    }
    // public T Spawn(Zenject.IMemoryPool`1<T> pool)
    // Offset: 0xD3D060
    template<class T>
    T Spawn(Zenject::IMemoryPool_1<T>* pool) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<T>(this, "Spawn", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, pool));
    }
    // public TValue Spawn(Zenject.IMemoryPool`2<TParam1,TValue> pool, TParam1 p1)
    // Offset: 0xD43708
    template<class TValue, class TParam1>
    TValue Spawn(Zenject::IMemoryPool_2<TParam1, TValue>* pool, TParam1 p1) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<TValue>(this, "Spawn", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get()}, pool, p1));
    }
    // public TValue Spawn(Zenject.IMemoryPool`3<TParam1,TParam2,TValue> pool, TParam1 p1, TParam2 p2)
    // Offset: 0xD4361C
    template<class TValue, class TParam1, class TParam2>
    TValue Spawn(Zenject::IMemoryPool_3<TParam1, TParam2, TValue>* pool, TParam1 p1, TParam2 p2) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<TValue>(this, "Spawn", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()}, pool, p1, p2));
    }
    // public TValue Spawn(Zenject.IMemoryPool`4<TParam1,TParam2,TParam3,TValue> pool, TParam1 p1, TParam2 p2, TParam3 p3)
    // Offset: 0xD43520
    template<class TValue, class TParam1, class TParam2, class TParam3>
    TValue Spawn(Zenject::IMemoryPool_4<TParam1, TParam2, TParam3, TValue>* pool, TParam1 p1, TParam2 p2, TParam3 p3) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<TValue>(this, "Spawn", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()}, pool, p1, p2, p3));
    }
    // public TValue Spawn(Zenject.IMemoryPool`5<TParam1,TParam2,TParam3,TParam4,TValue> pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4)
    // Offset: 0xD4341C
    template<class TValue, class TParam1, class TParam2, class TParam3, class TParam4>
    TValue Spawn(Zenject::IMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>* pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<TValue>(this, "Spawn", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()}, pool, p1, p2, p3, p4));
    }
    // public TValue Spawn(Zenject.IMemoryPool`6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5)
    // Offset: 0xD43308
    template<class TValue, class TParam1, class TParam2, class TParam3, class TParam4, class TParam5>
    TValue Spawn(Zenject::IMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>* pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<TValue>(this, "Spawn", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get()}, pool, p1, p2, p3, p4, p5));
    }
    // public TValue Spawn(Zenject.IMemoryPool`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6)
    // Offset: 0xD431EC
    template<class TValue, class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TParam6>
    TValue Spawn(Zenject::IMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>* pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<TValue>(this, "Spawn", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get()}, pool, p1, p2, p3, p4, p5, p6));
    }
    // public TValue Spawn(Zenject.IMemoryPool`8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue> pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7)
    // Offset: 0xD430C0
    template<class TValue, class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TParam6, class TParam7>
    TValue Spawn(Zenject::IMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<TValue>(this, "Spawn", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam7>::get()}, pool, p1, p2, p3, p4, p5, p6, p7));
    }
    // public System.Collections.Generic.List`1<T> SpawnList(System.Collections.Generic.IEnumerable`1<T> elements)
    // Offset: 0xD18E10
    template<class T>
    System::Collections::Generic::List_1<T>* SpawnList(System::Collections::Generic::IEnumerable_1<T>* elements) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::List_1<T>*>(this, "SpawnList", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, elements));
    }
    // public System.Collections.Generic.List`1<T> SpawnList()
    // Offset: 0xD18D5C
    template<class T>
    System::Collections::Generic::List_1<T>* SpawnList() {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::List_1<T>*>(this, "SpawnList", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
    }
    // static public Zenject.DisposeBlock Spawn()
    // Offset: 0xF1A030
    static Zenject::DisposeBlock* Spawn();
    // static private System.Void .cctor()
    // Offset: 0xF1A138
    static void _cctor();
    // public System.Void Dispose()
    // Offset: 0xF1A0AC
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public System.Void .ctor()
    // Offset: 0xF1A130
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DisposeBlock* New_ctor();
  }; // Zenject.DisposeBlock
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::DisposeBlock*, "Zenject", "DisposeBlock");
DEFINE_IL2CPP_ARG_TYPE(Zenject::DisposeBlock::SpawnedObjectPoolPair, "Zenject", "DisposeBlock/SpawnedObjectPoolPair");
#pragma pack(pop)
