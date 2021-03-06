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
  // Forward declaring type: TutorialSongController
  class TutorialSongController;
  // Forward declaring type: IntroTutorialController
  class IntroTutorialController;
  // Forward declaring type: AudioFading
  class AudioFading;
  // Forward declaring type: TutorialScenesTransitionSetupDataSO
  class TutorialScenesTransitionSetupDataSO;
  // Forward declaring type: Signal
  class Signal;
  // Forward declaring type: PauseController
  class PauseController;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
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
  // Autogenerated type: TutorialController
  class TutorialController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::TutorialController::$OutroCoroutine$d__13
    class $OutroCoroutine$d__13;
    // private TutorialSongController _tutorialSongController
    // Offset: 0x18
    GlobalNamespace::TutorialSongController* tutorialSongController;
    // private IntroTutorialController _introTutorialController
    // Offset: 0x20
    GlobalNamespace::IntroTutorialController* introTutorialController;
    // private AudioFading _audioFading
    // Offset: 0x28
    GlobalNamespace::AudioFading* audioFading;
    // private TutorialScenesTransitionSetupDataSO _tutorialSceneSetupData
    // Offset: 0x30
    GlobalNamespace::TutorialScenesTransitionSetupDataSO* tutorialSceneSetupData;
    // private Signal _tutorialIntroStartedSignal
    // Offset: 0x38
    GlobalNamespace::Signal* tutorialIntroStartedSignal;
    // private Signal _tutorialFinishedSignal
    // Offset: 0x40
    GlobalNamespace::Signal* tutorialFinishedSignal;
    // private PauseController _pauseController
    // Offset: 0x48
    GlobalNamespace::PauseController* pauseController;
    // private System.Boolean _paused
    // Offset: 0x50
    bool paused;
    // private System.Boolean _doingOutroTransition
    // Offset: 0x51
    bool doingOutroTransition;
    // protected System.Void Start()
    // Offset: 0xC481AC
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xC4834C
    void OnDestroy();
    // private System.Void HandleIntroTutorialDidFinishEvent()
    // Offset: 0xC48590
    void HandleIntroTutorialDidFinishEvent();
    // private System.Void HandleTutorialSongControllerSongDidFinishEvent()
    // Offset: 0xC485B0
    void HandleTutorialSongControllerSongDidFinishEvent();
    // private System.Collections.IEnumerator OutroCoroutine()
    // Offset: 0xC485FC
    System::Collections::IEnumerator* OutroCoroutine();
    // private System.Void HandlePauseControllerCanPause(System.Action`1<System.Boolean> canPause)
    // Offset: 0xC486A4
    void HandlePauseControllerCanPause(System::Action_1<bool>* canPause);
    // private System.Void HandlePauseControllerDidPause()
    // Offset: 0xC48730
    void HandlePauseControllerDidPause();
    // private System.Void HandlePauseControllerDidResume()
    // Offset: 0xC4873C
    void HandlePauseControllerDidResume();
    // public System.Void .ctor()
    // Offset: 0xC48744
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TutorialController* New_ctor();
  }; // TutorialController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialController*, "", "TutorialController");
#pragma pack(pop)
