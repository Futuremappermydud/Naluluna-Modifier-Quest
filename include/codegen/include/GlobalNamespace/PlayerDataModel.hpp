// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerDataFileManagerSO
  class PlayerDataFileManagerSO;
  // Forward declaring type: PlayerData
  class PlayerData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerDataModel
  class PlayerDataModel : public UnityEngine::MonoBehaviour {
    public:
    // private PlayerDataFileManagerSO _playerDataFileManager
    // Offset: 0x18
    GlobalNamespace::PlayerDataFileManagerSO* playerDataFileManager;
    // private PlayerData _playerData
    // Offset: 0x20
    GlobalNamespace::PlayerData* playerData;
    // public PlayerData get_playerData()
    // Offset: 0xBDE09C
    GlobalNamespace::PlayerData* get_playerData();
    // protected System.Void OnEnable()
    // Offset: 0xBDE0A4
    void OnEnable();
    // protected System.Void OnApplicationPause(System.Boolean pauseStatus)
    // Offset: 0xBDE0E0
    void OnApplicationPause(bool pauseStatus);
    // protected System.Void OnDisable()
    // Offset: 0xBDE0EC
    void OnDisable();
    // public System.Void ResetData()
    // Offset: 0xBDE0F0
    void ResetData();
    // public System.Void Save()
    // Offset: 0xBD22F4
    void Save();
    // public System.Void Load()
    // Offset: 0xBDE0A8
    void Load();
    // public System.Void .ctor()
    // Offset: 0xBDE128
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlayerDataModel* New_ctor();
  }; // PlayerDataModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerDataModel*, "", "PlayerDataModel");
#pragma pack(pop)
