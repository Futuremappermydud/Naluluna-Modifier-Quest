// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:29 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectCallbackController
  class BeatmapObjectCallbackController;
  // Forward declaring type: TrackLaneRingsRotationEffect
  class TrackLaneRingsRotationEffect;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TrackLaneRingsRotationEffectSpawner
  class TrackLaneRingsRotationEffectSpawner : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType
    struct RotationStepType;
    // Autogenerated type: TrackLaneRingsRotationEffectSpawner/RotationStepType
    struct RotationStepType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public TrackLaneRingsRotationEffectSpawner/RotationStepType Range0ToMax
      static constexpr const int Range0ToMax = 0;
      // Get static field: static public TrackLaneRingsRotationEffectSpawner/RotationStepType Range0ToMax
      static GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType _get_Range0ToMax();
      // Set static field: static public TrackLaneRingsRotationEffectSpawner/RotationStepType Range0ToMax
      static void _set_Range0ToMax(GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType value);
      // static field const value: static public TrackLaneRingsRotationEffectSpawner/RotationStepType Range
      static constexpr const int Range = 1;
      // Get static field: static public TrackLaneRingsRotationEffectSpawner/RotationStepType Range
      static GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType _get_Range();
      // Set static field: static public TrackLaneRingsRotationEffectSpawner/RotationStepType Range
      static void _set_Range(GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType value);
      // static field const value: static public TrackLaneRingsRotationEffectSpawner/RotationStepType MaxOr0
      static constexpr const int MaxOr0 = 2;
      // Get static field: static public TrackLaneRingsRotationEffectSpawner/RotationStepType MaxOr0
      static GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType _get_MaxOr0();
      // Set static field: static public TrackLaneRingsRotationEffectSpawner/RotationStepType MaxOr0
      static void _set_MaxOr0(GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType value);
      // Creating value type constructor for type: RotationStepType
      RotationStepType(int value_ = {}) : value{value_} {}
    }; // TrackLaneRingsRotationEffectSpawner/RotationStepType
    // private TrackLaneRingsRotationEffect _trackLaneRingsRotationEffect
    // Offset: 0x18
    GlobalNamespace::TrackLaneRingsRotationEffect* trackLaneRingsRotationEffect;
    // private BeatmapEventType _beatmapEventType
    // Offset: 0x20
    GlobalNamespace::BeatmapEventType beatmapEventType;
    // private System.Single _rotation
    // Offset: 0x24
    float rotation;
    // private System.Single _rotationStep
    // Offset: 0x28
    float rotationStep;
    // private TrackLaneRingsRotationEffectSpawner/RotationStepType _rotationStepType
    // Offset: 0x2C
    GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType rotationStepType;
    // private System.Int32 _rotationPropagationSpeed
    // Offset: 0x30
    int rotationPropagationSpeed;
    // private System.Single _rotationFlexySpeed
    // Offset: 0x34
    float rotationFlexySpeed;
    // private BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Offset: 0x38
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // protected System.Void Start()
    // Offset: 0xC32918
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xC329AC
    void OnDestroy();
    // private System.Void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(BeatmapEventData beatmapEventData)
    // Offset: 0xC32A84
    void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void .ctor()
    // Offset: 0xC32B80
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TrackLaneRingsRotationEffectSpawner* New_ctor();
  }; // TrackLaneRingsRotationEffectSpawner
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrackLaneRingsRotationEffectSpawner*, "", "TrackLaneRingsRotationEffectSpawner");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType, "", "TrackLaneRingsRotationEffectSpawner/RotationStepType");
#pragma pack(pop)
