// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Linq.Enumerable
#include "System/Linq/Enumerable.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: IEnumerable`1 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // Autogenerated type: System.Linq.Enumerable/Iterator`1
  template<typename TSource>
  class Enumerable::Iterator_1 : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<TSource>, public System::Collections::IEnumerable, public System::Collections::Generic::IEnumerator_1<TSource>, public System::IDisposable, public System::Collections::IEnumerator {
    public:
    // private System.Int32 threadId
    // Offset: 0x0
    int threadId;
    // System.Int32 state
    // Offset: 0x0
    int state;
    // TSource current
    // Offset: 0x0
    TSource current;
    // public System.Linq.Enumerable/Iterator`1<TSource> Clone()
    // Offset: 0xFFFFFFFF
    System::Linq::Enumerable::Iterator_1<TSource>* Clone() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Linq::Enumerable::Iterator_1<TSource>*>(this, "Clone"));
    }
    // public System.Collections.Generic.IEnumerator`1<TSource> GetEnumerator()
    // Offset: 0x140F88C
    System::Collections::Generic::IEnumerator_1<TSource>* GetEnumerator() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<TSource>*>(this, "GetEnumerator"));
    }
    // public System.Collections.Generic.IEnumerable`1<TResult> Select(System.Func`2<TSource,TResult> selector)
    // Offset: 0xFFFFFFFF
    template<class TResult>
    System::Collections::Generic::IEnumerable_1<TResult>* Select(System::Func_2<TSource, TResult>* selector) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TResult>*>(this, "Select", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}, selector));
    }
    // public System.Collections.Generic.IEnumerable`1<TSource> Where(System.Func`2<TSource,System.Boolean> predicate)
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<TSource>* Where(System::Func_2<TSource, bool>* predicate) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<TSource>*>(this, "Where", predicate));
    }
    // public System.Void .ctor()
    // Offset: 0x140F830
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Enumerable::Iterator_1<TSource>* New_ctor() {
      return (Enumerable::Iterator_1<TSource>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Enumerable::Iterator_1<TSource>*>::get()));
    }
    // public TSource get_Current()
    // Offset: 0x140F874
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    TSource get_Current() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TSource>(this, "get_Current"));
    }
    // Creating proxy method: System_Collections_Generic_IEnumerator_1_get_Current
    // Maps to method: get_Current
    TSource System_Collections_Generic_IEnumerator_1_get_Current() {
      return get_Current();
    }
    // public System.Void Dispose()
    // Offset: 0x140F87C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
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
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
    }
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x140F8F8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "System.Collections.IEnumerator.get_Current"));
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x140F95C
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
    }
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x140F980
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IEnumerator.Reset"));
    }
  }; // System.Linq.Enumerable/Iterator`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Enumerable::Iterator_1, "System.Linq", "Enumerable/Iterator`1");
#pragma pack(pop)
