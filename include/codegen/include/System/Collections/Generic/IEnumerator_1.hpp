// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.IEnumerator`1
  template<typename T>
  class IEnumerator_1 : public System::IDisposable, public System::Collections::IEnumerator {
    public:
    // public T get_Current()
    // Offset: 0xFFFFFFFF
    T System_Collections_Generic_IEnumerator_1_get_Current() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<T>(this, "get_Current"));
    }
  }; // System.Collections.Generic.IEnumerator`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::IEnumerator_1, "System.Collections.Generic", "IEnumerator`1");
#pragma pack(pop)
