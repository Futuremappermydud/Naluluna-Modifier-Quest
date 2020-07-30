// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:32 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
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
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LoadingControl
  class LoadingControl : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.GameObject _loadingIndicator
    // Offset: 0x18
    UnityEngine::GameObject* loadingIndicator;
    // private TMPro.TextMeshProUGUI _text
    // Offset: 0x20
    TMPro::TextMeshProUGUI* text;
    // private UnityEngine.UI.Button _refreshButton
    // Offset: 0x28
    UnityEngine::UI::Button* refreshButton;
    // private UnityEngine.GameObject _textContainer
    // Offset: 0x30
    UnityEngine::GameObject* textContainer;
    // private UnityEngine.GameObject _downloadingContainer
    // Offset: 0x38
    UnityEngine::GameObject* downloadingContainer;
    // private TMPro.TextMeshProUGUI _downloadingText
    // Offset: 0x40
    TMPro::TextMeshProUGUI* downloadingText;
    // private UnityEngine.UI.Image _donwloadingProgressImage
    // Offset: 0x48
    UnityEngine::UI::Image* donwloadingProgressImage;
    // private System.Action didPressRefreshButtonEvent
    // Offset: 0x50
    System::Action* didPressRefreshButtonEvent;
    // private HMUI.ButtonBinder _buttonBinder
    // Offset: 0x58
    HMUI::ButtonBinder* buttonBinder;
    // public System.Void add_didPressRefreshButtonEvent(System.Action value)
    // Offset: 0xBE0E54
    void add_didPressRefreshButtonEvent(System::Action* value);
    // public System.Void remove_didPressRefreshButtonEvent(System.Action value)
    // Offset: 0xBE0F24
    void remove_didPressRefreshButtonEvent(System::Action* value);
    // public System.Boolean get_isLoading()
    // Offset: 0xBE6110
    bool get_isLoading();
    // protected System.Void Awake()
    // Offset: 0xBE612C
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xBE61F0
    void OnDestroy();
    // public System.Void ShowLoading()
    // Offset: 0xBE0C60
    void ShowLoading();
    // public System.Void ShowText(System.String text, System.Boolean showRefreshButton)
    // Offset: 0xBE0CD0
    void ShowText(::Il2CppString* text, bool showRefreshButton);
    // public System.Void ShowDownloadingProgress(System.String text, System.Single downloadingProgress)
    // Offset: 0xBE620C
    void ShowDownloadingProgress(::Il2CppString* text, float downloadingProgress);
    // public System.Void Hide()
    // Offset: 0xBE0D84
    void Hide();
    // private System.Void <Awake>b__13_0()
    // Offset: 0xBE62BC
    void $Awake$b__13_0();
    // public System.Void .ctor()
    // Offset: 0xBE62B4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LoadingControl* New_ctor();
  }; // LoadingControl
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LoadingControl*, "", "LoadingControl");
#pragma pack(pop)
