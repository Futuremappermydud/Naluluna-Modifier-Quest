// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:28 PM
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
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
  // Forward declaring type: MenuScenesTransitionSetupDataSO
  class MenuScenesTransitionSetupDataSO;
  // Forward declaring type: IRichPresencePlatformHandler
  class IRichPresencePlatformHandler;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: BrowsingMenusRichPresenceData
  class BrowsingMenusRichPresenceData;
  // Forward declaring type: PlayingCampaignRichPresenceData
  class PlayingCampaignRichPresenceData;
  // Forward declaring type: PlayingTutorialPresenceData
  class PlayingTutorialPresenceData;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: RichPresenceManager
  class RichPresenceManager : public UnityEngine::MonoBehaviour {
    public:
    // private ScenesTransitionSetupDataSO _standardLevelScenesTransitionSetupData
    // Offset: 0x18
    GlobalNamespace::ScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData;
    // private ScenesTransitionSetupDataSO _tutorialScenesTransitionSetupData
    // Offset: 0x20
    GlobalNamespace::ScenesTransitionSetupDataSO* tutorialScenesTransitionSetupData;
    // private MissionLevelScenesTransitionSetupDataSO _missionLevelScenesTransitionSetupData
    // Offset: 0x28
    GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData;
    // private MenuScenesTransitionSetupDataSO _menuScenesTransitionSetupData
    // Offset: 0x30
    GlobalNamespace::MenuScenesTransitionSetupDataSO* menuScenesTransitionSetupData;
    // private IRichPresencePlatformHandler _richPresencePlatformHandler
    // Offset: 0x38
    GlobalNamespace::IRichPresencePlatformHandler* richPresencePlatformHandler;
    // private GameScenesManager _gameScenesManager
    // Offset: 0x40
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // private System.Boolean _menuWasLoaded
    // Offset: 0x48
    bool menuWasLoaded;
    // private BrowsingMenusRichPresenceData _browsingMenusRichPresenceData
    // Offset: 0x50
    GlobalNamespace::BrowsingMenusRichPresenceData* browsingMenusRichPresenceData;
    // private PlayingCampaignRichPresenceData _playingCampaignRichPresenceData
    // Offset: 0x58
    GlobalNamespace::PlayingCampaignRichPresenceData* playingCampaignRichPresenceData;
    // private PlayingTutorialPresenceData _playingTutorialPresenceData
    // Offset: 0x60
    GlobalNamespace::PlayingTutorialPresenceData* playingTutorialPresenceData;
    // protected System.Void Awake()
    // Offset: 0xC0C0C4
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xC0C1D4
    void OnDestroy();
    // private System.Void HandleGameScenesManagerTransitionDidFinish(ScenesTransitionSetupDataSO scenesTransitionSetupData, Zenject.DiContainer diContainer)
    // Offset: 0xC0C2B0
    void HandleGameScenesManagerTransitionDidFinish(GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, Zenject::DiContainer* diContainer);
    // public System.Void .ctor()
    // Offset: 0xC0C6E4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static RichPresenceManager* New_ctor();
  }; // RichPresenceManager
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RichPresenceManager*, "", "RichPresenceManager");
#pragma pack(pop)
