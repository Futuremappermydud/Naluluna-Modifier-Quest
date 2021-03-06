// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.Array/InternalEnumerator`1
  template<typename T>
  struct Array::InternalEnumerator_1 : public System::ValueType, public System::Collections::Generic::IEnumerator_1<T> {
    public:
    // private readonly System.Array array
    // Offset: 0x0
    System::Array* array;
    // private System.Int32 idx
    // Offset: 0x0
    int idx;
    // Creating value type constructor for type: InternalEnumerator_1
    InternalEnumerator_1(System::Array* array_ = {}, int idx_ = {}) : array{array_}, idx{idx_} {}
    // System.Void .ctor(System.Array array)
    // Offset: 0xFFFFFFFF
    static Array::InternalEnumerator_1<T>* New_ctor(System::Array* array) {
      return (Array::InternalEnumerator_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Array::InternalEnumerator_1<T>>::get(), array));
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose() {
      THROW_UNLESS(il2cpp_utils::RunMethod(*this, "Dispose"));
    }
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose() {
      Dispose();
    }
    // public System.Boolean MoveNext()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "MoveNext"));
    }
    // public T get_Current()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    T get_Current() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(*this, "get_Current"));
    }
    // Creating proxy method: System_Collections_Generic_IEnumerator_1_get_Current
    // Maps to method: get_Current
    T System_Collections_Generic_IEnumerator_1_get_Current() {
      return get_Current();
    }
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset() {
      THROW_UNLESS(il2cpp_utils::RunMethod(*this, "System.Collections.IEnumerator.Reset"));
    }
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(*this, "System.Collections.IEnumerator.get_Current"));
    }
  }; // System.Array/InternalEnumerator`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Array::InternalEnumerator_1, "System", "Array/InternalEnumerator`1");
#pragma pack(pop)
