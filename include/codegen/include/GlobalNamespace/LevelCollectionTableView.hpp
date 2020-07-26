// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.TableView/IDataSource
#include "HMUI/TableView_IDataSource.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: TableView because it is already included!
  // Forward declaring type: AlphabetScrollbar
  class AlphabetScrollbar;
  // Forward declaring type: TableCell
  class TableCell;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelListTableCell
  class LevelListTableCell;
  // Forward declaring type: LevelPackHeaderTableCell
  class LevelPackHeaderTableCell;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LevelCollectionTableView
  class LevelCollectionTableView : public UnityEngine::MonoBehaviour, public HMUI::TableView::IDataSource {
    public:
    // private HMUI.TableView _tableView
    // Offset: 0x18
    HMUI::TableView* tableView;
    // private HMUI.AlphabetScrollbar _alphabetScrollbar
    // Offset: 0x20
    HMUI::AlphabetScrollbar* alphabetScrollbar;
    // private LevelListTableCell _levelCellPrefab
    // Offset: 0x28
    GlobalNamespace::LevelListTableCell* levelCellPrefab;
    // private System.String _levelCellsReuseIdentifier
    // Offset: 0x30
    ::Il2CppString* levelCellsReuseIdentifier;
    // private LevelPackHeaderTableCell _packCellPrefab
    // Offset: 0x38
    GlobalNamespace::LevelPackHeaderTableCell* packCellPrefab;
    // private System.String _packCellsReuseIdentifier
    // Offset: 0x40
    ::Il2CppString* packCellsReuseIdentifier;
    // private System.Single _cellHeight
    // Offset: 0x48
    float cellHeight;
    // private System.Int32 _showAlphabetScrollbarLevelCountThreshold
    // Offset: 0x4C
    int showAlphabetScrollbarLevelCountThreshold;
    // private AdditionalContentModel _additionalContentModel
    // Offset: 0x50
    GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // private System.Action`2<LevelCollectionTableView,IPreviewBeatmapLevel> didSelectLevelEvent
    // Offset: 0x58
    System::Action_2<GlobalNamespace::LevelCollectionTableView*, GlobalNamespace::IPreviewBeatmapLevel*>* didSelectLevelEvent;
    // private System.Action`1<LevelCollectionTableView> didSelectHeaderEvent
    // Offset: 0x60
    System::Action_1<GlobalNamespace::LevelCollectionTableView*>* didSelectHeaderEvent;
    // private System.Boolean _isInitialized
    // Offset: 0x68
    bool isInitialized;
    // private IPreviewBeatmapLevel[] _previewBeatmapLevels
    // Offset: 0x70
    ::Array<GlobalNamespace::IPreviewBeatmapLevel*>* previewBeatmapLevels;
    // private UnityEngine.Sprite _headerSprite
    // Offset: 0x78
    UnityEngine::Sprite* headerSprite;
    // private System.String _headerText
    // Offset: 0x80
    ::Il2CppString* headerText;
    // private System.Boolean _showLevelPackHeader
    // Offset: 0x88
    bool showLevelPackHeader;
    // private System.Collections.Generic.HashSet`1<System.String> _favoriteLevelIds
    // Offset: 0x90
    System::Collections::Generic::HashSet_1<::Il2CppString*>* favoriteLevelIds;
    // private System.Int32 _selectedRow
    // Offset: 0x98
    int selectedRow;
    // private IPreviewBeatmapLevel _selectedPreviewBeatmapLevel
    // Offset: 0xA0
    GlobalNamespace::IPreviewBeatmapLevel* selectedPreviewBeatmapLevel;
    // public System.Void add_didSelectLevelEvent(System.Action`2<LevelCollectionTableView,IPreviewBeatmapLevel> value)
    // Offset: 0xB48398
    void add_didSelectLevelEvent(System::Action_2<GlobalNamespace::LevelCollectionTableView*, GlobalNamespace::IPreviewBeatmapLevel*>* value);
    // public System.Void remove_didSelectLevelEvent(System.Action`2<LevelCollectionTableView,IPreviewBeatmapLevel> value)
    // Offset: 0xB4843C
    void remove_didSelectLevelEvent(System::Action_2<GlobalNamespace::LevelCollectionTableView*, GlobalNamespace::IPreviewBeatmapLevel*>* value);
    // public System.Void add_didSelectHeaderEvent(System.Action`1<LevelCollectionTableView> value)
    // Offset: 0xB484E0
    void add_didSelectHeaderEvent(System::Action_1<GlobalNamespace::LevelCollectionTableView*>* value);
    // public System.Void remove_didSelectHeaderEvent(System.Action`1<LevelCollectionTableView> value)
    // Offset: 0xB48584
    void remove_didSelectHeaderEvent(System::Action_1<GlobalNamespace::LevelCollectionTableView*>* value);
    // public System.Void Init(System.String headerText, UnityEngine.Sprite headerSprite)
    // Offset: 0xB48628
    void Init(::Il2CppString* headerText, UnityEngine::Sprite* headerSprite);
    // private System.Void Init()
    // Offset: 0xB48698
    void Init();
    // public System.Void SetData(IPreviewBeatmapLevel[] previewBeatmapLevels, System.Collections.Generic.HashSet`1<System.String> favoriteLevelIds, System.Boolean beatmapLevelsAreSorted)
    // Offset: 0xB48760
    void SetData(::Array<GlobalNamespace::IPreviewBeatmapLevel*>* previewBeatmapLevels, System::Collections::Generic::HashSet_1<::Il2CppString*>* favoriteLevelIds, bool beatmapLevelsAreSorted);
    // public System.Void RefreshFavorites(System.Collections.Generic.HashSet`1<System.String> favoriteLevelIds)
    // Offset: 0xB48980
    void RefreshFavorites(System::Collections::Generic::HashSet_1<::Il2CppString*>* favoriteLevelIds);
    // protected System.Void OnEnable()
    // Offset: 0xB48A50
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xB48ADC
    void OnDisable();
    // protected System.Void OnDestroy()
    // Offset: 0xB48B68
    void OnDestroy();
    // private System.Void HandleDidSelectRowEvent(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0xB491D4
    void HandleDidSelectRowEvent(HMUI::TableView* tableView, int row);
    // private System.Void HandleAdditionalContentModelDidInvalidateData()
    // Offset: 0xB492DC
    void HandleAdditionalContentModelDidInvalidateData();
    // public System.Void CancelAsyncOperations()
    // Offset: 0xB493AC
    void CancelAsyncOperations();
    // public System.Void RefreshLevelsAvailability()
    // Offset: 0xB49700
    void RefreshLevelsAvailability();
    // public System.Void SelectLevelPackHeaderCell()
    // Offset: 0xB49AE8
    void SelectLevelPackHeaderCell();
    // public System.Void SelectFirstLevelCell()
    // Offset: 0xB49B14
    void SelectFirstLevelCell();
    // public System.Void SelectLevel(IPreviewBeatmapLevel beatmapLevel)
    // Offset: 0xB49B40
    void SelectLevel(GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);
    // public System.Single CellSize()
    // Offset: 0xB48C44
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Single IDataSource::CellSize()
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0xB48C4C
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Int32 IDataSource::NumberOfCells()
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0xB48C6C
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: HMUI.TableCell IDataSource::CellForIdx(HMUI.TableView tableView, System.Int32 row)
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int row);
    // public System.Void .ctor()
    // Offset: 0xB49BF8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LevelCollectionTableView* New_ctor();
  }; // LevelCollectionTableView
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelCollectionTableView*, "", "LevelCollectionTableView");
#pragma pack(pop)
