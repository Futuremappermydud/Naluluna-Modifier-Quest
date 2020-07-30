// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:09 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
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
  // Autogenerated type: Oculus.Platform.Models.Team
  class Team : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.Models.UserList AssignedUsers
    // Offset: 0x10
    Oculus::Platform::Models::UserList* AssignedUsers;
    // public readonly System.Int32 MaxUsers
    // Offset: 0x18
    int MaxUsers;
    // public readonly System.Int32 MinUsers
    // Offset: 0x1C
    int MinUsers;
    // public readonly System.String Name
    // Offset: 0x20
    ::Il2CppString* Name;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE94444
    static Team* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.Team
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Team*, "Oculus.Platform.Models", "Team");
#pragma pack(pop)
