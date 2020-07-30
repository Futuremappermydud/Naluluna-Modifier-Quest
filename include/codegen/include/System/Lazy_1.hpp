// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Threading.LazyThreadSafetyMode
#include "System/Threading/LazyThreadSafetyMode.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Boxed because it is already included!
  // Skipping declaration: LazyInternalExceptionHolder because it is already included!
  // Skipping declaration: <>c because it is already included!
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Runtime::ExceptionServices
namespace System::Runtime::ExceptionServices {
  // Forward declaring type: ExceptionDispatchInfo
  class ExceptionDispatchInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Lazy`1
  template<typename T>
  class Lazy_1 : public ::Il2CppObject {
    public:
    // Nested type: System::Lazy_1::Boxed<T>
    class Boxed;
    // Nested type: System::Lazy_1::LazyInternalExceptionHolder<T>
    class LazyInternalExceptionHolder;
    // Nested type: System::Lazy_1::$$c<T>
    class $$c;
    // Autogenerated type: System.Lazy`1/Boxed
    class Boxed : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = Lazy_1<T>*;
      // T m_value
      // Offset: 0x0
      T m_value;
      // System.Void .ctor(T value)
      // Offset: 0x126840C
      static typename Lazy_1<T>::Boxed* New_ctor(T value) {
        return (typename Lazy_1<T>::Boxed*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename Lazy_1<T>::Boxed*>::get(), value));
      }
    }; // System.Lazy`1/Boxed
    // Autogenerated type: System.Lazy`1/LazyInternalExceptionHolder
    class LazyInternalExceptionHolder : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = Lazy_1<T>*;
      // System.Runtime.ExceptionServices.ExceptionDispatchInfo m_edi
      // Offset: 0x0
      System::Runtime::ExceptionServices::ExceptionDispatchInfo* m_edi;
      // System.Void .ctor(System.Exception ex)
      // Offset: 0x1268448
      static typename Lazy_1<T>::LazyInternalExceptionHolder* New_ctor(System::Exception* ex) {
        return (typename Lazy_1<T>::LazyInternalExceptionHolder*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename Lazy_1<T>::LazyInternalExceptionHolder*>::get(), ex));
      }
    }; // System.Lazy`1/LazyInternalExceptionHolder
    // Autogenerated type: System.Lazy`1/<>c
    class $$c : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = Lazy_1<T>*;
      // Autogenerated static field getter
      // Get static field: static public readonly System.Lazy`1/<>c<T> <>9
      static typename System::Lazy_1<T>::$$c* _get_$$9() {
        return CRASH_UNLESS((il2cpp_utils::GetFieldValue<typename System::Lazy_1<T>::$$c*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename Lazy_1<T>::$$c*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly System.Lazy`1/<>c<T> <>9
      static void _set_$$9(typename System::Lazy_1<T>::$$c* value) {
        CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename Lazy_1<T>::$$c*>::get(), "<>9", value));
      }
      // static private System.Void .cctor()
      // Offset: 0x1268310
      static void _cctor() {
        CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename Lazy_1<T>::$$c*>::get(), ".cctor"));
      }
      // T <.cctor>b__27_0()
      // Offset: 0x1268404
      T $_cctor$b__27_0() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<T>(this, "<.cctor>b__27_0"));
      }
      // public System.Void .ctor()
      // Offset: 0x12683EC
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename Lazy_1<T>::$$c* New_ctor() {
        return (typename Lazy_1<T>::$$c*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename Lazy_1<T>::$$c*>::get()));
      }
    }; // System.Lazy`1/<>c
    // Autogenerated static field getter
    // Get static field: static private readonly System.Func`1<T> ALREADY_INVOKED_SENTINEL
    static System::Func_1<T>* _get_ALREADY_INVOKED_SENTINEL() {
      return CRASH_UNLESS((il2cpp_utils::GetFieldValue<System::Func_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Lazy_1<T>*>::get(), "ALREADY_INVOKED_SENTINEL")));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly System.Func`1<T> ALREADY_INVOKED_SENTINEL
    static void _set_ALREADY_INVOKED_SENTINEL(System::Func_1<T>* value) {
      CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Lazy_1<T>*>::get(), "ALREADY_INVOKED_SENTINEL", value));
    }
    // private System.Object m_boxed
    // Offset: 0x0
    ::Il2CppObject* m_boxed;
    // private System.Func`1<T> m_valueFactory
    // Offset: 0x0
    System::Func_1<T>* m_valueFactory;
    // private System.Object m_threadSafeObj
    // Offset: 0x0
    ::Il2CppObject* m_threadSafeObj;
    // public System.Void .ctor(System.Func`1<T> valueFactory)
    // Offset: 0x1268BF0
    static Lazy_1<T>* New_ctor(System::Func_1<T>* valueFactory) {
      return (Lazy_1<T>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Lazy_1<T>*>::get(), valueFactory));
    }
    // public System.Void .ctor(System.Threading.LazyThreadSafetyMode mode)
    // Offset: 0x1268C18
    static Lazy_1<T>* New_ctor(System::Threading::LazyThreadSafetyMode mode) {
      return (Lazy_1<T>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Lazy_1<T>*>::get(), mode));
    }
    // public System.Void .ctor(System.Func`1<T> valueFactory, System.Threading.LazyThreadSafetyMode mode)
    // Offset: 0x1268CE4
    static Lazy_1<T>* New_ctor(System::Func_1<T>* valueFactory, System::Threading::LazyThreadSafetyMode mode) {
      return (Lazy_1<T>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Lazy_1<T>*>::get(), valueFactory, mode));
    }
    // static private System.Object GetObjectFromMode(System.Threading.LazyThreadSafetyMode mode)
    // Offset: 0x1268E34
    static ::Il2CppObject* GetObjectFromMode(System::Threading::LazyThreadSafetyMode mode) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Lazy_1<T>*>::get(), "GetObjectFromMode", mode));
    }
    // private System.Void OnSerializing(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1268F3C
    void OnSerializing(System::Runtime::Serialization::StreamingContext context) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnSerializing", context));
    }
    // System.Threading.LazyThreadSafetyMode get_Mode()
    // Offset: 0x1269014
    System::Threading::LazyThreadSafetyMode get_Mode() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Threading::LazyThreadSafetyMode>(this, "get_Mode"));
    }
    // public System.Boolean get_IsValueCreated()
    // Offset: 0x126909C
    bool get_IsValueCreated() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsValueCreated"));
    }
    // public T get_Value()
    // Offset: 0x12690F4
    T get_Value() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<T>(this, "get_Value"));
    }
    // private T LazyInitValue()
    // Offset: 0x1269230
    T LazyInitValue() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<T>(this, "LazyInitValue"));
    }
    // private System.Lazy`1/Boxed<T> CreateValue()
    // Offset: 0x12696C0
    typename System::Lazy_1<T>::Boxed* CreateValue() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<typename System::Lazy_1<T>::Boxed*>(this, "CreateValue"));
    }
    // static private System.Void .cctor()
    // Offset: 0x1269C6C
    static void _cctor() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Lazy_1<T>*>::get(), ".cctor"));
    }
    // public System.Void .ctor()
    // Offset: 0x1268BC8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Lazy_1<T>* New_ctor() {
      return (Lazy_1<T>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Lazy_1<T>*>::get()));
    }
    // public override System.String ToString()
    // Offset: 0x1268F60
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
    }
  }; // System.Lazy`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Lazy_1, "System", "Lazy`1");
#pragma pack(pop)
