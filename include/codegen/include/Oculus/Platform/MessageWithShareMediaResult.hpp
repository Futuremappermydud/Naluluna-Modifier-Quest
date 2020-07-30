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
  // Forward declaring type: ShareMediaResult
  class ShareMediaResult;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithShareMediaResult
  class MessageWithShareMediaResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::ShareMediaResult*> {
    public:
    // protected Oculus.Platform.Models.ShareMediaResult GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xE92084
    Oculus::Platform::Models::ShareMediaResult* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xE88E60
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithShareMediaResult* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.ShareMediaResult GetShareMediaResult()
    // Offset: 0xE92040
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.ShareMediaResult Message::GetShareMediaResult()
    Oculus::Platform::Models::ShareMediaResult* GetShareMediaResult();
  }; // Oculus.Platform.MessageWithShareMediaResult
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithShareMediaResult*, "Oculus.Platform", "MessageWithShareMediaResult");
#pragma pack(pop)
