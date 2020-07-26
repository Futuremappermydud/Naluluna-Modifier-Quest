// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:05 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: HMUI.TableView
#include "HMUI/TableView.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableCell
  class TableCell;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.TableView/IDataSource
  class TableView::IDataSource {
    public:
    // public System.Single CellSize()
    // Offset: 0xFFFFFFFF
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0xFFFFFFFF
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0xFFFFFFFF
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int idx);
  }; // HMUI.TableView/IDataSource
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::TableView::IDataSource*, "HMUI", "TableView/IDataSource");
#pragma pack(pop)
