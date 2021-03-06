// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BloomPrePassRendererSO
#include "GlobalNamespace/BloomPrePassRendererSO.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Vector4
  struct Vector4;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BloomPrePassRendererSO/LightsRenderingData
  class BloomPrePassRendererSO::LightsRenderingData : public ::Il2CppObject {
    public:
    // public UnityEngine.Mesh mesh
    // Offset: 0x10
    UnityEngine::Mesh* mesh;
    // public UnityEngine.Vector3[] vertices
    // Offset: 0x18
    ::Array<UnityEngine::Vector3>* vertices;
    // public UnityEngine.Color[] colors
    // Offset: 0x20
    ::Array<UnityEngine::Color>* colors;
    // public UnityEngine.Vector4[] viewPos
    // Offset: 0x28
    ::Array<UnityEngine::Vector4>* viewPos;
    // public System.Void .ctor()
    // Offset: 0x1826E2C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BloomPrePassRendererSO::LightsRenderingData* New_ctor();
  }; // BloomPrePassRendererSO/LightsRenderingData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData*, "", "BloomPrePassRendererSO/LightsRenderingData");
#pragma pack(pop)
