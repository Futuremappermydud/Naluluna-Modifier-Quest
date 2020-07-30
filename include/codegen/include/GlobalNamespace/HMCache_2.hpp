// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:19 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: HMCache`2
  template<typename K, typename V>
  class HMCache_2 : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.Dictionary`2<K,V> _cache
    // Offset: 0x0
    System::Collections::Generic::Dictionary_2<K, V>* cache;
    // private System.Collections.Generic.Queue`1<K> _addedElements
    // Offset: 0x0
    System::Collections::Generic::Queue_1<K>* addedElements;
    // private System.Int32 _maxNumberElements
    // Offset: 0x0
    int maxNumberElements;
    // public System.Void .ctor(System.Int32 maxNumberElements)
    // Offset: 0x127DEA8
    static HMCache_2<K, V>* New_ctor(int maxNumberElements) {
      return (HMCache_2<K, V>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMCache_2<K, V>*>::get(), maxNumberElements));
    }
    // public System.Boolean IsInCache(K key)
    // Offset: 0x127DF8C
    bool IsInCache(K key) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsInCache", key));
    }
    // public V GetFromCache(K key)
    // Offset: 0x127DFB4
    V GetFromCache(K key) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<V>(this, "GetFromCache", key));
    }
    // public System.Void PutToCache(K key, V value)
    // Offset: 0x127E034
    void PutToCache(K key, V value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "PutToCache", key, value));
    }
    // public System.Void Clear()
    // Offset: 0x127E114
    void Clear() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
    }
  }; // HMCache`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::HMCache_2, "", "HMCache`2");
#pragma pack(pop)
