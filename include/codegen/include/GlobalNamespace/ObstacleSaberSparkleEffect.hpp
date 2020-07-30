// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:29 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ParticleSystem/EmissionModule
#include "UnityEngine/ParticleSystem_EmissionModule.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
  // Forward declaring type: Color
  struct Color;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ObstacleSaberSparkleEffect
  class ObstacleSaberSparkleEffect : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.ParticleSystem _sparkleParticleSystem
    // Offset: 0x18
    UnityEngine::ParticleSystem* sparkleParticleSystem;
    // private UnityEngine.ParticleSystem _burnParticleSystem
    // Offset: 0x20
    UnityEngine::ParticleSystem* burnParticleSystem;
    // private UnityEngine.ParticleSystem/EmissionModule _sparkleParticleSystemEmmisionModule
    // Offset: 0x28
    UnityEngine::ParticleSystem::EmissionModule sparkleParticleSystemEmmisionModule;
    // private UnityEngine.ParticleSystem/EmissionModule _burnParticleSystemEmmisionModule
    // Offset: 0x30
    UnityEngine::ParticleSystem::EmissionModule burnParticleSystemEmmisionModule;
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0xC1FEA0
    void set_color(UnityEngine::Color value);
    // protected System.Void Awake()
    // Offset: 0xC1FFAC
    void Awake();
    // public System.Void SetPositionAndRotation(UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
    // Offset: 0xC2002C
    void SetPositionAndRotation(UnityEngine::Vector3 pos, UnityEngine::Quaternion rot);
    // public System.Void StartEmission()
    // Offset: 0xC200A8
    void StartEmission();
    // public System.Void StopEmission()
    // Offset: 0xC20100
    void StopEmission();
    // public System.Void .ctor()
    // Offset: 0xC2016C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ObstacleSaberSparkleEffect* New_ctor();
  }; // ObstacleSaberSparkleEffect
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleSaberSparkleEffect*, "", "ObstacleSaberSparkleEffect");
#pragma pack(pop)
