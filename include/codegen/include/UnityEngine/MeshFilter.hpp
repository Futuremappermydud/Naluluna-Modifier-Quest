// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:28 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
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
  // Autogenerated type: UnityEngine.MeshFilter
  class MeshFilter : public UnityEngine::Component {
    public:
    // private System.Void DontStripMeshFilter()
    // Offset: 0x13FBD58
    void DontStripMeshFilter();
    // public UnityEngine.Mesh get_sharedMesh()
    // Offset: 0x13FBD5C
    UnityEngine::Mesh* get_sharedMesh();
    // public System.Void set_sharedMesh(UnityEngine.Mesh value)
    // Offset: 0x13FBD9C
    void set_sharedMesh(UnityEngine::Mesh* value);
    // public System.Void set_mesh(UnityEngine.Mesh value)
    // Offset: 0x13FBDEC
    void set_mesh(UnityEngine::Mesh* value);
  }; // UnityEngine.MeshFilter
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MeshFilter*, "UnityEngine", "MeshFilter");
#pragma pack(pop)
