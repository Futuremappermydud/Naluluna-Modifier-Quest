// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ActionResult
  class ActionResult;
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.Subdivision
  class Subdivision : public ::Il2CppObject {
    public:
    // static public UnityEngine.ProBuilder.ActionResult Subdivide(UnityEngine.ProBuilder.ProBuilderMesh pb)
    // Offset: 0x100C828
    static UnityEngine::ProBuilder::ActionResult* Subdivide(UnityEngine::ProBuilder::ProBuilderMesh* pb);
    // static public UnityEngine.ProBuilder.Face[] Subdivide(UnityEngine.ProBuilder.ProBuilderMesh pb, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x100C8D4
    static ::Array<UnityEngine::ProBuilder::Face*>* Subdivide(UnityEngine::ProBuilder::ProBuilderMesh* pb, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face*>* faces);
  }; // UnityEngine.ProBuilder.MeshOperations.Subdivision
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::Subdivision*, "UnityEngine.ProBuilder.MeshOperations", "Subdivision");
#pragma pack(pop)
