// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:34 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: HMUI.NavigationController
#include "HMUI/NavigationController.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: FinishAction because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SettingsNavigationController
  class SettingsNavigationController : public HMUI::NavigationController {
    public:
    // Nested type: GlobalNamespace::SettingsNavigationController::FinishAction
    struct FinishAction;
    // Autogenerated type: SettingsNavigationController/FinishAction
    struct FinishAction : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public SettingsNavigationController/FinishAction Ok
      static constexpr const int Ok = 0;
      // Get static field: static public SettingsNavigationController/FinishAction Ok
      static GlobalNamespace::SettingsNavigationController::FinishAction _get_Ok();
      // Set static field: static public SettingsNavigationController/FinishAction Ok
      static void _set_Ok(GlobalNamespace::SettingsNavigationController::FinishAction value);
      // static field const value: static public SettingsNavigationController/FinishAction Cancel
      static constexpr const int Cancel = 1;
      // Get static field: static public SettingsNavigationController/FinishAction Cancel
      static GlobalNamespace::SettingsNavigationController::FinishAction _get_Cancel();
      // Set static field: static public SettingsNavigationController/FinishAction Cancel
      static void _set_Cancel(GlobalNamespace::SettingsNavigationController::FinishAction value);
      // static field const value: static public SettingsNavigationController/FinishAction Apply
      static constexpr const int Apply = 2;
      // Get static field: static public SettingsNavigationController/FinishAction Apply
      static GlobalNamespace::SettingsNavigationController::FinishAction _get_Apply();
      // Set static field: static public SettingsNavigationController/FinishAction Apply
      static void _set_Apply(GlobalNamespace::SettingsNavigationController::FinishAction value);
      // Creating value type constructor for type: FinishAction
      FinishAction(int value_ = {}) : value{value_} {}
    }; // SettingsNavigationController/FinishAction
    // private UnityEngine.UI.Button _okButton
    // Offset: 0x90
    UnityEngine::UI::Button* okButton;
    // private UnityEngine.UI.Button _applyButton
    // Offset: 0x98
    UnityEngine::UI::Button* applyButton;
    // private UnityEngine.UI.Button _cancelButton
    // Offset: 0xA0
    UnityEngine::UI::Button* cancelButton;
    // private System.Action`1<SettingsNavigationController/FinishAction> didFinishEvent
    // Offset: 0xA8
    System::Action_1<GlobalNamespace::SettingsNavigationController::FinishAction>* didFinishEvent;
    // public System.Void add_didFinishEvent(System.Action`1<SettingsNavigationController/FinishAction> value)
    // Offset: 0xC18E0C
    void add_didFinishEvent(System::Action_1<GlobalNamespace::SettingsNavigationController::FinishAction>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<SettingsNavigationController/FinishAction> value)
    // Offset: 0xC18FA4
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::SettingsNavigationController::FinishAction>* value);
    // private System.Void HandleFinishButton(SettingsNavigationController/FinishAction finishAction)
    // Offset: 0xC19398
    void HandleFinishButton(GlobalNamespace::SettingsNavigationController::FinishAction finishAction);
    // private System.Void <DidActivate>b__7_0()
    // Offset: 0xC19414
    void $DidActivate$b__7_0();
    // private System.Void <DidActivate>b__7_1()
    // Offset: 0xC1941C
    void $DidActivate$b__7_1();
    // private System.Void <DidActivate>b__7_2()
    // Offset: 0xC19424
    void $DidActivate$b__7_2();
    // protected override System.Void DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    // Offset: 0xC19258
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    void DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType);
    // public System.Void .ctor()
    // Offset: 0xC1940C
    // Implemented from: HMUI.NavigationController
    // Base method: System.Void NavigationController::.ctor()
    // Base method: System.Void ContainerViewController::.ctor()
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SettingsNavigationController* New_ctor();
  }; // SettingsNavigationController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SettingsNavigationController*, "", "SettingsNavigationController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SettingsNavigationController::FinishAction, "", "SettingsNavigationController/FinishAction");
#pragma pack(pop)
