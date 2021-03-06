// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:53 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.ICollection`1
  template<typename T>
  class ICollection_1 : public System::Collections::Generic::IEnumerable_1<T>, public System::Collections::IEnumerable {
    public:
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    int System_Collections_Generic_ICollection_1_get_Count() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
    }
    // public System.Boolean get_IsReadOnly()
    // Offset: 0xFFFFFFFF
    bool System_Collections_Generic_ICollection_1_get_IsReadOnly() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsReadOnly"));
    }
    // public System.Void Add(T item)
    // Offset: 0xFFFFFFFF
    void System_Collections_Generic_ICollection_1_Add(T item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Add", item));
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void System_Collections_Generic_ICollection_1_Clear() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
    }
    // public System.Boolean Contains(T item)
    // Offset: 0xFFFFFFFF
    bool System_Collections_Generic_ICollection_1_Contains(T item) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Contains", item));
    }
    // public System.Void CopyTo(T[] array, System.Int32 arrayIndex)
    // Offset: 0xFFFFFFFF
    void System_Collections_Generic_ICollection_1_CopyTo(::Array<T>* array, int arrayIndex) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "CopyTo", array, arrayIndex));
    }
    // public System.Boolean Remove(T item)
    // Offset: 0xFFFFFFFF
    bool System_Collections_Generic_ICollection_1_Remove(T item) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Remove", item));
    }
  }; // System.Collections.Generic.ICollection`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::ICollection_1, "System.Collections.Generic", "ICollection`1");
#pragma pack(pop)
