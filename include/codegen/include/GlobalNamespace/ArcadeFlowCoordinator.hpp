// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: LevelSelectionFlowCoordinator
#include "GlobalNamespace/LevelSelectionFlowCoordinator.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LocalLeaderboardsModel
  class LocalLeaderboardsModel;
  // Forward declaring type: MenuLightsPresetSO
  class MenuLightsPresetSO;
  // Forward declaring type: TabBarViewController
  class TabBarViewController;
  // Forward declaring type: HowToPlayViewController
  class HowToPlayViewController;
  // Forward declaring type: MenuLightsManager
  class MenuLightsManager;
  // Forward declaring type: ResultsViewController
  class ResultsViewController;
  // Forward declaring type: LocalLeaderboardViewController
  class LocalLeaderboardViewController;
  // Forward declaring type: EnterPlayerGuestNameViewController
  class EnterPlayerGuestNameViewController;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: LeaderboardViewController
  class LeaderboardViewController;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: ViewController because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ArcadeFlowCoordinator
  class ArcadeFlowCoordinator : public GlobalNamespace::LevelSelectionFlowCoordinator {
    public:
    // Nested type: GlobalNamespace::ArcadeFlowCoordinator::$$c__DisplayClass19_0
    class $$c__DisplayClass19_0;
    // Nested type: GlobalNamespace::ArcadeFlowCoordinator::$$c__DisplayClass23_0
    class $$c__DisplayClass23_0;
    // private LocalLeaderboardsModel _localLeaderboardsModel
    // Offset: 0x108
    GlobalNamespace::LocalLeaderboardsModel* localLeaderboardsModel;
    // private MenuLightsPresetSO _defaultLightsPreset
    // Offset: 0x110
    GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset;
    // private MenuLightsPresetSO _resultsLightsPreset
    // Offset: 0x118
    GlobalNamespace::MenuLightsPresetSO* resultsLightsPreset;
    // private TabBarViewController _tabBarViewController
    // Offset: 0x120
    GlobalNamespace::TabBarViewController* tabBarViewController;
    // private HowToPlayViewController _howToPlayViewController
    // Offset: 0x128
    GlobalNamespace::HowToPlayViewController* howToPlayViewController;
    // private MenuLightsManager _menuLightsManager
    // Offset: 0x130
    GlobalNamespace::MenuLightsManager* menuLightsManager;
    // private ResultsViewController _resultsViewController
    // Offset: 0x138
    GlobalNamespace::ResultsViewController* resultsViewController;
    // private LocalLeaderboardViewController _localLeaderboardViewController
    // Offset: 0x140
    GlobalNamespace::LocalLeaderboardViewController* localLeaderboardViewController;
    // private EnterPlayerGuestNameViewController _enterNameViewController
    // Offset: 0x148
    GlobalNamespace::EnterPlayerGuestNameViewController* enterNameViewController;
    // private System.Boolean WillScoreGoToLeaderboard(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, System.Boolean practice)
    // Offset: 0x196E140
    bool WillScoreGoToLeaderboard(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool practice);
    // private System.Boolean ProcessScore(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, System.Boolean practice, System.String playerName)
    // Offset: 0x196E1AC
    bool ProcessScore(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool practice, ::Il2CppString* playerName);
    // private System.Void HandleResultsViewControllerContinueButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0x196E27C
    void HandleResultsViewControllerContinueButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // private System.Void HandleResultsViewControllerRestartButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0x196E2C0
    void HandleResultsViewControllerRestartButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // private System.Void HandleHowToPlayViewControllerDidPressTutorialButton()
    // Offset: 0x196E3A0
    void HandleHowToPlayViewControllerDidPressTutorialButton();
    // private System.Void HandleHowToPlayTabSelected()
    // Offset: 0x196E3C0
    void HandleHowToPlayTabSelected();
    // private System.Void <LevelSelectionFlowCoordinatorDidActivate>b__17_0()
    // Offset: 0x196E478
    void $LevelSelectionFlowCoordinatorDidActivate$b__17_0();
    // private System.Void <HandleHowToPlayTabSelected>b__25_0()
    // Offset: 0x196E490
    void $HandleHowToPlayTabSelected$b__25_0();
    // protected override LeaderboardViewController get_leaderboardViewController()
    // Offset: 0x196DA58
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: LeaderboardViewController LevelSelectionFlowCoordinator::get_leaderboardViewController()
    GlobalNamespace::LeaderboardViewController* get_leaderboardViewController();
    // protected override HMUI.ViewController get_topScreenViewController()
    // Offset: 0x196DA60
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: HMUI.ViewController LevelSelectionFlowCoordinator::get_topScreenViewController()
    HMUI::ViewController* get_topScreenViewController();
    // protected override System.Boolean get_showPlayerStatsInDetailView()
    // Offset: 0x196DA68
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_showPlayerStatsInDetailView()
    bool get_showPlayerStatsInDetailView();
    // protected override System.Boolean get_hidePacksIfOneOrNone()
    // Offset: 0x196DA70
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_hidePacksIfOneOrNone()
    bool get_hidePacksIfOneOrNone();
    // protected override System.Void LevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, HMUI.FlowCoordinator/ActivationType activationType)
    // Offset: 0x196DA78
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, HMUI.FlowCoordinator/ActivationType activationType)
    void LevelSelectionFlowCoordinatorDidActivate(bool firstActivation, HMUI::FlowCoordinator::ActivationType activationType);
    // protected override System.Void LevelSelectionFlowCoordinatorDidDeactivate(HMUI.FlowCoordinator/DeactivationType deactivationType)
    // Offset: 0x196DD80
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidDeactivate(HMUI.FlowCoordinator/DeactivationType deactivationType)
    void LevelSelectionFlowCoordinatorDidDeactivate(HMUI::FlowCoordinator::DeactivationType deactivationType);
    // protected override System.Void ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0x196DF70
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    void ProcessLevelCompletionResultsAfterLevelDidFinish(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
    // public System.Void .ctor()
    // Offset: 0x196E470
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::.ctor()
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ArcadeFlowCoordinator* New_ctor();
  }; // ArcadeFlowCoordinator
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ArcadeFlowCoordinator*, "", "ArcadeFlowCoordinator");
#pragma pack(pop)
