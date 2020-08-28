// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IBeatmapObjectSpawner
#include "GlobalNamespace/IBeatmapObjectSpawner.hpp"
// Including type: NoteController
#include "GlobalNamespace/NoteController.hpp"
// Including type: ObstacleController
#include "GlobalNamespace/ObstacleController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: INoteController because it is already included!
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
  // Forward declaring type: ObstacleData
  class ObstacleData;
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapObjectManager
  class BeatmapObjectManager : public UnityEngine::MonoBehaviour, public GlobalNamespace::IBeatmapObjectSpawner {
    public:
    // private NoteController/Pool _noteAPool
    // Offset: 0x18
    GlobalNamespace::NoteController::Pool* noteAPool;
    // private NoteController/Pool _noteBPool
    // Offset: 0x20
    GlobalNamespace::NoteController::Pool* noteBPool;
    // private NoteController/Pool _bombNotePool
    // Offset: 0x28
    GlobalNamespace::NoteController::Pool* bombNotePool;
    // private ObstacleController/Pool _obstaclePool
    // Offset: 0x30
    GlobalNamespace::ObstacleController::Pool* obstaclePool;
    // private System.Action`1<NoteController> noteWasSpawnedEvent
    // Offset: 0x38
    System::Action_1<GlobalNamespace::NoteController*>* noteWasSpawnedEvent;
    // private System.Action`1<INoteController> noteWasMissedEvent
    // Offset: 0x40
    System::Action_1<GlobalNamespace::INoteController*>* noteWasMissedEvent;
    // private System.Action`2<INoteController,NoteCutInfo> noteWasCutEvent
    // Offset: 0x48
    System::Action_2<GlobalNamespace::INoteController*, GlobalNamespace::NoteCutInfo*>* noteWasCutEvent;
    // private System.Action`1<NoteController> noteDidStartJumpEvent
    // Offset: 0x50
    System::Action_1<GlobalNamespace::NoteController*>* noteDidStartJumpEvent;
    // private System.Action`1<ObstacleController> obstacleDidPassThreeQuartersOfMove2Event
    // Offset: 0x58
    System::Action_1<GlobalNamespace::ObstacleController*>* obstacleDidPassThreeQuartersOfMove2Event;
    // private System.Action`1<ObstacleController> obstacleDidPassAvoidedMarkEvent
    // Offset: 0x60
    System::Action_1<GlobalNamespace::ObstacleController*>* obstacleDidPassAvoidedMarkEvent;
    // public System.Void add_noteWasSpawnedEvent(System.Action`1<NoteController> value)
    // Offset: 0xB77800
    void add_noteWasSpawnedEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void remove_noteWasSpawnedEvent(System.Action`1<NoteController> value)
    // Offset: 0xB778A4
    void remove_noteWasSpawnedEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void add_noteWasMissedEvent(System.Action`1<INoteController> value)
    // Offset: 0xB77948
    void add_noteWasMissedEvent(System::Action_1<GlobalNamespace::INoteController*>* value);
    // public System.Void remove_noteWasMissedEvent(System.Action`1<INoteController> value)
    // Offset: 0xB779EC
    void remove_noteWasMissedEvent(System::Action_1<GlobalNamespace::INoteController*>* value);
    // public System.Void add_noteWasCutEvent(System.Action`2<INoteController,NoteCutInfo> value)
    // Offset: 0xB77A90
    void add_noteWasCutEvent(System::Action_2<GlobalNamespace::INoteController*, GlobalNamespace::NoteCutInfo*>* value);
    // public System.Void remove_noteWasCutEvent(System.Action`2<INoteController,NoteCutInfo> value)
    // Offset: 0xB77B34
    void remove_noteWasCutEvent(System::Action_2<GlobalNamespace::INoteController*, GlobalNamespace::NoteCutInfo*>* value);
    // public System.Void add_noteDidStartJumpEvent(System.Action`1<NoteController> value)
    // Offset: 0xB77BD8
    void add_noteDidStartJumpEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void remove_noteDidStartJumpEvent(System.Action`1<NoteController> value)
    // Offset: 0xB77C7C
    void remove_noteDidStartJumpEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void add_obstacleDidPassThreeQuartersOfMove2Event(System.Action`1<ObstacleController> value)
    // Offset: 0xB77D20
    void add_obstacleDidPassThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_obstacleDidPassThreeQuartersOfMove2Event(System.Action`1<ObstacleController> value)
    // Offset: 0xB77DC4
    void remove_obstacleDidPassThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void add_obstacleDidPassAvoidedMarkEvent(System.Action`1<ObstacleController> value)
    // Offset: 0xB76830
    void add_obstacleDidPassAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_obstacleDidPassAvoidedMarkEvent(System.Action`1<ObstacleController> value)
    // Offset: 0xB76ABC
    void remove_obstacleDidPassAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // private System.Void SetNoteControllerEventCallbacks(NoteController noteController)
    // Offset: 0xB7831C
    void SetNoteControllerEventCallbacks(GlobalNamespace::NoteController* noteController);
    // private System.Void RemoveNoteControllerEventCallbacks(NoteController noteController)
    // Offset: 0xB78768
    void RemoveNoteControllerEventCallbacks(GlobalNamespace::NoteController* noteController);
    // private System.Void SetObstacleEventCallbacks(ObstacleController obstacleController)
    // Offset: 0xB78010
    void SetObstacleEventCallbacks(GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void RemoveObstacleEventCallbacks(ObstacleController obstacleController)
    // Offset: 0xB788E4
    void RemoveObstacleEventCallbacks(GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void Despawn(NoteController noteController)
    // Offset: 0xB78A1C
    void Despawn(GlobalNamespace::NoteController* noteController);
    // private System.Void Despawn(ObstacleController obstacleController)
    // Offset: 0xB78AF0
    void Despawn(GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void HandleNoteDidStartJump(NoteController noteController)
    // Offset: 0xB78B64
    void HandleNoteDidStartJump(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteWasMissed(NoteController noteController)
    // Offset: 0xB78BD8
    void HandleNoteWasMissed(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteDidFinishJump(NoteController noteController)
    // Offset: 0xB78C4C
    void HandleNoteDidFinishJump(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteDidDissolve(NoteController noteController)
    // Offset: 0xB78C50
    void HandleNoteDidDissolve(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteWasCut(NoteController noteController, NoteCutInfo noteCutInfo)
    // Offset: 0xB78C54
    void HandleNoteWasCut(GlobalNamespace::NoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo);
    // private System.Void HandleObstaclePassedThreeQuartersOfMove2(ObstacleController obstacleController)
    // Offset: 0xB78CCC
    void HandleObstaclePassedThreeQuartersOfMove2(GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void HandleObstaclePassedAvoidedMark(ObstacleController obstacleController)
    // Offset: 0xB78D40
    void HandleObstaclePassedAvoidedMark(GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void HandleObstacleFinishedMovement(ObstacleController obstacleController)
    // Offset: 0xB78DB4
    void HandleObstacleFinishedMovement(GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void HandleObstacleDidDissolve(ObstacleController obstacleController)
    // Offset: 0xB78DB8
    void HandleObstacleDidDissolve(GlobalNamespace::ObstacleController* obstacleController);
    // public System.Void DissolveAllObjects()
    // Offset: 0xB78DBC
    void DissolveAllObjects();
    // public System.Void HideAllBeatmapObjects(System.Boolean hide)
    // Offset: 0xB79168
    void HideAllBeatmapObjects(bool hide);
    // public System.Void SpawnObstacle(ObstacleData obstacleData, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single rotation, System.Single noteLinesDistance, System.Single obstacleHeight)
    // Offset: 0xB77E68
    // Implemented from: IBeatmapObjectSpawner
    // Base method: System.Void IBeatmapObjectSpawner::SpawnObstacle(ObstacleData obstacleData, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single rotation, System.Single noteLinesDistance, System.Single obstacleHeight)
    void SpawnObstacle(GlobalNamespace::ObstacleData* obstacleData, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float rotation, float noteLinesDistance, float obstacleHeight);
    // public System.Void SpawnBombNote(NoteData noteData, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity, System.Single rotation)
    // Offset: 0xB78148
    // Implemented from: IBeatmapObjectSpawner
    // Base method: System.Void IBeatmapObjectSpawner::SpawnBombNote(NoteData noteData, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity, System.Single rotation)
    void SpawnBombNote(GlobalNamespace::NoteData* noteData, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, float rotation);
    // public System.Void SpawnBasicNote(NoteData noteData, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity, System.Single rotation, System.Boolean disappearingArrow, System.Boolean ghostNote, System.Single cutDirectionAngleOffset)
    // Offset: 0xB78498
    // Implemented from: IBeatmapObjectSpawner
    // Base method: System.Void IBeatmapObjectSpawner::SpawnBasicNote(NoteData noteData, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity, System.Single rotation, System.Boolean disappearingArrow, System.Boolean ghostNote, System.Single cutDirectionAngleOffset)
    void SpawnBasicNote(GlobalNamespace::NoteData* noteData, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, float rotation, bool disappearingArrow, bool ghostNote, float cutDirectionAngleOffset);
    // public System.Void .ctor()
    // Offset: 0xB7953C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapObjectManager* New_ctor();
  }; // BeatmapObjectManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectManager*, "", "BeatmapObjectManager");
#pragma pack(pop)
