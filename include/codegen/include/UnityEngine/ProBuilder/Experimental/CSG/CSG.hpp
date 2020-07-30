// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Experimental.CSG
namespace UnityEngine::ProBuilder::Experimental::CSG {
  // Autogenerated type: UnityEngine.ProBuilder.Experimental.CSG.CSG
  class CSG : public ::Il2CppObject {
    public:
    // static field const value: static public System.Single EPSILON
    static constexpr const float EPSILON = 1e-05;
    // Get static field: static public System.Single EPSILON
    static float _get_EPSILON();
    // Set static field: static public System.Single EPSILON
    static void _set_EPSILON(float value);
    // static public UnityEngine.Mesh Union(UnityEngine.GameObject lhs, UnityEngine.GameObject rhs)
    // Offset: 0xF7C440
    static UnityEngine::Mesh* Union(UnityEngine::GameObject* lhs, UnityEngine::GameObject* rhs);
    // static public UnityEngine.Mesh Subtract(UnityEngine.GameObject lhs, UnityEngine.GameObject rhs)
    // Offset: 0xF7CF38
    static UnityEngine::Mesh* Subtract(UnityEngine::GameObject* lhs, UnityEngine::GameObject* rhs);
    // static public UnityEngine.Mesh Intersect(UnityEngine.GameObject lhs, UnityEngine.GameObject rhs)
    // Offset: 0xF7D174
    static UnityEngine::Mesh* Intersect(UnityEngine::GameObject* lhs, UnityEngine::GameObject* rhs);
    // public System.Void .ctor()
    // Offset: 0xF7D3A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CSG* New_ctor();
  }; // UnityEngine.ProBuilder.Experimental.CSG.CSG
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Experimental::CSG::CSG*, "UnityEngine.ProBuilder.Experimental.CSG", "CSG");
#pragma pack(pop)
