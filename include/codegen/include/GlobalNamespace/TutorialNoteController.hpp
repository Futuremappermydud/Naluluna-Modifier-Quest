// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:28 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: NoteController
#include "GlobalNamespace/NoteController.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoxCuttableBySaber
  class BoxCuttableBySaber;
  // Forward declaring type: Saber
  class Saber;
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TutorialNoteController
  class TutorialNoteController : public GlobalNamespace::NoteController {
    public:
    // private BoxCuttableBySaber _cuttableBySaberCore
    // Offset: 0x78
    GlobalNamespace::BoxCuttableBySaber* cuttableBySaberCore;
    // private BoxCuttableBySaber _cuttableBySaberBeforeNote
    // Offset: 0x80
    GlobalNamespace::BoxCuttableBySaber* cuttableBySaberBeforeNote;
    // private UnityEngine.GameObject _wrapperGO
    // Offset: 0x88
    UnityEngine::GameObject* wrapperGO;
    // private System.Boolean _beforeNoteCutWasOK
    // Offset: 0x90
    bool beforeNoteCutWasOK;
    // private System.Void HandleBeforeNoteWasCutBySaberEvent(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0xC33FF4
    void HandleBeforeNoteWasCutBySaberEvent(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec);
    // private System.Void HandleCoreWasCutBySaberEvent(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0xC340DC
    void HandleCoreWasCutBySaberEvent(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec);
    // public override System.Void set_hide(System.Boolean value)
    // Offset: 0xC33D50
    // Implemented from: NoteController
    // Base method: System.Void NoteController::set_hide(System.Boolean value)
    void set_hide(bool value);
    // protected override System.Void Awake()
    // Offset: 0xC33D74
    // Implemented from: NoteController
    // Base method: System.Void NoteController::Awake()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0xC33E48
    // Implemented from: NoteController
    // Base method: System.Void NoteController::OnDestroy()
    void OnDestroy();
    // protected override System.Void NoteDidPassMissedMarker()
    // Offset: 0xC33F9C
    // Implemented from: NoteController
    // Base method: System.Void NoteController::NoteDidPassMissedMarker()
    void NoteDidPassMissedMarker();
    // public override System.Void Init(NoteData noteData, System.Single worldRotation, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity, System.Single cutDirectionAngleOffset)
    // Offset: 0xC343C8
    // Implemented from: NoteController
    // Base method: System.Void NoteController::Init(NoteData noteData, System.Single worldRotation, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity, System.Single cutDirectionAngleOffset)
    void Init(GlobalNamespace::NoteData* noteData, float worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, float cutDirectionAngleOffset);
    // public System.Void .ctor()
    // Offset: 0xC34458
    // Implemented from: NoteController
    // Base method: System.Void NoteController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TutorialNoteController* New_ctor();
  }; // TutorialNoteController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialNoteController*, "", "TutorialNoteController");
#pragma pack(pop)
