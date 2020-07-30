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
  // Forward declaring type: LinkedAccountList
  class LinkedAccountList;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithLinkedAccountList
  class MessageWithLinkedAccountList : public Oculus::Platform::Message_1<Oculus::Platform::Models::LinkedAccountList*> {
    public:
    // protected Oculus.Platform.Models.LinkedAccountList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xE8DA14
    Oculus::Platform::Models::LinkedAccountList* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xE8D970
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithLinkedAccountList* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.LinkedAccountList GetLinkedAccountList()
    // Offset: 0xE8D9D0
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.LinkedAccountList Message::GetLinkedAccountList()
    Oculus::Platform::Models::LinkedAccountList* GetLinkedAccountList();
  }; // Oculus.Platform.MessageWithLinkedAccountList
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLinkedAccountList*, "Oculus.Platform", "MessageWithLinkedAccountList");
#pragma pack(pop)
