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
    // Offset: 0xB9D320
    static void NoDomainReloadInit();
    // protected System.Void Awake()
    // Offset: 0xB9D38C
    void Awake();
    // protected System.Void Update()
    // Offset: 0xB9D448
    void Update();
    // public System.Void .ctor()
    // Offset: 0xB9D568
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Spectrogram* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0xB9D570
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // Spectrogram
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Spectrogram*, "", "Spectrogram");
#pragma pack(pop)
