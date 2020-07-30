// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:27 PM
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
// Forward declaring namespace: UnityEngine::Experimental::Audio
namespace UnityEngine::Experimental::Audio {
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Audio
namespace UnityEngine::Experimental::Audio {
  // Autogenerated type: UnityEngine.Experimental.Audio.AudioSampleProvider
  class AudioSampleProvider : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler
    class SampleFramesHandler;
    // private UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler sampleFramesAvailable
    // Offset: 0x10
    UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler* sampleFramesAvailable;
    // private UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler sampleFramesOverflow
    // Offset: 0x18
    UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler* sampleFramesOverflow;
    // private System.Void InvokeSampleFramesAvailable(System.Int32 sampleFrameCount)
    // Offset: 0x1944924
    void InvokeSampleFramesAvailable(int sampleFrameCount);
    // private System.Void InvokeSampleFramesOverflow(System.Int32 droppedSampleFrameCount)
    // Offset: 0x1944D6C
    void InvokeSampleFramesOverflow(int droppedSampleFrameCount);
  }; // UnityEngine.Experimental.Audio.AudioSampleProvider
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Audio::AudioSampleProvider*, "UnityEngine.Experimental.Audio", "AudioSampleProvider");
#pragma pack(pop)
