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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.InstalledApplication
  class InstalledApplication : public ::Il2CppObject {
    public:
    // public readonly System.String ApplicationId
    // Offset: 0x10
    ::Il2CppString* ApplicationId;
    // public readonly System.String PackageName
    // Offset: 0x18
    ::Il2CppString* PackageName;
    // public readonly System.String Status
    // Offset: 0x20
    ::Il2CppString* Status;
    // public readonly System.Int32 VersionCode
    // Offset: 0x28
    int VersionCode;
    // public readonly System.String VersionName
    // Offset: 0x30
    ::Il2CppString* VersionName;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE93504
    static InstalledApplication* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.InstalledApplication
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::InstalledApplication*, "Oculus.Platform.Models", "InstalledApplication");
#pragma pack(pop)
