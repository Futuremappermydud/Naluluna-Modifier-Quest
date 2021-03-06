// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:08 PM
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
  // Forward declaring type: HttpTransferUpdate
  class HttpTransferUpdate;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithHttpTransferUpdate
  class MessageWithHttpTransferUpdate : public Oculus::Platform::Message_1<Oculus::Platform::Models::HttpTransferUpdate*> {
    public:
    // protected Oculus.Platform.Models.HttpTransferUpdate GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xE8C960
    Oculus::Platform::Models::HttpTransferUpdate* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xE89220
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithHttpTransferUpdate* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.HttpTransferUpdate GetHttpTransferUpdate()
    // Offset: 0xE8C91C
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.HttpTransferUpdate Message::GetHttpTransferUpdate()
    Oculus::Platform::Models::HttpTransferUpdate* GetHttpTransferUpdate();
  }; // Oculus.Platform.MessageWithHttpTransferUpdate
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithHttpTransferUpdate*, "Oculus.Platform", "MessageWithHttpTransferUpdate");
#pragma pack(pop)
