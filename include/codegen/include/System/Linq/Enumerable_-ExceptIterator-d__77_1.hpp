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
  // Forward declaring type: IEqualityComparer`1<T>
  template<typename T>
  class IEqualityComparer_1;
}
// Forward declaring namespace: System::Linq
namespace System::Linq {
  // Forward declaring type: Set`1<TElement>
  template<typename TElement>
  class Set_1;
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // Autogenerated type: System.Linq.Enumerable/<ExceptIterator>d__77`1
  template<typename TSource>
  class Enumerable::$ExceptIterator$d__77_1 : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<TSource>, public System::Collections::IEnumerable, public System::Collections::Generic::IEnumerator_1<TSource>, public System::IDisposable, public System::Collections::IEnumerator {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // private TSource <>2__current
    // Offset: 0x0
    TSource $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x0
    int $$l__initialThreadId;
    // private System.Collections.Generic.IEqualityComparer`1<TSource> comparer
    // Offset: 0x0
    System::Collections::Generic::IEqualityComparer_1<TSource>* comparer;
    // public System.Collections.Generic.IEqualityComparer`1<TSource> <>3__comparer
    // Offset: 0x0
    System::Collections::Generic::IEqualityComparer_1<TSource>* $$3__comparer;
    // private System.Collections.Generic.IEnumerable`1<TSource> second
    // Offset: 0x0
    System::Collections::Generic::IEnumerable_1<TSource>* second;
    // public System.Collections.Generic.IEnumerable`1<TSource> <>3__second
    // Offset: 0x0
    System::Collections::Generic::IEnumerable_1<TSource>* $$3__second;
    // private System.Collections.Generic.IEnumerable`1<TSource> first
    // Offset: 0x0
    System::Collections::Generic::IEnumerable_1<TSource>* first;
    // public System.Collections.Generic.IEnumerable`1<TSource> <>3__first
    // Offset: 0x0
    System::Collections::Generic::IEnumerable_1<TSource>* $$3__first;
    // private System.Linq.Set`1<TSource> <set>5__1
    // Offset: 0x0
    System::Linq::Set_1<TSource>* $set$5__1;
    // private System.Collections.Generic.IEnumerator`1<TSource> <>7__wrap1
    // Offset: 0x0
    System::Collections::Generic::IEnumerator_1<TSource>* $$7__wrap1;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0x127804C
    static Enumerable::$ExceptIterator$d__77_1<TSource>* New_ctor(int $$1__state) {
      return (Enumerable::$ExceptIterator$d__77_1<TSource>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Enumerable::$ExceptIterator$d__77_1<TSource>*>::get(), $$1__state));
    }
    // private System.Void <>m__Finally1()
    // Offset: 0x12786C0
    void $$m__Finally1() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "<>m__Finally1"));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x127808C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.IDisposable.Dispose"));
    }
    // private System.Boolean MoveNext()
    // Offset: 0x12780B8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
    }
    // private TSource System.Collections.Generic.IEnumerator<TSource>.get_Current()
    // Offset: 0x1278780
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    TSource System_Collections_Generic_IEnumerator_1_get_Current() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TSource>(this, "System.Collections.Generic.IEnumerator<TSource>.get_Current"));
    }
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1278788
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IEnumerator.Reset"));
    }
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x12787E8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "System.Collections.IEnumerator.get_Current"));
    }
    // private System.Collections.Generic.IEnumerator`1<TSource> System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
    // Offset: 0x12787F0
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<TSource>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<TSource>*>(this, "System.Collections.Generic.IEnumerable<TSource>.GetEnumerator"));
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x12788C0
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
    }
  }; // System.Linq.Enumerable/<ExceptIterator>d__77`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Enumerable::$ExceptIterator$d__77_1, "System.Linq", "Enumerable/<ExceptIterator>d__77`1");
#pragma pack(pop)
