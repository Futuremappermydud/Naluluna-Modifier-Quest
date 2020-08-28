// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SongPreviewPlayer
  class SongPreviewPlayer : public UnityEngine::MonoBehaviour {
    public:
    // private System.Int32 _channelsCount
    // Offset: 0x18
    int channelsCount;
    // private UnityEngine.AudioSource _audioSourcePrefab
    // Offset: 0x20
    UnityEngine::AudioSource* audioSourcePrefab;
    // private UnityEngine.AudioClip _defaultAudioClip
    // Offset: 0x28
    UnityEngine::AudioClip* defaultAudioClip;
    // private System.Single _volume
    // Offset: 0x30
    float volume;
    // private System.Single _ambientVolumeScale
    // Offset: 0x34
    float ambientVolumeScale;
    // private System.Single _defaultCrossfadeSpeed
    // Offset: 0x38
    float defaultCrossfadeSpeed;
    // private System.Single _defaultFadeOutSpeed
    // Offset: 0x3C
    float defaultFadeOutSpeed;
    // private UnityEngine.AudioSource[] _audioSources
    // Offset: 0x40
    ::Array<UnityEngine::AudioSource*>* audioSources;
    // private System.Int32 _activeChannel
    // Offset: 0x48
    int activeChannel;
    // private System.Single _timeToDefaultAudioTransition
    // Offset: 0x4C
    float timeToDefaultAudioTransition;
    // private System.Boolean _transitionAfterDelay
    // Offset: 0x50
    bool transitionAfterDelay;
    // private System.Single _volumeScale
    // Offset: 0x54
    float volumeScale;
    // private System.Single _fadeSpeed
    // Offset: 0x58
    float fadeSpeed;
    // public System.Single get_volume()
    // Offset: 0xB9C4BC
    float get_volume();
    // public System.Void set_volume(System.Single value)
    // Offset: 0xB9C4C4
    void set_volume(float value);
    // protected System.Void OnEnable()
    // Offset: 0xB9C4CC
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xB9C8D0
    void OnDisable();
    // protected System.Void Update()
    // Offset: 0xB9C9FC
    void Update();
    // public System.Void CrossfadeTo(UnityEngine.AudioClip audioClip, System.Single startTime, System.Single duration, System.Single volumeScale)
    // Offset: 0xB9C748
    void CrossfadeTo(UnityEngine::AudioClip* audioClip, float startTime, float duration, float volumeScale);
    // public System.Void FadeOut()
    // Offset: 0xB9CBC8
    void FadeOut();
    // public System.Void CrossfadeToDefault()
    // Offset: 0xB9CBE0
    void CrossfadeToDefault();
    // public System.Void .ctor()
    // Offset: 0xB9CD40
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SongPreviewPlayer* New_ctor();
  }; // SongPreviewPlayer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongPreviewPlayer*, "", "SongPreviewPlayer");
#pragma pack(pop)
