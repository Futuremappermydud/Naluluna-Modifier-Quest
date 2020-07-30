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
  // Forward declaring type: MatchmakingEnqueueResult
  class MatchmakingEnqueueResult;
  // Forward declaring type: Room
  class Room;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom
  class MatchmakingEnqueueResultAndRoom : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.Models.MatchmakingEnqueueResult MatchmakingEnqueueResult
    // Offset: 0x10
    Oculus::Platform::Models::MatchmakingEnqueueResult* MatchmakingEnqueueResult;
    // public readonly Oculus.Platform.Models.Room Room
    // Offset: 0x18
    Oculus::Platform::Models::Room* Room;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE8EADC
    static MatchmakingEnqueueResultAndRoom* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*, "Oculus.Platform.Models", "MatchmakingEnqueueResultAndRoom");
#pragma pack(pop)
