// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:18 PM
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GuestNameButtonsListItem
  class GuestNameButtonsListItem : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _nameText
    // Offset: 0x18
    TMPro::TextMeshProUGUI* nameText;
    // private UnityEngine.UI.Button _button
    // Offset: 0x20
    UnityEngine::UI::Button* button;
    // private System.Action _buttonPressed
    // Offset: 0x28
    System::Action* buttonPressed;
    // public System.Void set_nameText(System.String value)
    // Offset: 0xB40C34
    void set_nameText(::Il2CppString* value);
    // public System.Void set_buttonPressed(System.Action value)
    // Offset: 0xB40C50
    void set_buttonPressed(System::Action* value);
    // private System.Void Awake()
    // Offset: 0xB40C58
    void Awake();
    // private System.Void <Awake>b__7_0()
    // Offset: 0xB40CF4
    void $Awake$b__7_0();
    // public System.Void .ctor()
    // Offset: 0xB40CEC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GuestNameButtonsListItem* New_ctor();
  }; // GuestNameButtonsListItem
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GuestNameButtonsListItem*, "", "GuestNameButtonsListItem");
#pragma pack(pop)
