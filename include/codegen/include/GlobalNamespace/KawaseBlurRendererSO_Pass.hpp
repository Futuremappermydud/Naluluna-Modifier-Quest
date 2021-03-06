// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: KawaseBlurRendererSO
#include "GlobalNamespace/KawaseBlurRendererSO.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: KawaseBlurRendererSO/Pass
  struct KawaseBlurRendererSO::Pass : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public KawaseBlurRendererSO/Pass AlphaWeights
    static constexpr const int AlphaWeights = 0;
    // Get static field: static public KawaseBlurRendererSO/Pass AlphaWeights
    static GlobalNamespace::KawaseBlurRendererSO::Pass _get_AlphaWeights();
    // Set static field: static public KawaseBlurRendererSO/Pass AlphaWeights
    static void _set_AlphaWeights(GlobalNamespace::KawaseBlurRendererSO::Pass value);
    // static field const value: static public KawaseBlurRendererSO/Pass Blur
    static constexpr const int Blur = 1;
    // Get static field: static public KawaseBlurRendererSO/Pass Blur
    static GlobalNamespace::KawaseBlurRendererSO::Pass _get_Blur();
    // Set static field: static public KawaseBlurRendererSO/Pass Blur
    static void _set_Blur(GlobalNamespace::KawaseBlurRendererSO::Pass value);
    // static field const value: static public KawaseBlurRendererSO/Pass BlurAndAdd
    static constexpr const int BlurAndAdd = 2;
    // Get static field: static public KawaseBlurRendererSO/Pass BlurAndAdd
    static GlobalNamespace::KawaseBlurRendererSO::Pass _get_BlurAndAdd();
    // Set static field: static public KawaseBlurRendererSO/Pass BlurAndAdd
    static void _set_BlurAndAdd(GlobalNamespace::KawaseBlurRendererSO::Pass value);
    // static field const value: static public KawaseBlurRendererSO/Pass BlurWithAlphaWeights
    static constexpr const int BlurWithAlphaWeights = 3;
    // Get static field: static public KawaseBlurRendererSO/Pass BlurWithAlphaWeights
    static GlobalNamespace::KawaseBlurRendererSO::Pass _get_BlurWithAlphaWeights();
    // Set static field: static public KawaseBlurRendererSO/Pass BlurWithAlphaWeights
    static void _set_BlurWithAlphaWeights(GlobalNamespace::KawaseBlurRendererSO::Pass value);
    // static field const value: static public KawaseBlurRendererSO/Pass AlphaAndDepthWeights
    static constexpr const int AlphaAndDepthWeights = 4;
    // Get static field: static public KawaseBlurRendererSO/Pass AlphaAndDepthWeights
    static GlobalNamespace::KawaseBlurRendererSO::Pass _get_AlphaAndDepthWeights();
    // Set static field: static public KawaseBlurRendererSO/Pass AlphaAndDepthWeights
    static void _set_AlphaAndDepthWeights(GlobalNamespace::KawaseBlurRendererSO::Pass value);
    // static field const value: static public KawaseBlurRendererSO/Pass BlurGamma
    static constexpr const int BlurGamma = 5;
    // Get static field: static public KawaseBlurRendererSO/Pass BlurGamma
    static GlobalNamespace::KawaseBlurRendererSO::Pass _get_BlurGamma();
    // Set static field: static public KawaseBlurRendererSO/Pass BlurGamma
    static void _set_BlurGamma(GlobalNamespace::KawaseBlurRendererSO::Pass value);
    // static field const value: static public KawaseBlurRendererSO/Pass BlurGammaAndAdd
    static constexpr const int BlurGammaAndAdd = 6;
    // Get static field: static public KawaseBlurRendererSO/Pass BlurGammaAndAdd
    static GlobalNamespace::KawaseBlurRendererSO::Pass _get_BlurGammaAndAdd();
    // Set static field: static public KawaseBlurRendererSO/Pass BlurGammaAndAdd
    static void _set_BlurGammaAndAdd(GlobalNamespace::KawaseBlurRendererSO::Pass value);
    // Creating value type constructor for type: Pass
    Pass(int value_ = {}) : value{value_} {}
  }; // KawaseBlurRendererSO/Pass
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::KawaseBlurRendererSO::Pass, "", "KawaseBlurRendererSO/Pass");
#pragma pack(pop)
