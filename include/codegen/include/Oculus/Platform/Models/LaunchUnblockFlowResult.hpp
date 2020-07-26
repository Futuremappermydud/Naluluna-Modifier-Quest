// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:03 PM
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
  // Autogenerated type: Oculus.Platform.Models.LaunchUnblockFlowResult
  class LaunchUnblockFlowResult : public ::Il2CppObject {
    public:
    // public readonly System.Boolean DidCancel
    // Offset: 0x10
    bool DidCancel;
    // public readonly System.Boolean DidUnblock
    // Offset: 0x11
    bool DidUnblock;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE8D4E4
    static LaunchUnblockFlowResult* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.LaunchUnblockFlowResult
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LaunchUnblockFlowResult*, "Oculus.Platform.Models", "LaunchUnblockFlowResult");
#pragma pack(pop)
