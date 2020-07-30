// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
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
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: AutoUnwrapSettings
  struct AutoUnwrapSettings;
  // Forward declaring type: Edge
  struct Edge;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.UVEditing
  class UVEditing : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshOperations::UVEditing::UVTransform
    struct UVTransform;
    // Nested type: UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c
    class $$c;
    // Nested type: UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c__DisplayClass9_0
    class $$c__DisplayClass9_0;
    // Nested type: UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c__DisplayClass13_0
    class $$c__DisplayClass13_0;
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.Vector2> s_UVTransformProjectionBuffer
    static System::Collections::Generic::List_1<UnityEngine::Vector2>* _get_s_UVTransformProjectionBuffer();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.Vector2> s_UVTransformProjectionBuffer
    static void _set_s_UVTransformProjectionBuffer(System::Collections::Generic::List_1<UnityEngine::Vector2>* value);
    // static System.Void SetAutoUV(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face[] faces, System.Boolean auto)
    // Offset: 0x10101F4
    static void SetAutoUV(UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Array<UnityEngine::ProBuilder::Face*>* faces, bool _auto);
    // static System.Void SetAutoAndAlignUnwrapParamsToUVs(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> facesToConvert)
    // Offset: 0x101039C
    static void SetAutoAndAlignUnwrapParamsToUVs(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* facesToConvert);
    // static UnityEngine.ProBuilder.AutoUnwrapSettings GetAutoUnwrapSettings(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x1010A14
    static UnityEngine::ProBuilder::AutoUnwrapSettings GetAutoUnwrapSettings(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face);
    // static UnityEngine.ProBuilder.MeshOperations.UVEditing/UVTransform GetUVTransform(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x1010B68
    static UnityEngine::ProBuilder::MeshOperations::UVEditing::UVTransform GetUVTransform(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face);
    // static private System.Int32 GetIndex(System.Collections.Generic.IList`1<System.Int32> collection, System.Int32 index)
    // Offset: 0x1010C64
    static int GetIndex(System::Collections::Generic::IList_1<int>* collection, int index);
    // static UnityEngine.ProBuilder.MeshOperations.UVEditing/UVTransform CalculateDelta(System.Collections.Generic.IList`1<UnityEngine.Vector2> src, System.Collections.Generic.IList`1<System.Int32> srcIndices, System.Collections.Generic.IList`1<UnityEngine.Vector2> dst, System.Collections.Generic.IList`1<System.Int32> dstIndices)
    // Offset: 0x10105C4
    static UnityEngine::ProBuilder::MeshOperations::UVEditing::UVTransform CalculateDelta(System::Collections::Generic::IList_1<UnityEngine::Vector2>* src, System::Collections::Generic::IList_1<int>* srcIndices, System::Collections::Generic::IList_1<UnityEngine::Vector2>* dst, System::Collections::Generic::IList_1<int>* dstIndices);
    // static private UnityEngine.Vector2 GetRotatedSize(System.Collections.Generic.IList`1<UnityEngine.Vector2> points, System.Collections.Generic.IList`1<System.Int32> indices, UnityEngine.Vector2 center, System.Single rotation)
    // Offset: 0x1010D30
    static UnityEngine::Vector2 GetRotatedSize(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points, System::Collections::Generic::IList_1<int>* indices, UnityEngine::Vector2 center, float rotation);
    // static public System.Boolean AutoStitch(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face f1, UnityEngine.ProBuilder.Face f2, System.Int32 channel)
    // Offset: 0x1011064
    static bool AutoStitch(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* f1, UnityEngine::ProBuilder::Face* f2, int channel);
    // static private System.Boolean AlignEdges(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face faceToMove, UnityEngine.ProBuilder.Edge edgeToAlignTo, UnityEngine.ProBuilder.Edge edgeToBeAligned, System.Int32 channel)
    // Offset: 0x101137C
    static bool AlignEdges(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* faceToMove, UnityEngine::ProBuilder::Edge edgeToAlignTo, UnityEngine::ProBuilder::Edge edgeToBeAligned, int channel);
    // static UnityEngine.Vector2[] GetUVs(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 channel)
    // Offset: 0x1011E28
    static ::Array<UnityEngine::Vector2>* GetUVs(UnityEngine::ProBuilder::ProBuilderMesh* mesh, int channel);
    // static System.Void ApplyUVs(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Vector2[] uvs, System.Int32 channel, System.Boolean applyToMesh)
    // Offset: 0x101234C
    static void ApplyUVs(UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Array<UnityEngine::Vector2>* uvs, int channel, bool applyToMesh);
    // static public System.Void SewUVs(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32[] indexes, System.Single delta)
    // Offset: 0x10126A8
    static void SewUVs(UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Array<int>* indexes, float delta);
    // static public System.Void CollapseUVs(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32[] indexes)
    // Offset: 0x1012C54
    static void CollapseUVs(UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Array<int>* indexes);
    // static public System.Void SplitUVs(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<System.Int32> indexes)
    // Offset: 0x1012044
    static void SplitUVs(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<int>* indexes);
    // static System.Void SplitUVs(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x1012D34
    static void SplitUVs(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces);
    // static System.Void ProjectFacesAuto(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face[] faces, System.Int32 channel)
    // Offset: 0x10130A4
    static void ProjectFacesAuto(UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Array<UnityEngine::ProBuilder::Face*>* faces, int channel);
    // static public System.Void ProjectFacesBox(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face[] faces, System.Int32 channel)
    // Offset: 0x1013554
    static void ProjectFacesBox(UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Array<UnityEngine::ProBuilder::Face*>* faces, int channel);
    // static UnityEngine.Vector2 FindMinimalUV(UnityEngine.Vector2[] uvs, System.Int32[] indices, System.Single xMin, System.Single yMin)
    // Offset: 0x1013A54
    static UnityEngine::Vector2 FindMinimalUV(::Array<UnityEngine::Vector2>* uvs, ::Array<int>* indices, float xMin, float yMin);
    // static public System.Void ProjectFacesBox(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face[] faces, UnityEngine.Vector2 lowerLeftAnchor, System.Int32 channel)
    // Offset: 0x1013B64
    static void ProjectFacesBox(UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Array<UnityEngine::ProBuilder::Face*>* faces, UnityEngine::Vector2 lowerLeftAnchor, int channel);
    // static public System.Void ProjectFacesSphere(UnityEngine.ProBuilder.ProBuilderMesh pb, System.Int32[] indexes, System.Int32 channel)
    // Offset: 0x1014100
    static void ProjectFacesSphere(UnityEngine::ProBuilder::ProBuilderMesh* pb, ::Array<int>* indexes, int channel);
    // static public UnityEngine.Vector2[] FitUVs(UnityEngine.Vector2[] uvs)
    // Offset: 0x10142CC
    static ::Array<UnityEngine::Vector2>* FitUVs(::Array<UnityEngine::Vector2>* uvs);
    // static private System.Void .cctor()
    // Offset: 0x101444C
    static void _cctor();
  }; // UnityEngine.ProBuilder.MeshOperations.UVEditing
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UVEditing*, "UnityEngine.ProBuilder.MeshOperations", "UVEditing");
#pragma pack(pop)
