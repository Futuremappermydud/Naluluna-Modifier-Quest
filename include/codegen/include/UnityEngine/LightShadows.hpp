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
  // Autogenerated type: UnityEngine.LightShadows
  struct LightShadows : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.LightShadows None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.LightShadows None
    static UnityEngine::LightShadows _get_None();
    // Set static field: static public UnityEngine.LightShadows None
    static void _set_None(UnityEngine::LightShadows value);
    // static field const value: static public UnityEngine.LightShadows Hard
    static constexpr const int Hard = 1;
    // Get static field: static public UnityEngine.LightShadows Hard
    static UnityEngine::LightShadows _get_Hard();
    // Set static field: static public UnityEngine.LightShadows Hard
    static void _set_Hard(UnityEngine::LightShadows value);
    // static field const value: static public UnityEngine.LightShadows Soft
    static constexpr const int Soft = 2;
    // Get static field: static public UnityEngine.LightShadows Soft
    static UnityEngine::LightShadows _get_Soft();
    // Set static field: static public UnityEngine.LightShadows Soft
    static void _set_Soft(UnityEngine::LightShadows value);
    // Creating value type constructor for type: LightShadows
    LightShadows(int value_ = {}) : value{value_} {}
  }; // UnityEngine.LightShadows
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LightShadows, "UnityEngine", "LightShadows");
#pragma pack(pop)
