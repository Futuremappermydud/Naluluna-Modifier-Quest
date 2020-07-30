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
  // Autogenerated type: UnityEngine.DepthTextureMode
  struct DepthTextureMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.DepthTextureMode None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.DepthTextureMode None
    static UnityEngine::DepthTextureMode _get_None();
    // Set static field: static public UnityEngine.DepthTextureMode None
    static void _set_None(UnityEngine::DepthTextureMode value);
    // static field const value: static public UnityEngine.DepthTextureMode Depth
    static constexpr const int Depth = 1;
    // Get static field: static public UnityEngine.DepthTextureMode Depth
    static UnityEngine::DepthTextureMode _get_Depth();
    // Set static field: static public UnityEngine.DepthTextureMode Depth
    static void _set_Depth(UnityEngine::DepthTextureMode value);
    // static field const value: static public UnityEngine.DepthTextureMode DepthNormals
    static constexpr const int DepthNormals = 2;
    // Get static field: static public UnityEngine.DepthTextureMode DepthNormals
    static UnityEngine::DepthTextureMode _get_DepthNormals();
    // Set static field: static public UnityEngine.DepthTextureMode DepthNormals
    static void _set_DepthNormals(UnityEngine::DepthTextureMode value);
    // static field const value: static public UnityEngine.DepthTextureMode MotionVectors
    static constexpr const int MotionVectors = 4;
    // Get static field: static public UnityEngine.DepthTextureMode MotionVectors
    static UnityEngine::DepthTextureMode _get_MotionVectors();
    // Set static field: static public UnityEngine.DepthTextureMode MotionVectors
    static void _set_MotionVectors(UnityEngine::DepthTextureMode value);
    // Creating value type constructor for type: DepthTextureMode
    DepthTextureMode(int value_ = {}) : value{value_} {}
  }; // UnityEngine.DepthTextureMode
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::DepthTextureMode, "UnityEngine", "DepthTextureMode");
#pragma pack(pop)
