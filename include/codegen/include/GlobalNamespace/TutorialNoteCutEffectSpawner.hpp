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
  // Forward declaring type: NoteCutParticlesEffect
  class NoteCutParticlesEffect;
  // Forward declaring type: ShockwaveEffect
  class ShockwaveEffect;
  // Forward declaring type: NoteDebrisSpawner
  class NoteDebrisSpawner;
  // Forward declaring type: NoteCutHapticEffect
  class NoteCutHapticEffect;
  // Forward declaring type: FlyingTextSpawner
  class FlyingTextSpawner;
  // Forward declaring type: BombExplosionEffect
  class BombExplosionEffect;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: INoteController
  class INoteController;
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TutorialNoteCutEffectSpawner
  class TutorialNoteCutEffectSpawner : public UnityEngine::MonoBehaviour {
    public:
    // private NoteCutParticlesEffect _noteCutParticlesEffect
    // Offset: 0x18
    GlobalNamespace::NoteCutParticlesEffect* noteCutParticlesEffect;
    // private ShockwaveEffect _shockwaveEffect
    // Offset: 0x20
    GlobalNamespace::ShockwaveEffect* shockwaveEffect;
    // private NoteDebrisSpawner _noteDebrisSpawner
    // Offset: 0x28
    GlobalNamespace::NoteDebrisSpawner* noteDebrisSpawner;
    // private NoteCutHapticEffect _noteCutHapticEffect
    // Offset: 0x30
    GlobalNamespace::NoteCutHapticEffect* noteCutHapticEffect;
    // private FlyingTextSpawner _failFlyingTextSpawner
    // Offset: 0x38
    GlobalNamespace::FlyingTextSpawner* failFlyingTextSpawner;
    // private BombExplosionEffect _bombExplosionEffect
    // Offset: 0x40
    GlobalNamespace::BombExplosionEffect* bombExplosionEffect;
    // private BeatmapObjectManager _beatmapObjectManager
    // Offset: 0x48
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // private ColorManager _colorManager
    // Offset: 0x50
    GlobalNamespace::ColorManager* colorManager;
    // private System.Boolean <handleWrongSaberTypeAsGoodAndDontWarnOnBadCuts>k__BackingField
    // Offset: 0x58
    bool handleWrongSaberTypeAsGoodAndDontWarnOnBadCuts;
    // public System.Boolean get_handleWrongSaberTypeAsGoodAndDontWarnOnBadCuts()
    // Offset: 0xC49298
    bool get_handleWrongSaberTypeAsGoodAndDontWarnOnBadCuts();
    // public System.Void set_handleWrongSaberTypeAsGoodAndDontWarnOnBadCuts(System.Boolean value)
    // Offset: 0xC492A0
    void set_handleWrongSaberTypeAsGoodAndDontWarnOnBadCuts(bool value);
    // protected System.Void Start()
    // Offset: 0xC492AC
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xC4938C
    void OnDestroy();
    // private System.Void HandleNoteWasCut(INoteController noteController, NoteCutInfo noteCutInfo)
    // Offset: 0xC494B0
    void HandleNoteWasCut(GlobalNamespace::INoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo);
    // private System.Void SpawnNoteCutEffect(UnityEngine.Vector3 pos, INoteController noteController, NoteCutInfo noteCutInfo)
    // Offset: 0xC4991C
    void SpawnNoteCutEffect(UnityEngine::Vector3 pos, GlobalNamespace::INoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo);
    // private System.Void SpawnBombCutEffect(UnityEngine.Vector3 pos, INoteController noteController, NoteCutInfo noteCutInfo)
    // Offset: 0xC49738
    void SpawnBombCutEffect(UnityEngine::Vector3 pos, GlobalNamespace::INoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo);
    // private System.Void HandleNoteWasMissed(INoteController noteController)
    // Offset: 0xC49DD4
    void HandleNoteWasMissed(GlobalNamespace::INoteController* noteController);
    // public System.Void .ctor()
    // Offset: 0xC49EF8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TutorialNoteCutEffectSpawner* New_ctor();
  }; // TutorialNoteCutEffectSpawner
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialNoteCutEffectSpawner*, "", "TutorialNoteCutEffectSpawner");
#pragma pack(pop)
