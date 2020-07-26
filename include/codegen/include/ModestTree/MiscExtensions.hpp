// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:44 PM
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
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: ModestTree
namespace ModestTree {
  // Autogenerated type: ModestTree.MiscExtensions
  class MiscExtensions : public ::Il2CppObject {
    public:
    // static public System.String Fmt(System.String s, System.Object[] args)
    // Offset: 0xD494C0
    static ::Il2CppString* Fmt(::Il2CppString* s, ::Array<::Il2CppObject*>* args);
    // static public System.Int32 IndexOf(System.Collections.Generic.IList`1<T> list, T item)
    // Offset: 0x1234F0C
    template<class T>
    static int IndexOf(System::Collections::Generic::IList_1<T>* list, T item) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<int>("ModestTree", "MiscExtensions", "IndexOf", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, list, item));
    }
    // static public System.String Join(System.Collections.Generic.IEnumerable`1<System.String> values, System.String separator)
    // Offset: 0xD4A588
    static ::Il2CppString* Join(System::Collections::Generic::IEnumerable_1<::Il2CppString*>* values, ::Il2CppString* separator);
    // static public System.Void AllocFreeAddRange(System.Collections.Generic.IList`1<T> list, System.Collections.Generic.IList`1<T> items)
    // Offset: 0xC624A8
    template<class T>
    static void AllocFreeAddRange(System::Collections::Generic::IList_1<T>* list, System::Collections::Generic::IList_1<T>* items) {
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod("ModestTree", "MiscExtensions", "AllocFreeAddRange", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, list, items));
    }
    // static public System.Void RemoveWithConfirm(System.Collections.Generic.IList`1<T> list, T item)
    // Offset: 0xC62938
    template<class T>
    static void RemoveWithConfirm(System::Collections::Generic::IList_1<T>* list, T item) {
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod("ModestTree", "MiscExtensions", "RemoveWithConfirm", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, list, item));
    }
    // static public System.Void RemoveWithConfirm(System.Collections.Generic.LinkedList`1<T> list, T item)
    // Offset: 0xC629F0
    template<class T>
    static void RemoveWithConfirm(System::Collections::Generic::LinkedList_1<T>* list, T item) {
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod("ModestTree", "MiscExtensions", "RemoveWithConfirm", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, list, item));
    }
    // static public System.Void RemoveWithConfirm(System.Collections.Generic.IDictionary`2<TKey,TVal> dictionary, TKey key)
    // Offset: 0xC62850
    template<class TKey, class TVal>
    static void RemoveWithConfirm(System::Collections::Generic::IDictionary_2<TKey, TVal>* dictionary, TKey key) {
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod("ModestTree", "MiscExtensions", "RemoveWithConfirm", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TVal>::get()}, dictionary, key));
    }
    // static public System.Void RemoveWithConfirm(System.Collections.Generic.HashSet`1<T> set, T item)
    // Offset: 0xC62908
    template<class T>
    static void RemoveWithConfirm(System::Collections::Generic::HashSet_1<T>* set, T item) {
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod("ModestTree", "MiscExtensions", "RemoveWithConfirm", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, set, item));
    }
    // static public TVal GetValueAndRemove(System.Collections.Generic.IDictionary`2<TKey,TVal> dictionary, TKey key)
    // Offset: 0xD42EB0
    template<class TVal, class TKey>
    static TVal GetValueAndRemove(System::Collections::Generic::IDictionary_2<TKey, TVal>* dictionary, TKey key) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<TVal>("ModestTree", "MiscExtensions", "GetValueAndRemove", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TVal>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get()}, dictionary, key));
    }
  }; // ModestTree.MiscExtensions
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::MiscExtensions*, "ModestTree", "MiscExtensions");
#pragma pack(pop)
