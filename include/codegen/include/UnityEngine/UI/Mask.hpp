// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.ICanvasRaycastFilter
#include "UnityEngine/ICanvasRaycastFilter.hpp"
// Including type: UnityEngine.UI.IMaterialModifier
#include "UnityEngine/UI/IMaterialModifier.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.Mask
  class Mask : public UnityEngine::EventSystems::UIBehaviour, public UnityEngine::ICanvasRaycastFilter, public UnityEngine::UI::IMaterialModifier {
    public:
    // private UnityEngine.RectTransform m_RectTransform
    // Offset: 0x18
    UnityEngine::RectTransform* m_RectTransform;
    // private System.Boolean m_ShowMaskGraphic
    // Offset: 0x20
    bool m_ShowMaskGraphic;
    // private UnityEngine.UI.Graphic m_Graphic
    // Offset: 0x28
    UnityEngine::UI::Graphic* m_Graphic;
    // private UnityEngine.Material m_MaskMaterial
    // Offset: 0x30
    UnityEngine::Material* m_MaskMaterial;
    // private UnityEngine.Material m_UnmaskMaterial
    // Offset: 0x38
    UnityEngine::Material* m_UnmaskMaterial;
    // public UnityEngine.RectTransform get_rectTransform()
    // Offset: 0x11EBDC0
    UnityEngine::RectTransform* get_rectTransform();
    // public System.Boolean get_showMaskGraphic()
    // Offset: 0x11EBE40
    bool get_showMaskGraphic();
    // public System.Void set_showMaskGraphic(System.Boolean value)
    // Offset: 0x11EBE48
    void set_showMaskGraphic(bool value);
    // public UnityEngine.UI.Graphic get_graphic()
    // Offset: 0x11EBF20
    UnityEngine::UI::Graphic* get_graphic();
    // public System.Boolean MaskEnabled()
    // Offset: 0x11EBFB0
    bool MaskEnabled();
    // public System.Void OnSiblingGraphicEnabledDisabled()
    // Offset: 0x11EC050
    void OnSiblingGraphicEnabledDisabled();
    // protected System.Void .ctor()
    // Offset: 0x11EBFA0
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Mask* New_ctor();
    // protected override System.Void OnEnable()
    // Offset: 0x11EC054
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x11EC37C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // public System.Boolean IsRaycastLocationValid(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera)
    // Offset: 0x11EC4E4
    // Implemented from: UnityEngine.ICanvasRaycastFilter
    // Base method: System.Boolean ICanvasRaycastFilter::IsRaycastLocationValid(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera)
    bool IsRaycastLocationValid(UnityEngine::Vector2 sp, UnityEngine::Camera* eventCamera);
    // public UnityEngine.Material GetModifiedMaterial(UnityEngine.Material baseMaterial)
    // Offset: 0x11EC5AC
    // Implemented from: UnityEngine.UI.IMaterialModifier
    // Base method: UnityEngine.Material IMaterialModifier::GetModifiedMaterial(UnityEngine.Material baseMaterial)
    UnityEngine::Material* GetModifiedMaterial(UnityEngine::Material* baseMaterial);
  }; // UnityEngine.UI.Mask
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Mask*, "UnityEngine.UI", "Mask");
#pragma pack(pop)
