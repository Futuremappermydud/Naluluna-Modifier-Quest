// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Vector3SO
  class Vector3SO;
  // Forward declaring type: VRPlatformHelper
  class VRPlatformHelper;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerHeightSettingsController
  class PlayerHeightSettingsController : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _text
    // Offset: 0x18
    TMPro::TextMeshProUGUI* text;
    // private UnityEngine.UI.Button _setButton
    // Offset: 0x20
    UnityEngine::UI::Button* setButton;
    // private Vector3SO _roomCenter
    // Offset: 0x28
    GlobalNamespace::Vector3SO* roomCenter;
    // private UnityEngine.CanvasGroup _canvasGroup
    // Offset: 0x30
    UnityEngine::CanvasGroup* canvasGroup;
    // private VRPlatformHelper _vrPlatformHelper
    // Offset: 0x38
    GlobalNamespace::VRPlatformHelper* vrPlatformHelper;
    // private PlayerSpecificSettings _playerSettings
    // Offset: 0x40
    GlobalNamespace::PlayerSpecificSettings* playerSettings;
    // private HMUI.ButtonBinder _buttonBinder
    // Offset: 0x48
    HMUI::ButtonBinder* buttonBinder;
    // public System.Void set_interactable(System.Boolean value)
    // Offset: 0xBDED84
    void set_interactable(bool value);
    // protected System.Void Awake()
    // Offset: 0xBDEE1C
    void Awake();
    // public System.Void Init(PlayerSpecificSettings playerSettings)
    // Offset: 0xBDEEE0
    void Init(GlobalNamespace::PlayerSpecificSettings* playerSettings);
    // private System.Void AutoSetHeight()
    // Offset: 0xBDEFAC
    void AutoSetHeight();
    // private System.Void RefreshUI()
    // Offset: 0xBDEF08
    void RefreshUI();
    // public System.Void .ctor()
    // Offset: 0xBDF058
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlayerHeightSettingsController* New_ctor();
  }; // PlayerHeightSettingsController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerHeightSettingsController*, "", "PlayerHeightSettingsController");
#pragma pack(pop)
