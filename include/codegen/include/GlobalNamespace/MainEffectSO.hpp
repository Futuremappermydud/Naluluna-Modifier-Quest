// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MainEffectSO
  class MainEffectSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // public System.Void PreRender()
    // Offset: 0x19121FC
    void PreRender();
    // public System.Void Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, System.Single fade)
    // Offset: 0x1912200
    void Render(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest, float fade);
    // public System.Void PostRender(System.Single fade)
    // Offset: 0x1912204
    void PostRender(float fade);
    // public System.Boolean get_hasPostProcessEffect()
    // Offset: 0x1912208
    bool get_hasPostProcessEffect();
    // public System.Void .ctor()
    // Offset: 0x1911890
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MainEffectSO* New_ctor();
  }; // MainEffectSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainEffectSO*, "", "MainEffectSO");
#pragma pack(pop)
