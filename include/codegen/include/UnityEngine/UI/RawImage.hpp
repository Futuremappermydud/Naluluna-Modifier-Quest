// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.UI.MaskableGraphic
#include "UnityEngine/UI/MaskableGraphic.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.RawImage
  class RawImage : public UnityEngine::UI::MaskableGraphic {
    public:
    // private UnityEngine.Texture m_Texture
    // Offset: 0xC0
    UnityEngine::Texture* m_Texture;
    // private UnityEngine.Rect m_UVRect
    // Offset: 0xC8
    UnityEngine::Rect m_UVRect;
    // public UnityEngine.Texture get_texture()
    // Offset: 0x11EF3C0
    UnityEngine::Texture* get_texture();
    // public System.Void set_texture(UnityEngine.Texture value)
    // Offset: 0x11EF3C8
    void set_texture(UnityEngine::Texture* value);
    // public UnityEngine.Rect get_uvRect()
    // Offset: 0x11EF494
    UnityEngine::Rect get_uvRect();
    // public System.Void set_uvRect(UnityEngine.Rect value)
    // Offset: 0x11EF4A0
    void set_uvRect(UnityEngine::Rect value);
    // protected System.Void .ctor()
    // Offset: 0x11EF1E8
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::.ctor()
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static RawImage* New_ctor();
    // public override UnityEngine.Texture get_mainTexture()
    // Offset: 0x11EF240
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: UnityEngine.Texture Graphic::get_mainTexture()
    UnityEngine::Texture* get_mainTexture();
    // public override System.Void SetNativeSize()
    // Offset: 0x11EF530
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetNativeSize()
    void SetNativeSize();
    // protected override System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    // Offset: 0x11EF6F4
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    void OnPopulateMesh(UnityEngine::UI::VertexHelper* vh);
    // protected override System.Void OnDidApplyAnimationProperties()
    // Offset: 0x11EFB2C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnDidApplyAnimationProperties()
    void OnDidApplyAnimationProperties();
  }; // UnityEngine.UI.RawImage
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::RawImage*, "UnityEngine.UI", "RawImage");
#pragma pack(pop)
