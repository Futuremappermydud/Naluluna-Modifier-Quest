// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:28 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.Renderer
#include "UnityEngine/Renderer.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.MeshRenderer
  class MeshRenderer : public UnityEngine::Renderer {
    public:
    // private System.Void DontStripMeshRenderer()
    // Offset: 0x13FBE3C
    void DontStripMeshRenderer();
    // public UnityEngine.Mesh get_additionalVertexStreams()
    // Offset: 0x13FBE40
    UnityEngine::Mesh* get_additionalVertexStreams();
  }; // UnityEngine.MeshRenderer
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MeshRenderer*, "UnityEngine", "MeshRenderer");
#pragma pack(pop)
