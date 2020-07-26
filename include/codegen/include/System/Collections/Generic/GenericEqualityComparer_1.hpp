// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:41 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Collections.Generic.EqualityComparer`1
#include "System/Collections/Generic/EqualityComparer_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IEquatable`1<T>
  template<typename T>
  class IEquatable_1;
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.GenericEqualityComparer`1
  template<typename T>
  class GenericEqualityComparer_1 : public System::Collections::Generic::EqualityComparer_1<T> {
    public:
    // public override System.Boolean Equals(T x, T y)
    // Offset: 0x1633708
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Boolean EqualityComparer`1::Equals(T x, T y)
    bool Equals(T x, T y) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", x, y));
    }
    // public override System.Int32 GetHashCode(T obj)
    // Offset: 0x163373C
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Int32 EqualityComparer`1::GetHashCode(T obj)
    int GetHashCode(T obj) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode", obj));
    }
    // override System.Int32 IndexOf(T[] array, T value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0x1633768
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Int32 EqualityComparer`1::IndexOf(T[] array, T value, System.Int32 startIndex, System.Int32 count)
    int IndexOf(::Array<T>* array, T value, int startIndex, int count) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "IndexOf", array, value, startIndex, count));
    }
    // override System.Int32 LastIndexOf(T[] array, T value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0x16337F0
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Int32 EqualityComparer`1::LastIndexOf(T[] array, T value, System.Int32 startIndex, System.Int32 count)
    int LastIndexOf(::Array<T>* array, T value, int startIndex, int count) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "LastIndexOf", array, value, startIndex, count));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1633878
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0x16338C4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
    }
    // public System.Void .ctor()
    // Offset: 0x1633900
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Void EqualityComparer`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static GenericEqualityComparer_1<T>* New_ctor() {
      return (GenericEqualityComparer_1<T>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GenericEqualityComparer_1<T>*>::get()));
    }
  }; // System.Collections.Generic.GenericEqualityComparer`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::GenericEqualityComparer_1, "System.Collections.Generic", "GenericEqualityComparer`1");
#pragma pack(pop)
