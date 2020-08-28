// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LevelSelectionFlowCoordinator
#include "GlobalNamespace/LevelSelectionFlowCoordinator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MenuLightsPresetSO
  class MenuLightsPresetSO;
  // Forward declaring type: NetEaseLeaderboardViewController
  class NetEaseLeaderboardViewController;
  // Forward declaring type: TabBarViewController
  class TabBarViewController;
  // Forward declaring type: NetEaseManager
  class NetEaseManager;
  // Forward declaring type: MenuLightsManager
  class MenuLightsManager;
  // Forward declaring type: ResultsViewController
  class ResultsViewController;
  // Forward declaring type: LocalLeaderboardViewController
  class LocalLeaderboardViewController;
  // Forward declaring type: HowToPlayViewController
  class HowToPlayViewController;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: LeaderboardViewController
  class LeaderboardViewController;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: ViewController because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NetEaseArcadeFlowCoordinator
  class NetEaseArcadeFlowCoordinator : public GlobalNamespace::LevelSelectionFlowCoordinator {
    public:
    // Nested type: GlobalNamespace::NetEaseArcadeFlowCoordinator::$LogoutAsync$d__19
    struct $LogoutAsync$d__19;
    // Nested type: GlobalNamespace::NetEaseArcadeFlowCoordinator::$$c__DisplayClass24_0
    class $$c__DisplayClass24_0;
    // private MenuLightsPresetSO _defaultLightsPreset
    // Offset: 0x108
    GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset;
    // private NetEaseLeaderboardViewController _netEaseLeaderboardViewController
    // Offset: 0x110
    GlobalNamespace::NetEaseLeaderboardViewController* netEaseLeaderboardViewController;
    // private TabBarViewController _tabBarViewController
    // Offset: 0x118
    GlobalNamespace::TabBarViewController* tabBarViewController;
    // private NetEaseManager _netEaseManager
    // Offset: 0x120
    GlobalNamespace::NetEaseManager* netEaseManager;
    // private MenuLightsManager _menuLightsManager
    // Offset: 0x128
    GlobalNamespace::MenuLightsManager* menuLightsManager;
    // private ResultsViewController _resultsViewController
    // Offset: 0x130
    GlobalNamespace::ResultsViewController* resultsViewController;
    // private LocalLeaderboardViewController _localLeaderboardViewController
    // Offset: 0x138
    GlobalNamespace::LocalLeaderboardViewController* localLeaderboardViewController;
    // private HowToPlayViewController _howToPlayViewController
    // Offset: 0x140
    GlobalNamespace::HowToPlayViewController* howToPlayViewController;
    // private System.Void ProcessScore(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0xC11430
    void ProcessScore(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
    // private System.Void AddScoreToLeaderboards(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0xC116DC
    void AddScoreToLeaderboards(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
    // private System.Void LogoutAsync()
    // Offset: 0xC11944
    void LogoutAsync();
    // private System.Void HandleHowToPlayViewControllerDidPressTutorialButton()
    // Offset: 0xC11A20
    void HandleHowToPlayViewControllerDidPressTutorialButton();
    // private System.Void HandleHowToPlayTabSelected()
    // Offset: 0xC11A40
    void HandleHowToPlayTabSelected();
    // private System.Void HandleLogoutTabWasSelected()
    // Offset: 0xC11AF0
    void HandleLogoutTabWasSelected();
    // private System.Void HandleResultsViewControllerContinueButtonPressed(ResultsViewController viewController)
    // Offset: 0xC11AF4
    void HandleResultsViewControllerContinueButtonPressed(GlobalNamespace::ResultsViewController* viewController);
    // private System.Void HandleResultsViewControllerRestartButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0xC11B38
    void HandleResultsViewControllerRestartButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // private System.Void <LevelSelectionFlowCoordinatorDidActivate>b__14_0()
    // Offset: 0xC11C20
    void $LevelSelectionFlowCoordinatorDidActivate$b__14_0();
    // private System.Void <HandleHowToPlayTabSelected>b__21_0()
    // Offset: 0xC11C38
    void $HandleHowToPlayTabSelected$b__21_0();
    // protected override LeaderboardViewController get_leaderboardViewController()
    // Offset: 0xC10DC4
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: LeaderboardViewController LevelSelectionFlowCoordinator::get_leaderboardViewController()
    GlobalNamespace::LeaderboardViewController* get_leaderboardViewController();
    // protected override HMUI.ViewController get_topScreenViewController()
    // Offset: 0xC10E08
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: HMUI.ViewController LevelSelectionFlowCoordinator::get_topScreenViewController()
    HMUI::ViewController* get_topScreenViewController();
    // protected override System.Boolean get_showPlayerStatsInDetailView()
    // Offset: 0xC10E10
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_showPlayerStatsInDetailView()
    bool get_showPlayerStatsInDetailView();
    // protected override System.Void LevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, HMUI.FlowCoordinator/ActivationType activationType)
    // Offset: 0xC10E18
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, HMUI.FlowCoordinator/ActivationType activationType)
    void LevelSelectionFlowCoordinatorDidActivate(bool firstActivation, HMUI::FlowCoordinator::ActivationType activationType);
    // protected override System.Void LevelSelectionFlowCoordinatorDidDeactivate(HMUI.FlowCoordinator/DeactivationType deactivationType)
    // Offset: 0xC1119C
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidDeactivate(HMUI.FlowCoordinator/DeactivationType deactivationType)
    void LevelSelectionFlowCoordinatorDidDeactivate(HMUI::FlowCoordinator::DeactivationType deactivationType);
    // protected override System.Void ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0xC1137C
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    void ProcessLevelCompletionResultsAfterLevelDidFinish(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
    // public System.Void .ctor()
    // Offset: 0xC11C18
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::.ctor()
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NetEaseArcadeFlowCoordinator* New_ctor();
  }; // NetEaseArcadeFlowCoordinator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseArcadeFlowCoordinator*, "", "NetEaseArcadeFlowCoordinator");
#pragma pack(pop)
