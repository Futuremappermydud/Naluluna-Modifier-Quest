// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:33 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.ParticleSystem/EmissionModule
  struct ParticleSystem::EmissionModule : public System::ValueType {
    public:
    // UnityEngine.ParticleSystem m_ParticleSystem
    // Offset: 0x0
    UnityEngine::ParticleSystem* m_ParticleSystem;
    // Creating value type constructor for type: EmissionModule
    EmissionModule(UnityEngine::ParticleSystem* m_ParticleSystem_ = {}) : m_ParticleSystem{m_ParticleSystem_} {}
    // System.Void .ctor(UnityEngine.ParticleSystem particleSystem)
    // Offset: 0xA5B828
    static ParticleSystem::EmissionModule* New_ctor(UnityEngine::ParticleSystem* particleSystem);
    // public System.Boolean get_enabled()
    // Offset: 0xA5B830
    bool get_enabled();
    // public System.Void set_enabled(System.Boolean value)
    // Offset: 0xA5B870
    void set_enabled(bool value);
    // static private System.Boolean get_enabled_Injected(UnityEngine.ParticleSystem/EmissionModule _unity_self)
    // Offset: 0x19527E4
    static bool get_enabled_Injected(UnityEngine::ParticleSystem::EmissionModule& _unity_self);
    // static private System.Void set_enabled_Injected(UnityEngine.ParticleSystem/EmissionModule _unity_self, System.Boolean value)
    // Offset: 0x1952874
    static void set_enabled_Injected(UnityEngine::ParticleSystem::EmissionModule& _unity_self, bool value);
  }; // UnityEngine.ParticleSystem/EmissionModule
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystem::EmissionModule, "UnityEngine", "ParticleSystem/EmissionModule");
#pragma pack(pop)
