// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:47 PM
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
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Autogenerated type: System.Runtime.Serialization.DeserializationEventHandler
  class DeserializationEventHandler : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xE0A1EC
    static DeserializationEventHandler* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Object sender)
    // Offset: 0xE0A200
    void Invoke(::Il2CppObject* sender);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.AsyncCallback callback, System.Object object)
    // Offset: 0xE0A5B8
    System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xE0A5DC
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Runtime.Serialization.DeserializationEventHandler
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::DeserializationEventHandler*, "System.Runtime.Serialization", "DeserializationEventHandler");
#pragma pack(pop)
