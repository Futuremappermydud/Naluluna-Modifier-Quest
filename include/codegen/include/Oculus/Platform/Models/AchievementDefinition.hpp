// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:08 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Oculus.Platform.AchievementType
#include "Oculus/Platform/AchievementType.hpp"
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
  // Autogenerated type: Oculus.Platform.Models.AchievementDefinition
  class AchievementDefinition : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.AchievementType Type
    // Offset: 0x10
    Oculus::Platform::AchievementType Type;
    // public readonly System.String Name
    // Offset: 0x18
    ::Il2CppString* Name;
    // public readonly System.UInt32 BitfieldLength
    // Offset: 0x20
    uint BitfieldLength;
    // public readonly System.UInt64 Target
    // Offset: 0x28
    uint64_t Target;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE9312C
    static AchievementDefinition* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.AchievementDefinition
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AchievementDefinition*, "Oculus.Platform.Models", "AchievementDefinition");
#pragma pack(pop)
