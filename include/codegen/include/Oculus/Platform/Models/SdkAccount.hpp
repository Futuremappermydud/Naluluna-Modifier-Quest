// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:09 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Oculus.Platform.SdkAccountType
#include "Oculus/Platform/SdkAccountType.hpp"
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
  // Autogenerated type: Oculus.Platform.Models.SdkAccount
  class SdkAccount : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.SdkAccountType AccountType
    // Offset: 0x10
    Oculus::Platform::SdkAccountType AccountType;
    // public readonly System.UInt64 UserId
    // Offset: 0x18
    uint64_t UserId;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE943AC
    static SdkAccount* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.SdkAccount
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::SdkAccount*, "Oculus.Platform.Models", "SdkAccount");
#pragma pack(pop)
