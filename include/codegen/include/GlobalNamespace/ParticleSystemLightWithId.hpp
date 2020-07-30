// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: LightWithId
#include "GlobalNamespace/LightWithId.hpp"
// Including type: UnityEngine.ParticleSystem/MainModule
#include "UnityEngine/ParticleSystem_MainModule.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ParticleSystemLightWithId
  class ParticleSystemLightWithId : public GlobalNamespace::LightWithId {
    public:
    // private UnityEngine.ParticleSystem _particleSystem
    // Offset: 0x30
    UnityEngine::ParticleSystem* particleSystem;
    // private System.Single _intensity
    // Offset: 0x38
    float intensity;
    // private System.Single _minAlpha
    // Offset: 0x3C
    float minAlpha;
    // private System.Boolean setOnlyOnce
    // Offset: 0x40
    bool setOnlyOnce;
    // private UnityEngine.ParticleSystem/MainModule _mainModule
    // Offset: 0x48
    UnityEngine::ParticleSystem::MainModule mainModule;
    // private UnityEngine.ParticleSystem/Particle[] _particles
    // Offset: 0x50
    ::Array<UnityEngine::ParticleSystem::Particle>* particles;
    // public UnityEngine.Color get_color()
    // Offset: 0x1815FD0
    UnityEngine::Color get_color();
    // protected System.Void Awake()
    // Offset: 0x1816030
    void Awake();
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x18160EC
    // Implemented from: LightWithId
    // Base method: System.Void LightWithId::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x18162D4
    // Implemented from: LightWithId
    // Base method: System.Void LightWithId::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ParticleSystemLightWithId* New_ctor();
  }; // ParticleSystemLightWithId
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ParticleSystemLightWithId*, "", "ParticleSystemLightWithId");
#pragma pack(pop)
