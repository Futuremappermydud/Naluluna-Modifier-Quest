// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.Triangulation
#include "UnityEngine/ProBuilder/MeshOperations/Triangulation.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
  // Forward declaring type: PolygonPoint
  class PolygonPoint;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector2 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.Triangulation/<>c__DisplayClass7_0
  class Triangulation::$$c__DisplayClass7_0 : public ::Il2CppObject {
    public:
    // public System.Int32 index
    // Offset: 0x10
    int index;
    // UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint <Triangulate>b__0(UnityEngine.Vector2 x)
    // Offset: 0x100FFD4
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* $Triangulate$b__0(UnityEngine::Vector2 x);
    // UnityEngine.ProBuilder.Poly2Tri.PolygonPoint <Triangulate>b__1(UnityEngine.Vector2 x)
    // Offset: 0x101005C
    UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* $Triangulate$b__1(UnityEngine::Vector2 x);
    // public System.Void .ctor()
    // Offset: 0x100FFC4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Triangulation::$$c__DisplayClass7_0* New_ctor();
  }; // UnityEngine.ProBuilder.MeshOperations.Triangulation/<>c__DisplayClass7_0
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::Triangulation::$$c__DisplayClass7_0*, "UnityEngine.ProBuilder.MeshOperations", "Triangulation/<>c__DisplayClass7_0");
#pragma pack(pop)
