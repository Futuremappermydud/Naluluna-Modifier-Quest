// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.TableView/IDataSource
#include "HMUI/TableView_IDataSource.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: TableView because it is already included!
  // Forward declaring type: TableCell
  class TableCell;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DifficultyTableCell
  class DifficultyTableCell;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: DifficultyTableView
  class DifficultyTableView : public UnityEngine::MonoBehaviour, public HMUI::TableView::IDataSource {
    public:
    // private HMUI.TableView _tableView
    // Offset: 0x18
    HMUI::TableView* tableView;
    // private DifficultyTableCell _cellPrefab
    // Offset: 0x20
    GlobalNamespace::DifficultyTableCell* cellPrefab;
    // private DifficultyTableCell _nonSelectableCellPrefab
    // Offset: 0x28
    GlobalNamespace::DifficultyTableCell* nonSelectableCellPrefab;
    // private System.Single _cellHeight
    // Offset: 0x30
    float cellHeight;
    // private System.Action`2<DifficultyTableView,System.Int32> didSelectRow
    // Offset: 0x38
    System::Action_2<GlobalNamespace::DifficultyTableView*, int>* didSelectRow;
    // private IDifficultyBeatmap[] _difficultyBeatmaps
    // Offset: 0x40
    ::Array<GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps;
    // static field const value: static private System.String kCellIdentifier
    static constexpr const char* kCellIdentifier = "Cell";
    // Get static field: static private System.String kCellIdentifier
    static ::Il2CppString* _get_kCellIdentifier();
    // Set static field: static private System.String kCellIdentifier
    static void _set_kCellIdentifier(::Il2CppString* value);
    // static field const value: static private System.String kNonSelectableCellIdentifier
    static constexpr const char* kNonSelectableCellIdentifier = "NonSelectableCell";
    // Get static field: static private System.String kNonSelectableCellIdentifier
    static ::Il2CppString* _get_kNonSelectableCellIdentifier();
    // Set static field: static private System.String kNonSelectableCellIdentifier
    static void _set_kNonSelectableCellIdentifier(::Il2CppString* value);
    // public System.Void add_didSelectRow(System.Action`2<DifficultyTableView,System.Int32> value)
    // Offset: 0xBE75A4
    void add_didSelectRow(System::Action_2<GlobalNamespace::DifficultyTableView*, int>* value);
    // public System.Void remove_didSelectRow(System.Action`2<DifficultyTableView,System.Int32> value)
    // Offset: 0xBE7648
    void remove_didSelectRow(System::Action_2<GlobalNamespace::DifficultyTableView*, int>* value);
    // public System.Void Init(IDifficultyBeatmap[] difficultyBeatmaps)
    // Offset: 0xBE76EC
    void Init(::Array<GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps);
    // public System.Void SetDifficultyBeatmaps(IDifficultyBeatmap[] difficultyBeatmaps)
    // Offset: 0xBE77E8
    void SetDifficultyBeatmaps(::Array<GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps);
    // private System.Void HandleDidSelectRowEvent(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0xBE7BBC
    void HandleDidSelectRowEvent(HMUI::TableView* tableView, int row);
    // public System.Void SelectRow(System.Int32 row, System.Boolean callbackTable)
    // Offset: 0xBE7C64
    void SelectRow(int row, bool callbackTable);
    // public System.Void SelectRow(IDifficultyBeatmap difficultyBeatmap, System.Boolean callbackTable)
    // Offset: 0xBE7C84
    void SelectRow(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool callbackTable);
    // public System.Void ClearSelection()
    // Offset: 0xBE7D14
    void ClearSelection();
    // public System.Single CellSize()
    // Offset: 0xBE7824
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Single IDataSource::CellSize()
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0xBE782C
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Int32 IDataSource::NumberOfCells()
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0xBE784C
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: HMUI.TableCell IDataSource::CellForIdx(HMUI.TableView tableView, System.Int32 row)
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int row);
    // public System.Void .ctor()
    // Offset: 0xBE7D30
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static DifficultyTableView* New_ctor();
  }; // DifficultyTableView
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DifficultyTableView*, "", "DifficultyTableView");
#pragma pack(pop)
