// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:27 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.AudioBehaviour
#include "UnityEngine/AudioBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: FFTWindow
  struct FFTWindow;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AudioSource
  class AudioSource : public UnityEngine::AudioBehaviour {
    public:
    // static private System.Single GetPitch(UnityEngine.AudioSource source)
    // Offset: 0x194400C
    static float GetPitch(UnityEngine::AudioSource* source);
    // static private System.Void SetPitch(UnityEngine.AudioSource source, System.Single pitch)
    // Offset: 0x194404C
    static void SetPitch(UnityEngine::AudioSource* source, float pitch);
    // static private System.Void PlayHelper(UnityEngine.AudioSource source, System.UInt64 delay)
    // Offset: 0x194409C
    static void PlayHelper(UnityEngine::AudioSource* source, uint64_t delay);
    // private System.Void Play(System.Double delay)
    // Offset: 0x19440EC
    void Play(double delay);
    // static private System.Void PlayOneShotHelper(UnityEngine.AudioSource source, UnityEngine.AudioClip clip, System.Single volumeScale)
    // Offset: 0x194413C
    static void PlayOneShotHelper(UnityEngine::AudioSource* source, UnityEngine::AudioClip* clip, float volumeScale);
    // private System.Void Stop(System.Boolean stopOneShots)
    // Offset: 0x194419C
    void Stop(bool stopOneShots);
    // static private System.Void GetSpectrumDataHelper(UnityEngine.AudioSource source, System.Single[] samples, System.Int32 channel, UnityEngine.FFTWindow window)
    // Offset: 0x19441EC
    static void GetSpectrumDataHelper(UnityEngine::AudioSource* source, ::Array<float>*& samples, int channel, UnityEngine::FFTWindow window);
    // public System.Single get_volume()
    // Offset: 0x1944254
    float get_volume();
    // public System.Void set_volume(System.Single value)
    // Offset: 0x1944294
    void set_volume(float value);
    // public System.Single get_pitch()
    // Offset: 0x19442E4
    float get_pitch();
    // public System.Void set_pitch(System.Single value)
    // Offset: 0x1944324
    void set_pitch(float value);
    // public System.Single get_time()
    // Offset: 0x1944374
    float get_time();
    // public System.Void set_time(System.Single value)
    // Offset: 0x19443B4
    void set_time(float value);
    // public System.Int32 get_timeSamples()
    // Offset: 0x1944404
    int get_timeSamples();
    // public UnityEngine.AudioClip get_clip()
    // Offset: 0x1944444
    UnityEngine::AudioClip* get_clip();
    // public System.Void set_clip(UnityEngine.AudioClip value)
    // Offset: 0x1944484
    void set_clip(UnityEngine::AudioClip* value);
    // public System.Void Play()
    // Offset: 0x19444D4
    void Play();
    // public System.Void PlayScheduled(System.Double time)
    // Offset: 0x1944518
    void PlayScheduled(double time);
    // public System.Void PlayOneShot(UnityEngine.AudioClip clip)
    // Offset: 0x1944574
    void PlayOneShot(UnityEngine::AudioClip* clip);
    // public System.Void PlayOneShot(UnityEngine.AudioClip clip, System.Single volumeScale)
    // Offset: 0x194457C
    void PlayOneShot(UnityEngine::AudioClip* clip, float volumeScale);
    // public System.Void Stop()
    // Offset: 0x1944678
    void Stop();
    // public System.Void Pause()
    // Offset: 0x19446BC
    void Pause();
    // public System.Void UnPause()
    // Offset: 0x19446FC
    void UnPause();
    // public System.Boolean get_isPlaying()
    // Offset: 0x194473C
    bool get_isPlaying();
    // public System.Void set_loop(System.Boolean value)
    // Offset: 0x194477C
    void set_loop(bool value);
    // public System.Void set_playOnAwake(System.Boolean value)
    // Offset: 0x19447CC
    void set_playOnAwake(bool value);
    // public System.Void set_reverbZoneMix(System.Single value)
    // Offset: 0x194481C
    void set_reverbZoneMix(float value);
    // public System.Void set_priority(System.Int32 value)
    // Offset: 0x194486C
    void set_priority(int value);
    // public System.Void GetSpectrumData(System.Single[] samples, System.Int32 channel, UnityEngine.FFTWindow window)
    // Offset: 0x19448BC
    void GetSpectrumData(::Array<float>* samples, int channel, UnityEngine::FFTWindow window);
  }; // UnityEngine.AudioSource
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioSource*, "UnityEngine", "AudioSource");
#pragma pack(pop)
