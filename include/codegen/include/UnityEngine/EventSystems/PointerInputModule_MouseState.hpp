// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:41 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.EventSystems.PointerInputModule
#include "UnityEngine/EventSystems/PointerInputModule.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData
#include "UnityEngine/EventSystems/PointerEventData.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.PointerInputModule/MouseState
  class PointerInputModule::MouseState : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState> m_TrackedButtons
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::EventSystems::PointerInputModule::ButtonState*>* m_TrackedButtons;
    // public System.Boolean AnyPressesThisFrame()
    // Offset: 0xDEA930
    bool AnyPressesThisFrame();
    // public System.Boolean AnyReleasesThisFrame()
    // Offset: 0xDEA9E4
    bool AnyReleasesThisFrame();
    // public UnityEngine.EventSystems.PointerInputModule/ButtonState GetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton button)
    // Offset: 0xDEAA98
    UnityEngine::EventSystems::PointerInputModule::ButtonState* GetButtonState(UnityEngine::EventSystems::PointerEventData::InputButton button);
    // public System.Void SetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton button, UnityEngine.EventSystems.PointerEventData/FramePressState stateForMouseButton, UnityEngine.EventSystems.PointerEventData data)
    // Offset: 0xDE9E8C
    void SetButtonState(UnityEngine::EventSystems::PointerEventData::InputButton button, UnityEngine::EventSystems::PointerEventData::FramePressState stateForMouseButton, UnityEngine::EventSystems::PointerEventData* data);
    // public System.Void .ctor()
    // Offset: 0xDEA85C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PointerInputModule::MouseState* New_ctor();
  }; // UnityEngine.EventSystems.PointerInputModule/MouseState
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::PointerInputModule::MouseState*, "UnityEngine.EventSystems", "PointerInputModule/MouseState");
#pragma pack(pop)
