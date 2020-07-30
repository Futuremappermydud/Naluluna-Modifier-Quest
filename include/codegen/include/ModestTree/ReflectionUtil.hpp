// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:41 PM
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action`4<T1, T2, T3, T4>
  template<typename T1, typename T2, typename T3, typename T4>
  class Action_4;
  // Forward declaring type: Action`5<T1, T2, T3, T4, T5>
  template<typename T1, typename T2, typename T3, typename T4, typename T5>
  class Action_5;
  // Forward declaring type: Action`6<T1, T2, T3, T4, T5, T6>
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
  class Action_6;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Func`3<TResult, T1, T2>
  template<typename TResult, typename T1, typename T2>
  class Func_3;
  // Forward declaring type: Func`4<TResult, T1, T2, T3>
  template<typename TResult, typename T1, typename T2, typename T3>
  class Func_4;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: ModestTree
namespace ModestTree {
  // Autogenerated type: ModestTree.ReflectionUtil
  class ReflectionUtil : public ::Il2CppObject {
    public:
    // static public System.Array CreateArray(System.Type elementType, System.Collections.Generic.List`1<System.Object> instances)
    // Offset: 0xD4A5F4
    static System::Array* CreateArray(System::Type* elementType, System::Collections::Generic::List_1<::Il2CppObject*>* instances);
    // static public System.Collections.IList CreateGenericList(System.Type elementType, System.Collections.Generic.List`1<System.Object> instances)
    // Offset: 0xD4A8AC
    static System::Collections::IList* CreateGenericList(System::Type* elementType, System::Collections::Generic::List_1<::Il2CppObject*>* instances);
    // static public System.String ToDebugString(System.Reflection.MethodInfo method)
    // Offset: 0xD4AC98
    static ::Il2CppString* ToDebugString(System::Reflection::MethodInfo* method);
    // static public System.String ToDebugString(System.Action action)
    // Offset: 0xD4ADE8
    static ::Il2CppString* ToDebugString(System::Action* action);
    // static public System.String ToDebugString(System.Action`1<TParam1> action)
    // Offset: 0xC5ED3C
    template<class TParam1>
    static ::Il2CppString* ToDebugString(System::Action_1<TParam1>* action) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<::Il2CppString*>("ModestTree", "ReflectionUtil", "ToDebugString", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get()}, action));
    }
    // static public System.String ToDebugString(System.Action`2<TParam1,TParam2> action)
    // Offset: 0xC5ECF4
    template<class TParam1, class TParam2>
    static ::Il2CppString* ToDebugString(System::Action_2<TParam1, TParam2>* action) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<::Il2CppString*>("ModestTree", "ReflectionUtil", "ToDebugString", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()}, action));
    }
    // static public System.String ToDebugString(System.Action`3<TParam1,TParam2,TParam3> action)
    // Offset: 0xC5ECAC
    template<class TParam1, class TParam2, class TParam3>
    static ::Il2CppString* ToDebugString(System::Action_3<TParam1, TParam2, TParam3>* action) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<::Il2CppString*>("ModestTree", "ReflectionUtil", "ToDebugString", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()}, action));
    }
    // static public System.String ToDebugString(System.Action`4<TParam1,TParam2,TParam3,TParam4> action)
    // Offset: 0xC5EC64
    template<class TParam1, class TParam2, class TParam3, class TParam4>
    static ::Il2CppString* ToDebugString(System::Action_4<TParam1, TParam2, TParam3, TParam4>* action) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<::Il2CppString*>("ModestTree", "ReflectionUtil", "ToDebugString", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()}, action));
    }
    // static public System.String ToDebugString(System.Action`5<TParam1,TParam2,TParam3,TParam4,TParam5> action)
    // Offset: 0xC5EC40
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5>
    static ::Il2CppString* ToDebugString(System::Action_5<TParam1, TParam2, TParam3, TParam4, TParam5>* action) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<::Il2CppString*>("ModestTree", "ReflectionUtil", "ToDebugString", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get()}, action));
    }
    // static public System.String ToDebugString(System.Action`6<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> action)
    // Offset: 0xC5EC1C
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TParam6>
    static ::Il2CppString* ToDebugString(System::Action_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* action) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<::Il2CppString*>("ModestTree", "ReflectionUtil", "ToDebugString", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get()}, action));
    }
    // static public System.String ToDebugString(System.Func`1<TParam1> func)
    // Offset: 0xC5ED60
    template<class TParam1>
    static ::Il2CppString* ToDebugString(System::Func_1<TParam1>* func) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<::Il2CppString*>("ModestTree", "ReflectionUtil", "ToDebugString", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get()}, func));
    }
    // static public System.String ToDebugString(System.Func`2<TParam1,TParam2> func)
    // Offset: 0xC5ED18
    template<class TParam1, class TParam2>
    static ::Il2CppString* ToDebugString(System::Func_2<TParam1, TParam2>* func) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<::Il2CppString*>("ModestTree", "ReflectionUtil", "ToDebugString", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()}, func));
    }
    // static public System.String ToDebugString(System.Func`3<TParam1,TParam2,TParam3> func)
    // Offset: 0xC5ECD0
    template<class TParam1, class TParam2, class TParam3>
    static ::Il2CppString* ToDebugString(System::Func_3<TParam1, TParam2, TParam3>* func) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<::Il2CppString*>("ModestTree", "ReflectionUtil", "ToDebugString", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()}, func));
    }
    // static public System.String ToDebugString(System.Func`4<TParam1,TParam2,TParam3,TParam4> func)
    // Offset: 0xC5EC88
    template<class TParam1, class TParam2, class TParam3, class TParam4>
    static ::Il2CppString* ToDebugString(System::Func_4<TParam1, TParam2, TParam3, TParam4>* func) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<::Il2CppString*>("ModestTree", "ReflectionUtil", "ToDebugString", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()}, func));
    }
  }; // ModestTree.ReflectionUtil
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::ReflectionUtil*, "ModestTree", "ReflectionUtil");
#pragma pack(pop)
