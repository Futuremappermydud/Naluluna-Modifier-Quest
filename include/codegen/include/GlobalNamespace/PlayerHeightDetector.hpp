// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapObjectCallbackController
#include "GlobalNamespace/BeatmapObjectCallbackController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerController
  class PlayerController;
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerHeightDetector
  class PlayerHeightDetector : public UnityEngine::MonoBehaviour {
    public:
    // private PlayerController _playerController
    // Offset: 0x18
    GlobalNamespace::PlayerController* playerController;
    // private BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Offset: 0x20
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // private AudioTimeSyncController _audioTimeSyncController
    // Offset: 0x28
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // private System.Action`1<System.Single> playerHeightDidChangeEvent
    // Offset: 0x30
    System::Action_1<float>* playerHeightDidChangeEvent;
    // private BeatmapObjectCallbackController/BeatmapObjectCallbackData _beatmapObjectCallbackData
    // Offset: 0x38
    GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallbackData* beatmapObjectCallbackData;
    // private System.Single _noTopObstaclesStartTime
    // Offset: 0x40
    float noTopObstaclesStartTime;
    // private System.Single _computedPlayerHeight
    // Offset: 0x44
    float computedPlayerHeight;
    // private System.Single _changeWeight
    // Offset: 0x48
    float changeWeight;
    // private System.Single _lastReportedHeight
    // Offset: 0x4C
    float lastReportedHeight;
    // static field const value: static private System.Single kHeightScaleAdjust
    static constexpr const float kHeightScaleAdjust = 1.2;
    // Get static field: static private System.Single kHeightScaleAdjust
    static float _get_kHeightScaleAdjust();
    // Set static field: static private System.Single kHeightScaleAdjust
    static void _set_kHeightScaleAdjust(float value);
    // public System.Void add_playerHeightDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0xBDE7E0
    void add_playerHeightDidChangeEvent(System::Action_1<float>* value);
    // public System.Void remove_playerHeightDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0xBDE884
    void remove_playerHeightDidChangeEvent(System::Action_1<float>* value);
    // public System.Single get_playerHeight()
    // Offset: 0xBDE928
    float get_playerHeight();
    // protected System.Void Start()
    // Offset: 0xBDE930
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xBDEA50
    void OnDestroy();
    // protected System.Void LateUpdate()
    // Offset: 0xBDEAE4
    void LateUpdate();
    // private System.Void BeatmapObjectSpawnCallback(BeatmapObjectData beatmapObjectData)
    // Offset: 0xBDEC68
    void BeatmapObjectSpawnCallback(GlobalNamespace::BeatmapObjectData* beatmapObjectData);
    // public System.Void .ctor()
    // Offset: 0xBDED68
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlayerHeightDetector* New_ctor();
  }; // PlayerHeightDetector
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerHeightDetector*, "", "PlayerHeightDetector");
#pragma pack(pop)
