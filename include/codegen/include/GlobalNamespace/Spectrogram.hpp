// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:15 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BasicSpectrogramData
  class BasicSpectrogramData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: Spectrogram
  class Spectrogram : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.MeshRenderer[] _meshRenderers
    // Offset: 0x18
    ::Array<UnityEngine::MeshRenderer*>* meshRenderers;
    // private BasicSpectrogramData _spectrogramData
    // Offset: 0x20
    GlobalNamespace::BasicSpectrogramData* spectrogramData;
    // Get static field: static private readonly System.Int32 _spectrogramDataID
    static int _get__spectrogramDataID();
    // Set static field: static private readonly System.Int32 _spectrogramDataID
    static void _set__spectrogramDataID(int value);
    // Get static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static UnityEngine::MaterialPropertyBlock* _get__materialPropertyBlock();
    // Set static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static void _set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock* value);
    // static private System.Void NoDomainReloadInit()
    // Offset: 0xB87CD0
    static void NoDomainReloadInit();
    // protected System.Void Awake()
    // Offset: 0xB87D3C
    void Awake();
    // protected System.Void Update()
    // Offset: 0xB87DF8
    void Update();
    // public System.Void .ctor()
    // Offset: 0xB87F18
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Spectrogram* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0xB87F20
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // Spectrogram
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Spectrogram*, "", "Spectrogram");
#pragma pack(pop)
