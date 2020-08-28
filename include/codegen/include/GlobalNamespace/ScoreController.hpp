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
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: PlayerHeadAndObstacleInteraction
  class PlayerHeadAndObstacleInteraction;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
  // Forward declaring type: CutScoreBuffer
  class CutScoreBuffer;
  // Forward declaring type: INoteController
  class INoteController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ScoreController
  class ScoreController : public UnityEngine::MonoBehaviour {
    public:
    // private System.Int32 _feverModeRequiredCombo
    // Offset: 0x18
    int feverModeRequiredCombo;
    // private System.Single _feverModeDuration
    // Offset: 0x1C
    float feverModeDuration;
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Offset: 0x20
    GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // private GameplayModifiers _gameplayModifiers
    // Offset: 0x28
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // private BeatmapObjectManager _beatmapObjectManager
    // Offset: 0x30
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // private PlayerHeadAndObstacleInteraction _playerHeadAndObstacleInteraction
    // Offset: 0x38
    GlobalNamespace::PlayerHeadAndObstacleInteraction* playerHeadAndObstacleInteraction;
    // private AudioTimeSyncController _audioTimeSyncController
    // Offset: 0x40
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // private System.Action`3<NoteData,NoteCutInfo,System.Int32> noteWasCutEvent
    // Offset: 0x48
    System::Action_3<GlobalNamespace::NoteData*, GlobalNamespace::NoteCutInfo*, int>* noteWasCutEvent;
    // private System.Action`2<NoteData,System.Int32> noteWasMissedEvent
    // Offset: 0x50
    System::Action_2<GlobalNamespace::NoteData*, int>* noteWasMissedEvent;
    // private System.Action`2<System.Int32,System.Int32> scoreDidChangeEvent
    // Offset: 0x58
    System::Action_2<int, int>* scoreDidChangeEvent;
    // private System.Action`2<System.Int32,System.Int32> immediateMaxPossibleScoreDidChangeEvent
    // Offset: 0x60
    System::Action_2<int, int>* immediateMaxPossibleScoreDidChangeEvent;
    // private System.Action`2<System.Int32,System.Single> multiplierDidChangeEvent
    // Offset: 0x68
    System::Action_2<int, float>* multiplierDidChangeEvent;
    // private System.Action`1<System.Int32> comboDidChangeEvent
    // Offset: 0x70
    System::Action_1<int>* comboDidChangeEvent;
    // private System.Action`1<System.Single> feverModeChargeProgressDidChangeEvent
    // Offset: 0x78
    System::Action_1<float>* feverModeChargeProgressDidChangeEvent;
    // private System.Action feverDidStartEvent
    // Offset: 0x80
    System::Action* feverDidStartEvent;
    // private System.Action feverDidFinishEvent
    // Offset: 0x88
    System::Action* feverDidFinishEvent;
    // private System.Action comboBreakingEventHappenedEvent
    // Offset: 0x90
    System::Action* comboBreakingEventHappenedEvent;
    // private System.Int32 _baseRawScore
    // Offset: 0x98
    int baseRawScore;
    // private System.Int32 _prevFrameRawScore
    // Offset: 0x9C
    int prevFrameRawScore;
    // private System.Int32 _multiplier
    // Offset: 0xA0
    int multiplier;
    // private System.Int32 _multiplierIncreaseProgress
    // Offset: 0xA4
    int multiplierIncreaseProgress;
    // private System.Int32 _multiplierIncreaseMaxProgress
    // Offset: 0xA8
    int multiplierIncreaseMaxProgress;
    // private System.Int32 _combo
    // Offset: 0xAC
    int combo;
    // private System.Int32 _maxCombo
    // Offset: 0xB0
    int maxCombo;
    // private System.Boolean _feverIsActive
    // Offset: 0xB4
    bool feverIsActive;
    // private System.Single _feverStartTime
    // Offset: 0xB8
    float feverStartTime;
    // private System.Int32 _feverCombo
    // Offset: 0xBC
    int feverCombo;
    // private System.Boolean _playerHeadWasInObstacle
    // Offset: 0xC0
    bool playerHeadWasInObstacle;
    // private System.Int32 _immediateMaxPossibleRawScore
    // Offset: 0xC4
    int immediateMaxPossibleRawScore;
    // private System.Int32 _cutOrMissedNotes
    // Offset: 0xC8
    int cutOrMissedNotes;
    // private System.Collections.Generic.List`1<CutScoreBuffer> _cutScoreBuffers
    // Offset: 0xD0
    System::Collections::Generic::List_1<GlobalNamespace::CutScoreBuffer*>* cutScoreBuffers;
    // private System.Single _gameplayModifiersScoreMultiplier
    // Offset: 0xD8
    float gameplayModifiersScoreMultiplier;
    // public System.Void add_noteWasCutEvent(System.Action`3<NoteData,NoteCutInfo,System.Int32> value)
    // Offset: 0xC2B450
    void add_noteWasCutEvent(System::Action_3<GlobalNamespace::NoteData*, GlobalNamespace::NoteCutInfo*, int>* value);
    // public System.Void remove_noteWasCutEvent(System.Action`3<NoteData,NoteCutInfo,System.Int32> value)
    // Offset: 0xC2B4F4
    void remove_noteWasCutEvent(System::Action_3<GlobalNamespace::NoteData*, GlobalNamespace::NoteCutInfo*, int>* value);
    // public System.Void add_noteWasMissedEvent(System.Action`2<NoteData,System.Int32> value)
    // Offset: 0xC2B598
    void add_noteWasMissedEvent(System::Action_2<GlobalNamespace::NoteData*, int>* value);
    // public System.Void remove_noteWasMissedEvent(System.Action`2<NoteData,System.Int32> value)
    // Offset: 0xC2B63C
    void remove_noteWasMissedEvent(System::Action_2<GlobalNamespace::NoteData*, int>* value);
    // public System.Void add_scoreDidChangeEvent(System.Action`2<System.Int32,System.Int32> value)
    // Offset: 0xC2B6E0
    void add_scoreDidChangeEvent(System::Action_2<int, int>* value);
    // public System.Void remove_scoreDidChangeEvent(System.Action`2<System.Int32,System.Int32> value)
    // Offset: 0xC2B784
    void remove_scoreDidChangeEvent(System::Action_2<int, int>* value);
    // public System.Void add_immediateMaxPossibleScoreDidChangeEvent(System.Action`2<System.Int32,System.Int32> value)
    // Offset: 0xC20B30
    void add_immediateMaxPossibleScoreDidChangeEvent(System::Action_2<int, int>* value);
    // public System.Void remove_immediateMaxPossibleScoreDidChangeEvent(System.Action`2<System.Int32,System.Int32> value)
    // Offset: 0xC20CA8
    void remove_immediateMaxPossibleScoreDidChangeEvent(System::Action_2<int, int>* value);
    // public System.Void add_multiplierDidChangeEvent(System.Action`2<System.Int32,System.Single> value)
    // Offset: 0xC2B828
    void add_multiplierDidChangeEvent(System::Action_2<int, float>* value);
    // public System.Void remove_multiplierDidChangeEvent(System.Action`2<System.Int32,System.Single> value)
    // Offset: 0xC2B8CC
    void remove_multiplierDidChangeEvent(System::Action_2<int, float>* value);
    // public System.Void add_comboDidChangeEvent(System.Action`1<System.Int32> value)
    // Offset: 0xC2B970
    void add_comboDidChangeEvent(System::Action_1<int>* value);
    // public System.Void remove_comboDidChangeEvent(System.Action`1<System.Int32> value)
    // Offset: 0xC2BA14
    void remove_comboDidChangeEvent(System::Action_1<int>* value);
    // public System.Void add_feverModeChargeProgressDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0xC2BAB8
    void add_feverModeChargeProgressDidChangeEvent(System::Action_1<float>* value);
    // public System.Void remove_feverModeChargeProgressDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0xC2BB5C
    void remove_feverModeChargeProgressDidChangeEvent(System::Action_1<float>* value);
    // public System.Void add_feverDidStartEvent(System.Action value)
    // Offset: 0xC2BC00
    void add_feverDidStartEvent(System::Action* value);
    // public System.Void remove_feverDidStartEvent(System.Action value)
    // Offset: 0xC2BCA4
    void remove_feverDidStartEvent(System::Action* value);
    // public System.Void add_feverDidFinishEvent(System.Action value)
    // Offset: 0xC2BD48
    void add_feverDidFinishEvent(System::Action* value);
    // public System.Void remove_feverDidFinishEvent(System.Action value)
    // Offset: 0xC2BDEC
    void remove_feverDidFinishEvent(System::Action* value);
    // public System.Void add_comboBreakingEventHappenedEvent(System.Action value)
    // Offset: 0xC2BE90
    void add_comboBreakingEventHappenedEvent(System::Action* value);
    // public System.Void remove_comboBreakingEventHappenedEvent(System.Action value)
    // Offset: 0xC2BF34
    void remove_comboBreakingEventHappenedEvent(System::Action* value);
    // public System.Int32 get_prevFrameRawScore()
    // Offset: 0xC2BFD8
    int get_prevFrameRawScore();
    // public System.Int32 get_prevFrameModifiedScore()
    // Offset: 0xC1E268
    int get_prevFrameModifiedScore();
    // public System.Int32 get_maxCombo()
    // Offset: 0xC2C058
    int get_maxCombo();
    // public System.Int32 get_multiplierWithFever()
    // Offset: 0xC2C060
    int get_multiplierWithFever();
    // public System.Boolean get_feverModeActive()
    // Offset: 0xC2C07C
    bool get_feverModeActive();
    // public System.Single get_feverModeDrainProgress()
    // Offset: 0xC2C084
    float get_feverModeDrainProgress();
    // public System.Single get_feverModeChargeProgress()
    // Offset: 0xC2C118
    float get_feverModeChargeProgress();
    // public System.Single get_immediateMaxPossibleRawScore()
    // Offset: 0xC2C130
    float get_immediateMaxPossibleRawScore();
    // public System.Single get_gameplayModifiersScoreMultiplier()
    // Offset: 0xC2C13C
    float get_gameplayModifiersScoreMultiplier();
    // protected System.Void Start()
    // Offset: 0xC2C144
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xC2C254
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0xC2C37C
    void Update();
    // protected System.Void LateUpdate()
    // Offset: 0xC2C614
    void LateUpdate();
    // private System.Void LoseMultiplier(System.Boolean comboChanged, System.Boolean multiplierChanged)
    // Offset: 0xC2C4C0
    void LoseMultiplier(bool& comboChanged, bool& multiplierChanged);
    // private System.Void NotifyForChange(System.Boolean comboChanged, System.Boolean multiplierChanged)
    // Offset: 0xC2C534
    void NotifyForChange(bool comboChanged, bool multiplierChanged);
    // private System.Void HandleNoteWasCutEvent(INoteController noteController, NoteCutInfo noteCutInfo)
    // Offset: 0xC2C8BC
    void HandleNoteWasCutEvent(GlobalNamespace::INoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo);
    // private System.Void HandleNoteWasMissedEvent(INoteController noteController)
    // Offset: 0xC2CC20
    void HandleNoteWasMissedEvent(GlobalNamespace::INoteController* noteController);
    // private System.Void HandleCutScoreBufferDidFinishEvent(CutScoreBuffer cutScoreBuffer)
    // Offset: 0xC2CE20
    void HandleCutScoreBufferDidFinishEvent(GlobalNamespace::CutScoreBuffer* cutScoreBuffer);
    // public System.Void .ctor()
    // Offset: 0xC2CEA8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ScoreController* New_ctor();
  }; // ScoreController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreController*, "", "ScoreController");
#pragma pack(pop)
