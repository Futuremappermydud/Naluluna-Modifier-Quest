// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:30 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.Renderer
#include "UnityEngine/Renderer.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.SpriteRenderer
  class SpriteRenderer : public UnityEngine::Renderer {
    public:
    // public System.Void set_sprite(UnityEngine.Sprite value)
    // Offset: 0x13784F4
    void set_sprite(UnityEngine::Sprite* value);
    // public UnityEngine.Color get_color()
    // Offset: 0x1378544
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x13785F0
    void set_color(UnityEngine::Color value);
    // private System.Void get_color_Injected(UnityEngine.Color ret)
    // Offset: 0x13785A0
    void get_color_Injected(UnityEngine::Color& ret);
    // private System.Void set_color_Injected(UnityEngine.Color value)
    // Offset: 0x1378648
    void set_color_Injected(UnityEngine::Color& value);
  }; // UnityEngine.SpriteRenderer
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SpriteRenderer*, "UnityEngine", "SpriteRenderer");
#pragma pack(pop)
