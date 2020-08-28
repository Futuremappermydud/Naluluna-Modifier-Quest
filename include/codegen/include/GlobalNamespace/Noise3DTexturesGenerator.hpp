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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture3D
  class Texture3D;
  // Forward declaring type: Color32
  struct Color32;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: Noise3DTexturesGenerator
  class Noise3DTexturesGenerator : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::Noise3DTexturesGenerator::MaterialTextureParamsCouple
    struct MaterialTextureParamsCouple;
    // Nested type: GlobalNamespace::Noise3DTexturesGenerator::MaterialPropertyNameCouple
    struct MaterialPropertyNameCouple;
    // private Noise3DTexturesGenerator/MaterialTextureParamsCouple[] _data
    // Offset: 0x18
    ::Array<GlobalNamespace::Noise3DTexturesGenerator::MaterialTextureParamsCouple>* data;
    // Get static field: static private UnityEngine.Texture3D _texture
    static UnityEngine::Texture3D* _get__texture();
    // Set static field: static private UnityEngine.Texture3D _texture
    static void _set__texture(UnityEngine::Texture3D* value);
    // static private System.Void NoDomainReloadInit()
    // Offset: 0x1914104
    static void NoDomainReloadInit();
    // protected System.Void Awake()
    // Offset: 0x1914170
    void Awake();
    // private UnityEngine.Color32[] CreateNoisePixels(System.Int32 width, System.Int32 height, System.Int32 depth, System.Single scale, System.Int32 repeat, System.Single contrast)
    // Offset: 0x1914404
    ::Array<UnityEngine::Color32>* CreateNoisePixels(int width, int height, int depth, float scale, int repeat, float contrast);
    // public System.Void .ctor()
    // Offset: 0x1914690
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Noise3DTexturesGenerator* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x1914698
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // Noise3DTexturesGenerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Noise3DTexturesGenerator*, "", "Noise3DTexturesGenerator");
#pragma pack(pop)
