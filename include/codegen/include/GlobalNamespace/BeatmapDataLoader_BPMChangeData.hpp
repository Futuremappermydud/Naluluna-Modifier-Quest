// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:09 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: BeatmapDataLoader
#include "GlobalNamespace/BeatmapDataLoader.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapDataLoader/BPMChangeData
  struct BeatmapDataLoader::BPMChangeData : public System::ValueType {
    public:
    // public readonly System.Single bpmChangeStartTime
    // Offset: 0x0
    float bpmChangeStartTime;
    // public readonly System.Single bpmChangeStartBPMTime
    // Offset: 0x4
    float bpmChangeStartBPMTime;
    // public readonly System.Single bpm
    // Offset: 0x8
    float bpm;
    // Creating value type constructor for type: BPMChangeData
    BPMChangeData(float bpmChangeStartTime_ = {}, float bpmChangeStartBPMTime_ = {}, float bpm_ = {}) : bpmChangeStartTime{bpmChangeStartTime_}, bpmChangeStartBPMTime{bpmChangeStartBPMTime_}, bpm{bpm_} {}
    // public System.Void .ctor(System.Single bpmChangeStartTime, System.Single bpmChangeStartBPMTime, System.Single bpm)
    // Offset: 0xADA66C
    static BeatmapDataLoader::BPMChangeData* New_ctor(float bpmChangeStartTime, float bpmChangeStartBPMTime, float bpm);
  }; // BeatmapDataLoader/BPMChangeData
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataLoader::BPMChangeData, "", "BeatmapDataLoader/BPMChangeData");
#pragma pack(pop)
