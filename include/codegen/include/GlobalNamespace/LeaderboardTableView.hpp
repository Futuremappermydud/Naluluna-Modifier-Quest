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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LeaderboardTableCell
  class LeaderboardTableCell;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: TableView because it is already included!
  // Forward declaring type: TableCell
  class TableCell;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LeaderboardTableView
  class LeaderboardTableView : public UnityEngine::MonoBehaviour, public HMUI::TableView::IDataSource {
    public:
    // Nested type: GlobalNamespace::LeaderboardTableView::ScoreData
    class ScoreData;
    // private HMUI.TableView _tableView
    // Offset: 0x18
    HMUI::TableView* tableView;
    // private LeaderboardTableCell _cellPrefab
    // Offset: 0x20
    GlobalNamespace::LeaderboardTableCell* cellPrefab;
    // private System.Single _rowHeight
    // Offset: 0x28
    float rowHeight;
    // private System.Collections.Generic.List`1<LeaderboardTableView/ScoreData> _scores
    // Offset: 0x30
    System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>* scores;
    // private System.Int32 _specialScorePos
    // Offset: 0x38
    int specialScorePos;
    // static field const value: static private System.String kCellIdentifier
    static constexpr const char* kCellIdentifier = "Cell";
    // Get static field: static private System.String kCellIdentifier
    static ::Il2CppString* _get_kCellIdentifier();
    // Set static field: static private System.String kCellIdentifier
    static void _set_kCellIdentifier(::Il2CppString* value);
    // public System.Void SetScores(System.Collections.Generic.List`1<LeaderboardTableView/ScoreData> scores, System.Int32 specialScorePos)
    // Offset: 0xB47FF0
    void SetScores(System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>* scores, int specialScorePos);
    // public System.Single CellSize()
    // Offset: 0xB47DB4
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Single IDataSource::CellSize()
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0xB47DBC
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Int32 IDataSource::NumberOfCells()
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0xB47E10
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: HMUI.TableCell IDataSource::CellForIdx(HMUI.TableView tableView, System.Int32 row)
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int row);
    // public System.Void .ctor()
    // Offset: 0xB48060
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LeaderboardTableView* New_ctor();
  }; // LeaderboardTableView
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardTableView*, "", "LeaderboardTableView");
#pragma pack(pop)
