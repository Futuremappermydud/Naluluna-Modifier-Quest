// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:34 PM
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SettingsSubMenuInfo
  class SettingsSubMenuInfo;
  // Forward declaring type: MainSettingsTableView
  class MainSettingsTableView;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MainSettingsMenuViewController
  class MainSettingsMenuViewController : public HMUI::ViewController {
    public:
    // private System.Action`2<SettingsSubMenuInfo,System.Int32> didSelectSettingsSubMenuEvent
    // Offset: 0x68
    System::Action_2<GlobalNamespace::SettingsSubMenuInfo*, int>* didSelectSettingsSubMenuEvent;
    // private MainSettingsTableView _mainSettingsTableView
    // Offset: 0x70
    GlobalNamespace::MainSettingsTableView* mainSettingsTableView;
    // private SettingsSubMenuInfo[] _settingsSubMenuInfos
    // Offset: 0x78
    ::Array<GlobalNamespace::SettingsSubMenuInfo*>* settingsSubMenuInfos;
    // private SettingsSubMenuInfo _selectedSubMenuInfo
    // Offset: 0x80
    GlobalNamespace::SettingsSubMenuInfo* selectedSubMenuInfo;
    // private System.Int32 _selectedSubMenuInfoIdx
    // Offset: 0x88
    int selectedSubMenuInfoIdx;
    // public System.Void add_didSelectSettingsSubMenuEvent(System.Action`2<SettingsSubMenuInfo,System.Int32> value)
    // Offset: 0xBEB124
    void add_didSelectSettingsSubMenuEvent(System::Action_2<GlobalNamespace::SettingsSubMenuInfo*, int>* value);
    // public System.Void remove_didSelectSettingsSubMenuEvent(System.Action`2<SettingsSubMenuInfo,System.Int32> value)
    // Offset: 0xBEB1C8
    void remove_didSelectSettingsSubMenuEvent(System::Action_2<GlobalNamespace::SettingsSubMenuInfo*, int>* value);
    // public System.Int32 get_numberOfSubMenus()
    // Offset: 0xBEB26C
    int get_numberOfSubMenus();
    // public SettingsSubMenuInfo get_selectedSubMenuInfo()
    // Offset: 0xBEB288
    GlobalNamespace::SettingsSubMenuInfo* get_selectedSubMenuInfo();
    // public System.Void Init(System.Int32 selectedSubMenuInfoIdx)
    // Offset: 0xBEB290
    void Init(int selectedSubMenuInfoIdx);
    // private System.Void HandleMainSettingsTableViewDidSelectRow(MainSettingsTableView tableView, System.Int32 row)
    // Offset: 0xBEB578
    void HandleMainSettingsTableViewDidSelectRow(GlobalNamespace::MainSettingsTableView* tableView, int row);
    // protected override System.Void DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    // Offset: 0xBEB2D4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    void DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType);
    // public System.Void .ctor()
    // Offset: 0xBEB62C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MainSettingsMenuViewController* New_ctor();
  }; // MainSettingsMenuViewController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainSettingsMenuViewController*, "", "MainSettingsMenuViewController");
#pragma pack(pop)
