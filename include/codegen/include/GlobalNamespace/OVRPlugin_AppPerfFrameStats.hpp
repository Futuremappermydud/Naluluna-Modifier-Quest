// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/AppPerfFrameStats
  struct OVRPlugin::AppPerfFrameStats : public System::ValueType {
    public:
    // public System.Int32 HmdVsyncIndex
    // Offset: 0x0
    int HmdVsyncIndex;
    // public System.Int32 AppFrameIndex
    // Offset: 0x4
    int AppFrameIndex;
    // public System.Int32 AppDroppedFrameCount
    // Offset: 0x8
    int AppDroppedFrameCount;
    // public System.Single AppMotionToPhotonLatency
    // Offset: 0xC
    float AppMotionToPhotonLatency;
    // public System.Single AppQueueAheadTime
    // Offset: 0x10
    float AppQueueAheadTime;
    // public System.Single AppCpuElapsedTime
    // Offset: 0x14
    float AppCpuElapsedTime;
    // public System.Single AppGpuElapsedTime
    // Offset: 0x18
    float AppGpuElapsedTime;
    // public System.Int32 CompositorFrameIndex
    // Offset: 0x1C
    int CompositorFrameIndex;
    // public System.Int32 CompositorDroppedFrameCount
    // Offset: 0x20
    int CompositorDroppedFrameCount;
    // public System.Single CompositorLatency
    // Offset: 0x24
    float CompositorLatency;
    // public System.Single CompositorCpuElapsedTime
    // Offset: 0x28
    float CompositorCpuElapsedTime;
    // public System.Single CompositorGpuElapsedTime
    // Offset: 0x2C
    float CompositorGpuElapsedTime;
    // public System.Single CompositorCpuStartToGpuEndElapsedTime
    // Offset: 0x30
    float CompositorCpuStartToGpuEndElapsedTime;
    // public System.Single CompositorGpuEndToVsyncElapsedTime
    // Offset: 0x34
    float CompositorGpuEndToVsyncElapsedTime;
    // Creating value type constructor for type: AppPerfFrameStats
    AppPerfFrameStats(int HmdVsyncIndex_ = {}, int AppFrameIndex_ = {}, int AppDroppedFrameCount_ = {}, float AppMotionToPhotonLatency_ = {}, float AppQueueAheadTime_ = {}, float AppCpuElapsedTime_ = {}, float AppGpuElapsedTime_ = {}, int CompositorFrameIndex_ = {}, int CompositorDroppedFrameCount_ = {}, float CompositorLatency_ = {}, float CompositorCpuElapsedTime_ = {}, float CompositorGpuElapsedTime_ = {}, float CompositorCpuStartToGpuEndElapsedTime_ = {}, float CompositorGpuEndToVsyncElapsedTime_ = {}) : HmdVsyncIndex{HmdVsyncIndex_}, AppFrameIndex{AppFrameIndex_}, AppDroppedFrameCount{AppDroppedFrameCount_}, AppMotionToPhotonLatency{AppMotionToPhotonLatency_}, AppQueueAheadTime{AppQueueAheadTime_}, AppCpuElapsedTime{AppCpuElapsedTime_}, AppGpuElapsedTime{AppGpuElapsedTime_}, CompositorFrameIndex{CompositorFrameIndex_}, CompositorDroppedFrameCount{CompositorDroppedFrameCount_}, CompositorLatency{CompositorLatency_}, CompositorCpuElapsedTime{CompositorCpuElapsedTime_}, CompositorGpuElapsedTime{CompositorGpuElapsedTime_}, CompositorCpuStartToGpuEndElapsedTime{CompositorCpuStartToGpuEndElapsedTime_}, CompositorGpuEndToVsyncElapsedTime{CompositorGpuEndToVsyncElapsedTime_} {}
  }; // OVRPlugin/AppPerfFrameStats
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::AppPerfFrameStats, "", "OVRPlugin/AppPerfFrameStats");
#pragma pack(pop)
