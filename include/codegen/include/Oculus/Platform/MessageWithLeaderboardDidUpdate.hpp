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
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithLeaderboardDidUpdate
  class MessageWithLeaderboardDidUpdate : public Oculus::Platform::Message_1<bool> {
    public:
    // protected System.Boolean GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xE8D5C8
    bool GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xE885C0
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithLeaderboardDidUpdate* New_ctor(System::IntPtr c_message);
    // public override System.Boolean GetLeaderboardDidUpdate()
    // Offset: 0xE8D584
    // Implemented from: Oculus.Platform.Message
    // Base method: System.Boolean Message::GetLeaderboardDidUpdate()
    bool GetLeaderboardDidUpdate();
  }; // Oculus.Platform.MessageWithLeaderboardDidUpdate
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLeaderboardDidUpdate*, "Oculus.Platform", "MessageWithLeaderboardDidUpdate");
#pragma pack(pop)
