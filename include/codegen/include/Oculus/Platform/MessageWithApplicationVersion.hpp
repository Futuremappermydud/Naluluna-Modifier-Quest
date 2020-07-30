// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:07 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: ApplicationVersion
  class ApplicationVersion;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithApplicationVersion
  class MessageWithApplicationVersion : public Oculus::Platform::Message_1<Oculus::Platform::Models::ApplicationVersion*> {
    public:
    // protected Oculus.Platform.Models.ApplicationVersion GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xE8A8A4
    Oculus::Platform::Models::ApplicationVersion* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xE87F60
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithApplicationVersion* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.ApplicationVersion GetApplicationVersion()
    // Offset: 0xE8A860
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.ApplicationVersion Message::GetApplicationVersion()
    Oculus::Platform::Models::ApplicationVersion* GetApplicationVersion();
  }; // Oculus.Platform.MessageWithApplicationVersion
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithApplicationVersion*, "Oculus.Platform", "MessageWithApplicationVersion");
#pragma pack(pop)
