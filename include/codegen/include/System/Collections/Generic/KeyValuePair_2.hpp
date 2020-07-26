// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:41 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.KeyValuePair`2
  template<typename TKey, typename TValue>
  struct KeyValuePair_2 : public System::ValueType {
    public:
    // private TKey key
    // Offset: 0x0
    TKey key;
    // private TValue value
    // Offset: 0x0
    TValue value;
    // Creating value type constructor for type: KeyValuePair_2
    KeyValuePair_2(TKey key_ = {}, TValue value_ = {}) : key{key_}, value{value_} {}
    // public System.Void .ctor(TKey key, TValue value)
    // Offset: 0xA2951C
    static KeyValuePair_2<TKey, TValue>* New_ctor(TKey key, TValue value) {
      return (KeyValuePair_2<TKey, TValue>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<KeyValuePair_2<TKey, TValue>>::get(), key, value));
    }
    // public TKey get_Key()
    // Offset: 0xA299A8
    TKey get_Key() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TKey>(*this, "get_Key"));
    }
    // public TValue get_Value()
    // Offset: 0xA299B0
    TValue get_Value() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(*this, "get_Value"));
    }
    // public override System.String ToString()
    // Offset: 0xA29558
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(*this, "ToString"));
    }
  }; // System.Collections.Generic.KeyValuePair`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Collections::Generic::KeyValuePair_2, "System.Collections.Generic", "KeyValuePair`2");
#pragma pack(pop)
