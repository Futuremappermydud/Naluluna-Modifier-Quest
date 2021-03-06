// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.GraphicRaycaster
#include "UnityEngine/UI/GraphicRaycaster.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Canvas
  class Canvas;
  // Forward declaring type: Ray
  struct Ray;
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRRaycaster
  class OVRRaycaster : public UnityEngine::UI::GraphicRaycaster, public UnityEngine::EventSystems::IPointerEnterHandler {
    public:
    // Nested type: GlobalNamespace::OVRRaycaster::RaycastHit
    struct RaycastHit;
    // Nested type: GlobalNamespace::OVRRaycaster::$$c
    class $$c;
    // Autogenerated type: OVRRaycaster/RaycastHit
    struct RaycastHit : public System::ValueType {
      public:
      // public UnityEngine.UI.Graphic graphic
      // Offset: 0x0
      UnityEngine::UI::Graphic* graphic;
      // public UnityEngine.Vector3 worldPos
      // Offset: 0x8
      UnityEngine::Vector3 worldPos;
      // public System.Boolean fromMouse
      // Offset: 0x14
      bool fromMouse;
      // Creating value type constructor for type: RaycastHit
      RaycastHit(UnityEngine::UI::Graphic* graphic_ = {}, UnityEngine::Vector3 worldPos_ = {}, bool fromMouse_ = {}) : graphic{graphic_}, worldPos{worldPos_}, fromMouse{fromMouse_} {}
    }; // OVRRaycaster/RaycastHit
    // public UnityEngine.GameObject pointer
    // Offset: 0x40
    UnityEngine::GameObject* pointer;
    // public System.Int32 sortOrder
    // Offset: 0x48
    int sortOrder;
    // private UnityEngine.Canvas m_Canvas
    // Offset: 0x50
    UnityEngine::Canvas* m_Canvas;
    // private System.Collections.Generic.List`1<OVRRaycaster/RaycastHit> m_RaycastResults
    // Offset: 0x58
    System::Collections::Generic::List_1<GlobalNamespace::OVRRaycaster::RaycastHit>* m_RaycastResults;
    // Get static field: static private readonly System.Collections.Generic.List`1<OVRRaycaster/RaycastHit> s_SortedGraphics
    static System::Collections::Generic::List_1<GlobalNamespace::OVRRaycaster::RaycastHit>* _get_s_SortedGraphics();
    // Set static field: static private readonly System.Collections.Generic.List`1<OVRRaycaster/RaycastHit> s_SortedGraphics
    static void _set_s_SortedGraphics(System::Collections::Generic::List_1<GlobalNamespace::OVRRaycaster::RaycastHit>* value);
    // private System.Void Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList, UnityEngine.Ray ray, System.Boolean checkForBlocking)
    // Offset: 0xF4C7F4
    void Raycast(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList, UnityEngine::Ray ray, bool checkForBlocking);
    // public System.Void RaycastPointer(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    // Offset: 0xF4D3FC
    void RaycastPointer(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList);
    // private System.Void GraphicRaycast(UnityEngine.Canvas canvas, UnityEngine.Ray ray, System.Collections.Generic.List`1<OVRRaycaster/RaycastHit> results)
    // Offset: 0xF4CDF4
    void GraphicRaycast(UnityEngine::Canvas* canvas, UnityEngine::Ray ray, System::Collections::Generic::List_1<GlobalNamespace::OVRRaycaster::RaycastHit>* results);
    // public UnityEngine.Vector2 GetScreenPosition(UnityEngine.EventSystems.RaycastResult raycastResult)
    // Offset: 0xF4DA08
    UnityEngine::Vector2 GetScreenPosition(UnityEngine::EventSystems::RaycastResult raycastResult);
    // static private System.Boolean RayIntersectsRectTransform(UnityEngine.RectTransform rectTransform, UnityEngine.Ray ray, UnityEngine.Vector3 worldPos)
    // Offset: 0xF4D608
    static bool RayIntersectsRectTransform(UnityEngine::RectTransform* rectTransform, UnityEngine::Ray ray, UnityEngine::Vector3& worldPos);
    // public System.Boolean IsFocussed()
    // Offset: 0xF4DACC
    bool IsFocussed();
    // protected System.Void .ctor()
    // Offset: 0xF4C538
    // Implemented from: UnityEngine.UI.GraphicRaycaster
    // Base method: System.Void GraphicRaycaster::.ctor()
    // Base method: System.Void BaseRaycaster::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRRaycaster* New_ctor();
    // private UnityEngine.Canvas get_canvas()
    // Offset: 0xF4C5D4
    // Implemented from: UnityEngine.UI.GraphicRaycaster
    // Base method: UnityEngine.Canvas GraphicRaycaster::get_canvas()
    UnityEngine::Canvas* get_canvas();
    // public override UnityEngine.Camera get_eventCamera()
    // Offset: 0xF4C680
    // Implemented from: UnityEngine.UI.GraphicRaycaster
    // Base method: UnityEngine.Camera GraphicRaycaster::get_eventCamera()
    UnityEngine::Camera* get_eventCamera();
    // public override System.Int32 get_sortOrderPriority()
    // Offset: 0xF4C6A0
    // Implemented from: UnityEngine.UI.GraphicRaycaster
    // Base method: System.Int32 GraphicRaycaster::get_sortOrderPriority()
    int get_sortOrderPriority();
    // protected override System.Void Start()
    // Offset: 0xF4C6A8
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Start()
    void Start();
    // public override System.Void Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    // Offset: 0xF4D384
    // Implemented from: UnityEngine.UI.GraphicRaycaster
    // Base method: System.Void GraphicRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    void Raycast(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList);
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData e)
    // Offset: 0xF4DBF8
    // Implemented from: UnityEngine.EventSystems.IPointerEnterHandler
    // Base method: System.Void IPointerEnterHandler::OnPointerEnter(UnityEngine.EventSystems.PointerEventData e)
    void OnPointerEnter(UnityEngine::EventSystems::PointerEventData* e);
    // static private System.Void .cctor()
    // Offset: 0xF4DD1C
    // Implemented from: UnityEngine.UI.GraphicRaycaster
    // Base method: System.Void GraphicRaycaster::.cctor()
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // OVRRaycaster
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRRaycaster*, "", "OVRRaycaster");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRRaycaster::RaycastHit, "", "OVRRaycaster/RaycastHit");
#pragma pack(pop)
