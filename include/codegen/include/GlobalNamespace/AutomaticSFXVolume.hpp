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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AutomaticSFXVolumeParamsSO
  class AutomaticSFXVolumeParamsSO;
  // Forward declaring type: AudioManagerSO
  class AudioManagerSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AutomaticSFXVolume
  class AutomaticSFXVolume : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::AutomaticSFXVolume::InitData
    class InitData;
    // private AutomaticSFXVolumeParamsSO _params
    // Offset: 0x18
    GlobalNamespace::AutomaticSFXVolumeParamsSO* params;
    // private AudioManagerSO _audioManager
    // Offset: 0x20
    GlobalNamespace::AudioManagerSO* audioManager;
    // private AutomaticSFXVolume/InitData _initData
    // Offset: 0x28
    GlobalNamespace::AutomaticSFXVolume::InitData* initData;
    // private System.Single _sampleRate
    // Offset: 0x30
    float sampleRate;
    // private System.Single _volume
    // Offset: 0x34
    float volume;
    // private System.Single _envelope
    // Offset: 0x38
    float envelope;
    // private System.Single _attackSamples
    // Offset: 0x3C
    float attackSamples;
    // private System.Single _releaseSamples
    // Offset: 0x40
    float releaseSamples;
    // private System.Single _attackCoef
    // Offset: 0x44
    float attackCoef;
    // private System.Single _releaseCoef
    // Offset: 0x48
    float releaseCoef;
    // protected System.Void Start()
    // Offset: 0xB8B224
    void Start();
    // protected System.Void OnDisable()
    // Offset: 0xB8B304
    void OnDisable();
    // protected System.Void OnValidate()
    // Offset: 0xB8B398
    void OnValidate();
    // private System.Void RecalculateParams()
    // Offset: 0xB8B228
    void RecalculateParams();
    // protected System.Void OnAudioFilterRead(System.Single[] data, System.Int32 channels)
    // Offset: 0xB8B39C
    void OnAudioFilterRead(::Array<float>* data, int channels);
    // protected System.Void Update()
    // Offset: 0xB8B59C
    void Update();
    // public System.Void .ctor()
    // Offset: 0xB8B5D0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AutomaticSFXVolume* New_ctor();
  }; // AutomaticSFXVolume
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AutomaticSFXVolume*, "", "AutomaticSFXVolume");
#pragma pack(pop)
