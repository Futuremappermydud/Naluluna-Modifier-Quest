// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:09 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Oculus.Platform.CloudStorageUpdateStatus
#include "Oculus/Platform/CloudStorageUpdateStatus.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.CloudStorageUpdateResponse
  class CloudStorageUpdateResponse : public ::Il2CppObject {
    public:
    // public readonly System.String Bucket
    // Offset: 0x10
    ::Il2CppString* Bucket;
    // public readonly System.String Key
    // Offset: 0x18
    ::Il2CppString* Key;
    // public readonly Oculus.Platform.CloudStorageUpdateStatus Status
    // Offset: 0x20
    Oculus::Platform::CloudStorageUpdateStatus Status;
    // public readonly System.String VersionHandle
    // Offset: 0x28
    ::Il2CppString* VersionHandle;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE8C544
    static CloudStorageUpdateResponse* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.CloudStorageUpdateResponse
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::CloudStorageUpdateResponse*, "Oculus.Platform.Models", "CloudStorageUpdateResponse");
#pragma pack(pop)
