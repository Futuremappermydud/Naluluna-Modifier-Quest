// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:28 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.RenderingPath
  struct RenderingPath : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.RenderingPath UsePlayerSettings
    static constexpr const int UsePlayerSettings = -1;
    // Get static field: static public UnityEngine.RenderingPath UsePlayerSettings
    static UnityEngine::RenderingPath _get_UsePlayerSettings();
    // Set static field: static public UnityEngine.RenderingPath UsePlayerSettings
    static void _set_UsePlayerSettings(UnityEngine::RenderingPath value);
    // static field const value: static public UnityEngine.RenderingPath VertexLit
    static constexpr const int VertexLit = 0;
    // Get static field: static public UnityEngine.RenderingPath VertexLit
    static UnityEngine::RenderingPath _get_VertexLit();
    // Set static field: static public UnityEngine.RenderingPath VertexLit
    static void _set_VertexLit(UnityEngine::RenderingPath value);
    // static field const value: static public UnityEngine.RenderingPath Forward
    static constexpr const int Forward = 1;
    // Get static field: static public UnityEngine.RenderingPath Forward
    static UnityEngine::RenderingPath _get_Forward();
    // Set static field: static public UnityEngine.RenderingPath Forward
    static void _set_Forward(UnityEngine::RenderingPath value);
    // static field const value: static public UnityEngine.RenderingPath DeferredLighting
    static constexpr const int DeferredLighting = 2;
    // Get static field: static public UnityEngine.RenderingPath DeferredLighting
    static UnityEngine::RenderingPath _get_DeferredLighting();
    // Set static field: static public UnityEngine.RenderingPath DeferredLighting
    static void _set_DeferredLighting(UnityEngine::RenderingPath value);
    // static field const value: static public UnityEngine.RenderingPath DeferredShading
    static constexpr const int DeferredShading = 3;
    // Get static field: static public UnityEngine.RenderingPath DeferredShading
    static UnityEngine::RenderingPath _get_DeferredShading();
    // Set static field: static public UnityEngine.RenderingPath DeferredShading
    static void _set_DeferredShading(UnityEngine::RenderingPath value);
    // Creating value type constructor for type: RenderingPath
    RenderingPath(int value_ = {}) : value{value_} {}
  }; // UnityEngine.RenderingPath
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RenderingPath, "UnityEngine", "RenderingPath");
#pragma pack(pop)
