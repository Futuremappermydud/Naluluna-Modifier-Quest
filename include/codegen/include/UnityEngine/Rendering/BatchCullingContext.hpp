// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:32 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
// Including type: UnityEngine.Plane
#include "UnityEngine/Plane.hpp"
// Including type: UnityEngine.Rendering.BatchVisibility
#include "UnityEngine/Rendering/BatchVisibility.hpp"
// Including type: UnityEngine.Rendering.LODParameters
#include "UnityEngine/Rendering/LODParameters.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Autogenerated type: UnityEngine.Rendering.BatchCullingContext
  struct BatchCullingContext : public System::ValueType {
    public:
    // public readonly Unity.Collections.NativeArray`1<UnityEngine.Plane> cullingPlanes
    // Offset: 0x0
    Unity::Collections::NativeArray_1<UnityEngine::Plane> cullingPlanes;
    // public Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility> batchVisibility
    // Offset: 0x10
    Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> batchVisibility;
    // public Unity.Collections.NativeArray`1<System.Int32> visibleIndices
    // Offset: 0x20
    Unity::Collections::NativeArray_1<int> visibleIndices;
    // public readonly UnityEngine.Rendering.LODParameters lodParameters
    // Offset: 0x30
    UnityEngine::Rendering::LODParameters lodParameters;
    // Creating value type constructor for type: BatchCullingContext
    BatchCullingContext(Unity::Collections::NativeArray_1<UnityEngine::Plane> cullingPlanes_ = {}, Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> batchVisibility_ = {}, Unity::Collections::NativeArray_1<int> visibleIndices_ = {}, UnityEngine::Rendering::LODParameters lodParameters_ = {}) : cullingPlanes{cullingPlanes_}, batchVisibility{batchVisibility_}, visibleIndices{visibleIndices_}, lodParameters{lodParameters_} {}
    // public System.Void .ctor(Unity.Collections.NativeArray`1<UnityEngine.Plane> inCullingPlanes, Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility> inOutBatchVisibility, Unity.Collections.NativeArray`1<System.Int32> outVisibleIndices, UnityEngine.Rendering.LODParameters inLodParameters)
    // Offset: 0xA433D4
    static BatchCullingContext* New_ctor(Unity::Collections::NativeArray_1<UnityEngine::Plane> inCullingPlanes, Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> inOutBatchVisibility, Unity::Collections::NativeArray_1<int> outVisibleIndices, UnityEngine::Rendering::LODParameters inLodParameters);
  }; // UnityEngine.Rendering.BatchCullingContext
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::BatchCullingContext, "UnityEngine.Rendering", "BatchCullingContext");
#pragma pack(pop)
