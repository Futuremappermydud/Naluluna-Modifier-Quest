// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:03 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Oculus.Platform.Models.DeserializableList`1
#include "Oculus/Platform/Models/DeserializableList_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LeaderboardEntry
  class LeaderboardEntry;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.LeaderboardEntryList
  class LeaderboardEntryList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::LeaderboardEntry*> {
    public:
    // public readonly System.UInt64 TotalCount
    // Offset: 0x28
    uint64_t TotalCount;
    // public System.Void .ctor(System.IntPtr a)
    // Offset: 0xE8D720
    static LeaderboardEntryList* New_ctor(System::IntPtr a);
  }; // Oculus.Platform.Models.LeaderboardEntryList
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LeaderboardEntryList*, "Oculus.Platform.Models", "LeaderboardEntryList");
#pragma pack(pop)
