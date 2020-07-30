// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:34 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
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
  // Autogenerated type: OnlineServicesViewController
  class OnlineServicesViewController : public HMUI::ViewController {
    public:
    // private UnityEngine.UI.Button _enableButton
    // Offset: 0x68
    UnityEngine::UI::Button* enableButton;
    // private UnityEngine.UI.Button _dontEnableButton
    // Offset: 0x70
    UnityEngine::UI::Button* dontEnableButton;
    // private System.Action`1<System.Boolean> didFinishEvent
    // Offset: 0x78
    System::Action_1<bool>* didFinishEvent;
    // public System.Void add_didFinishEvent(System.Action`1<System.Boolean> value)
    // Offset: 0xBBA82C
    void add_didFinishEvent(System::Action_1<bool>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<System.Boolean> value)
    // Offset: 0xBBA8D0
    void remove_didFinishEvent(System::Action_1<bool>* value);
    // private System.Void <DidActivate>b__5_0()
    // Offset: 0xBBAA78
    void $DidActivate$b__5_0();
    // private System.Void <DidActivate>b__5_1()
    // Offset: 0xBBAADC
    void $DidActivate$b__5_1();
    // protected override System.Void DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    // Offset: 0xBBA974
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    void DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType);
    // public System.Void .ctor()
    // Offset: 0xBBAA70
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OnlineServicesViewController* New_ctor();
  }; // OnlineServicesViewController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OnlineServicesViewController*, "", "OnlineServicesViewController");
#pragma pack(pop)
