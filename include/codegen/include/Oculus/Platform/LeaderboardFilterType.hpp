// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:06 PM
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
  // Autogenerated type: Oculus.Platform.LeaderboardFilterType
  struct LeaderboardFilterType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Oculus.Platform.LeaderboardFilterType None
    static constexpr const int None = 0;
    // Get static field: static public Oculus.Platform.LeaderboardFilterType None
    static Oculus::Platform::LeaderboardFilterType _get_None();
    // Set static field: static public Oculus.Platform.LeaderboardFilterType None
    static void _set_None(Oculus::Platform::LeaderboardFilterType value);
    // static field const value: static public Oculus.Platform.LeaderboardFilterType Friends
    static constexpr const int Friends = 1;
    // Get static field: static public Oculus.Platform.LeaderboardFilterType Friends
    static Oculus::Platform::LeaderboardFilterType _get_Friends();
    // Set static field: static public Oculus.Platform.LeaderboardFilterType Friends
    static void _set_Friends(Oculus::Platform::LeaderboardFilterType value);
    // static field const value: static public Oculus.Platform.LeaderboardFilterType Unknown
    static constexpr const int Unknown = 2;
    // Get static field: static public Oculus.Platform.LeaderboardFilterType Unknown
    static Oculus::Platform::LeaderboardFilterType _get_Unknown();
    // Set static field: static public Oculus.Platform.LeaderboardFilterType Unknown
    static void _set_Unknown(Oculus::Platform::LeaderboardFilterType value);
    // Creating value type constructor for type: LeaderboardFilterType
    LeaderboardFilterType(int value_ = {}) : value{value_} {}
  }; // Oculus.Platform.LeaderboardFilterType
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::LeaderboardFilterType, "Oculus.Platform", "LeaderboardFilterType");
#pragma pack(pop)
