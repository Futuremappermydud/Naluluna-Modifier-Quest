// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:03 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Oculus.Platform.PermissionGrantStatus
#include "Oculus/Platform/PermissionGrantStatus.hpp"
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
  // Autogenerated type: Oculus.Platform.Models.SystemPermission
  class SystemPermission : public ::Il2CppObject {
    public:
    // public readonly System.Boolean HasPermission
    // Offset: 0x10
    bool HasPermission;
    // public readonly Oculus.Platform.PermissionGrantStatus PermissionGrantStatus
    // Offset: 0x14
    Oculus::Platform::PermissionGrantStatus PermissionGrantStatus;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE92394
    static SystemPermission* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.SystemPermission
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::SystemPermission*, "Oculus.Platform.Models", "SystemPermission");
#pragma pack(pop)
