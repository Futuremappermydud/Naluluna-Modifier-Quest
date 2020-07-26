// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:00 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Oculus.Platform.Message
#include "Oculus/Platform/Message.hpp"
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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.Message/Callback
  class Message::Callback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xE89B78
    static Message::Callback* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(Oculus.Platform.Message message)
    // Offset: 0xE80E98
    void Invoke(Oculus::Platform::Message* message);
    // public System.IAsyncResult BeginInvoke(Oculus.Platform.Message message, System.AsyncCallback callback, System.Object object)
    // Offset: 0xE89B8C
    System::IAsyncResult* BeginInvoke(Oculus::Platform::Message* message, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xE89BB0
    void EndInvoke(System::IAsyncResult* result);
  }; // Oculus.Platform.Message/Callback
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Message::Callback*, "Oculus.Platform", "Message/Callback");
#pragma pack(pop)
