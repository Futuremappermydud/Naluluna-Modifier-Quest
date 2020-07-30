// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:28 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StretchableCube
  class StretchableCube : public UnityEngine::MonoBehaviour {
    public:
    // static field const value: static private System.Single kLength
    static constexpr const float kLength = 1;
    // Get static field: static private System.Single kLength
    static float _get_kLength();
    // Set static field: static private System.Single kLength
    static void _set_kLength(float value);
    // static field const value: static private System.Single kWidth
    static constexpr const float kWidth = 1;
    // Get static field: static private System.Single kWidth
    static float _get_kWidth();
    // Set static field: static private System.Single kWidth
    static void _set_kWidth(float value);
    // static field const value: static private System.Single kHeight
    static constexpr const float kHeight = 1;
    // Get static field: static private System.Single kHeight
    static float _get_kHeight();
    // Set static field: static private System.Single kHeight
    static void _set_kHeight(float value);
    // Get static field: static private readonly UnityEngine.Vector3 p0
    static UnityEngine::Vector3 _get_p0();
    // Set static field: static private readonly UnityEngine.Vector3 p0
    static void _set_p0(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3 p1
    static UnityEngine::Vector3 _get_p1();
    // Set static field: static private readonly UnityEngine.Vector3 p1
    static void _set_p1(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3 p2
    static UnityEngine::Vector3 _get_p2();
    // Set static field: static private readonly UnityEngine.Vector3 p2
    static void _set_p2(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3 p3
    static UnityEngine::Vector3 _get_p3();
    // Set static field: static private readonly UnityEngine.Vector3 p3
    static void _set_p3(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3 p4
    static UnityEngine::Vector3 _get_p4();
    // Set static field: static private readonly UnityEngine.Vector3 p4
    static void _set_p4(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3 p5
    static UnityEngine::Vector3 _get_p5();
    // Set static field: static private readonly UnityEngine.Vector3 p5
    static void _set_p5(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3 p6
    static UnityEngine::Vector3 _get_p6();
    // Set static field: static private readonly UnityEngine.Vector3 p6
    static void _set_p6(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3 p7
    static UnityEngine::Vector3 _get_p7();
    // Set static field: static private readonly UnityEngine.Vector3 p7
    static void _set_p7(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3[] vertices
    static ::Array<UnityEngine::Vector3>* _get_vertices();
    // Set static field: static private readonly UnityEngine.Vector3[] vertices
    static void _set_vertices(::Array<UnityEngine::Vector3>* value);
    // Get static field: static private readonly UnityEngine.Vector3 up
    static UnityEngine::Vector3 _get_up();
    // Set static field: static private readonly UnityEngine.Vector3 up
    static void _set_up(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3 down
    static UnityEngine::Vector3 _get_down();
    // Set static field: static private readonly UnityEngine.Vector3 down
    static void _set_down(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3 front
    static UnityEngine::Vector3 _get_front();
    // Set static field: static private readonly UnityEngine.Vector3 front
    static void _set_front(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3 back
    static UnityEngine::Vector3 _get_back();
    // Set static field: static private readonly UnityEngine.Vector3 back
    static void _set_back(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3 left
    static UnityEngine::Vector3 _get_left();
    // Set static field: static private readonly UnityEngine.Vector3 left
    static void _set_left(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3 right
    static UnityEngine::Vector3 _get_right();
    // Set static field: static private readonly UnityEngine.Vector3 right
    static void _set_right(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector3[] normals
    static ::Array<UnityEngine::Vector3>* _get_normals();
    // Set static field: static private readonly UnityEngine.Vector3[] normals
    static void _set_normals(::Array<UnityEngine::Vector3>* value);
    // Get static field: static private readonly System.Int32[] triangles
    static ::Array<int>* _get_triangles();
    // Set static field: static private readonly System.Int32[] triangles
    static void _set_triangles(::Array<int>* value);
    // private UnityEngine.Vector2[] _uvs
    // Offset: 0x18
    ::Array<UnityEngine::Vector2>* uvs;
    // private UnityEngine.Mesh _mesh
    // Offset: 0x20
    UnityEngine::Mesh* mesh;
    // protected System.Void Awake()
    // Offset: 0xB928EC
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xB92ABC
    void OnDestroy();
    // private UnityEngine.Mesh CreateBox()
    // Offset: 0xB9297C
    UnityEngine::Mesh* CreateBox();
    // private System.Void RecalculateUVs(UnityEngine.Vector2[] uvs)
    // Offset: 0xB92AC8
    void RecalculateUVs(::Array<UnityEngine::Vector2>* uvs);
    // public System.Void RefreshUVs()
    // Offset: 0xB92DA0
    void RefreshUVs();
    // public System.Void .ctor()
    // Offset: 0xB92E44
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static StretchableCube* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0xB92E4C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // StretchableCube
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StretchableCube*, "", "StretchableCube");
#pragma pack(pop)
