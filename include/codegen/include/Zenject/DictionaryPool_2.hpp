// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.StaticMemoryPool`1
#include "Zenject/StaticMemoryPool_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.DictionaryPool`2
  template<typename TKey, typename TValue>
  class DictionaryPool_2 : public Zenject::StaticMemoryPool_1<System::Collections::Generic::Dictionary_2<TKey, TValue>*> {
    public:
    // Autogenerated static field getter
    // Get static field: static private readonly Zenject.DictionaryPool`2<TKey,TValue> _instance
    static Zenject::DictionaryPool_2<TKey, TValue>* _get__instance() {
      return CRASH_UNLESS((il2cpp_utils::GetFieldValue<Zenject::DictionaryPool_2<TKey, TValue>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DictionaryPool_2<TKey, TValue>*>::get(), "_instance")));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly Zenject.DictionaryPool`2<TKey,TValue> _instance
    static void _set__instance(Zenject::DictionaryPool_2<TKey, TValue>* value) {
      CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DictionaryPool_2<TKey, TValue>*>::get(), "_instance", value));
    }
    // static public Zenject.DictionaryPool`2<TKey,TValue> get_Instance()
    // Offset: 0x117CAFC
    static Zenject::DictionaryPool_2<TKey, TValue>* get_Instance() {
      return CRASH_UNLESS((il2cpp_utils::RunMethod<Zenject::DictionaryPool_2<TKey, TValue>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DictionaryPool_2<TKey, TValue>*>::get(), "get_Instance")));
    }
    // static private System.Void OnSpawned(System.Collections.Generic.Dictionary`2<TKey,TValue> items)
    // Offset: 0x117CBE8
    static void OnSpawned(System::Collections::Generic::Dictionary_2<TKey, TValue>* items) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DictionaryPool_2<TKey, TValue>*>::get(), "OnSpawned", items));
    }
    // static private System.Void OnDespawned(System.Collections.Generic.Dictionary`2<TKey,TValue> items)
    // Offset: 0x117CC60
    static void OnDespawned(System::Collections::Generic::Dictionary_2<TKey, TValue>* items) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DictionaryPool_2<TKey, TValue>*>::get(), "OnDespawned", items));
    }
    // static private System.Void .cctor()
    // Offset: 0x117CCE4
    static void _cctor() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DictionaryPool_2<TKey, TValue>*>::get(), ".cctor"));
    }
    // public System.Void .ctor()
    // Offset: 0x117C9F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DictionaryPool_2<TKey, TValue>* New_ctor() {
      return (DictionaryPool_2<TKey, TValue>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DictionaryPool_2<TKey, TValue>*>::get()));
    }
  }; // Zenject.DictionaryPool`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::DictionaryPool_2, "Zenject", "DictionaryPool`2");
#pragma pack(pop)
