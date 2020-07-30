// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.ProBuilder.SimpleTuple`2
#include "UnityEngine/ProBuilder/SimpleTuple_2.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Including type: UnityEngine.ProBuilder.EdgeLookup
#include "UnityEngine/ProBuilder/EdgeLookup.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: WingedEdge
  class WingedEdge;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.ElementSelection
  class ElementSelection : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c
    class $$c;
    // Nested type: UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass21_0
    class $$c__DisplayClass21_0;
    // Nested type: UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass23_0
    class $$c__DisplayClass23_0;
    // static field const value: static private System.Int32 k_MaxHoleIterations
    static constexpr const int k_MaxHoleIterations = 2048;
    // Get static field: static private System.Int32 k_MaxHoleIterations
    static int _get_k_MaxHoleIterations();
    // Set static field: static private System.Int32 k_MaxHoleIterations
    static void _set_k_MaxHoleIterations(int value);
    // Get static field: static private readonly UnityEngine.Vector3 Vector3_Zero
    static UnityEngine::Vector3 _get_Vector3_Zero();
    // Set static field: static private readonly UnityEngine.Vector3 Vector3_Zero
    static void _set_Vector3_Zero(UnityEngine::Vector3 value);
    // static System.Collections.Generic.List`1<UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.Face,UnityEngine.ProBuilder.Edge>> GetNeighborFaces(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Edge edge)
    // Offset: 0xEF9BE4
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face*, UnityEngine::ProBuilder::Edge>>* GetNeighborFaces(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Edge edge);
    // static System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> GetNeighborFaces(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32[] indexes)
    // Offset: 0xEF9E54
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* GetNeighborFaces(UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Array<int>* indexes);
    // static UnityEngine.ProBuilder.Edge[] GetConnectedEdges(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32[] indexes)
    // Offset: 0xEFA090
    static ::Array<UnityEngine::ProBuilder::Edge>* GetConnectedEdges(UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Array<int>* indexes);
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> GetPerimeterEdges(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0xEFA590
    static System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* GetPerimeterEdges(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces);
    // static System.Int32[] GetPerimeterEdges(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Edge> edges)
    // Offset: 0xEFAA6C
    static ::Array<int>* GetPerimeterEdges(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Edge>* edges);
    // static System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> GetPerimeterFaces(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0xEFAD68
    static System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* GetPerimeterFaces(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces);
    // static System.Int32[] GetPerimeterVertices(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32[] indexes, UnityEngine.ProBuilder.Edge[] universal_edges_all)
    // Offset: 0xEFB33C
    static ::Array<int>* GetPerimeterVertices(UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Array<int>* indexes, ::Array<UnityEngine::ProBuilder::Edge>* universal_edges_all);
    // static private UnityEngine.ProBuilder.WingedEdge EdgeRingNext(UnityEngine.ProBuilder.WingedEdge edge)
    // Offset: 0xEFB62C
    static UnityEngine::ProBuilder::WingedEdge* EdgeRingNext(UnityEngine::ProBuilder::WingedEdge* edge);
    // static System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> GetEdgeRing(UnityEngine.ProBuilder.ProBuilderMesh pb, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges)
    // Offset: 0xEFB6B8
    static System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* GetEdgeRing(UnityEngine::ProBuilder::ProBuilderMesh* pb, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges);
    // static System.Boolean GetEdgeLoop(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges, UnityEngine.ProBuilder.Edge[] loop)
    // Offset: 0xEFBAC0
    static bool GetEdgeLoop(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges, ::Array<UnityEngine::ProBuilder::Edge>*& loop);
    // static private System.Boolean GetEdgeLoopInternal(UnityEngine.ProBuilder.WingedEdge start, System.Int32 startIndex, System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.EdgeLookup> used)
    // Offset: 0xEFBE38
    static bool GetEdgeLoopInternal(UnityEngine::ProBuilder::WingedEdge* start, int startIndex, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::EdgeLookup>* used);
    // static private UnityEngine.ProBuilder.WingedEdge NextSpoke(UnityEngine.ProBuilder.WingedEdge wing, System.Int32 pivot, System.Boolean opp)
    // Offset: 0xEFC208
    static UnityEngine::ProBuilder::WingedEdge* NextSpoke(UnityEngine::ProBuilder::WingedEdge* wing, int pivot, bool opp);
    // static System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> GetSpokes(UnityEngine.ProBuilder.WingedEdge wing, System.Int32 sharedIndex, System.Boolean allowHoles)
    // Offset: 0xEFC01C
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* GetSpokes(UnityEngine::ProBuilder::WingedEdge* wing, int sharedIndex, bool allowHoles);
    // static public System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> GrowSelection(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Single maxAngleDiff)
    // Offset: 0xEFC2A0
    static System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>* GrowSelection(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, float maxAngleDiff);
    // static System.Void Flood(UnityEngine.ProBuilder.WingedEdge wing, System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> selection)
    // Offset: 0xEFC70C
    static void Flood(UnityEngine::ProBuilder::WingedEdge* wing, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>* selection);
    // static System.Void Flood(UnityEngine.ProBuilder.ProBuilderMesh pb, UnityEngine.ProBuilder.WingedEdge wing, UnityEngine.Vector3 wingNrm, System.Single maxAngle, System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> selection)
    // Offset: 0xEFC798
    static void Flood(UnityEngine::ProBuilder::ProBuilderMesh* pb, UnityEngine::ProBuilder::WingedEdge* wing, UnityEngine::Vector3 wingNrm, float maxAngle, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>* selection);
    // static public System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> FloodSelection(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Face> faces, System.Single maxAngleDiff)
    // Offset: 0xEFC978
    static System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>* FloodSelection(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face*>* faces, float maxAngleDiff);
    // static public System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> GetFaceLoop(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face[] faces, System.Boolean ring)
    // Offset: 0xEFCC2C
    static System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>* GetFaceLoop(UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Array<UnityEngine::ProBuilder::Face*>* faces, bool ring);
    // static public System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> GetFaceRingAndLoop(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face[] faces)
    // Offset: 0xEFCFC0
    static System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>* GetFaceRingAndLoop(UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Array<UnityEngine::ProBuilder::Face*>* faces);
    // static private System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> GetFaceLoop(System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> wings, UnityEngine.ProBuilder.Face face, System.Boolean ring)
    // Offset: 0xEFCE14
    static System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>* GetFaceLoop(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* wings, UnityEngine::ProBuilder::Face* face, bool ring);
    // static System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.ProBuilder.Edge>> FindHoles(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<System.Int32> indexes)
    // Offset: 0xEFD1C0
    static System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>*>* FindHoles(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<int>* indexes);
    // static System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge>> FindHoles(System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> wings, System.Collections.Generic.HashSet`1<System.Int32> common)
    // Offset: 0xEFD474
    static System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>*>* FindHoles(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* wings, System::Collections::Generic::HashSet_1<int>* common);
    // static private UnityEngine.ProBuilder.WingedEdge FindNextEdgeInHole(UnityEngine.ProBuilder.WingedEdge wing, System.Int32 common)
    // Offset: 0xEFDB30
    static UnityEngine::ProBuilder::WingedEdge* FindNextEdgeInHole(UnityEngine::ProBuilder::WingedEdge* wing, int common);
    // static private System.Void .cctor()
    // Offset: 0xEFDBC0
    static void _cctor();
  }; // UnityEngine.ProBuilder.MeshOperations.ElementSelection
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::ElementSelection*, "UnityEngine.ProBuilder.MeshOperations", "ElementSelection");
#pragma pack(pop)
