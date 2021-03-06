// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:21 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: ICollection`1<T>
  template<typename T>
  class ICollection_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.MeshHandles
  class MeshHandles : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshHandles::$$c
    class $$c;
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.Vector3> s_Vector2List
    static System::Collections::Generic::List_1<UnityEngine::Vector3>* _get_s_Vector2List();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.Vector3> s_Vector2List
    static void _set_s_Vector2List(System::Collections::Generic::List_1<UnityEngine::Vector3>* value);
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.Vector3> s_Vector3List
    static System::Collections::Generic::List_1<UnityEngine::Vector3>* _get_s_Vector3List();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.Vector3> s_Vector3List
    static void _set_s_Vector3List(System::Collections::Generic::List_1<UnityEngine::Vector3>* value);
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.Vector4> s_Vector4List
    static System::Collections::Generic::List_1<UnityEngine::Vector4>* _get_s_Vector4List();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.Vector4> s_Vector4List
    static void _set_s_Vector4List(System::Collections::Generic::List_1<UnityEngine::Vector4>* value);
    // Get static field: static private System.Collections.Generic.List`1<System.Int32> s_IndexList
    static System::Collections::Generic::List_1<int>* _get_s_IndexList();
    // Set static field: static private System.Collections.Generic.List`1<System.Int32> s_IndexList
    static void _set_s_IndexList(System::Collections::Generic::List_1<int>* value);
    // Get static field: static private System.Collections.Generic.List`1<System.Int32> s_SharedVertexIndexList
    static System::Collections::Generic::List_1<int>* _get_s_SharedVertexIndexList();
    // Set static field: static private System.Collections.Generic.List`1<System.Int32> s_SharedVertexIndexList
    static void _set_s_SharedVertexIndexList(System::Collections::Generic::List_1<int>* value);
    // Get static field: static private readonly UnityEngine.Vector2 k_Billboard0
    static UnityEngine::Vector2 _get_k_Billboard0();
    // Set static field: static private readonly UnityEngine.Vector2 k_Billboard0
    static void _set_k_Billboard0(UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 k_Billboard1
    static UnityEngine::Vector2 _get_k_Billboard1();
    // Set static field: static private readonly UnityEngine.Vector2 k_Billboard1
    static void _set_k_Billboard1(UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 k_Billboard2
    static UnityEngine::Vector2 _get_k_Billboard2();
    // Set static field: static private readonly UnityEngine.Vector2 k_Billboard2
    static void _set_k_Billboard2(UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 k_Billboard3
    static UnityEngine::Vector2 _get_k_Billboard3();
    // Set static field: static private readonly UnityEngine.Vector2 k_Billboard3
    static void _set_k_Billboard3(UnityEngine::Vector2 value);
    // static System.Void CreateFaceMesh(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Mesh target)
    // Offset: 0xF8F33C
    static void CreateFaceMesh(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::Mesh* target);
    // static System.Void CreateEdgeMesh(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Mesh target)
    // Offset: 0xF8F49C
    static void CreateEdgeMesh(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::Mesh* target);
    // static System.Void CreateEdgeMesh(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Mesh target, UnityEngine.ProBuilder.Edge[] edges)
    // Offset: 0xF8F81C
    static void CreateEdgeMesh(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::Mesh* target, ::Array<UnityEngine::ProBuilder::Edge>* edges);
    // static System.Void CreateVertexMesh(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Mesh target)
    // Offset: 0xF8FA70
    static void CreateVertexMesh(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::Mesh* target);
    // static System.Void CreateVertexMesh(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Mesh target, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0xF8FC14
    static void CreateVertexMesh(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::Mesh* target, System::Collections::Generic::IList_1<int>* indexes);
    // static private System.Void CreatePointMesh(UnityEngine.Vector3[] positions, System.Collections.Generic.IList`1<System.Int32> indexes, UnityEngine.Mesh target)
    // Offset: 0xF8FCF8
    static void CreatePointMesh(::Array<UnityEngine::Vector3>* positions, System::Collections::Generic::IList_1<int>* indexes, UnityEngine::Mesh* target);
    // static System.Void CreatePointBillboardMesh(System.Collections.Generic.IList`1<UnityEngine.Vector3> positions, UnityEngine.Mesh target)
    // Offset: 0xF90508
    static void CreatePointBillboardMesh(System::Collections::Generic::IList_1<UnityEngine::Vector3>* positions, UnityEngine::Mesh* target);
    // static private System.Void CreatePointBillboardMesh(System.Collections.Generic.IList`1<UnityEngine.Vector3> positions, System.Collections.Generic.IList`1<System.Int32> indexes, UnityEngine.Mesh target)
    // Offset: 0xF8FE88
    static void CreatePointBillboardMesh(System::Collections::Generic::IList_1<UnityEngine::Vector3>* positions, System::Collections::Generic::IList_1<int>* indexes, UnityEngine::Mesh* target);
    // static System.Void CreateEdgeBillboardMesh(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Mesh target)
    // Offset: 0xF90B04
    static void CreateEdgeBillboardMesh(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::Mesh* target);
    // static System.Void CreateEdgeBillboardMesh(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Mesh target, System.Collections.Generic.ICollection`1<UnityEngine.ProBuilder.Edge> edges)
    // Offset: 0xF91110
    static void CreateEdgeBillboardMesh(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::Mesh* target, System::Collections::Generic::ICollection_1<UnityEngine::ProBuilder::Edge>* edges);
    // static private System.Void .cctor()
    // Offset: 0xF91994
    static void _cctor();
  }; // UnityEngine.ProBuilder.MeshHandles
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshHandles*, "UnityEngine.ProBuilder", "MeshHandles");
#pragma pack(pop)
