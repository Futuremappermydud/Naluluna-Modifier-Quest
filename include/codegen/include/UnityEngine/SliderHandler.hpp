// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:34 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUIStyle
  class GUIStyle;
  // Forward declaring type: EventType
  struct EventType;
  // Forward declaring type: Event
  class Event;
  // Forward declaring type: SliderState
  class SliderState;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.SliderHandler
  struct SliderHandler : public System::ValueType {
    public:
    // private readonly UnityEngine.Rect position
    // Offset: 0x0
    UnityEngine::Rect position;
    // private readonly System.Single currentValue
    // Offset: 0x10
    float currentValue;
    // private readonly System.Single size
    // Offset: 0x14
    float size;
    // private readonly System.Single start
    // Offset: 0x18
    float start;
    // private readonly System.Single end
    // Offset: 0x1C
    float end;
    // private readonly UnityEngine.GUIStyle slider
    // Offset: 0x20
    UnityEngine::GUIStyle* slider;
    // private readonly UnityEngine.GUIStyle thumb
    // Offset: 0x28
    UnityEngine::GUIStyle* thumb;
    // private readonly UnityEngine.GUIStyle thumbExtent
    // Offset: 0x30
    UnityEngine::GUIStyle* thumbExtent;
    // private readonly System.Boolean horiz
    // Offset: 0x38
    bool horiz;
    // private readonly System.Int32 id
    // Offset: 0x3C
    int id;
    // Creating value type constructor for type: SliderHandler
    SliderHandler(UnityEngine::Rect position_ = {}, float currentValue_ = {}, float size_ = {}, float start_ = {}, float end_ = {}, UnityEngine::GUIStyle* slider_ = {}, UnityEngine::GUIStyle* thumb_ = {}, UnityEngine::GUIStyle* thumbExtent_ = {}, bool horiz_ = {}, int id_ = {}) : position{position_}, currentValue{currentValue_}, size{size_}, start{start_}, end{end_}, slider{slider_}, thumb{thumb_}, thumbExtent{thumbExtent_}, horiz{horiz_}, id{id_} {}
    // public System.Void .ctor(UnityEngine.Rect position, System.Single currentValue, System.Single size, System.Single start, System.Single end, UnityEngine.GUIStyle slider, UnityEngine.GUIStyle thumb, System.Boolean horiz, System.Int32 id, UnityEngine.GUIStyle thumbExtent)
    // Offset: 0xA3FB74
    static SliderHandler* New_ctor(UnityEngine::Rect position, float currentValue, float size, float start, float end, UnityEngine::GUIStyle* slider, UnityEngine::GUIStyle* thumb, bool horiz, int id, UnityEngine::GUIStyle* thumbExtent);
    // public System.Single Handle()
    // Offset: 0xA3FB80
    float Handle();
    // private System.Single OnMouseDown()
    // Offset: 0xA3FB88
    float OnMouseDown();
    // private System.Single OnMouseDrag()
    // Offset: 0xA3FB90
    float OnMouseDrag();
    // private System.Single OnMouseUp()
    // Offset: 0xA3FB98
    float OnMouseUp();
    // private System.Single OnRepaint()
    // Offset: 0xA3FBA0
    float OnRepaint();
    // private UnityEngine.EventType CurrentEventType()
    // Offset: 0xA3FBA8
    UnityEngine::EventType CurrentEventType();
    // private System.Int32 CurrentScrollTroughSide()
    // Offset: 0xA3FBB0
    int CurrentScrollTroughSide();
    // private System.Boolean IsEmptySlider()
    // Offset: 0xA3FBB8
    bool IsEmptySlider();
    // private System.Boolean SupportsPageMovements()
    // Offset: 0xA3FBC8
    bool SupportsPageMovements();
    // private System.Single PageMovementValue()
    // Offset: 0xA3FBD0
    float PageMovementValue();
    // private System.Single PageUpMovementBound()
    // Offset: 0xA3FBD8
    float PageUpMovementBound();
    // private UnityEngine.Event CurrentEvent()
    // Offset: 0xA3FBE0
    UnityEngine::Event* CurrentEvent();
    // private System.Single ValueForCurrentMousePosition()
    // Offset: 0xA3FC30
    float ValueForCurrentMousePosition();
    // private System.Single Clamp(System.Single value)
    // Offset: 0xA3FC38
    float Clamp(float value);
    // private UnityEngine.Rect ThumbSelectionRect()
    // Offset: 0xA3FC40
    UnityEngine::Rect ThumbSelectionRect();
    // private System.Void StartDraggingWithValue(System.Single dragStartValue)
    // Offset: 0xA3FC48
    void StartDraggingWithValue(float dragStartValue);
    // private UnityEngine.SliderState SliderState()
    // Offset: 0xA3FC50
    UnityEngine::SliderState* SliderState();
    // private UnityEngine.Rect ThumbExtRect()
    // Offset: 0xA3FC58
    UnityEngine::Rect ThumbExtRect();
    // private UnityEngine.Rect ThumbRect()
    // Offset: 0xA3FC60
    UnityEngine::Rect ThumbRect();
    // private UnityEngine.Rect VerticalThumbRect()
    // Offset: 0xA3FC68
    UnityEngine::Rect VerticalThumbRect();
    // private UnityEngine.Rect HorizontalThumbRect()
    // Offset: 0xA3FC70
    UnityEngine::Rect HorizontalThumbRect();
    // private System.Single ClampedCurrentValue()
    // Offset: 0xA3FC78
    float ClampedCurrentValue();
    // private System.Single MousePosition()
    // Offset: 0xA3FC84
    float MousePosition();
    // private System.Single ValuesPerPixel()
    // Offset: 0xA3FC8C
    float ValuesPerPixel();
    // private System.Single ThumbSize()
    // Offset: 0xA3FC94
    float ThumbSize();
    // private System.Single MaxValue()
    // Offset: 0xA3FC9C
    float MaxValue();
    // private System.Single MinValue()
    // Offset: 0xA3FCA4
    float MinValue();
  }; // UnityEngine.SliderHandler
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SliderHandler, "UnityEngine", "SliderHandler");
#pragma pack(pop)
