// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Collections.IStructuralEquatable
#include "System/Collections/IStructuralEquatable.hpp"
// Including type: System.Collections.IStructuralComparable
#include "System/Collections/IStructuralComparable.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.ITupleInternal
#include "System/ITupleInternal.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEqualityComparer
  class IEqualityComparer;
  // Forward declaring type: IComparer
  class IComparer;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Tuple`4
  template<typename T1, typename T2, typename T3, typename T4>
  class Tuple_4 : public ::Il2CppObject, public System::Collections::IStructuralEquatable, public System::Collections::IStructuralComparable, public System::IComparable, public System::ITupleInternal {
    public:
    // private readonly T1 m_Item1
    // Offset: 0x0
    T1 m_Item1;
    // private readonly T2 m_Item2
    // Offset: 0x0
    T2 m_Item2;
    // private readonly T3 m_Item3
    // Offset: 0x0
    T3 m_Item3;
    // private readonly T4 m_Item4
    // Offset: 0x0
    T4 m_Item4;
    // public T1 get_Item1()
    // Offset: 0x13E2FE8
    T1 get_Item1() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<T1>(this, "get_Item1"));
    }
    // public T2 get_Item2()
    // Offset: 0x13E2FF0
    T2 get_Item2() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<T2>(this, "get_Item2"));
    }
    // public T3 get_Item3()
    // Offset: 0x13E2FF8
    T3 get_Item3() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<T3>(this, "get_Item3"));
    }
    // public T4 get_Item4()
    // Offset: 0x13E3000
    T4 get_Item4() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<T4>(this, "get_Item4"));
    }
    // public System.Void .ctor(T1 item1, T2 item2, T3 item3, T4 item4)
    // Offset: 0x13E20D0
    static Tuple_4<T1, T2, T3, T4>* New_ctor(T1 item1, T2 item2, T3 item3, T4 item4) {
      return (Tuple_4<T1, T2, T3, T4>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tuple_4<T1, T2, T3, T4>*>::get(), item1, item2, item3, item4));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x13E2140
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
    }
    // private System.Boolean System.Collections.IStructuralEquatable.Equals(System.Object other, System.Collections.IEqualityComparer comparer)
    // Offset: 0x13E222C
    // Implemented from: System.Collections.IStructuralEquatable
    // Base method: System.Boolean IStructuralEquatable::Equals(System.Object other, System.Collections.IEqualityComparer comparer)
    bool System_Collections_IStructuralEquatable_Equals(::Il2CppObject* other, System::Collections::IEqualityComparer* comparer) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "System.Collections.IStructuralEquatable.Equals", other, comparer));
    }
    // private System.Int32 System.IComparable.CompareTo(System.Object obj)
    // Offset: 0x13E256C
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object obj)
    int System_IComparable_CompareTo(::Il2CppObject* obj) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "System.IComparable.CompareTo", obj));
    }
    // private System.Int32 System.Collections.IStructuralComparable.CompareTo(System.Object other, System.Collections.IComparer comparer)
    // Offset: 0x13E2658
    // Implemented from: System.Collections.IStructuralComparable
    // Base method: System.Int32 IStructuralComparable::CompareTo(System.Object other, System.Collections.IComparer comparer)
    int System_Collections_IStructuralComparable_CompareTo(::Il2CppObject* other, System::Collections::IComparer* comparer) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "System.Collections.IStructuralComparable.CompareTo", other, comparer));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0x13E2A24
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
    }
    // private System.Int32 System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer comparer)
    // Offset: 0x13E2B04
    // Implemented from: System.Collections.IStructuralEquatable
    // Base method: System.Int32 IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer comparer)
    int System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer* comparer) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "System.Collections.IStructuralEquatable.GetHashCode", comparer));
    }
    // public override System.String ToString()
    // Offset: 0x13E2DA8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
    }
    // private System.String System.ITupleInternal.ToString(System.Text.StringBuilder sb)
    // Offset: 0x13E2E90
    // Implemented from: System.ITupleInternal
    // Base method: System.String ITupleInternal::ToString(System.Text.StringBuilder sb)
    ::Il2CppString* System_ITupleInternal_ToString(System::Text::StringBuilder* sb) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "System.ITupleInternal.ToString", sb));
    }
  }; // System.Tuple`4
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Tuple_4, "System", "Tuple`4");
#pragma pack(pop)
