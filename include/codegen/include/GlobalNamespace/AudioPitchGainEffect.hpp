// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:23 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AudioPitchGainEffect
  class AudioPitchGainEffect : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::AudioPitchGainEffect::$StartEffectCoroutine$d__4
    class $StartEffectCoroutine$d__4;
    // private UnityEngine.AudioSource _audioSource
    // Offset: 0x18
    UnityEngine::AudioSource* audioSource;
    // private System.Single _duration
    // Offset: 0x20
    float duration;
    // private UnityEngine.AnimationCurve _pitchCurve
    // Offset: 0x28
    UnityEngine::AnimationCurve* pitchCurve;
    // private UnityEngine.AnimationCurve _gainCurve
    // Offset: 0x30
    UnityEngine::AnimationCurve* gainCurve;
    // private System.Collections.IEnumerator StartEffectCoroutine(System.Single volumeScale, System.Action finishCallback)
    // Offset: 0x196F79C
    System::Collections::IEnumerator* StartEffectCoroutine(float volumeScale, System::Action* finishCallback);
    // public System.Void StartEffect(System.Single volumeScale, System.Action finishCallback)
    // Offset: 0x196F870
    void StartEffect(float volumeScale, System::Action* finishCallback);
    // public System.Void .ctor()
    // Offset: 0x196F89C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AudioPitchGainEffect* New_ctor();
  }; // AudioPitchGainEffect
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioPitchGainEffect*, "", "AudioPitchGainEffect");
#pragma pack(pop)
