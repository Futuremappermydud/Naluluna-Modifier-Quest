// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.ProBuilder.CSG_Vertex
#include "UnityEngine/ProBuilder/CSG_Vertex.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Experimental::CSG
namespace UnityEngine::ProBuilder::Experimental::CSG {
  // Forward declaring type: CSG_Polygon
  class CSG_Polygon;
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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Experimental.CSG
namespace UnityEngine::ProBuilder::Experimental::CSG {
  // Autogenerated type: UnityEngine.ProBuilder.Experimental.CSG.CSG_Model
  class CSG_Model : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::Experimental::CSG::CSG_Model::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // public System.Collections.Generic.List`1<UnityEngine.ProBuilder.CSG_Vertex> vertices
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::CSG_Vertex>* vertices;
    // public System.Collections.Generic.List`1<System.Int32> indexes
    // Offset: 0x18
    System::Collections::Generic::List_1<int>* indexes;
    // public System.Void .ctor(UnityEngine.GameObject go)
    // Offset: 0xF7C570
    static CSG_Model* New_ctor(UnityEngine::GameObject* go);
    // public System.Void .ctor(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Experimental.CSG.CSG_Polygon> list)
    // Offset: 0xF7CBC4
    static CSG_Model* New_ctor(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Experimental::CSG::CSG_Polygon*>* list);
    // public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Experimental.CSG.CSG_Polygon> ToPolygons()
    // Offset: 0xF7C708
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Experimental::CSG::CSG_Polygon*>* ToPolygons();
    // public UnityEngine.Mesh ToMesh()
    // Offset: 0xF7CE9C
    UnityEngine::Mesh* ToMesh();
    // public System.Void .ctor()
    // Offset: 0xF7D3B0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CSG_Model* New_ctor();
  }; // UnityEngine.ProBuilder.Experimental.CSG.CSG_Model
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Experimental::CSG::CSG_Model*, "UnityEngine.ProBuilder.Experimental.CSG", "CSG_Model");
#pragma pack(pop)
