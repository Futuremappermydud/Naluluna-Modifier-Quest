// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:31 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TextFadeTransitions
  class TextFadeTransitions : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::TextFadeTransitions::State
    struct State;
    // Autogenerated type: TextFadeTransitions/State
    struct State : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public TextFadeTransitions/State NotInTransition
      static constexpr const int NotInTransition = 0;
      // Get static field: static public TextFadeTransitions/State NotInTransition
      static GlobalNamespace::TextFadeTransitions::State _get_NotInTransition();
      // Set static field: static public TextFadeTransitions/State NotInTransition
      static void _set_NotInTransition(GlobalNamespace::TextFadeTransitions::State value);
      // static field const value: static public TextFadeTransitions/State FadingOut
      static constexpr const int FadingOut = 1;
      // Get static field: static public TextFadeTransitions/State FadingOut
      static GlobalNamespace::TextFadeTransitions::State _get_FadingOut();
      // Set static field: static public TextFadeTransitions/State FadingOut
      static void _set_FadingOut(GlobalNamespace::TextFadeTransitions::State value);
      // static field const value: static public TextFadeTransitions/State FadingIn
      static constexpr const int FadingIn = 2;
      // Get static field: static public TextFadeTransitions/State FadingIn
      static GlobalNamespace::TextFadeTransitions::State _get_FadingIn();
      // Set static field: static public TextFadeTransitions/State FadingIn
      static void _set_FadingIn(GlobalNamespace::TextFadeTransitions::State value);
      // Creating value type constructor for type: State
      State(int value_ = {}) : value{value_} {}
    }; // TextFadeTransitions/State
    // private TMPro.TextMeshProUGUI _textLabel
    // Offset: 0x18
    TMPro::TextMeshProUGUI* textLabel;
    // private UnityEngine.CanvasGroup _canvasGroup
    // Offset: 0x20
    UnityEngine::CanvasGroup* canvasGroup;
    // private System.Single _fadeDuration
    // Offset: 0x28
    float fadeDuration;
    // private TextFadeTransitions/State _state
    // Offset: 0x2C
    GlobalNamespace::TextFadeTransitions::State state;
    // private System.String _nextText
    // Offset: 0x30
    ::Il2CppString* nextText;
    // private System.Single _fade
    // Offset: 0x38
    float fade;
    // protected System.Void Awake()
    // Offset: 0xC31424
    void Awake();
    // protected System.Void Update()
    // Offset: 0xC31588
    void Update();
    // private System.Void RefreshState()
    // Offset: 0xC3158C
    void RefreshState();
    // private System.Void RefreshTextAlpha()
    // Offset: 0xC314A0
    void RefreshTextAlpha();
    // public System.Void ShowText(System.String text)
    // Offset: 0xC31728
    void ShowText(::Il2CppString* text);
    // public System.Void .ctor()
    // Offset: 0xC317B0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TextFadeTransitions* New_ctor();
  }; // TextFadeTransitions
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TextFadeTransitions*, "", "TextFadeTransitions");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TextFadeTransitions::State, "", "TextFadeTransitions/State");
#pragma pack(pop)
