// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.IClippable
  class IClippable {
    public:
    // public UnityEngine.GameObject get_gameObject()
    // Offset: 0xFFFFFFFF
    UnityEngine::GameObject* UnityEngine_UI_IClippable_get_gameObject();
    // public System.Void RecalculateClipping()
    // Offset: 0xFFFFFFFF
    void RecalculateClipping();
    // public UnityEngine.RectTransform get_rectTransform()
    // Offset: 0xFFFFFFFF
    UnityEngine::RectTransform* get_rectTransform();
    // public System.Void Cull(UnityEngine.Rect clipRect, System.Boolean validRect)
    // Offset: 0xFFFFFFFF
    void Cull(UnityEngine::Rect clipRect, bool validRect);
    // public System.Void SetClipRect(UnityEngine.Rect value, System.Boolean validRect)
    // Offset: 0xFFFFFFFF
    void SetClipRect(UnityEngine::Rect value, bool validRect);
  }; // UnityEngine.UI.IClippable
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::IClippable*, "UnityEngine.UI", "IClippable");
#pragma pack(pop)
