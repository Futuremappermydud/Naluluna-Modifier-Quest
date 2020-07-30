// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:09 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Oculus.Platform.LaunchType
#include "Oculus/Platform/LaunchType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserList
  class UserList;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.LaunchDetails
  class LaunchDetails : public ::Il2CppObject {
    public:
    // public readonly System.String DeeplinkMessage
    // Offset: 0x10
    ::Il2CppString* DeeplinkMessage;
    // public readonly System.String DestinationApiName
    // Offset: 0x18
    ::Il2CppString* DestinationApiName;
    // public readonly System.String LaunchSource
    // Offset: 0x20
    ::Il2CppString* LaunchSource;
    // public readonly Oculus.Platform.LaunchType LaunchType
    // Offset: 0x28
    Oculus::Platform::LaunchType LaunchType;
    // public readonly System.UInt64 RoomID
    // Offset: 0x30
    uint64_t RoomID;
    // public readonly Oculus.Platform.Models.UserList UsersOptional
    // Offset: 0x38
    Oculus::Platform::Models::UserList* UsersOptional;
    // public readonly Oculus.Platform.Models.UserList Users
    // Offset: 0x40
    Oculus::Platform::Models::UserList* Users;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE935F8
    static LaunchDetails* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.LaunchDetails
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LaunchDetails*, "Oculus.Platform.Models", "LaunchDetails");
#pragma pack(pop)
