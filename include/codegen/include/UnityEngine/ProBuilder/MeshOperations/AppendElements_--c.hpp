// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.AppendElements
#include "UnityEngine/ProBuilder/MeshOperations/AppendElements.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Vertex
  class Vertex;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.AppendElements/<>c
  class AppendElements::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.ProBuilder.MeshOperations.AppendElements/<>c <>9
    static UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.MeshOperations.AppendElements/<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.Vector3[],System.Int32> <>9__7_0
    static System::Func_2<::Array<UnityEngine::Vector3>*, int>* _get_$$9__7_0();
    // Set static field: static public System.Func`2<UnityEngine.Vector3[],System.Int32> <>9__7_0
    static void _set_$$9__7_0(System::Func_2<::Array<UnityEngine::Vector3>*, int>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Vertex,UnityEngine.Vector3> <>9__14_1
    static System::Func_2<UnityEngine::ProBuilder::Vertex*, UnityEngine::Vector3>* _get_$$9__14_1();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Vertex,UnityEngine.Vector3> <>9__14_1
    static void _set_$$9__14_1(System::Func_2<UnityEngine::ProBuilder::Vertex*, UnityEngine::Vector3>* value);
    // static private System.Void .cctor()
    // Offset: 0xEEE5C4
    static void _cctor();
    // System.Int32 <CreateShapeFromPolygon>b__7_0(UnityEngine.Vector3[] arr)
    // Offset: 0xEEE634
    int $CreateShapeFromPolygon$b__7_0(::Array<UnityEngine::Vector3>* arr);
    // UnityEngine.Vector3 <AppendVerticesToEdge>b__14_1(UnityEngine.ProBuilder.Vertex x)
    // Offset: 0xEEE64C
    UnityEngine::Vector3 $AppendVerticesToEdge$b__14_1(UnityEngine::ProBuilder::Vertex* x);
    // public System.Void .ctor()
    // Offset: 0xEEE62C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static AppendElements::$$c* New_ctor();
  }; // UnityEngine.ProBuilder.MeshOperations.AppendElements/<>c
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c*, "UnityEngine.ProBuilder.MeshOperations", "AppendElements/<>c");
#pragma pack(pop)
