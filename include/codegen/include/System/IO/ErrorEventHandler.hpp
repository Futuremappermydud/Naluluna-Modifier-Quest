// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:18 PM
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
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: ErrorEventArgs
  class ErrorEventArgs;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.ErrorEventHandler
  class ErrorEventHandler : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xF4FE30
    static ErrorEventHandler* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Object sender, System.IO.ErrorEventArgs e)
    // Offset: 0xF4FE44
    void Invoke(::Il2CppObject* sender, System::IO::ErrorEventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.IO.ErrorEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0xF50248
    System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, System::IO::ErrorEventArgs* e, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xF50278
    void EndInvoke(System::IAsyncResult* result);
  }; // System.IO.ErrorEventHandler
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::ErrorEventHandler*, "System.IO", "ErrorEventHandler");
#pragma pack(pop)
