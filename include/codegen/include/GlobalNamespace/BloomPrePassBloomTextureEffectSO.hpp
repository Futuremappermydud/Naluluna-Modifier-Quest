// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:04 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: BloomPrePassEffectSO
#include "GlobalNamespace/BloomPrePassEffectSO.hpp"
// Including type: PyramidBloomRendererSO/Pass
#include "GlobalNamespace/PyramidBloomRendererSO_Pass.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: PyramidBloomRendererSO because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BloomPrePassBloomTextureEffectSO
  class BloomPrePassBloomTextureEffectSO : public GlobalNamespace::BloomPrePassEffectSO {
    public:
    // private System.Single _radius
    // Offset: 0x2C
    float radius;
    // private System.Single _intensity
    // Offset: 0x30
    float intensity;
    // private System.Boolean _uniformPyramidWeights
    // Offset: 0x34
    bool uniformPyramidWeights;
    // private System.Single _pyramidWeightsParam
    // Offset: 0x38
    float pyramidWeightsParam;
    // private PyramidBloomRendererSO/Pass _prefilterPass
    // Offset: 0x3C
    GlobalNamespace::PyramidBloomRendererSO::Pass prefilterPass;
    // private PyramidBloomRendererSO/Pass _downsamplePass
    // Offset: 0x40
    GlobalNamespace::PyramidBloomRendererSO::Pass downsamplePass;
    // private PyramidBloomRendererSO/Pass _upsamplePass
    // Offset: 0x44
    GlobalNamespace::PyramidBloomRendererSO::Pass upsamplePass;
    // private PyramidBloomRendererSO/Pass _finalUpsamplePass
    // Offset: 0x48
    GlobalNamespace::PyramidBloomRendererSO::Pass finalUpsamplePass;
    // private PyramidBloomRendererSO _bloomRenderer
    // Offset: 0x50
    GlobalNamespace::PyramidBloomRendererSO* bloomRenderer;
    // public override System.Void Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest)
    // Offset: 0x18F5C48
    // Implemented from: TextureEffectSO
    // Base method: System.Void TextureEffectSO::Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest)
    void Render(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest);
    // public System.Void .ctor()
    // Offset: 0x18F5C98
    // Implemented from: BloomPrePassEffectSO
    // Base method: System.Void BloomPrePassEffectSO::.ctor()
    // Base method: System.Void TextureEffectSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BloomPrePassBloomTextureEffectSO* New_ctor();
  }; // BloomPrePassBloomTextureEffectSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBloomTextureEffectSO*, "", "BloomPrePassBloomTextureEffectSO");
#pragma pack(pop)
