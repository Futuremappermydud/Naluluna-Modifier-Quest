// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
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
// Type namespace: System
namespace System {
  // Autogenerated type: System.Func`8
  template<typename TResult, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
  class Func_8 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1266690
    static Func_8<TResult, T1, T2, T3, T4, T5, T6, T7>* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      return (Func_8<TResult, T1, T2, T3, T4, T5, T6, T7>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Func_8<TResult, T1, T2, T3, T4, T5, T6, T7>*>::get(), object, method));
    }
    // public TResult Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7)
    // Offset: 0x12666A4
    TResult Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TResult>(this, "Invoke", arg1, arg2, arg3, arg4, arg5, arg6, arg7));
    }
    // public System.IAsyncResult BeginInvoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1266B34
    System::IAsyncResult* BeginInvoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, System::AsyncCallback* callback, ::Il2CppObject* object) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", arg1, arg2, arg3, arg4, arg5, arg6, arg7, callback, object));
    }
    // public TResult EndInvoke(System.IAsyncResult result)
    // Offset: 0x1266B70
    TResult EndInvoke(System::IAsyncResult* result) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TResult>(this, "EndInvoke", result));
    }
  }; // System.Func`8
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Func_8, "System", "Func`8");
#pragma pack(pop)
