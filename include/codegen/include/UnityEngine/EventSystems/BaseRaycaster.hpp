// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:39 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.EventSystems.RaycastResult
#include "UnityEngine/EventSystems/RaycastResult.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.BaseRaycaster
  class BaseRaycaster : public UnityEngine::EventSystems::UIBehaviour {
    public:
    // private UnityEngine.EventSystems.BaseRaycaster m_RootRaycaster
    // Offset: 0x18
    UnityEngine::EventSystems::BaseRaycaster* m_RootRaycaster;
    // public System.Void Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    // Offset: 0xFFFFFFFF
    void Raycast(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList);
    // public UnityEngine.Camera get_eventCamera()
    // Offset: 0xFFFFFFFF
    UnityEngine::Camera* get_eventCamera();
    // public System.Int32 get_priority()
    // Offset: 0xDE3C64
    int get_priority();
    // public System.Int32 get_sortOrderPriority()
    // Offset: 0xDE3C6C
    int get_sortOrderPriority();
    // public System.Int32 get_renderOrderPriority()
    // Offset: 0xDE3C74
    int get_renderOrderPriority();
    // public UnityEngine.EventSystems.BaseRaycaster get_rootRaycaster()
    // Offset: 0xDE3C7C
    UnityEngine::EventSystems::BaseRaycaster* get_rootRaycaster();
    // public override System.String ToString()
    // Offset: 0xDE3D54
    // Implemented from: UnityEngine.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // protected override System.Void OnEnable()
    // Offset: 0xDE404C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0xDE4180
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // protected override System.Void OnCanvasHierarchyChanged()
    // Offset: 0xDE42B4
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnCanvasHierarchyChanged()
    void OnCanvasHierarchyChanged();
    // protected override System.Void OnTransformParentChanged()
    // Offset: 0xDE42C4
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnTransformParentChanged()
    void OnTransformParentChanged();
    // protected System.Void .ctor()
    // Offset: 0xDE42D4
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BaseRaycaster* New_ctor();
  }; // UnityEngine.EventSystems.BaseRaycaster
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::BaseRaycaster*, "UnityEngine.EventSystems", "BaseRaycaster");
#pragma pack(pop)
