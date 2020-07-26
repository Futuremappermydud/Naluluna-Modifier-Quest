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
  // Autogenerated type: Oculus.Platform.LivestreamingMicrophoneStatus
  struct LivestreamingMicrophoneStatus : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Oculus.Platform.LivestreamingMicrophoneStatus Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.LivestreamingMicrophoneStatus Unknown
    static Oculus::Platform::LivestreamingMicrophoneStatus _get_Unknown();
    // Set static field: static public Oculus.Platform.LivestreamingMicrophoneStatus Unknown
    static void _set_Unknown(Oculus::Platform::LivestreamingMicrophoneStatus value);
    // static field const value: static public Oculus.Platform.LivestreamingMicrophoneStatus MicrophoneOn
    static constexpr const int MicrophoneOn = 1;
    // Get static field: static public Oculus.Platform.LivestreamingMicrophoneStatus MicrophoneOn
    static Oculus::Platform::LivestreamingMicrophoneStatus _get_MicrophoneOn();
    // Set static field: static public Oculus.Platform.LivestreamingMicrophoneStatus MicrophoneOn
    static void _set_MicrophoneOn(Oculus::Platform::LivestreamingMicrophoneStatus value);
    // static field const value: static public Oculus.Platform.LivestreamingMicrophoneStatus MicrophoneOff
    static constexpr const int MicrophoneOff = 2;
    // Get static field: static public Oculus.Platform.LivestreamingMicrophoneStatus MicrophoneOff
    static Oculus::Platform::LivestreamingMicrophoneStatus _get_MicrophoneOff();
    // Set static field: static public Oculus.Platform.LivestreamingMicrophoneStatus MicrophoneOff
    static void _set_MicrophoneOff(Oculus::Platform::LivestreamingMicrophoneStatus value);
    // Creating value type constructor for type: LivestreamingMicrophoneStatus
    LivestreamingMicrophoneStatus(int value_ = {}) : value{value_} {}
  }; // Oculus.Platform.LivestreamingMicrophoneStatus
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::LivestreamingMicrophoneStatus, "Oculus.Platform", "LivestreamingMicrophoneStatus");
#pragma pack(pop)
