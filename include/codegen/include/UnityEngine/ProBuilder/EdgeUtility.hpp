// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: SimpleTuple`2<T1, T2>
  template<typename T1, typename T2>
  struct SimpleTuple_2;
  // Forward declaring type: Face
  class Face;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.EdgeUtility
  class EdgeUtility : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::EdgeUtility::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> GetSharedVertexHandleEdges(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges)
    // Offset: 0xF7B914
    static System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* GetSharedVertexHandleEdges(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges);
    // static public UnityEngine.ProBuilder.Edge GetSharedVertexHandleEdge(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Edge edge)
    // Offset: 0xF7B9E4
    static UnityEngine::ProBuilder::Edge GetSharedVertexHandleEdge(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Edge edge);
    // static UnityEngine.ProBuilder.Edge GetEdgeWithSharedVertexHandles(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Edge edge)
    // Offset: 0xF7BA88
    static UnityEngine::ProBuilder::Edge GetEdgeWithSharedVertexHandles(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Edge edge);
    // static public System.Boolean ValidateEdge(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Edge edge, UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.Face,UnityEngine.ProBuilder.Edge> validEdge)
    // Offset: 0xF7BB30
    static bool ValidateEdge(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Edge edge, UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face*, UnityEngine::ProBuilder::Edge>& validEdge);
    // static System.Boolean Contains(UnityEngine.ProBuilder.Edge[] edges, UnityEngine.ProBuilder.Edge edge)
    // Offset: 0xF7BDB0
    static bool Contains(::Array<UnityEngine::ProBuilder::Edge>* edges, UnityEngine::ProBuilder::Edge edge);
    // static System.Boolean Contains(UnityEngine.ProBuilder.Edge[] edges, System.Int32 x, System.Int32 y)
    // Offset: 0xF7BE44
    static bool Contains(::Array<UnityEngine::ProBuilder::Edge>* edges, int x, int y);
    // static System.Int32 IndexOf(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Edge> edges, UnityEngine.ProBuilder.Edge edge)
    // Offset: 0xF7BEC0
    static int IndexOf(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Edge>* edges, UnityEngine::ProBuilder::Edge edge);
    // static System.Int32[] AllTriangles(UnityEngine.ProBuilder.Edge[] edges)
    // Offset: 0xF7C044
    static ::Array<int>* AllTriangles(::Array<UnityEngine::ProBuilder::Edge>* edges);
    // static UnityEngine.ProBuilder.Face GetFace(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Edge edge)
    // Offset: 0xF7C134
    static UnityEngine::ProBuilder::Face* GetFace(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Edge edge);
  }; // UnityEngine.ProBuilder.EdgeUtility
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::EdgeUtility*, "UnityEngine.ProBuilder", "EdgeUtility");
#pragma pack(pop)
