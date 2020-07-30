// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:10 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MirrorRendererSO
  class MirrorRendererSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: Mirror
  class Mirror : public UnityEngine::MonoBehaviour {
    public:
    // private MirrorRendererSO _mirrorRenderer
    // Offset: 0x18
    GlobalNamespace::MirrorRendererSO* mirrorRenderer;
    // private UnityEngine.MeshRenderer _renderer
    // Offset: 0x20
    UnityEngine::MeshRenderer* renderer;
    // private UnityEngine.Material _mirrorMaterial
    // Offset: 0x28
    UnityEngine::Material* mirrorMaterial;
    // private UnityEngine.Material _noMirrorMaterial
    // Offset: 0x30
    UnityEngine::Material* noMirrorMaterial;
    // Get static field: static private readonly System.Int32 _texturePropertyID
    static int _get__texturePropertyID();
    // Set static field: static private readonly System.Int32 _texturePropertyID
    static void _set__texturePropertyID(int value);
    // protected System.Void Update()
    // Offset: 0x18F8338
    void Update();
    // protected System.Void OnWillRenderObject()
    // Offset: 0x18F8468
    void OnWillRenderObject();
    // public System.Void .ctor()
    // Offset: 0x18F8F38
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Mirror* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x18F8F40
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // Mirror
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mirror*, "", "Mirror");
#pragma pack(pop)
