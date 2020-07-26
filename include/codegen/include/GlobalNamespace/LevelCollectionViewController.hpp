// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelCollectionTableView
  class LevelCollectionTableView;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: SongPreviewPlayer
  class SongPreviewPlayer;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LevelCollectionViewController
  class LevelCollectionViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::LevelCollectionViewController::$SongPlayerCrossfadeToLevelAsync$d__23
    struct $SongPlayerCrossfadeToLevelAsync$d__23;
    // private LevelCollectionTableView _levelCollectionTableView
    // Offset: 0x68
    GlobalNamespace::LevelCollectionTableView* levelCollectionTableView;
    // private UnityEngine.RectTransform _noDataInfoContainer
    // Offset: 0x70
    UnityEngine::RectTransform* noDataInfoContainer;
    // private PlayerDataModel _playerDataModel
    // Offset: 0x78
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // private Zenject.DiContainer _container
    // Offset: 0x80
    Zenject::DiContainer* container;
    // private AdditionalContentModel _additionalContentModel
    // Offset: 0x88
    GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // private SongPreviewPlayer _songPreviewPlayer
    // Offset: 0x90
    GlobalNamespace::SongPreviewPlayer* songPreviewPlayer;
    // private System.Action`2<LevelCollectionViewController,IPreviewBeatmapLevel> didSelectLevelEvent
    // Offset: 0x98
    System::Action_2<GlobalNamespace::LevelCollectionViewController*, GlobalNamespace::IPreviewBeatmapLevel*>* didSelectLevelEvent;
    // private System.Action`1<LevelCollectionViewController> didSelectHeaderEvent
    // Offset: 0xA0
    System::Action_1<GlobalNamespace::LevelCollectionViewController*>* didSelectHeaderEvent;
    // private System.Boolean _showHeader
    // Offset: 0xA8
    bool showHeader;
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Offset: 0xB0
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // private System.String _songPlayerCrossfadignToLevelId
    // Offset: 0xB8
    ::Il2CppString* songPlayerCrossfadignToLevelId;
    // private UnityEngine.GameObject _noDataInfoGO
    // Offset: 0xC0
    UnityEngine::GameObject* noDataInfoGO;
    // private IPreviewBeatmapLevel _previewBeatmapLevelToBeSelected
    // Offset: 0xC8
    GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevelToBeSelected;
    // public System.Void add_didSelectLevelEvent(System.Action`2<LevelCollectionViewController,IPreviewBeatmapLevel> value)
    // Offset: 0xB49C8C
    void add_didSelectLevelEvent(System::Action_2<GlobalNamespace::LevelCollectionViewController*, GlobalNamespace::IPreviewBeatmapLevel*>* value);
    // public System.Void remove_didSelectLevelEvent(System.Action`2<LevelCollectionViewController,IPreviewBeatmapLevel> value)
    // Offset: 0xB49D30
    void remove_didSelectLevelEvent(System::Action_2<GlobalNamespace::LevelCollectionViewController*, GlobalNamespace::IPreviewBeatmapLevel*>* value);
    // public System.Void add_didSelectHeaderEvent(System.Action`1<LevelCollectionViewController> value)
    // Offset: 0xB49DD4
    void add_didSelectHeaderEvent(System::Action_1<GlobalNamespace::LevelCollectionViewController*>* value);
    // public System.Void remove_didSelectHeaderEvent(System.Action`1<LevelCollectionViewController> value)
    // Offset: 0xB49E78
    void remove_didSelectHeaderEvent(System::Action_1<GlobalNamespace::LevelCollectionViewController*>* value);
    // public System.Void SetData(IBeatmapLevelCollection beatmapLevelCollection, System.String headerText, UnityEngine.Sprite headerSprite, System.Boolean sortLevels, UnityEngine.GameObject noDataInfoPrefab)
    // Offset: 0xB49F1C
    void SetData(GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection, ::Il2CppString* headerText, UnityEngine::Sprite* headerSprite, bool sortLevels, UnityEngine::GameObject* noDataInfoPrefab);
    // public System.Void SelectLevel(IPreviewBeatmapLevel beatmapLevel)
    // Offset: 0xB4A21C
    void SelectLevel(GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);
    // public System.Void RefreshFavorites()
    // Offset: 0xB4A268
    void RefreshFavorites();
    // private System.Void HandleLevelCollectionTableViewDidSelectLevel(LevelCollectionTableView tableView, IPreviewBeatmapLevel level)
    // Offset: 0xB4A574
    void HandleLevelCollectionTableViewDidSelectLevel(GlobalNamespace::LevelCollectionTableView* tableView, GlobalNamespace::IPreviewBeatmapLevel* level);
    // private System.Void SongPlayerCrossfadeToLevelAsync(IPreviewBeatmapLevel level)
    // Offset: 0xB4A608
    void SongPlayerCrossfadeToLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* level);
    // private System.Void HandleLevelCollectionTableViewDidSelectPack(LevelCollectionTableView tableView)
    // Offset: 0xB4A6F4
    void HandleLevelCollectionTableViewDidSelectPack(GlobalNamespace::LevelCollectionTableView* tableView);
    // private System.Void HandleAdditionalContentModelDidInvalidateData()
    // Offset: 0xB4A76C
    void HandleAdditionalContentModelDidInvalidateData();
    // protected override System.Void DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    // Offset: 0xB4A298
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    void DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType);
    // protected override System.Void DidDeactivate(HMUI.ViewController/DeactivationType deactivationType)
    // Offset: 0xB4A414
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(HMUI.ViewController/DeactivationType deactivationType)
    void DidDeactivate(HMUI::ViewController::DeactivationType deactivationType);
    // public System.Void .ctor()
    // Offset: 0xB4A784
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LevelCollectionViewController* New_ctor();
  }; // LevelCollectionViewController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelCollectionViewController*, "", "LevelCollectionViewController");
#pragma pack(pop)
