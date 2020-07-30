// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:31 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: BombNoteController
  class BombNoteController;
  // Forward declaring type: ObstacleController
  class ObstacleController;
  // Forward declaring type: NoteLineConnectionController
  class NoteLineConnectionController;
  // Forward declaring type: BeatLine
  class BeatLine;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayCoreBeatmapObjectPoolsInstaller
  class GameplayCoreBeatmapObjectPoolsInstaller : public Zenject::MonoInstaller {
    public:
    // private NoteController _normalBasicNotePrefab
    // Offset: 0x20
    GlobalNamespace::NoteController* normalBasicNotePrefab;
    // private BombNoteController _bombNotePrefab
    // Offset: 0x28
    GlobalNamespace::BombNoteController* bombNotePrefab;
    // private ObstacleController _obstaclePrefab
    // Offset: 0x30
    GlobalNamespace::ObstacleController* obstaclePrefab;
    // private NoteLineConnectionController _noteLineConnectionControllerPrefab
    // Offset: 0x38
    GlobalNamespace::NoteLineConnectionController* noteLineConnectionControllerPrefab;
    // private BeatLine _beatLinePrefab
    // Offset: 0x40
    GlobalNamespace::BeatLine* beatLinePrefab;
    // public override System.Void InstallBindings()
    // Offset: 0xB3CFD8
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0xB3D224
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GameplayCoreBeatmapObjectPoolsInstaller* New_ctor();
  }; // GameplayCoreBeatmapObjectPoolsInstaller
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayCoreBeatmapObjectPoolsInstaller*, "", "GameplayCoreBeatmapObjectPoolsInstaller");
#pragma pack(pop)
