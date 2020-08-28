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
// Including type: OVRPlugin/Bool
#include "GlobalNamespace/OVRPlugin_Bool.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/AppPerfStats
  struct OVRPlugin::AppPerfStats : public System::ValueType {
    public:
    // public OVRPlugin/AppPerfFrameStats[] FrameStats
    // Offset: 0x0
    ::Array<GlobalNamespace::OVRPlugin::AppPerfFrameStats>* FrameStats;
    // public System.Int32 FrameStatsCount
    // Offset: 0x8
    int FrameStatsCount;
    // public OVRPlugin/Bool AnyFrameStatsDropped
    // Offset: 0xC
    GlobalNamespace::OVRPlugin::Bool AnyFrameStatsDropped;
    // public System.Single AdaptiveGpuPerformanceScale
    // Offset: 0x10
    float AdaptiveGpuPerformanceScale;
    // Creating value type constructor for type: AppPerfStats
    AppPerfStats(::Array<GlobalNamespace::OVRPlugin::AppPerfFrameStats>* FrameStats_ = {}, int FrameStatsCount_ = {}, GlobalNamespace::OVRPlugin::Bool AnyFrameStatsDropped_ = {}, float AdaptiveGpuPerformanceScale_ = {}) : FrameStats{FrameStats_}, FrameStatsCount{FrameStatsCount_}, AnyFrameStatsDropped{AnyFrameStatsDropped_}, AdaptiveGpuPerformanceScale{AdaptiveGpuPerformanceScale_} {}
  }; // OVRPlugin/AppPerfStats
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::AppPerfStats, "", "OVRPlugin/AppPerfStats");
#pragma pack(pop)
