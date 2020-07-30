// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:52 PM
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
  // Forward declaring type: IComparer`1<T>
  template<typename T>
  class IComparer_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.ArraySortHelper`1
  template<typename T>
  class ArraySortHelper_1 : public ::Il2CppObject {
    public:
    // static public System.Void Sort(T[] keys, System.Int32 index, System.Int32 length, System.Collections.Generic.IComparer`1<T> comparer)
    // Offset: 0x1798B54
    static void Sort(::Array<T>* keys, int index, int length, System::Collections::Generic::IComparer_1<T>* comparer) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "Sort", keys, index, length, comparer));
    }
    // static public System.Int32 BinarySearch(T[] array, System.Int32 index, System.Int32 length, T value, System.Collections.Generic.IComparer`1<T> comparer)
    // Offset: 0x1798E74
    static int BinarySearch(::Array<T>* array, int index, int length, T value, System::Collections::Generic::IComparer_1<T>* comparer) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "BinarySearch", array, index, length, value, comparer));
    }
    // static System.Void Sort(T[] keys, System.Int32 index, System.Int32 length, System.Comparison`1<T> comparer)
    // Offset: 0x179905C
    static void Sort(::Array<T>* keys, int index, int length, System::Comparison_1<T>* comparer) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "Sort", keys, index, length, comparer));
    }
    // static System.Int32 InternalBinarySearch(T[] array, System.Int32 index, System.Int32 length, T value, System.Collections.Generic.IComparer`1<T> comparer)
    // Offset: 0x1799204
    static int InternalBinarySearch(::Array<T>* array, int index, int length, T value, System::Collections::Generic::IComparer_1<T>* comparer) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "InternalBinarySearch", array, index, length, value, comparer));
    }
    // static private System.Void SwapIfGreater(T[] keys, System.Comparison`1<T> comparer, System.Int32 a, System.Int32 b)
    // Offset: 0x17993BC
    static void SwapIfGreater(::Array<T>* keys, System::Comparison_1<T>* comparer, int a, int b) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "SwapIfGreater", keys, comparer, a, b));
    }
    // static private System.Void Swap(T[] a, System.Int32 i, System.Int32 j)
    // Offset: 0x1799594
    static void Swap(::Array<T>* a, int i, int j) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "Swap", a, i, j));
    }
    // static System.Void IntrospectiveSort(T[] keys, System.Int32 left, System.Int32 length, System.Comparison`1<T> comparer)
    // Offset: 0x1799688
    static void IntrospectiveSort(::Array<T>* keys, int left, int length, System::Comparison_1<T>* comparer) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "IntrospectiveSort", keys, left, length, comparer));
    }
    // static private System.Void IntroSort(T[] keys, System.Int32 lo, System.Int32 hi, System.Int32 depthLimit, System.Comparison`1<T> comparer)
    // Offset: 0x1799778
    static void IntroSort(::Array<T>* keys, int lo, int hi, int depthLimit, System::Comparison_1<T>* comparer) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "IntroSort", keys, lo, hi, depthLimit, comparer));
    }
    // static private System.Int32 PickPivotAndPartition(T[] keys, System.Int32 lo, System.Int32 hi, System.Comparison`1<T> comparer)
    // Offset: 0x1799B08
    static int PickPivotAndPartition(::Array<T>* keys, int lo, int hi, System::Comparison_1<T>* comparer) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "PickPivotAndPartition", keys, lo, hi, comparer));
    }
    // static private System.Void Heapsort(T[] keys, System.Int32 lo, System.Int32 hi, System.Comparison`1<T> comparer)
    // Offset: 0x1799F10
    static void Heapsort(::Array<T>* keys, int lo, int hi, System::Comparison_1<T>* comparer) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "Heapsort", keys, lo, hi, comparer));
    }
    // static private System.Void DownHeap(T[] keys, System.Int32 i, System.Int32 n, System.Int32 lo, System.Comparison`1<T> comparer)
    // Offset: 0x179A0A4
    static void DownHeap(::Array<T>* keys, int i, int n, int lo, System::Comparison_1<T>* comparer) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "DownHeap", keys, i, n, lo, comparer));
    }
    // static private System.Void InsertionSort(T[] keys, System.Int32 lo, System.Int32 hi, System.Comparison`1<T> comparer)
    // Offset: 0x179A390
    static void InsertionSort(::Array<T>* keys, int lo, int hi, System::Comparison_1<T>* comparer) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "InsertionSort", keys, lo, hi, comparer));
    }
  }; // System.Collections.Generic.ArraySortHelper`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::ArraySortHelper_1, "System.Collections.Generic", "ArraySortHelper`1");
#pragma pack(pop)
