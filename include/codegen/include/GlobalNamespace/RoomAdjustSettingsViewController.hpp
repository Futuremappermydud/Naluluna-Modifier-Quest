// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Vector3SO
  class Vector3SO;
  // Forward declaring type: FloatSO
  class FloatSO;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: RoomAdjustSettingsViewController
  class RoomAdjustSettingsViewController : public HMUI::ViewController {
    public:
    // private Vector3SO _roomCenter
    // Offset: 0x68
    GlobalNamespace::Vector3SO* roomCenter;
    // private FloatSO _roomRotation
    // Offset: 0x70
    GlobalNamespace::FloatSO* roomRotation;
    // private UnityEngine.UI.Button _xIncButton
    // Offset: 0x78
    UnityEngine::UI::Button* xIncButton;
    // private UnityEngine.UI.Button _xDecButton
    // Offset: 0x80
    UnityEngine::UI::Button* xDecButton;
    // private UnityEngine.UI.Button _yIncButton
    // Offset: 0x88
    UnityEngine::UI::Button* yIncButton;
    // private UnityEngine.UI.Button _yDecButton
    // Offset: 0x90
    UnityEngine::UI::Button* yDecButton;
    // private UnityEngine.UI.Button _zIncButton
    // Offset: 0x98
    UnityEngine::UI::Button* zIncButton;
    // private UnityEngine.UI.Button _zDecButton
    // Offset: 0xA0
    UnityEngine::UI::Button* zDecButton;
    // private UnityEngine.UI.Button _rotIncButton
    // Offset: 0xA8
    UnityEngine::UI::Button* rotIncButton;
    // private UnityEngine.UI.Button _rotDecButton
    // Offset: 0xB0
    UnityEngine::UI::Button* rotDecButton;
    // private UnityEngine.UI.Button _resetButton
    // Offset: 0xB8
    UnityEngine::UI::Button* resetButton;
    // private TMPro.TextMeshProUGUI _xText
    // Offset: 0xC0
    TMPro::TextMeshProUGUI* xText;
    // private TMPro.TextMeshProUGUI _yText
    // Offset: 0xC8
    TMPro::TextMeshProUGUI* yText;
    // private TMPro.TextMeshProUGUI _zText
    // Offset: 0xD0
    TMPro::TextMeshProUGUI* zText;
    // private TMPro.TextMeshProUGUI _rotText
    // Offset: 0xD8
    TMPro::TextMeshProUGUI* rotText;
    // static field const value: static private System.Single kHorizontalMoveStep
    static constexpr const float kHorizontalMoveStep = 0.1;
    // Get static field: static private System.Single kHorizontalMoveStep
    static float _get_kHorizontalMoveStep();
    // Set static field: static private System.Single kHorizontalMoveStep
    static void _set_kHorizontalMoveStep(float value);
    // static field const value: static private System.Single kVerticalMoveStep
    static constexpr const float kVerticalMoveStep = 0.05;
    // Get static field: static private System.Single kVerticalMoveStep
    static float _get_kVerticalMoveStep();
    // Set static field: static private System.Single kVerticalMoveStep
    static void _set_kVerticalMoveStep(float value);
    // static field const value: static private System.Single kRotationStep
    static constexpr const float kRotationStep = 5;
    // Get static field: static private System.Single kRotationStep
    static float _get_kRotationStep();
    // Set static field: static private System.Single kRotationStep
    static void _set_kRotationStep(float value);
    // private System.Void Move(UnityEngine.Vector3 move)
    // Offset: 0xC2296C
    void Move(UnityEngine::Vector3 move);
    // private System.Void Rotate(System.Single rotation)
    // Offset: 0xC22A3C
    void Rotate(float rotation);
    // private System.Void ResetRoom()
    // Offset: 0xC22AB0
    void ResetRoom();
    // private System.Void RefreshTexts()
    // Offset: 0xC227F0
    void RefreshTexts();
    // private System.Void <DidActivate>b__18_0()
    // Offset: 0xC22B6C
    void $DidActivate$b__18_0();
    // private System.Void <DidActivate>b__18_1()
    // Offset: 0xC22BC4
    void $DidActivate$b__18_1();
    // private System.Void <DidActivate>b__18_2()
    // Offset: 0xC22C1C
    void $DidActivate$b__18_2();
    // private System.Void <DidActivate>b__18_3()
    // Offset: 0xC22C74
    void $DidActivate$b__18_3();
    // private System.Void <DidActivate>b__18_4()
    // Offset: 0xC22CCC
    void $DidActivate$b__18_4();
    // private System.Void <DidActivate>b__18_5()
    // Offset: 0xC22D24
    void $DidActivate$b__18_5();
    // private System.Void <DidActivate>b__18_6()
    // Offset: 0xC22D7C
    void $DidActivate$b__18_6();
    // private System.Void <DidActivate>b__18_7()
    // Offset: 0xC22D84
    void $DidActivate$b__18_7();
    // private System.Void <DidActivate>b__18_8()
    // Offset: 0xC22D8C
    void $DidActivate$b__18_8();
    // protected override System.Void DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    // Offset: 0xC22524
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    void DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType);
    // public System.Void .ctor()
    // Offset: 0xC22B64
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static RoomAdjustSettingsViewController* New_ctor();
  }; // RoomAdjustSettingsViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RoomAdjustSettingsViewController*, "", "RoomAdjustSettingsViewController");
#pragma pack(pop)
