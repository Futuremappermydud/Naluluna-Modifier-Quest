// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PyramidBloomRendererSO
#include "GlobalNamespace/PyramidBloomRendererSO.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PyramidBloomRendererSO/Pass
  struct PyramidBloomRendererSO::Pass : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public PyramidBloomRendererSO/Pass Prefilter13
    static constexpr const int Prefilter13 = 0;
    // Get static field: static public PyramidBloomRendererSO/Pass Prefilter13
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_Prefilter13();
    // Set static field: static public PyramidBloomRendererSO/Pass Prefilter13
    static void _set_Prefilter13(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // static field const value: static public PyramidBloomRendererSO/Pass Prefilter4
    static constexpr const int Prefilter4 = 1;
    // Get static field: static public PyramidBloomRendererSO/Pass Prefilter4
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_Prefilter4();
    // Set static field: static public PyramidBloomRendererSO/Pass Prefilter4
    static void _set_Prefilter4(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // static field const value: static public PyramidBloomRendererSO/Pass Downsample13
    static constexpr const int Downsample13 = 2;
    // Get static field: static public PyramidBloomRendererSO/Pass Downsample13
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_Downsample13();
    // Set static field: static public PyramidBloomRendererSO/Pass Downsample13
    static void _set_Downsample13(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // static field const value: static public PyramidBloomRendererSO/Pass Downsample4
    static constexpr const int Downsample4 = 3;
    // Get static field: static public PyramidBloomRendererSO/Pass Downsample4
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_Downsample4();
    // Set static field: static public PyramidBloomRendererSO/Pass Downsample4
    static void _set_Downsample4(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // static field const value: static public PyramidBloomRendererSO/Pass UpsampleTent
    static constexpr const int UpsampleTent = 4;
    // Get static field: static public PyramidBloomRendererSO/Pass UpsampleTent
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_UpsampleTent();
    // Set static field: static public PyramidBloomRendererSO/Pass UpsampleTent
    static void _set_UpsampleTent(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // static field const value: static public PyramidBloomRendererSO/Pass UpsampleBox
    static constexpr const int UpsampleBox = 5;
    // Get static field: static public PyramidBloomRendererSO/Pass UpsampleBox
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_UpsampleBox();
    // Set static field: static public PyramidBloomRendererSO/Pass UpsampleBox
    static void _set_UpsampleBox(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // static field const value: static public PyramidBloomRendererSO/Pass UpsampleTentGamma
    static constexpr const int UpsampleTentGamma = 6;
    // Get static field: static public PyramidBloomRendererSO/Pass UpsampleTentGamma
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_UpsampleTentGamma();
    // Set static field: static public PyramidBloomRendererSO/Pass UpsampleTentGamma
    static void _set_UpsampleTentGamma(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // static field const value: static public PyramidBloomRendererSO/Pass UpsampleBoxGamma
    static constexpr const int UpsampleBoxGamma = 7;
    // Get static field: static public PyramidBloomRendererSO/Pass UpsampleBoxGamma
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_UpsampleBoxGamma();
    // Set static field: static public PyramidBloomRendererSO/Pass UpsampleBoxGamma
    static void _set_UpsampleBoxGamma(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // static field const value: static public PyramidBloomRendererSO/Pass Bilinear
    static constexpr const int Bilinear = 8;
    // Get static field: static public PyramidBloomRendererSO/Pass Bilinear
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_Bilinear();
    // Set static field: static public PyramidBloomRendererSO/Pass Bilinear
    static void _set_Bilinear(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // static field const value: static public PyramidBloomRendererSO/Pass BilinearGamma
    static constexpr const int BilinearGamma = 9;
    // Get static field: static public PyramidBloomRendererSO/Pass BilinearGamma
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_BilinearGamma();
    // Set static field: static public PyramidBloomRendererSO/Pass BilinearGamma
    static void _set_BilinearGamma(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // Creating value type constructor for type: Pass
    Pass(int value_ = {}) : value{value_} {}
  }; // PyramidBloomRendererSO/Pass
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PyramidBloomRendererSO::Pass, "", "PyramidBloomRendererSO/Pass");
#pragma pack(pop)
