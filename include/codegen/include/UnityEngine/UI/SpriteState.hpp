// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.SpriteState
  struct SpriteState : public System::ValueType, public System::IEquatable_1<UnityEngine::UI::SpriteState> {
    public:
    // private UnityEngine.Sprite m_HighlightedSprite
    // Offset: 0x0
    UnityEngine::Sprite* m_HighlightedSprite;
    // private UnityEngine.Sprite m_PressedSprite
    // Offset: 0x8
    UnityEngine::Sprite* m_PressedSprite;
    // private UnityEngine.Sprite m_SelectedSprite
    // Offset: 0x10
    UnityEngine::Sprite* m_SelectedSprite;
    // private UnityEngine.Sprite m_DisabledSprite
    // Offset: 0x18
    UnityEngine::Sprite* m_DisabledSprite;
    // Creating value type constructor for type: SpriteState
    SpriteState(UnityEngine::Sprite* m_HighlightedSprite_ = {}, UnityEngine::Sprite* m_PressedSprite_ = {}, UnityEngine::Sprite* m_SelectedSprite_ = {}, UnityEngine::Sprite* m_DisabledSprite_ = {}) : m_HighlightedSprite{m_HighlightedSprite_}, m_PressedSprite{m_PressedSprite_}, m_SelectedSprite{m_SelectedSprite_}, m_DisabledSprite{m_DisabledSprite_} {}
    // public UnityEngine.Sprite get_highlightedSprite()
    // Offset: 0xA59D30
    UnityEngine::Sprite* get_highlightedSprite();
    // public System.Void set_highlightedSprite(UnityEngine.Sprite value)
    // Offset: 0xA59D38
    void set_highlightedSprite(UnityEngine::Sprite* value);
    // public UnityEngine.Sprite get_pressedSprite()
    // Offset: 0xA59D40
    UnityEngine::Sprite* get_pressedSprite();
    // public System.Void set_pressedSprite(UnityEngine.Sprite value)
    // Offset: 0xA59D48
    void set_pressedSprite(UnityEngine::Sprite* value);
    // public UnityEngine.Sprite get_selectedSprite()
    // Offset: 0xA59D50
    UnityEngine::Sprite* get_selectedSprite();
    // public System.Void set_selectedSprite(UnityEngine.Sprite value)
    // Offset: 0xA59D58
    void set_selectedSprite(UnityEngine::Sprite* value);
    // public UnityEngine.Sprite get_disabledSprite()
    // Offset: 0xA59D60
    UnityEngine::Sprite* get_disabledSprite();
    // public System.Void set_disabledSprite(UnityEngine.Sprite value)
    // Offset: 0xA59D68
    void set_disabledSprite(UnityEngine::Sprite* value);
    // public System.Boolean Equals(UnityEngine.UI.SpriteState other)
    // Offset: 0xA59D70
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.UI.SpriteState other)
    bool Equals(UnityEngine::UI::SpriteState other);
  }; // UnityEngine.UI.SpriteState
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::SpriteState, "UnityEngine.UI", "SpriteState");
#pragma pack(pop)
