// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:29 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: UnityEngine.ParticleSystem/ForceOverLifetimeModule
#include "UnityEngine/ParticleSystem_ForceOverLifetimeModule.hpp"
// Including type: UnityEngine.ParticleSystem/EmitParams
#include "UnityEngine/ParticleSystem_EmitParams.hpp"
// Including type: UnityEngine.ParticleSystem/MinMaxCurve
#include "UnityEngine/ParticleSystem_MinMaxCurve.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Color32 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberType
  struct SaberType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteCutParticlesEffect
  class NoteCutParticlesEffect : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.ParticleSystem[] _sparklesPS
    // Offset: 0x18
    ::Array<UnityEngine::ParticleSystem*>* sparklesPS;
    // private UnityEngine.ParticleSystem _explosionPS
    // Offset: 0x20
    UnityEngine::ParticleSystem* explosionPS;
    // private UnityEngine.ParticleSystem _explosionCorePS
    // Offset: 0x28
    UnityEngine::ParticleSystem* explosionCorePS;
    // private UnityEngine.ParticleSystem/EmitParams[] _sparklesPSEmitParams
    // Offset: 0x30
    ::Array<UnityEngine::ParticleSystem::EmitParams>* sparklesPSEmitParams;
    // private UnityEngine.ParticleSystem/MainModule[] _sparklesPSMainModule
    // Offset: 0x38
    ::Array<UnityEngine::ParticleSystem::MainModule>* sparklesPSMainModule;
    // private UnityEngine.ParticleSystem/ShapeModule[] _sparklesPSShapeModule
    // Offset: 0x40
    ::Array<UnityEngine::ParticleSystem::ShapeModule>* sparklesPSShapeModule;
    // private UnityEngine.ParticleSystem/ForceOverLifetimeModule _explosionPSForceOverLifetimeModule
    // Offset: 0x48
    UnityEngine::ParticleSystem::ForceOverLifetimeModule explosionPSForceOverLifetimeModule;
    // private UnityEngine.ParticleSystem/EmitParams _explosionPSEmitParams
    // Offset: 0x50
    UnityEngine::ParticleSystem::EmitParams explosionPSEmitParams;
    // private UnityEngine.ParticleSystem/EmitParams _explosionCoresPSEmitParams
    // Offset: 0xE0
    UnityEngine::ParticleSystem::EmitParams explosionCoresPSEmitParams;
    // private UnityEngine.ParticleSystem/MinMaxCurve _sparklesLifetimeMinMaxCurve
    // Offset: 0x170
    UnityEngine::ParticleSystem::MinMaxCurve sparklesLifetimeMinMaxCurve;
    // protected System.Void Awake()
    // Offset: 0xC01A3C
    void Awake();
    // public System.Void SpawnParticles(UnityEngine.Vector3 pos, UnityEngine.Vector3 cutNormal, UnityEngine.Vector3 saberDir, UnityEngine.Vector3 moveVec, UnityEngine.Color32 color, System.Int32 sparkleParticlesCount, System.Int32 explosionParticlesCount, System.Single lifetimeMultiplier, SaberType saberType)
    // Offset: 0xC00B78
    void SpawnParticles(UnityEngine::Vector3 pos, UnityEngine::Vector3 cutNormal, UnityEngine::Vector3 saberDir, UnityEngine::Vector3 moveVec, UnityEngine::Color32 color, int sparkleParticlesCount, int explosionParticlesCount, float lifetimeMultiplier, GlobalNamespace::SaberType saberType);
    // public System.Void .ctor()
    // Offset: 0xC01C2C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NoteCutParticlesEffect* New_ctor();
  }; // NoteCutParticlesEffect
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutParticlesEffect*, "", "NoteCutParticlesEffect");
#pragma pack(pop)
