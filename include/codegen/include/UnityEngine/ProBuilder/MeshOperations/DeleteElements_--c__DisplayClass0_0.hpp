// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.DeleteElements
#include "UnityEngine/ProBuilder/MeshOperations/DeleteElements.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: KeyValuePair`2<TKey, TValue>
  template<typename TKey, typename TValue>
  struct KeyValuePair_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.DeleteElements/<>c__DisplayClass0_0
  class DeleteElements::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.List`1<System.Int32> sorted
    // Offset: 0x10
    System::Collections::Generic::List_1<int>* sorted;
    // public System.Int32[] offset
    // Offset: 0x18
    ::Array<int>* offset;
    // System.Boolean <DeleteVertices>b__0(System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> x)
    // Offset: 0xEF9958
    bool $DeleteVertices$b__0(System::Collections::Generic::KeyValuePair_2<int, int> x);
    // System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> <DeleteVertices>b__1(System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> y)
    // Offset: 0xEF99C8
    System::Collections::Generic::KeyValuePair_2<int, int> $DeleteVertices$b__1(System::Collections::Generic::KeyValuePair_2<int, int> y);
    // System.Boolean <DeleteVertices>b__2(System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> x)
    // Offset: 0xEF9A68
    bool $DeleteVertices$b__2(System::Collections::Generic::KeyValuePair_2<int, int> x);
    // System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> <DeleteVertices>b__3(System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> y)
    // Offset: 0xEF9AD8
    System::Collections::Generic::KeyValuePair_2<int, int> $DeleteVertices$b__3(System::Collections::Generic::KeyValuePair_2<int, int> y);
    // public System.Void .ctor()
    // Offset: 0xEF9164
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DeleteElements::$$c__DisplayClass0_0* New_ctor();
  }; // UnityEngine.ProBuilder.MeshOperations.DeleteElements/<>c__DisplayClass0_0
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0*, "UnityEngine.ProBuilder.MeshOperations", "DeleteElements/<>c__DisplayClass0_0");
#pragma pack(pop)
