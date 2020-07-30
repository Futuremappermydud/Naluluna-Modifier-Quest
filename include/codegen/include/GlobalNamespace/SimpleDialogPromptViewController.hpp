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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
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
  // Autogenerated type: SimpleDialogPromptViewController
  class SimpleDialogPromptViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::SimpleDialogPromptViewController::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // private TMPro.TextMeshProUGUI _titleText
    // Offset: 0x68
    TMPro::TextMeshProUGUI* titleText;
    // private TMPro.TextMeshProUGUI _messageText
    // Offset: 0x70
    TMPro::TextMeshProUGUI* messageText;
    // private UnityEngine.UI.Button[] _buttons
    // Offset: 0x78
    ::Array<UnityEngine::UI::Button*>* buttons;
    // private TMPro.TextMeshProUGUI[] _buttonTexts
    // Offset: 0x80
    ::Array<TMPro::TextMeshProUGUI*>* buttonTexts;
    // private UnityEngine.GameObject _interactionBlocker
    // Offset: 0x88
    UnityEngine::GameObject* interactionBlocker;
    // private System.Action`1<System.Int32> _didFinishAction
    // Offset: 0x90
    System::Action_1<int>* didFinishAction;
    // public System.Void Init(System.String title, System.String message, System.String buttonText, System.Action`1<System.Int32> didFinishAction)
    // Offset: 0xB82FE4
    void Init(::Il2CppString* title, ::Il2CppString* message, ::Il2CppString* buttonText, System::Action_1<int>* didFinishAction);
    // public System.Void Init(System.String title, System.String message, System.String firstButtonText, System.String secondButtonText, System.Action`1<System.Int32> didFinishAction)
    // Offset: 0xB831F0
    void Init(::Il2CppString* title, ::Il2CppString* message, ::Il2CppString* firstButtonText, ::Il2CppString* secondButtonText, System::Action_1<int>* didFinishAction);
    // public System.Void Init(System.String title, System.String message, System.String firstButtonText, System.String secondButtonText, System.String thirdButtonText, System.Action`1<System.Int32> didFinishAction)
    // Offset: 0xB82FF4
    void Init(::Il2CppString* title, ::Il2CppString* message, ::Il2CppString* firstButtonText, ::Il2CppString* secondButtonText, ::Il2CppString* thirdButtonText, System::Action_1<int>* didFinishAction);
    // protected override System.Void DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    // Offset: 0xB82E94
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    void DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType);
    // protected override System.Void DidDeactivate(HMUI.ViewController/DeactivationType deactivationType)
    // Offset: 0xB82FD0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(HMUI.ViewController/DeactivationType deactivationType)
    void DidDeactivate(HMUI::ViewController::DeactivationType deactivationType);
    // public System.Void .ctor()
    // Offset: 0xB831FC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SimpleDialogPromptViewController* New_ctor();
  }; // SimpleDialogPromptViewController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleDialogPromptViewController*, "", "SimpleDialogPromptViewController");
#pragma pack(pop)
