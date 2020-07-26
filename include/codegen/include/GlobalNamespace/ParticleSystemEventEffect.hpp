// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:14 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.ParticleSystem/MainModule
#include "UnityEngine/ParticleSystem_MainModule.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
  // Forward declaring type: BeatmapObjectCallbackController
  class BeatmapObjectCallbackController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ParticleSystemEventEffect
  class ParticleSystemEventEffect : public UnityEngine::MonoBehaviour {
    public:
    // private ColorSO _lightColor0
    // Offset: 0x18
    GlobalNamespace::ColorSO* lightColor0;
    // private ColorSO _lightColor1
    // Offset: 0x20
    GlobalNamespace::ColorSO* lightColor1;
    // private ColorSO _highlightColor0
    // Offset: 0x28
    GlobalNamespace::ColorSO* highlightColor0;
    // private ColorSO _highlightColor1
    // Offset: 0x30
    GlobalNamespace::ColorSO* highlightColor1;
    // private System.Boolean _lightOnStart
    // Offset: 0x38
    bool lightOnStart;
    // private BeatmapEventType _colorEvent
    // Offset: 0x3C
    GlobalNamespace::BeatmapEventType colorEvent;
    // private UnityEngine.ParticleSystem _particleSystem
    // Offset: 0x40
    UnityEngine::ParticleSystem* particleSystem;
    // private BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Offset: 0x48
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // private System.Boolean _lightIsOn
    // Offset: 0x50
    bool lightIsOn;
    // private UnityEngine.Color _offColor
    // Offset: 0x54
    UnityEngine::Color offColor;
    // private System.Single _highlightValue
    // Offset: 0x64
    float highlightValue;
    // private UnityEngine.Color _afterHighlightColor
    // Offset: 0x68
    UnityEngine::Color afterHighlightColor;
    // private UnityEngine.Color _highlightColor
    // Offset: 0x78
    UnityEngine::Color highlightColor;
    // private System.Single kFadeSpeed
    // Offset: 0x88
    float kFadeSpeed;
    // private System.Single _particleSpeedMultiplier
    // Offset: 0x8C
    float particleSpeedMultiplier;
    // private UnityEngine.ParticleSystem/MainModule _mainModule
    // Offset: 0x90
    UnityEngine::ParticleSystem::MainModule mainModule;
    // private UnityEngine.ParticleSystem/Particle[] _particles
    // Offset: 0x98
    ::Array<UnityEngine::ParticleSystem::Particle>* particles;
    // private UnityEngine.Color _particleColor
    // Offset: 0xA0
    UnityEngine::Color particleColor;
    // private System.Single _particleSpeed
    // Offset: 0xB0
    float particleSpeed;
    // protected System.Void Start()
    // Offset: 0xBBD034
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0xBBD2E8
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0xBBD3C0
    void Update();
    // private System.Void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(BeatmapEventData beatmapEventData)
    // Offset: 0xBBD4E4
    void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // private System.Void RefreshParticles()
    // Offset: 0xBBD1AC
    void RefreshParticles();
    // public System.Void .ctor()
    // Offset: 0xBBD6CC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ParticleSystemEventEffect* New_ctor();
  }; // ParticleSystemEventEffect
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ParticleSystemEventEffect*, "", "ParticleSystemEventEffect");
#pragma pack(pop)
