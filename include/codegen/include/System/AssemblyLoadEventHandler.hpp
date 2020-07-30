// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:41 PM
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
  // Forward declaring type: AssemblyLoadEventArgs
  class AssemblyLoadEventArgs;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.AssemblyLoadEventHandler
  class AssemblyLoadEventHandler : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1314854
    static AssemblyLoadEventHandler* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Object sender, System.AssemblyLoadEventArgs args)
    // Offset: 0x1314868
    void Invoke(::Il2CppObject* sender, System::AssemblyLoadEventArgs* args);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.AssemblyLoadEventArgs args, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1314C6C
    System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, System::AssemblyLoadEventArgs* args, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1314C9C
    void EndInvoke(System::IAsyncResult* result);
  }; // System.AssemblyLoadEventHandler
}
DEFINE_IL2CPP_ARG_TYPE(System::AssemblyLoadEventHandler*, "System", "AssemblyLoadEventHandler");
#pragma pack(pop)
