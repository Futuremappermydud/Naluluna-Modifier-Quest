// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:53 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Collections.Generic.ICollection`1
#include "System/Collections/Generic/ICollection_1.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.IDictionary`2
  template<typename TKey, typename TValue>
  class IDictionary_2 : public System::Collections::Generic::ICollection_1<System::Collections::Generic::KeyValuePair_2<TKey, TValue>>, public System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<TKey, TValue>>, public System::Collections::IEnumerable {
    public:
    // public TValue get_Item(TKey key)
    // Offset: 0xFFFFFFFF
    TValue get_Item(TKey key) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "get_Item", key));
    }
    // public System.Void set_Item(TKey key, TValue value)
    // Offset: 0xFFFFFFFF
    void set_Item(TKey key, TValue value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "set_Item", key, value));
    }
    // public System.Boolean ContainsKey(TKey key)
    // Offset: 0xFFFFFFFF
    bool ContainsKey(TKey key) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ContainsKey", key));
    }
    // public System.Void Add(TKey key, TValue value)
    // Offset: 0xFFFFFFFF
    void System_Collections_Generic_IDictionary_2_Add(TKey key, TValue value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Add", key, value));
    }
    // public System.Boolean Remove(TKey key)
    // Offset: 0xFFFFFFFF
    bool System_Collections_Generic_IDictionary_2_Remove(TKey key) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Remove", key));
    }
    // public System.Boolean TryGetValue(TKey key, TValue value)
    // Offset: 0xFFFFFFFF
    bool TryGetValue(TKey key, TValue& value) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryGetValue", key, value));
    }
  }; // System.Collections.Generic.IDictionary`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::IDictionary_2, "System.Collections.Generic", "IDictionary`2");
#pragma pack(pop)
