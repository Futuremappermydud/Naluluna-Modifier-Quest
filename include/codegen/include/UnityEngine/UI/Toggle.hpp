// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:38 PM
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
// Including type: UnityEngine.UI.ICanvasElement
#include "UnityEngine/UI/ICanvasElement.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
  // Forward declaring type: ToggleGroup
  class ToggleGroup;
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.Toggle
  class Toggle : public UnityEngine::UI::Selectable, public UnityEngine::EventSystems::IPointerClickHandler, public UnityEngine::EventSystems::IEventSystemHandler, public UnityEngine::EventSystems::ISubmitHandler, public UnityEngine::UI::ICanvasElement {
    public:
    // Nested type: UnityEngine::UI::Toggle::ToggleTransition
    struct ToggleTransition;
    // Nested type: UnityEngine::UI::Toggle::ToggleEvent
    class ToggleEvent;
    // Autogenerated type: UnityEngine.UI.Toggle/ToggleTransition
    struct ToggleTransition : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public UnityEngine.UI.Toggle/ToggleTransition None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.UI.Toggle/ToggleTransition None
      static UnityEngine::UI::Toggle::ToggleTransition _get_None();
      // Set static field: static public UnityEngine.UI.Toggle/ToggleTransition None
      static void _set_None(UnityEngine::UI::Toggle::ToggleTransition value);
      // static field const value: static public UnityEngine.UI.Toggle/ToggleTransition Fade
      static constexpr const int Fade = 1;
      // Get static field: static public UnityEngine.UI.Toggle/ToggleTransition Fade
      static UnityEngine::UI::Toggle::ToggleTransition _get_Fade();
      // Set static field: static public UnityEngine.UI.Toggle/ToggleTransition Fade
      static void _set_Fade(UnityEngine::UI::Toggle::ToggleTransition value);
      // Creating value type constructor for type: ToggleTransition
      ToggleTransition(int value_ = {}) : value{value_} {}
    }; // UnityEngine.UI.Toggle/ToggleTransition
    // public UnityEngine.UI.Toggle/ToggleTransition toggleTransition
    // Offset: 0xF0
    UnityEngine::UI::Toggle::ToggleTransition toggleTransition;
    // public UnityEngine.UI.Graphic graphic
    // Offset: 0xF8
    UnityEngine::UI::Graphic* graphic;
    // private UnityEngine.UI.ToggleGroup m_Group
    // Offset: 0x100
    UnityEngine::UI::ToggleGroup* m_Group;
    // public UnityEngine.UI.Toggle/ToggleEvent onValueChanged
    // Offset: 0x108
    UnityEngine::UI::Toggle::ToggleEvent* onValueChanged;
    // private System.Boolean m_IsOn
    // Offset: 0x110
    bool m_IsOn;
    // public UnityEngine.UI.ToggleGroup get_group()
    // Offset: 0x191BA38
    UnityEngine::UI::ToggleGroup* get_group();
    // public System.Void set_group(UnityEngine.UI.ToggleGroup value)
    // Offset: 0x191BA40
    void set_group(UnityEngine::UI::ToggleGroup* value);
    // private System.Void SetToggleGroup(UnityEngine.UI.ToggleGroup newGroup, System.Boolean setMemberValue)
    // Offset: 0x191BA6C
    void SetToggleGroup(UnityEngine::UI::ToggleGroup* newGroup, bool setMemberValue);
    // public System.Boolean get_isOn()
    // Offset: 0x191C428
    bool get_isOn();
    // public System.Void set_isOn(System.Boolean value)
    // Offset: 0x191C430
    void set_isOn(bool value);
    // public System.Void SetIsOnWithoutNotify(System.Boolean value)
    // Offset: 0x191C43C
    void SetIsOnWithoutNotify(bool value);
    // private System.Void Set(System.Boolean value, System.Boolean sendCallback)
    // Offset: 0x191C068
    void Set(bool value, bool sendCallback);
    // private System.Void PlayEffect(System.Boolean instant)
    // Offset: 0x191BBE4
    void PlayEffect(bool instant);
    // private System.Void InternalToggle()
    // Offset: 0x191C588
    void InternalToggle();
    // protected System.Void .ctor()
    // Offset: 0x191BCB8
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Toggle* New_ctor();
    // public System.Void Rebuild(UnityEngine.UI.CanvasUpdate executing)
    // Offset: 0x191BDA0
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::Rebuild(UnityEngine.UI.CanvasUpdate executing)
    void Rebuild(UnityEngine::UI::CanvasUpdate executing);
    // public System.Void LayoutComplete()
    // Offset: 0x191BDA4
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::LayoutComplete()
    void LayoutComplete();
    // public System.Void GraphicUpdateComplete()
    // Offset: 0x191BDA8
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::GraphicUpdateComplete()
    void GraphicUpdateComplete();
    // protected override System.Void OnDestroy()
    // Offset: 0x191BDAC
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDestroy()
    void OnDestroy();
    // protected override System.Void OnEnable()
    // Offset: 0x191BEF0
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x191BF2C
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnDisable()
    void OnDisable();
    // protected override System.Void OnDidApplyAnimationProperties()
    // Offset: 0x191BF5C
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnDidApplyAnimationProperties()
    void OnDidApplyAnimationProperties();
    // protected override System.Void Start()
    // Offset: 0x191C580
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Start()
    void Start();
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x191C5EC
    // Implemented from: UnityEngine.EventSystems.IPointerClickHandler
    // Base method: System.Void IPointerClickHandler::OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerClick(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x191C60C
    // Implemented from: UnityEngine.EventSystems.ISubmitHandler
    // Base method: System.Void ISubmitHandler::OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    void OnSubmit(UnityEngine::EventSystems::BaseEventData* eventData);
    // private UnityEngine.Transform UnityEngine.UI.ICanvasElement.get_transform()
    // Offset: 0x191C610
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: UnityEngine.Transform ICanvasElement::get_transform()
    UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();
  }; // UnityEngine.UI.Toggle
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Toggle*, "UnityEngine.UI", "Toggle");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Toggle::ToggleTransition, "UnityEngine.UI", "Toggle/ToggleTransition");
#pragma pack(pop)
