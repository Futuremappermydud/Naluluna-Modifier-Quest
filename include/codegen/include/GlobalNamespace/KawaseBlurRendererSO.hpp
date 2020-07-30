// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Texture
  class Texture;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: KawaseBlurRendererSO
  class KawaseBlurRendererSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::KawaseBlurRendererSO::KernelSize
    struct KernelSize;
    // Nested type: GlobalNamespace::KawaseBlurRendererSO::WeightsType
    struct WeightsType;
    // Nested type: GlobalNamespace::KawaseBlurRendererSO::BloomKernel
    class BloomKernel;
    // Nested type: GlobalNamespace::KawaseBlurRendererSO::Pass
    struct Pass;
    // private UnityEngine.Shader _kawaseBlurShader
    // Offset: 0x18
    UnityEngine::Shader* kawaseBlurShader;
    // private UnityEngine.Shader _additiveShader
    // Offset: 0x20
    UnityEngine::Shader* additiveShader;
    // private UnityEngine.Shader _tintShader
    // Offset: 0x28
    UnityEngine::Shader* tintShader;
    // private UnityEngine.Material _kawaseBlurMaterial
    // Offset: 0x30
    UnityEngine::Material* kawaseBlurMaterial;
    // private UnityEngine.Material _additiveMaterial
    // Offset: 0x38
    UnityEngine::Material* additiveMaterial;
    // private UnityEngine.Material _tintMaterial
    // Offset: 0x40
    UnityEngine::Material* tintMaterial;
    // private UnityEngine.Material _commandBuffersMaterial
    // Offset: 0x48
    UnityEngine::Material* commandBuffersMaterial;
    // private System.Int32[][] _kernels
    // Offset: 0x50
    ::Array<::Array<int>*>* kernels;
    // private KawaseBlurRendererSO/BloomKernel[] _bloomKernels
    // Offset: 0x58
    ::Array<GlobalNamespace::KawaseBlurRendererSO::BloomKernel*>* bloomKernels;
    // private UnityEngine.RenderTexture[] _blurTextures
    // Offset: 0x60
    ::Array<UnityEngine::RenderTexture*>* blurTextures;
    // static field const value: static private System.Int32 kMaxBloomIterations
    static constexpr const int kMaxBloomIterations = 5;
    // Get static field: static private System.Int32 kMaxBloomIterations
    static int _get_kMaxBloomIterations();
    // Set static field: static private System.Int32 kMaxBloomIterations
    static void _set_kMaxBloomIterations(int value);
    // Get static field: static private readonly System.Single[][] kBloomIterationWeights
    static ::Array<::Array<float>*>* _get_kBloomIterationWeights();
    // Set static field: static private readonly System.Single[][] kBloomIterationWeights
    static void _set_kBloomIterationWeights(::Array<::Array<float>*>* value);
    // Get static field: static private readonly System.Int32 _offsetID
    static int _get__offsetID();
    // Set static field: static private readonly System.Int32 _offsetID
    static void _set__offsetID(int value);
    // Get static field: static private readonly System.Int32 _boostID
    static int _get__boostID();
    // Set static field: static private readonly System.Int32 _boostID
    static void _set__boostID(int value);
    // Get static field: static private readonly System.Int32 _additiveAlphaID
    static int _get__additiveAlphaID();
    // Set static field: static private readonly System.Int32 _additiveAlphaID
    static void _set__additiveAlphaID(int value);
    // Get static field: static private readonly System.Int32 _alphaID
    static int _get__alphaID();
    // Set static field: static private readonly System.Int32 _alphaID
    static void _set__alphaID(int value);
    // Get static field: static private readonly System.Int32 _tintColorID
    static int _get__tintColorID();
    // Set static field: static private readonly System.Int32 _tintColorID
    static void _set__tintColorID(int value);
    // Get static field: static private readonly System.Int32 _alphaWeightsID
    static int _get__alphaWeightsID();
    // Set static field: static private readonly System.Int32 _alphaWeightsID
    static void _set__alphaWeightsID(int value);
    // Get static field: static private readonly System.Int32 _tempTexture0ID
    static int _get__tempTexture0ID();
    // Set static field: static private readonly System.Int32 _tempTexture0ID
    static void _set__tempTexture0ID(int value);
    // Get static field: static private readonly System.Int32 _tempTexture1ID
    static int _get__tempTexture1ID();
    // Set static field: static private readonly System.Int32 _tempTexture1ID
    static void _set__tempTexture1ID(int value);
    // public System.Int32[] GetBlurKernel(KawaseBlurRendererSO/KernelSize kernelSize)
    // Offset: 0x1810BB8
    ::Array<int>* GetBlurKernel(GlobalNamespace::KawaseBlurRendererSO::KernelSize kernelSize);
    // protected System.Void OnDisable()
    // Offset: 0x18111E4
    void OnDisable();
    // public System.Void Bloom(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, System.Int32 iterationsStart, System.Int32 iterations, System.Single boost, System.Single alphaWeights, KawaseBlurRendererSO/WeightsType blurStartWeightsType, System.Single[] bloomIterationWeights)
    // Offset: 0x181122C
    void Bloom(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest, int iterationsStart, int iterations, float boost, float alphaWeights, GlobalNamespace::KawaseBlurRendererSO::WeightsType blurStartWeightsType, ::Array<float>* bloomIterationWeights);
    // public System.Void DoubleBlur(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, KawaseBlurRendererSO/KernelSize kernelSize0, System.Single boost0, KawaseBlurRendererSO/KernelSize kernelSize1, System.Single boost1, System.Single secondBlurAlpha, System.Int32 downsample, System.Boolean gammaCorrection)
    // Offset: 0x1811C84
    void DoubleBlur(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest, GlobalNamespace::KawaseBlurRendererSO::KernelSize kernelSize0, float boost0, GlobalNamespace::KawaseBlurRendererSO::KernelSize kernelSize1, float boost1, float secondBlurAlpha, int downsample, bool gammaCorrection);
    // public UnityEngine.Texture2D Blur(UnityEngine.Texture src, KawaseBlurRendererSO/KernelSize kernelSize, System.Int32 downsample)
    // Offset: 0x1811EFC
    UnityEngine::Texture2D* Blur(UnityEngine::Texture* src, GlobalNamespace::KawaseBlurRendererSO::KernelSize kernelSize, int downsample);
    // public System.Void Blur(UnityEngine.Texture src, UnityEngine.RenderTexture dest, KawaseBlurRendererSO/KernelSize kernelSize, System.Single boost, System.Int32 downsample)
    // Offset: 0x1811FC4
    void Blur(UnityEngine::Texture* src, UnityEngine::RenderTexture* dest, GlobalNamespace::KawaseBlurRendererSO::KernelSize kernelSize, float boost, int downsample);
    // private System.Void Blur(UnityEngine.Texture src, UnityEngine.RenderTexture dest, System.Int32[] kernel, System.Single boost, System.Int32 downsample, System.Int32 startIdx, System.Int32 length, System.Single alphaWeights, System.Single additiveAlpha, System.Boolean additivelyBlendToDest, System.Boolean gammaCorrection, KawaseBlurRendererSO/WeightsType blurStartWeightsType)
    // Offset: 0x1811784
    void Blur(UnityEngine::Texture* src, UnityEngine::RenderTexture* dest, ::Array<int>* kernel, float boost, int downsample, int startIdx, int length, float alphaWeights, float additiveAlpha, bool additivelyBlendToDest, bool gammaCorrection, GlobalNamespace::KawaseBlurRendererSO::WeightsType blurStartWeightsType);
    // public System.Void AlphaWeights(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest)
    // Offset: 0x1812050
    void AlphaWeights(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest);
    // public UnityEngine.Rendering.CommandBuffer CreateBlurCommandBuffer(System.Int32 width, System.Int32 height, System.String globalTextureName, KawaseBlurRendererSO/KernelSize kernelSize, System.Single boost)
    // Offset: 0x181215C
    UnityEngine::Rendering::CommandBuffer* CreateBlurCommandBuffer(int width, int height, ::Il2CppString* globalTextureName, GlobalNamespace::KawaseBlurRendererSO::KernelSize kernelSize, float boost);
    // protected override System.Void OnEnable()
    // Offset: 0x1810DCC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x181247C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static KawaseBlurRendererSO* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x1812484
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // KawaseBlurRendererSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::KawaseBlurRendererSO*, "", "KawaseBlurRendererSO");
#pragma pack(pop)
