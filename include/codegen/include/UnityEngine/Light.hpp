// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:28 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LightType
  struct LightType;
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: LightShadows
  struct LightShadows;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: LightEvent
  struct LightEvent;
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
  // Forward declaring type: ShadowMapPass
  struct ShadowMapPass;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Light
  class Light : public UnityEngine::Behaviour {
    public:
    // private System.Int32 m_BakedIndex
    // Offset: 0x18
    int m_BakedIndex;
    // public UnityEngine.LightType get_type()
    // Offset: 0x12F68E8
    UnityEngine::LightType get_type();
    // public System.Single get_spotAngle()
    // Offset: 0x12F55C0
    float get_spotAngle();
    // public UnityEngine.Color get_color()
    // Offset: 0x12F531C
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x12FA6C4
    void set_color(UnityEngine::Color value);
    // public System.Single get_intensity()
    // Offset: 0x12F5378
    float get_intensity();
    // public System.Void set_intensity(System.Single value)
    // Offset: 0x12FA76C
    void set_intensity(float value);
    // public System.Single get_bounceIntensity()
    // Offset: 0x12F53B8
    float get_bounceIntensity();
    // public System.Single get_range()
    // Offset: 0x12F58DC
    float get_range();
    // public UnityEngine.LightShadows get_shadows()
    // Offset: 0x12F5734
    UnityEngine::LightShadows get_shadows();
    // public System.Void AddCommandBuffer(UnityEngine.Rendering.LightEvent evt, UnityEngine.Rendering.CommandBuffer buffer)
    // Offset: 0x12FA7BC
    void AddCommandBuffer(UnityEngine::Rendering::LightEvent evt, UnityEngine::Rendering::CommandBuffer* buffer);
    // public System.Void AddCommandBuffer(UnityEngine.Rendering.LightEvent evt, UnityEngine.Rendering.CommandBuffer buffer, UnityEngine.Rendering.ShadowMapPass shadowPassMask)
    // Offset: 0x12FA818
    void AddCommandBuffer(UnityEngine::Rendering::LightEvent evt, UnityEngine::Rendering::CommandBuffer* buffer, UnityEngine::Rendering::ShadowMapPass shadowPassMask);
    // public System.Void RemoveCommandBuffer(UnityEngine.Rendering.LightEvent evt, UnityEngine.Rendering.CommandBuffer buffer)
    // Offset: 0x12FA880
    void RemoveCommandBuffer(UnityEngine::Rendering::LightEvent evt, UnityEngine::Rendering::CommandBuffer* buffer);
    // private System.Void get_color_Injected(UnityEngine.Color ret)
    // Offset: 0x12FA674
    void get_color_Injected(UnityEngine::Color& ret);
    // private System.Void set_color_Injected(UnityEngine.Color value)
    // Offset: 0x12FA71C
    void set_color_Injected(UnityEngine::Color& value);
  }; // UnityEngine.Light
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Light*, "UnityEngine", "Light");
#pragma pack(pop)
