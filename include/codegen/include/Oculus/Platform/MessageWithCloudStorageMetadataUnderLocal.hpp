// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:00 PM
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
  // Forward declaring type: CloudStorageMetadata
  class CloudStorageMetadata;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithCloudStorageMetadataUnderLocal
  class MessageWithCloudStorageMetadataUnderLocal : public Oculus::Platform::Message_1<Oculus::Platform::Models::CloudStorageMetadata*> {
    public:
    // protected Oculus.Platform.Models.CloudStorageMetadata GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xE8C2A4
    Oculus::Platform::Models::CloudStorageMetadata* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xE88380
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithCloudStorageMetadataUnderLocal* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.CloudStorageMetadata GetCloudStorageMetadata()
    // Offset: 0xE8C260
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.CloudStorageMetadata Message::GetCloudStorageMetadata()
    Oculus::Platform::Models::CloudStorageMetadata* GetCloudStorageMetadata();
  }; // Oculus.Platform.MessageWithCloudStorageMetadataUnderLocal
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal*, "Oculus.Platform", "MessageWithCloudStorageMetadataUnderLocal");
#pragma pack(pop)
