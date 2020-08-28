// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.NavigationController
#include "HMUI/NavigationController.hpp"
// Including type: StandardLevelDetailViewController/ContentType
#include "GlobalNamespace/StandardLevelDetailViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LoadingControl
  class LoadingControl;
  // Forward declaring type: LevelCollectionViewController
  class LevelCollectionViewController;
  // Forward declaring type: LevelPackDetailViewController
  class LevelPackDetailViewController;
  // Skipping declaration: StandardLevelDetailViewController because it is already included!
  // Forward declaring type: AppStaticSettingsSO
  class AppStaticSettingsSO;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: IAnnotatedBeatmapLevelCollection
  class IAnnotatedBeatmapLevelCollection;
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LevelSelectionNavigationController
  class LevelSelectionNavigationController : public HMUI::NavigationController {
    public:
    // Nested type: GlobalNamespace::LevelSelectionNavigationController::$$c__DisplayClass42_0
    class $$c__DisplayClass42_0;
    // private LoadingControl _loadingControl
    // Offset: 0x90
    GlobalNamespace::LoadingControl* loadingControl;
    // private LevelCollectionViewController _levelCollectionViewController
    // Offset: 0x98
    GlobalNamespace::LevelCollectionViewController* levelCollectionViewController;
    // private LevelPackDetailViewController _levelPackDetailViewController
    // Offset: 0xA0
    GlobalNamespace::LevelPackDetailViewController* levelPackDetailViewController;
    // private StandardLevelDetailViewController _levelDetailViewController
    // Offset: 0xA8
    GlobalNamespace::StandardLevelDetailViewController* levelDetailViewController;
    // private AppStaticSettingsSO _appStaticSettings
    // Offset: 0xB0
    GlobalNamespace::AppStaticSettingsSO* appStaticSettings;
    // private System.Action`2<LevelSelectionNavigationController,StandardLevelDetailViewController/ContentType> didPresentDetailContentEvent
    // Offset: 0xB8
    System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::StandardLevelDetailViewController::ContentType>* didPresentDetailContentEvent;
    // private System.Action`2<LevelSelectionNavigationController,IBeatmapLevelPack> didSelectLevelPackEvent
    // Offset: 0xC0
    System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IBeatmapLevelPack*>* didSelectLevelPackEvent;
    // private System.Action`1<LevelSelectionNavigationController> didPressPlayButtonEvent
    // Offset: 0xC8
    System::Action_1<GlobalNamespace::LevelSelectionNavigationController*>* didPressPlayButtonEvent;
    // private System.Action`2<LevelSelectionNavigationController,IBeatmapLevelPack> didPressOpenPackButtonEvent
    // Offset: 0xD0
    System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IBeatmapLevelPack*>* didPressOpenPackButtonEvent;
    // private System.Action`2<LevelSelectionNavigationController,IBeatmapLevel> didPressPracticeButtonEvent
    // Offset: 0xD8
    System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IBeatmapLevel*>* didPressPracticeButtonEvent;
    // private System.Action`2<LevelSelectionNavigationController,IDifficultyBeatmap> didChangeDifficultyBeatmapEvent
    // Offset: 0xE0
    System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IDifficultyBeatmap*>* didChangeDifficultyBeatmapEvent;
    // private System.Boolean _showPlayerStatsInDetailView
    // Offset: 0xE8
    bool showPlayerStatsInDetailView;
    // private System.Boolean _showPracticeButtonInDetailView
    // Offset: 0xE9
    bool showPracticeButtonInDetailView;
    // private IBeatmapLevelPack _levelPack
    // Offset: 0xF0
    GlobalNamespace::IBeatmapLevelPack* levelPack;
    // private IPreviewBeatmapLevel _beatmapLevelToBeSelectedAfterPresent
    // Offset: 0xF8
    GlobalNamespace::IPreviewBeatmapLevel* beatmapLevelToBeSelectedAfterPresent;
    // public System.Void add_didPresentDetailContentEvent(System.Action`2<LevelSelectionNavigationController,StandardLevelDetailViewController/ContentType> value)
    // Offset: 0xBF6CE8
    void add_didPresentDetailContentEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::StandardLevelDetailViewController::ContentType>* value);
    // public System.Void remove_didPresentDetailContentEvent(System.Action`2<LevelSelectionNavigationController,StandardLevelDetailViewController/ContentType> value)
    // Offset: 0xBF7438
    void remove_didPresentDetailContentEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::StandardLevelDetailViewController::ContentType>* value);
    // public System.Void add_didSelectLevelPackEvent(System.Action`2<LevelSelectionNavigationController,IBeatmapLevelPack> value)
    // Offset: 0xBF6AFC
    void add_didSelectLevelPackEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IBeatmapLevelPack*>* value);
    // public System.Void remove_didSelectLevelPackEvent(System.Action`2<LevelSelectionNavigationController,IBeatmapLevelPack> value)
    // Offset: 0xBF724C
    void remove_didSelectLevelPackEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IBeatmapLevelPack*>* value);
    // public System.Void add_didPressPlayButtonEvent(System.Action`1<LevelSelectionNavigationController> value)
    // Offset: 0xBF6BA0
    void add_didPressPlayButtonEvent(System::Action_1<GlobalNamespace::LevelSelectionNavigationController*>* value);
    // public System.Void remove_didPressPlayButtonEvent(System.Action`1<LevelSelectionNavigationController> value)
    // Offset: 0xBF72F0
    void remove_didPressPlayButtonEvent(System::Action_1<GlobalNamespace::LevelSelectionNavigationController*>* value);
    // public System.Void add_didPressOpenPackButtonEvent(System.Action`2<LevelSelectionNavigationController,IBeatmapLevelPack> value)
    // Offset: 0xBF6D8C
    void add_didPressOpenPackButtonEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IBeatmapLevelPack*>* value);
    // public System.Void remove_didPressOpenPackButtonEvent(System.Action`2<LevelSelectionNavigationController,IBeatmapLevelPack> value)
    // Offset: 0xBF74DC
    void remove_didPressOpenPackButtonEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IBeatmapLevelPack*>* value);
    // public System.Void add_didPressPracticeButtonEvent(System.Action`2<LevelSelectionNavigationController,IBeatmapLevel> value)
    // Offset: 0xBF6C44
    void add_didPressPracticeButtonEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IBeatmapLevel*>* value);
    // public System.Void remove_didPressPracticeButtonEvent(System.Action`2<LevelSelectionNavigationController,IBeatmapLevel> value)
    // Offset: 0xBF7394
    void remove_didPressPracticeButtonEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IBeatmapLevel*>* value);
    // public System.Void add_didChangeDifficultyBeatmapEvent(System.Action`2<LevelSelectionNavigationController,IDifficultyBeatmap> value)
    // Offset: 0xBF6A58
    void add_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void remove_didChangeDifficultyBeatmapEvent(System.Action`2<LevelSelectionNavigationController,IDifficultyBeatmap> value)
    // Offset: 0xBF71A8
    void remove_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public IDifficultyBeatmap get_selectedDifficultyBeatmap()
    // Offset: 0xBF787C
    GlobalNamespace::IDifficultyBeatmap* get_selectedDifficultyBeatmap();
    // public System.Void SetData(IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection, System.Boolean showPackHeader, System.Boolean showPlayerStats, System.Boolean showPracticeButton, UnityEngine.GameObject noDataInfoPrefab)
    // Offset: 0xBF7B40
    void SetData(GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection, bool showPackHeader, bool showPlayerStats, bool showPracticeButton, UnityEngine::GameObject* noDataInfoPrefab);
    // public System.Void SelectLevel(IPreviewBeatmapLevel beatmapLevel)
    // Offset: 0xBF6E30
    void SelectLevel(GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);
    // private System.Void SetData(IBeatmapLevelPack levelPack, System.Boolean showPackHeader, System.Boolean showPlayerStats, System.Boolean showPracticeButton)
    // Offset: 0xBF8654
    void SetData(GlobalNamespace::IBeatmapLevelPack* levelPack, bool showPackHeader, bool showPlayerStats, bool showPracticeButton);
    // private System.Void SetData(IBeatmapLevelCollection beatmapLevelCollection, System.Boolean showPlayerStats, System.Boolean showPracticeButton, UnityEngine.GameObject noDataInfoPrefab)
    // Offset: 0xBF8874
    void SetData(GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection, bool showPlayerStats, bool showPracticeButton, UnityEngine::GameObject* noDataInfoPrefab);
    // public System.Void ShowLoading()
    // Offset: 0xBF78B0
    void ShowLoading();
    // private System.Void PresentViewControllersForPack()
    // Offset: 0xBF8900
    void PresentViewControllersForPack();
    // private System.Void PresentViewControllersForLevelCollection()
    // Offset: 0xBF8A78
    void PresentViewControllersForLevelCollection();
    // private System.Void HideLoading()
    // Offset: 0xBF8B8C
    void HideLoading();
    // private System.Void HideDetailViewController()
    // Offset: 0xBF8D78
    void HideDetailViewController();
    // private System.Void HandleLevelCollectionViewControllerDidSelectLevel(LevelCollectionViewController viewController, IPreviewBeatmapLevel level)
    // Offset: 0xBF9388
    void HandleLevelCollectionViewControllerDidSelectLevel(GlobalNamespace::LevelCollectionViewController* viewController, GlobalNamespace::IPreviewBeatmapLevel* level);
    // private System.Void HandleLevelCollectionViewControllerDidSelectPack(LevelCollectionViewController viewController)
    // Offset: 0xBF9434
    void HandleLevelCollectionViewControllerDidSelectPack(GlobalNamespace::LevelCollectionViewController* viewController);
    // private System.Void PresentDetailViewController(HMUI.ViewController viewController, System.Boolean immediately)
    // Offset: 0xBF8BA4
    void PresentDetailViewController(HMUI::ViewController* viewController, bool immediately);
    // private System.Void HandleLevelDetailViewControllerDidPressPlayButton(StandardLevelDetailViewController viewController)
    // Offset: 0xBF94CC
    void HandleLevelDetailViewControllerDidPressPlayButton(GlobalNamespace::StandardLevelDetailViewController* viewController);
    // private System.Void HandleLevelDetailViewControllerDidPressPracticeButton(StandardLevelDetailViewController viewController, IBeatmapLevel level)
    // Offset: 0xBF9530
    void HandleLevelDetailViewControllerDidPressPracticeButton(GlobalNamespace::StandardLevelDetailViewController* viewController, GlobalNamespace::IBeatmapLevel* level);
    // private System.Void HandleLevelDetailViewControllerDidChangeDifficultyBeatmap(StandardLevelDetailViewController viewController, IDifficultyBeatmap beatmap)
    // Offset: 0xBF95A8
    void HandleLevelDetailViewControllerDidChangeDifficultyBeatmap(GlobalNamespace::StandardLevelDetailViewController* viewController, GlobalNamespace::IDifficultyBeatmap* beatmap);
    // private System.Void HandleLevelDetailViewControllerDidPresentContent(StandardLevelDetailViewController viewController, StandardLevelDetailViewController/ContentType contentType)
    // Offset: 0xBF9620
    void HandleLevelDetailViewControllerDidPresentContent(GlobalNamespace::StandardLevelDetailViewController* viewController, GlobalNamespace::StandardLevelDetailViewController::ContentType contentType);
    // private System.Void HandleLevelDetailViewControllerDidPressOpenLevelPackButton(StandardLevelDetailViewController viewController, IBeatmapLevelPack levelPack)
    // Offset: 0xBF9698
    void HandleLevelDetailViewControllerDidPressOpenLevelPackButton(GlobalNamespace::StandardLevelDetailViewController* viewController, GlobalNamespace::IBeatmapLevelPack* levelPack);
    // private System.Void HandleLevelDetailViewControllerLevelFavoriteStatusDidChange(StandardLevelDetailViewController viewController, System.Boolean favoriteStatus)
    // Offset: 0xBF9710
    void HandleLevelDetailViewControllerLevelFavoriteStatusDidChange(GlobalNamespace::StandardLevelDetailViewController* viewController, bool favoriteStatus);
    // public System.Void RefreshDetail()
    // Offset: 0xBF8420
    void RefreshDetail();
    // protected override System.Void DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    // Offset: 0xBF8DDC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    void DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType);
    // protected override System.Void DidDeactivate(HMUI.ViewController/DeactivationType deactivationType)
    // Offset: 0xBF90C8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(HMUI.ViewController/DeactivationType deactivationType)
    void DidDeactivate(HMUI::ViewController::DeactivationType deactivationType);
    // public System.Void .ctor()
    // Offset: 0xBF972C
    // Implemented from: HMUI.NavigationController
    // Base method: System.Void NavigationController::.ctor()
    // Base method: System.Void ContainerViewController::.ctor()
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LevelSelectionNavigationController* New_ctor();
  }; // LevelSelectionNavigationController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelSelectionNavigationController*, "", "LevelSelectionNavigationController");
#pragma pack(pop)
