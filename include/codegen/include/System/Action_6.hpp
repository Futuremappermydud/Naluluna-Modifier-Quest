// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Autogenerated type: System.Action`6
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
  class Action_6 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFF
    static Action_6<T1, T2, T3, T4, T5, T6>* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      return (Action_6<T1, T2, T3, T4, T5, T6>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Action_6<T1, T2, T3, T4, T5, T6>*>::get(), object, method)));
    }
    // public System.Void Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6)
    // Offset: 0xFFFFFFFF
    void Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", arg1, arg2, arg3, arg4, arg5, arg6));
    }
    // public System.IAsyncResult BeginInvoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, System::AsyncCallback* callback, ::Il2CppObject* object) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", arg1, arg2, arg3, arg4, arg5, arg6, callback, object));
    }
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFF
    void EndInvoke(System::IAsyncResult* result) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
    }
  }; // System.Action`6
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Action_6, "System", "Action`6");
#pragma pack(pop)
