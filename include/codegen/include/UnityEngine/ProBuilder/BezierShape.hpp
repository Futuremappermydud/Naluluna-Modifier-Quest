// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ProBuilder.BezierPoint
#include "UnityEngine/ProBuilder/BezierPoint.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.BezierShape
  class BezierShape : public UnityEngine::MonoBehaviour {
    public:
    // public System.Collections.Generic.List`1<UnityEngine.ProBuilder.BezierPoint> points
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::BezierPoint>* points;
    // public System.Boolean closeLoop
    // Offset: 0x20
    bool closeLoop;
    // public System.Single radius
    // Offset: 0x24
    float radius;
    // public System.Int32 rows
    // Offset: 0x28
    int rows;
    // public System.Int32 columns
    // Offset: 0x2C
    int columns;
    // public System.Boolean smooth
    // Offset: 0x30
    bool smooth;
    // private System.Boolean m_IsEditing
    // Offset: 0x31
    bool m_IsEditing;
    // private UnityEngine.ProBuilder.ProBuilderMesh m_Mesh
    // Offset: 0x38
    UnityEngine::ProBuilder::ProBuilderMesh* m_Mesh;
    // public System.Boolean get_isEditing()
    // Offset: 0x15146F4
    bool get_isEditing();
    // public System.Void set_isEditing(System.Boolean value)
    // Offset: 0x15146FC
    void set_isEditing(bool value);
    // public UnityEngine.ProBuilder.ProBuilderMesh get_mesh()
    // Offset: 0x1514708
    UnityEngine::ProBuilder::ProBuilderMesh* get_mesh();
    // public System.Void set_mesh(UnityEngine.ProBuilder.ProBuilderMesh value)
    // Offset: 0x15147B4
    void set_mesh(UnityEngine::ProBuilder::ProBuilderMesh* value);
    // public System.Void Init()
    // Offset: 0x15147BC
    void Init();
    // public System.Void Refresh()
    // Offset: 0x15149F0
    void Refresh();
    // public System.Void .ctor()
    // Offset: 0x1514AC0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BezierShape* New_ctor();
  }; // UnityEngine.ProBuilder.BezierShape
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::BezierShape*, "UnityEngine.ProBuilder", "BezierShape");
#pragma pack(pop)
