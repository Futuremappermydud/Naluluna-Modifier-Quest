// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:36 PM
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
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Autogenerated type: UnityEngine.TextCore.LowLevel.GlyphLoadFlags
  struct GlyphLoadFlags : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_DEFAULT
    static constexpr const int LOAD_DEFAULT = 0;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_DEFAULT
    static UnityEngine::TextCore::LowLevel::GlyphLoadFlags _get_LOAD_DEFAULT();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_DEFAULT
    static void _set_LOAD_DEFAULT(UnityEngine::TextCore::LowLevel::GlyphLoadFlags value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_SCALE
    static constexpr const int LOAD_NO_SCALE = 1;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_SCALE
    static UnityEngine::TextCore::LowLevel::GlyphLoadFlags _get_LOAD_NO_SCALE();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_SCALE
    static void _set_LOAD_NO_SCALE(UnityEngine::TextCore::LowLevel::GlyphLoadFlags value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_HINTING
    static constexpr const int LOAD_NO_HINTING = 2;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_HINTING
    static UnityEngine::TextCore::LowLevel::GlyphLoadFlags _get_LOAD_NO_HINTING();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_HINTING
    static void _set_LOAD_NO_HINTING(UnityEngine::TextCore::LowLevel::GlyphLoadFlags value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_RENDER
    static constexpr const int LOAD_RENDER = 4;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_RENDER
    static UnityEngine::TextCore::LowLevel::GlyphLoadFlags _get_LOAD_RENDER();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_RENDER
    static void _set_LOAD_RENDER(UnityEngine::TextCore::LowLevel::GlyphLoadFlags value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_BITMAP
    static constexpr const int LOAD_NO_BITMAP = 8;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_BITMAP
    static UnityEngine::TextCore::LowLevel::GlyphLoadFlags _get_LOAD_NO_BITMAP();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_BITMAP
    static void _set_LOAD_NO_BITMAP(UnityEngine::TextCore::LowLevel::GlyphLoadFlags value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_FORCE_AUTOHINT
    static constexpr const int LOAD_FORCE_AUTOHINT = 32;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_FORCE_AUTOHINT
    static UnityEngine::TextCore::LowLevel::GlyphLoadFlags _get_LOAD_FORCE_AUTOHINT();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_FORCE_AUTOHINT
    static void _set_LOAD_FORCE_AUTOHINT(UnityEngine::TextCore::LowLevel::GlyphLoadFlags value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_MONOCHROME
    static constexpr const int LOAD_MONOCHROME = 4096;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_MONOCHROME
    static UnityEngine::TextCore::LowLevel::GlyphLoadFlags _get_LOAD_MONOCHROME();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_MONOCHROME
    static void _set_LOAD_MONOCHROME(UnityEngine::TextCore::LowLevel::GlyphLoadFlags value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_AUTOHINT
    static constexpr const int LOAD_NO_AUTOHINT = 32768;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_AUTOHINT
    static UnityEngine::TextCore::LowLevel::GlyphLoadFlags _get_LOAD_NO_AUTOHINT();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_AUTOHINT
    static void _set_LOAD_NO_AUTOHINT(UnityEngine::TextCore::LowLevel::GlyphLoadFlags value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_COMPUTE_METRICS
    static constexpr const int LOAD_COMPUTE_METRICS = 2097152;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_COMPUTE_METRICS
    static UnityEngine::TextCore::LowLevel::GlyphLoadFlags _get_LOAD_COMPUTE_METRICS();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_COMPUTE_METRICS
    static void _set_LOAD_COMPUTE_METRICS(UnityEngine::TextCore::LowLevel::GlyphLoadFlags value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_BITMAP_METRICS_ONLY
    static constexpr const int LOAD_BITMAP_METRICS_ONLY = 4194304;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_BITMAP_METRICS_ONLY
    static UnityEngine::TextCore::LowLevel::GlyphLoadFlags _get_LOAD_BITMAP_METRICS_ONLY();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_BITMAP_METRICS_ONLY
    static void _set_LOAD_BITMAP_METRICS_ONLY(UnityEngine::TextCore::LowLevel::GlyphLoadFlags value);
    // Creating value type constructor for type: GlyphLoadFlags
    GlyphLoadFlags(int value_ = {}) : value{value_} {}
  }; // UnityEngine.TextCore.LowLevel.GlyphLoadFlags
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::LowLevel::GlyphLoadFlags, "UnityEngine.TextCore.LowLevel", "GlyphLoadFlags");
#pragma pack(pop)
