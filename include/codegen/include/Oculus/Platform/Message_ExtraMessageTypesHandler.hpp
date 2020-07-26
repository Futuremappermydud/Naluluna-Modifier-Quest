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
  // Autogenerated type: Oculus.Platform.Message/ExtraMessageTypesHandler
  class Message::ExtraMessageTypesHandler : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xE89BBC
    static Message::ExtraMessageTypesHandler* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Oculus.Platform.Message Invoke(System.IntPtr messageHandle, Oculus.Platform.Message/MessageType message_type)
    // Offset: 0xE89BD0
    Oculus::Platform::Message* Invoke(System::IntPtr messageHandle, Oculus::Platform::Message::MessageType message_type);
    // public System.IAsyncResult BeginInvoke(System.IntPtr messageHandle, Oculus.Platform.Message/MessageType message_type, System.AsyncCallback callback, System.Object object)
    // Offset: 0xE89E54
    System::IAsyncResult* BeginInvoke(System::IntPtr messageHandle, Oculus::Platform::Message::MessageType message_type, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Oculus.Platform.Message EndInvoke(System.IAsyncResult result)
    // Offset: 0xE89F00
    Oculus::Platform::Message* EndInvoke(System::IAsyncResult* result);
  }; // Oculus.Platform.Message/ExtraMessageTypesHandler
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Message::ExtraMessageTypesHandler*, "Oculus.Platform", "Message/ExtraMessageTypesHandler");
#pragma pack(pop)
