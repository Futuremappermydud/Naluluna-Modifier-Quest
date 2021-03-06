// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:22 PM
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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableView
  class TableView;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.TableViewScroller
  class TableViewScroller : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::TableViewScroller::ScrollPositionType
    struct ScrollPositionType;
    // private System.Action`2<HMUI.TableViewScroller,System.Single> positionDidChangeEvent
    // Offset: 0x18
    System::Action_2<HMUI::TableViewScroller*, float>* positionDidChangeEvent;
    // private HMUI.TableView _tableView
    // Offset: 0x20
    HMUI::TableView* tableView;
    // private System.Single _targetPosition
    // Offset: 0x28
    float targetPosition;
    // public System.Void add_positionDidChangeEvent(System.Action`2<HMUI.TableViewScroller,System.Single> value)
    // Offset: 0x10D36F4
    void add_positionDidChangeEvent(System::Action_2<HMUI::TableViewScroller*, float>* value);
    // public System.Void remove_positionDidChangeEvent(System.Action`2<HMUI.TableViewScroller,System.Single> value)
    // Offset: 0x10D3798
    void remove_positionDidChangeEvent(System::Action_2<HMUI::TableViewScroller*, float>* value);
    // public System.Single get_position()
    // Offset: 0x10D2734
    float get_position();
    // private System.Void set_position(System.Single value)
    // Offset: 0x10D383C
    void set_position(float value);
    // public System.Single get_targetPosition()
    // Offset: 0x10D390C
    float get_targetPosition();
    // public System.Single get_scrollableSize()
    // Offset: 0x10D1FC8
    float get_scrollableSize();
    // public System.Void Init(HMUI.TableView tableView)
    // Offset: 0x10D1B68
    void Init(HMUI::TableView* tableView);
    // public System.Void ScrollToCellWithIdx(System.Int32 idx, HMUI.TableViewScroller/ScrollPositionType scrollPositionType, System.Boolean animated)
    // Offset: 0x10D311C
    void ScrollToCellWithIdx(int idx, HMUI::TableViewScroller::ScrollPositionType scrollPositionType, bool animated);
    // protected System.Void Update()
    // Offset: 0x10D3914
    void Update();
    // private System.Single GetNumberOfVisibleCells()
    // Offset: 0x10D3A24
    float GetNumberOfVisibleCells();
    // public System.Void PageScrollUp()
    // Offset: 0x10D32F8
    void PageScrollUp();
    // public System.Void PageScrollDown()
    // Offset: 0x10D3440
    void PageScrollDown();
    // public System.Void .ctor()
    // Offset: 0x10D3AF8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TableViewScroller* New_ctor();
  }; // HMUI.TableViewScroller
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::TableViewScroller*, "HMUI", "TableViewScroller");
#pragma pack(pop)
