// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:02 PM
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SignalOnUIButtonClick
  class SignalOnUIButtonClick : public UnityEngine::MonoBehaviour {
    public:
    // private Signal _buttonClickedSignal
    // Offset: 0x18
    GlobalNamespace::Signal* buttonClickedSignal;
    // private UnityEngine.UI.Button _button
    // Offset: 0x20
    UnityEngine::UI::Button* button;
    // private System.Void OnReset()
    // Offset: 0xCA6F44
    void OnReset();
    // protected System.Void Start()
    // Offset: 0xCA6FA4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xCA703C
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0xCA7118
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SignalOnUIButtonClick* New_ctor();
  }; // SignalOnUIButtonClick
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SignalOnUIButtonClick*, "", "SignalOnUIButtonClick");
#pragma pack(pop)
