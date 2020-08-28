// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: GameplayModifiers/EnergyType
#include "GlobalNamespace/GameplayModifiers.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberClashChecker
  class SaberClashChecker;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: PlayerHeadAndObstacleInteraction
  class PlayerHeadAndObstacleInteraction;
  // Forward declaring type: INoteController
  class INoteController;
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameEnergyCounter
  class GameEnergyCounter : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::GameEnergyCounter::InitData
    class InitData;
    // private System.Single _badNoteEnergyDrain
    // Offset: 0x18
    float badNoteEnergyDrain;
    // private System.Single _missNoteEnergyDrain
    // Offset: 0x1C
    float missNoteEnergyDrain;
    // private System.Single _hitBombEnergyDrain
    // Offset: 0x20
    float hitBombEnergyDrain;
    // private System.Single _goodNoteEnergyCharge
    // Offset: 0x24
    float goodNoteEnergyCharge;
    // private System.Single _obstacleEnergyDrainPerSecond
    // Offset: 0x28
    float obstacleEnergyDrainPerSecond;
    // private System.Int32 _batteryLives
    // Offset: 0x2C
    int batteryLives;
    // private GameEnergyCounter/InitData _initData
    // Offset: 0x30
    GlobalNamespace::GameEnergyCounter::InitData* initData;
    // private SaberClashChecker _saberClashChecker
    // Offset: 0x38
    GlobalNamespace::SaberClashChecker* saberClashChecker;
    // private BeatmapObjectManager _beatmapObjectManager
    // Offset: 0x40
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // private PlayerHeadAndObstacleInteraction _playerHeadAndObstacleInteraction
    // Offset: 0x48
    GlobalNamespace::PlayerHeadAndObstacleInteraction* playerHeadAndObstacleInteraction;
    // private System.Action gameEnergyDidReach0Event
    // Offset: 0x50
    System::Action* gameEnergyDidReach0Event;
    // private System.Action`1<System.Single> gameEnergyDidChangeEvent
    // Offset: 0x58
    System::Action_1<float>* gameEnergyDidChangeEvent;
    // private System.Single <energy>k__BackingField
    // Offset: 0x60
    float energy;
    // private GameplayModifiers/EnergyType <energyType>k__BackingField
    // Offset: 0x64
    GlobalNamespace::GameplayModifiers::EnergyType energyType;
    // private System.Boolean <noFail>k__BackingField
    // Offset: 0x68
    bool noFail;
    // private System.Boolean <instaFail>k__BackingField
    // Offset: 0x69
    bool instaFail;
    // private System.Boolean <failOnSaberClash>k__BackingField
    // Offset: 0x6A
    bool failOnSaberClash;
    // public System.Void add_gameEnergyDidReach0Event(System.Action value)
    // Offset: 0xBF3698
    void add_gameEnergyDidReach0Event(System::Action* value);
    // public System.Void remove_gameEnergyDidReach0Event(System.Action value)
    // Offset: 0xBF373C
    void remove_gameEnergyDidReach0Event(System::Action* value);
    // public System.Void add_gameEnergyDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0xBE99B0
    void add_gameEnergyDidChangeEvent(System::Action_1<float>* value);
    // public System.Void remove_gameEnergyDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0xBE9760
    void remove_gameEnergyDidChangeEvent(System::Action_1<float>* value);
    // public System.Single get_energy()
    // Offset: 0xBF37E0
    float get_energy();
    // private System.Void set_energy(System.Single value)
    // Offset: 0xBF37E8
    void set_energy(float value);
    // public System.Int32 get_batteryEnergy()
    // Offset: 0xBF37F0
    int get_batteryEnergy();
    // public System.Int32 get_batteryLives()
    // Offset: 0xBF3874
    int get_batteryLives();
    // public GameplayModifiers/EnergyType get_energyType()
    // Offset: 0xBF387C
    GlobalNamespace::GameplayModifiers::EnergyType get_energyType();
    // private System.Void set_energyType(GameplayModifiers/EnergyType value)
    // Offset: 0xBF3884
    void set_energyType(GlobalNamespace::GameplayModifiers::EnergyType value);
    // public System.Boolean get_noFail()
    // Offset: 0xBF388C
    bool get_noFail();
    // private System.Void set_noFail(System.Boolean value)
    // Offset: 0xBF3894
    void set_noFail(bool value);
    // public System.Boolean get_instaFail()
    // Offset: 0xBF38A0
    bool get_instaFail();
    // private System.Void set_instaFail(System.Boolean value)
    // Offset: 0xBF38A8
    void set_instaFail(bool value);
    // public System.Boolean get_failOnSaberClash()
    // Offset: 0xBF38B4
    bool get_failOnSaberClash();
    // private System.Void set_failOnSaberClash(System.Boolean value)
    // Offset: 0xBF38BC
    void set_failOnSaberClash(bool value);
    // protected System.Void Start()
    // Offset: 0xBF38C8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xBF3A18
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0xBF3B40
    void Update();
    // private System.Void HandleNoteWasCutEvent(INoteController noteController, NoteCutInfo noteCutInfo)
    // Offset: 0xBF3D10
    void HandleNoteWasCutEvent(GlobalNamespace::INoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo);
    // private System.Void HandleNoteWasMissedEvent(INoteController noteController)
    // Offset: 0xBF3E30
    void HandleNoteWasMissedEvent(GlobalNamespace::INoteController* noteController);
    // private System.Void AddEnergy(System.Single value)
    // Offset: 0xBF3BEC
    void AddEnergy(float value);
    // public System.Void .ctor()
    // Offset: 0xBF3F18
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GameEnergyCounter* New_ctor();
  }; // GameEnergyCounter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameEnergyCounter*, "", "GameEnergyCounter");
#pragma pack(pop)
