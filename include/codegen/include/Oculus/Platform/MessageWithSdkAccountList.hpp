// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:01 PM
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
  // Forward declaring type: SdkAccountList
  class SdkAccountList;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithSdkAccountList
  class MessageWithSdkAccountList : public Oculus::Platform::Message_1<Oculus::Platform::Models::SdkAccountList*> {
    public:
    // protected Oculus.Platform.Models.SdkAccountList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xE91DCC
    Oculus::Platform::Models::SdkAccountList* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xE88E00
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithSdkAccountList* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.SdkAccountList GetSdkAccountList()
    // Offset: 0xE91D88
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.SdkAccountList Message::GetSdkAccountList()
    Oculus::Platform::Models::SdkAccountList* GetSdkAccountList();
  }; // Oculus.Platform.MessageWithSdkAccountList
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithSdkAccountList*, "Oculus.Platform", "MessageWithSdkAccountList");
#pragma pack(pop)
