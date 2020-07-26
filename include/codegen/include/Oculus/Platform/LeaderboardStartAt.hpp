// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:00 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.LeaderboardStartAt
  struct LeaderboardStartAt : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Oculus.Platform.LeaderboardStartAt Top
    static constexpr const int Top = 0;
    // Get static field: static public Oculus.Platform.LeaderboardStartAt Top
    static Oculus::Platform::LeaderboardStartAt _get_Top();
    // Set static field: static public Oculus.Platform.LeaderboardStartAt Top
    static void _set_Top(Oculus::Platform::LeaderboardStartAt value);
    // static field const value: static public Oculus.Platform.LeaderboardStartAt CenteredOnViewer
    static constexpr const int CenteredOnViewer = 1;
    // Get static field: static public Oculus.Platform.LeaderboardStartAt CenteredOnViewer
    static Oculus::Platform::LeaderboardStartAt _get_CenteredOnViewer();
    // Set static field: static public Oculus.Platform.LeaderboardStartAt CenteredOnViewer
    static void _set_CenteredOnViewer(Oculus::Platform::LeaderboardStartAt value);
    // static field const value: static public Oculus.Platform.LeaderboardStartAt CenteredOnViewerOrTop
    static constexpr const int CenteredOnViewerOrTop = 2;
    // Get static field: static public Oculus.Platform.LeaderboardStartAt CenteredOnViewerOrTop
    static Oculus::Platform::LeaderboardStartAt _get_CenteredOnViewerOrTop();
    // Set static field: static public Oculus.Platform.LeaderboardStartAt CenteredOnViewerOrTop
    static void _set_CenteredOnViewerOrTop(Oculus::Platform::LeaderboardStartAt value);
    // static field const value: static public Oculus.Platform.LeaderboardStartAt Unknown
    static constexpr const int Unknown = 3;
    // Get static field: static public Oculus.Platform.LeaderboardStartAt Unknown
    static Oculus::Platform::LeaderboardStartAt _get_Unknown();
    // Set static field: static public Oculus.Platform.LeaderboardStartAt Unknown
    static void _set_Unknown(Oculus::Platform::LeaderboardStartAt value);
    // Creating value type constructor for type: LeaderboardStartAt
    LeaderboardStartAt(int value_ = {}) : value{value_} {}
  }; // Oculus.Platform.LeaderboardStartAt
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::LeaderboardStartAt, "Oculus.Platform", "LeaderboardStartAt");
#pragma pack(pop)
