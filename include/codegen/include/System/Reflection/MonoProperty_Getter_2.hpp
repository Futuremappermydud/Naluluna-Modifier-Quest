// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:43 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: System.Reflection.MonoProperty
#include "System/Reflection/MonoProperty.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.MonoProperty/Getter`2
  template<typename R, typename T>
  class MonoProperty::Getter_2 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1461120
    static MonoProperty::Getter_2<R, T>* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      return (MonoProperty::Getter_2<R, T>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoProperty::Getter_2<R, T>*>::get(), object, method));
    }
    // public R Invoke(T _this)
    // Offset: 0x1461134
    R Invoke(T _this) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<R>(this, "Invoke", _this));
    }
    // public System.IAsyncResult BeginInvoke(T _this, System.AsyncCallback callback, System.Object object)
    // Offset: 0x14614F4
    System::IAsyncResult* BeginInvoke(T _this, System::AsyncCallback* callback, ::Il2CppObject* object) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", _this, callback, object));
    }
    // public R EndInvoke(System.IAsyncResult result)
    // Offset: 0x1461518
    R EndInvoke(System::IAsyncResult* result) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<R>(this, "EndInvoke", result));
    }
  }; // System.Reflection.MonoProperty/Getter`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Reflection::MonoProperty::Getter_2, "System.Reflection", "MonoProperty/Getter`2");
#pragma pack(pop)
