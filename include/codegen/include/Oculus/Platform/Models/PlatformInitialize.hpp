// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:09 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Oculus.Platform.PlatformInitializeResult
#include "Oculus/Platform/PlatformInitializeResult.hpp"
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
  // Autogenerated type: Oculus.Platform.Models.PlatformInitialize
  class PlatformInitialize : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.PlatformInitializeResult Result
    // Offset: 0x10
    Oculus::Platform::PlatformInitializeResult Result;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE90B28
    static PlatformInitialize* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.PlatformInitialize
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::PlatformInitialize*, "Oculus.Platform.Models", "PlatformInitialize");
#pragma pack(pop)
