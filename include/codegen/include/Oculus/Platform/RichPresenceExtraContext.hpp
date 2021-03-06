// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:08 PM
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
  // Autogenerated type: Oculus.Platform.RichPresenceExtraContext
  struct RichPresenceExtraContext : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Oculus.Platform.RichPresenceExtraContext Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.RichPresenceExtraContext Unknown
    static Oculus::Platform::RichPresenceExtraContext _get_Unknown();
    // Set static field: static public Oculus.Platform.RichPresenceExtraContext Unknown
    static void _set_Unknown(Oculus::Platform::RichPresenceExtraContext value);
    // static field const value: static public Oculus.Platform.RichPresenceExtraContext None
    static constexpr const int None = 1;
    // Get static field: static public Oculus.Platform.RichPresenceExtraContext None
    static Oculus::Platform::RichPresenceExtraContext _get_None();
    // Set static field: static public Oculus.Platform.RichPresenceExtraContext None
    static void _set_None(Oculus::Platform::RichPresenceExtraContext value);
    // static field const value: static public Oculus.Platform.RichPresenceExtraContext CurrentCapacity
    static constexpr const int CurrentCapacity = 2;
    // Get static field: static public Oculus.Platform.RichPresenceExtraContext CurrentCapacity
    static Oculus::Platform::RichPresenceExtraContext _get_CurrentCapacity();
    // Set static field: static public Oculus.Platform.RichPresenceExtraContext CurrentCapacity
    static void _set_CurrentCapacity(Oculus::Platform::RichPresenceExtraContext value);
    // static field const value: static public Oculus.Platform.RichPresenceExtraContext StartedAgo
    static constexpr const int StartedAgo = 3;
    // Get static field: static public Oculus.Platform.RichPresenceExtraContext StartedAgo
    static Oculus::Platform::RichPresenceExtraContext _get_StartedAgo();
    // Set static field: static public Oculus.Platform.RichPresenceExtraContext StartedAgo
    static void _set_StartedAgo(Oculus::Platform::RichPresenceExtraContext value);
    // static field const value: static public Oculus.Platform.RichPresenceExtraContext EndingIn
    static constexpr const int EndingIn = 4;
    // Get static field: static public Oculus.Platform.RichPresenceExtraContext EndingIn
    static Oculus::Platform::RichPresenceExtraContext _get_EndingIn();
    // Set static field: static public Oculus.Platform.RichPresenceExtraContext EndingIn
    static void _set_EndingIn(Oculus::Platform::RichPresenceExtraContext value);
    // static field const value: static public Oculus.Platform.RichPresenceExtraContext LookingForAMatch
    static constexpr const int LookingForAMatch = 5;
    // Get static field: static public Oculus.Platform.RichPresenceExtraContext LookingForAMatch
    static Oculus::Platform::RichPresenceExtraContext _get_LookingForAMatch();
    // Set static field: static public Oculus.Platform.RichPresenceExtraContext LookingForAMatch
    static void _set_LookingForAMatch(Oculus::Platform::RichPresenceExtraContext value);
    // Creating value type constructor for type: RichPresenceExtraContext
    RichPresenceExtraContext(int value_ = {}) : value{value_} {}
  }; // Oculus.Platform.RichPresenceExtraContext
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::RichPresenceExtraContext, "Oculus.Platform", "RichPresenceExtraContext");
#pragma pack(pop)
