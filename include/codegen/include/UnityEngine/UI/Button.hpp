// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.UI.Selectable
#include "UnityEngine/UI/Selectable.hpp"
// Including type: UnityEngine.EventSystems.IPointerClickHandler
#include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
// Including type: UnityEngine.EventSystems.ISubmitHandler
#include "UnityEngine/EventSystems/ISubmitHandler.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.Button
  class Button : public UnityEngine::UI::Selectable, public UnityEngine::EventSystems::IPointerClickHandler, public UnityEngine::EventSystems::IEventSystemHandler, public UnityEngine::EventSystems::ISubmitHandler {
    public:
    // Nested type: UnityEngine::UI::Button::ButtonClickedEvent
    class ButtonClickedEvent;
    // Nested type: UnityEngine::UI::Button::$OnFinishSubmit$d__9
    class $OnFinishSubmit$d__9;
    // private UnityEngine.UI.Button/ButtonClickedEvent m_OnClick
    // Offset: 0xF0
    UnityEngine::UI::Button::ButtonClickedEvent* m_OnClick;
    // public UnityEngine.UI.Button/ButtonClickedEvent get_onClick()
    // Offset: 0xDEEC70
    UnityEngine::UI::Button::ButtonClickedEvent* get_onClick();
    // public System.Void set_onClick(UnityEngine.UI.Button/ButtonClickedEvent value)
    // Offset: 0xDEEC78
    void set_onClick(UnityEngine::UI::Button::ButtonClickedEvent* value);
    // private System.Void Press()
    // Offset: 0xDEEC80
    void Press();
    // private System.Collections.IEnumerator OnFinishSubmit()
    // Offset: 0xDEEDC8
    System::Collections::IEnumerator* OnFinishSubmit();
    // protected System.Void .ctor()
    // Offset: 0xDEEBD4
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Button* New_ctor();
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0xDEED20
    // Implemented from: UnityEngine.EventSystems.IPointerClickHandler
    // Base method: System.Void IPointerClickHandler::OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerClick(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0xDEED40
    // Implemented from: UnityEngine.EventSystems.ISubmitHandler
    // Base method: System.Void ISubmitHandler::OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    void OnSubmit(UnityEngine::EventSystems::BaseEventData* eventData);
  }; // UnityEngine.UI.Button
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Button*, "UnityEngine.UI", "Button");
#pragma pack(pop)
