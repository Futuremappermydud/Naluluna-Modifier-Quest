// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.MeshValidation
#include "UnityEngine/ProBuilder/MeshOperations/MeshValidation.hpp"
// Including type: UnityEngine.ProBuilder.Triangle
#include "UnityEngine/ProBuilder/Triangle.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.MeshValidation/<>c__DisplayClass5_0
  class MeshValidation::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.ProBuilder.Triangle triangle
    // Offset: 0x10
    UnityEngine::ProBuilder::Triangle triangle;
    // public System.Func`2<UnityEngine.ProBuilder.Triangle,System.Boolean> <>9__0
    // Offset: 0x20
    System::Func_2<UnityEngine::ProBuilder::Triangle, bool>* $$9__0;
    // System.Boolean <CollectFaceGroups>b__0(UnityEngine.ProBuilder.Triangle x)
    // Offset: 0x100C7F0
    bool $CollectFaceGroups$b__0(UnityEngine::ProBuilder::Triangle x);
    // public System.Void .ctor()
    // Offset: 0x100B4FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MeshValidation::$$c__DisplayClass5_0* New_ctor();
  }; // UnityEngine.ProBuilder.MeshOperations.MeshValidation/<>c__DisplayClass5_0
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass5_0*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c__DisplayClass5_0");
#pragma pack(pop)
