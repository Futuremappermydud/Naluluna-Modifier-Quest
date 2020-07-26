// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectSpawnController
  class BeatmapObjectSpawnController;
  // Forward declaring type: PlayerHeightDetector
  class PlayerHeightDetector;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapObjectSpawnControllerPlayerHeightSetter
  class BeatmapObjectSpawnControllerPlayerHeightSetter : public UnityEngine::MonoBehaviour {
    public:
    // private BeatmapObjectSpawnController _beatmapObjectSpawnController
    // Offset: 0x18
    GlobalNamespace::BeatmapObjectSpawnController* beatmapObjectSpawnController;
    // private PlayerHeightDetector _playerHeightDetector
    // Offset: 0x20
    GlobalNamespace::PlayerHeightDetector* playerHeightDetector;
    // protected System.Void Start()
    // Offset: 0xB5BE6C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xB5BF4C
    void OnDestroy();
    // private System.Void HandlePlayerHeightDidChange(System.Single playerHeight)
    // Offset: 0xB5BF20
    void HandlePlayerHeightDidChange(float playerHeight);
    // static public System.Single JumpOffsetYForPlayerHeight(System.Single playerHeight)
    // Offset: 0xB5C028
    static float JumpOffsetYForPlayerHeight(float playerHeight);
    // public System.Void .ctor()
    // Offset: 0xB5C0B8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapObjectSpawnControllerPlayerHeightSetter* New_ctor();
  }; // BeatmapObjectSpawnControllerPlayerHeightSetter
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter*, "", "BeatmapObjectSpawnControllerPlayerHeightSetter");
#pragma pack(pop)
