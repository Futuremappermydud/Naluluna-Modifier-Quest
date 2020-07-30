// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:30 PM
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
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Autogenerated type: UnityEngine.Events.UnityAction`1
  template<typename T0>
  class UnityAction_1 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x13EE998
    static UnityAction_1<T0>* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      return (UnityAction_1<T0>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityAction_1<T0>*>::get(), object, method));
    }
    // public System.Void Invoke(T0 arg0)
    // Offset: 0x13EE9AC
    void Invoke(T0 arg0) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", arg0));
    }
    // public System.IAsyncResult BeginInvoke(T0 arg0, System.AsyncCallback callback, System.Object object)
    // Offset: 0x13EEC28
    System::IAsyncResult* BeginInvoke(T0 arg0, System::AsyncCallback* callback, ::Il2CppObject* object) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", arg0, callback, object));
    }
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x13EECB8
    void EndInvoke(System::IAsyncResult* result) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
    }
  }; // UnityEngine.Events.UnityAction`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Events::UnityAction_1, "UnityEngine.Events", "UnityAction`1");
#pragma pack(pop)
