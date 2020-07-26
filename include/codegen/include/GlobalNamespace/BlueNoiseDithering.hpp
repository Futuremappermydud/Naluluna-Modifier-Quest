// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:03 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BlueNoiseDithering
  class BlueNoiseDithering : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private UnityEngine.Texture2D _noiseTexture
    // Offset: 0x18
    UnityEngine::Texture2D* noiseTexture;
    // Get static field: static private readonly System.Int32 _noiseParamsID
    static int _get__noiseParamsID();
    // Set static field: static private readonly System.Int32 _noiseParamsID
    static void _set__noiseParamsID(int value);
    // Get static field: static private readonly System.Int32 _globalNoiseTextureID
    static int _get__globalNoiseTextureID();
    // Set static field: static private readonly System.Int32 _globalNoiseTextureID
    static void _set__globalNoiseTextureID(int value);
    // public System.Void SetBlueNoiseShaderParams(System.Int32 cameraPixelWidth, System.Int32 cameraPixelHeight)
    // Offset: 0x180EF3C
    void SetBlueNoiseShaderParams(int cameraPixelWidth, int cameraPixelHeight);
    // public System.Void .ctor()
    // Offset: 0x180F05C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BlueNoiseDithering* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x180F064
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // BlueNoiseDithering
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BlueNoiseDithering*, "", "BlueNoiseDithering");
#pragma pack(pop)
