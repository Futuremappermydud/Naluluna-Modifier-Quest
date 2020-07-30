// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:50 PM
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
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: Header
  class Header;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.HeaderHandler
  class HeaderHandler : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1053FF8
    static HeaderHandler* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Object Invoke(System.Runtime.Remoting.Messaging.Header[] headers)
    // Offset: 0x105400C
    ::Il2CppObject* Invoke(::Array<System::Runtime::Remoting::Messaging::Header*>* headers);
    // public System.IAsyncResult BeginInvoke(System.Runtime.Remoting.Messaging.Header[] headers, System.AsyncCallback callback, System.Object object)
    // Offset: 0x10543CC
    System::IAsyncResult* BeginInvoke(::Array<System::Runtime::Remoting::Messaging::Header*>* headers, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Object EndInvoke(System.IAsyncResult result)
    // Offset: 0x10543F0
    ::Il2CppObject* EndInvoke(System::IAsyncResult* result);
  }; // System.Runtime.Remoting.Messaging.HeaderHandler
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::HeaderHandler*, "System.Runtime.Remoting.Messaging", "HeaderHandler");
#pragma pack(pop)
