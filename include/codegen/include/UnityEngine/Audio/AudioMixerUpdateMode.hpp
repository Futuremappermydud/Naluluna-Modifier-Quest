// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:27 PM
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
// Type namespace: UnityEngine.Audio
namespace UnityEngine::Audio {
  // Autogenerated type: UnityEngine.Audio.AudioMixerUpdateMode
  struct AudioMixerUpdateMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.Audio.AudioMixerUpdateMode Normal
    static constexpr const int Normal = 0;
    // Get static field: static public UnityEngine.Audio.AudioMixerUpdateMode Normal
    static UnityEngine::Audio::AudioMixerUpdateMode _get_Normal();
    // Set static field: static public UnityEngine.Audio.AudioMixerUpdateMode Normal
    static void _set_Normal(UnityEngine::Audio::AudioMixerUpdateMode value);
    // static field const value: static public UnityEngine.Audio.AudioMixerUpdateMode UnscaledTime
    static constexpr const int UnscaledTime = 1;
    // Get static field: static public UnityEngine.Audio.AudioMixerUpdateMode UnscaledTime
    static UnityEngine::Audio::AudioMixerUpdateMode _get_UnscaledTime();
    // Set static field: static public UnityEngine.Audio.AudioMixerUpdateMode UnscaledTime
    static void _set_UnscaledTime(UnityEngine::Audio::AudioMixerUpdateMode value);
    // Creating value type constructor for type: AudioMixerUpdateMode
    AudioMixerUpdateMode(int value_ = {}) : value{value_} {}
  }; // UnityEngine.Audio.AudioMixerUpdateMode
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Audio::AudioMixerUpdateMode, "UnityEngine.Audio", "AudioMixerUpdateMode");
#pragma pack(pop)
