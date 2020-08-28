// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NoteController
#include "GlobalNamespace/NoteController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CuttableBySaber
  class CuttableBySaber;
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
  // Autogenerated type: BombNoteController
  class BombNoteController : public GlobalNamespace::NoteController {
    public:
    // private CuttableBySaber _cuttableBySaber
    // Offset: 0x78
    GlobalNamespace::CuttableBySaber* cuttableBySaber;
    // private UnityEngine.GameObject _wrapperGO
    // Offset: 0x80
    UnityEngine::GameObject* wrapperGO;
    // protected System.Void HandleDidPassHalfJump()
    // Offset: 0xB7C918
    void HandleDidPassHalfJump();
    // private System.Void HandleWasCutBySaber(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0xB7C93C
    void HandleWasCutBySaber(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec);
    // public override System.Void set_hide(System.Boolean value)
    // Offset: 0xB7C6F8
    // Implemented from: NoteController
    // Base method: System.Void NoteController::set_hide(System.Boolean value)
    void set_hide(bool value);
    // protected override System.Void Awake()
    // Offset: 0xB7C71C
    // Implemented from: NoteController
    // Base method: System.Void NoteController::Awake()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0xB7C7F8
    // Implemented from: NoteController
    // Base method: System.Void NoteController::OnDestroy()
    void OnDestroy();
    // protected override System.Void NoteDidPassMissedMarker()
    // Offset: 0xB7C8D8
    // Implemented from: NoteController
    // Base method: System.Void NoteController::NoteDidPassMissedMarker()
    void NoteDidPassMissedMarker();
    // public override System.Void Init(NoteData noteData, System.Single worldRotation, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity, System.Single cutDirectionAngleOffset)
    // Offset: 0xB7CB08
    // Implemented from: NoteController
    // Base method: System.Void NoteController::Init(NoteData noteData, System.Single worldRotation, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity, System.Single cutDirectionAngleOffset)
    void Init(GlobalNamespace::NoteData* noteData, float worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, float cutDirectionAngleOffset);
    // protected override System.Void NoteDidStartDissolving()
    // Offset: 0xB7CB7C
    // Implemented from: NoteController
    // Base method: System.Void NoteController::NoteDidStartDissolving()
    void NoteDidStartDissolving();
    // public System.Void .ctor()
    // Offset: 0xB7CBA0
    // Implemented from: NoteController
    // Base method: System.Void NoteController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BombNoteController* New_ctor();
  }; // BombNoteController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BombNoteController*, "", "BombNoteController");
#pragma pack(pop)
