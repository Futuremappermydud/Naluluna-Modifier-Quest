// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:22 PM
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
// Including type: UnityEngine.ProBuilder.SimpleTuple`2
#include "UnityEngine/ProBuilder/SimpleTuple_2.hpp"
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
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: FaceRebuildData
  class FaceRebuildData;
  // Forward declaring type: Vertex
  class Vertex;
  // Forward declaring type: WingedEdge
  class WingedEdge;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.Bevel
  class Bevel : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // Nested type: UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_1
    class $$c__DisplayClass0_1;
    // Nested type: UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_2
    class $$c__DisplayClass0_2;
    // Nested type: UnityEngine::ProBuilder::MeshOperations::Bevel::$$c
    class $$c;
    // Get static field: static private readonly System.Int32[] k_BridgeIndexesTri
    static ::Array<int>* _get_k_BridgeIndexesTri();
    // Set static field: static private readonly System.Int32[] k_BridgeIndexesTri
    static void _set_k_BridgeIndexesTri(::Array<int>* value);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> BevelEdges(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Edge> edges, System.Single amount)
    // Offset: 0xEEE6EC
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* BevelEdges(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Edge>* edges, float amount);
    // static private System.Collections.Generic.List`1<UnityEngine.ProBuilder.FaceRebuildData> GetBridgeFaces(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Vertex> vertices, UnityEngine.ProBuilder.WingedEdge left, UnityEngine.ProBuilder.WingedEdge right, System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.FaceRebuildData,System.Collections.Generic.List`1<System.Int32>>>> holes)
    // Offset: 0xEF0D08
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::FaceRebuildData*>* GetBridgeFaces(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>* vertices, UnityEngine::ProBuilder::WingedEdge* left, UnityEngine::ProBuilder::WingedEdge* right, System::Collections::Generic::Dictionary_2<int, System::Collections::Generic::List_1<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::FaceRebuildData*, System::Collections::Generic::List_1<int>*>>*>* holes);
    // static private System.Void SlideEdge(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Vertex> vertices, UnityEngine.ProBuilder.WingedEdge we, System.Single amount)
    // Offset: 0xEF08F8
    static void SlideEdge(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>* vertices, UnityEngine::ProBuilder::WingedEdge* we, float amount);
    // static private UnityEngine.ProBuilder.Edge GetLeadingEdge(UnityEngine.ProBuilder.WingedEdge wing, System.Int32 common)
    // Offset: 0xEF13B8
    static UnityEngine::ProBuilder::Edge GetLeadingEdge(UnityEngine::ProBuilder::WingedEdge* wing, int common);
    // static private System.Void .cctor()
    // Offset: 0xEF14B0
    static void _cctor();
  }; // UnityEngine.ProBuilder.MeshOperations.Bevel
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::Bevel*, "UnityEngine.ProBuilder.MeshOperations", "Bevel");
#pragma pack(pop)
