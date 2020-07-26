// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:25 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioDataLoadState
  struct AudioDataLoadState;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AudioClip
  class AudioClip : public UnityEngine::Object {
    public:
    // Nested type: UnityEngine::AudioClip::PCMReaderCallback
    class PCMReaderCallback;
    // Nested type: UnityEngine::AudioClip::PCMSetPositionCallback
    class PCMSetPositionCallback;
    // private UnityEngine.AudioClip/PCMReaderCallback m_PCMReaderCallback
    // Offset: 0x18
    UnityEngine::AudioClip::PCMReaderCallback* m_PCMReaderCallback;
    // private UnityEngine.AudioClip/PCMSetPositionCallback m_PCMSetPositionCallback
    // Offset: 0x20
    UnityEngine::AudioClip::PCMSetPositionCallback* m_PCMSetPositionCallback;
    // static private System.Boolean GetData(UnityEngine.AudioClip clip, System.Single[] data, System.Int32 numSamples, System.Int32 samplesOffset)
    // Offset: 0x194235C
    static bool GetData(UnityEngine::AudioClip* clip, ::Array<float>*& data, int numSamples, int samplesOffset);
    // static private System.Boolean SetData(UnityEngine.AudioClip clip, System.Single[] data, System.Int32 numsamples, System.Int32 samplesOffset)
    // Offset: 0x19423C4
    static bool SetData(UnityEngine::AudioClip* clip, ::Array<float>* data, int numsamples, int samplesOffset);
    // static private UnityEngine.AudioClip Construct_Internal()
    // Offset: 0x194242C
    static UnityEngine::AudioClip* Construct_Internal();
    // private System.String GetName()
    // Offset: 0x1942460
    ::Il2CppString* GetName();
    // private System.Void CreateUserSound(System.String name, System.Int32 lengthSamples, System.Int32 channels, System.Int32 frequency, System.Boolean stream)
    // Offset: 0x19424A0
    void CreateUserSound(::Il2CppString* name, int lengthSamples, int channels, int frequency, bool stream);
    // public System.Single get_length()
    // Offset: 0x194120C
    float get_length();
    // public System.Int32 get_samples()
    // Offset: 0x1942520
    int get_samples();
    // public System.Int32 get_channels()
    // Offset: 0x1942560
    int get_channels();
    // public System.Int32 get_frequency()
    // Offset: 0x19425A0
    int get_frequency();
    // public System.Boolean LoadAudioData()
    // Offset: 0x19425E0
    bool LoadAudioData();
    // public UnityEngine.AudioDataLoadState get_loadState()
    // Offset: 0x1942620
    UnityEngine::AudioDataLoadState get_loadState();
    // public System.Boolean GetData(System.Single[] data, System.Int32 offsetSamples)
    // Offset: 0x1942660
    bool GetData(::Array<float>* data, int offsetSamples);
    // public System.Boolean SetData(System.Single[] data, System.Int32 offsetSamples)
    // Offset: 0x19427EC
    bool SetData(::Array<float>* data, int offsetSamples);
    // static public UnityEngine.AudioClip Create(System.String name, System.Int32 lengthSamples, System.Int32 channels, System.Int32 frequency, System.Boolean stream)
    // Offset: 0x1942A04
    static UnityEngine::AudioClip* Create(::Il2CppString* name, int lengthSamples, int channels, int frequency, bool stream);
    // static public UnityEngine.AudioClip Create(System.String name, System.Int32 lengthSamples, System.Int32 channels, System.Int32 frequency, System.Boolean stream, UnityEngine.AudioClip/PCMReaderCallback pcmreadercallback, UnityEngine.AudioClip/PCMSetPositionCallback pcmsetpositioncallback)
    // Offset: 0x1942A14
    static UnityEngine::AudioClip* Create(::Il2CppString* name, int lengthSamples, int channels, int frequency, bool stream, UnityEngine::AudioClip::PCMReaderCallback* pcmreadercallback, UnityEngine::AudioClip::PCMSetPositionCallback* pcmsetpositioncallback);
    // private System.Void add_m_PCMReaderCallback(UnityEngine.AudioClip/PCMReaderCallback value)
    // Offset: 0x1942BD0
    void add_m_PCMReaderCallback(UnityEngine::AudioClip::PCMReaderCallback* value);
    // private System.Void remove_m_PCMReaderCallback(UnityEngine.AudioClip/PCMReaderCallback value)
    // Offset: 0x1942D18
    void remove_m_PCMReaderCallback(UnityEngine::AudioClip::PCMReaderCallback* value);
    // private System.Void add_m_PCMSetPositionCallback(UnityEngine.AudioClip/PCMSetPositionCallback value)
    // Offset: 0x1942C74
    void add_m_PCMSetPositionCallback(UnityEngine::AudioClip::PCMSetPositionCallback* value);
    // private System.Void remove_m_PCMSetPositionCallback(UnityEngine.AudioClip/PCMSetPositionCallback value)
    // Offset: 0x1942DBC
    void remove_m_PCMSetPositionCallback(UnityEngine::AudioClip::PCMSetPositionCallback* value);
    // private System.Void InvokePCMReaderCallback_Internal(System.Single[] data)
    // Offset: 0x1942E60
    void InvokePCMReaderCallback_Internal(::Array<float>* data);
    // private System.Void InvokePCMSetPositionCallback_Internal(System.Int32 position)
    // Offset: 0x1943228
    void InvokePCMSetPositionCallback_Internal(int position);
    // private System.Void .ctor()
    // Offset: 0x19422D4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AudioClip* New_ctor();
  }; // UnityEngine.AudioClip
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioClip*, "UnityEngine", "AudioClip");
#pragma pack(pop)
