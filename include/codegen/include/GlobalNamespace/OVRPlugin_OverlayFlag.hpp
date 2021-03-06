// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/OverlayFlag
  struct OVRPlugin::OverlayFlag : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVRPlugin/OverlayFlag None
    static constexpr const int None = 0;
    // Get static field: static public OVRPlugin/OverlayFlag None
    static GlobalNamespace::OVRPlugin::OverlayFlag _get_None();
    // Set static field: static public OVRPlugin/OverlayFlag None
    static void _set_None(GlobalNamespace::OVRPlugin::OverlayFlag value);
    // static field const value: static public OVRPlugin/OverlayFlag OnTop
    static constexpr const int OnTop = 1;
    // Get static field: static public OVRPlugin/OverlayFlag OnTop
    static GlobalNamespace::OVRPlugin::OverlayFlag _get_OnTop();
    // Set static field: static public OVRPlugin/OverlayFlag OnTop
    static void _set_OnTop(GlobalNamespace::OVRPlugin::OverlayFlag value);
    // static field const value: static public OVRPlugin/OverlayFlag HeadLocked
    static constexpr const int HeadLocked = 2;
    // Get static field: static public OVRPlugin/OverlayFlag HeadLocked
    static GlobalNamespace::OVRPlugin::OverlayFlag _get_HeadLocked();
    // Set static field: static public OVRPlugin/OverlayFlag HeadLocked
    static void _set_HeadLocked(GlobalNamespace::OVRPlugin::OverlayFlag value);
    // static field const value: static public OVRPlugin/OverlayFlag NoDepth
    static constexpr const int NoDepth = 4;
    // Get static field: static public OVRPlugin/OverlayFlag NoDepth
    static GlobalNamespace::OVRPlugin::OverlayFlag _get_NoDepth();
    // Set static field: static public OVRPlugin/OverlayFlag NoDepth
    static void _set_NoDepth(GlobalNamespace::OVRPlugin::OverlayFlag value);
    // static field const value: static public OVRPlugin/OverlayFlag ExpensiveSuperSample
    static constexpr const int ExpensiveSuperSample = 8;
    // Get static field: static public OVRPlugin/OverlayFlag ExpensiveSuperSample
    static GlobalNamespace::OVRPlugin::OverlayFlag _get_ExpensiveSuperSample();
    // Set static field: static public OVRPlugin/OverlayFlag ExpensiveSuperSample
    static void _set_ExpensiveSuperSample(GlobalNamespace::OVRPlugin::OverlayFlag value);
    // static field const value: static public OVRPlugin/OverlayFlag ShapeFlag_Quad
    static constexpr const int ShapeFlag_Quad = 0;
    // Get static field: static public OVRPlugin/OverlayFlag ShapeFlag_Quad
    static GlobalNamespace::OVRPlugin::OverlayFlag _get_ShapeFlag_Quad();
    // Set static field: static public OVRPlugin/OverlayFlag ShapeFlag_Quad
    static void _set_ShapeFlag_Quad(GlobalNamespace::OVRPlugin::OverlayFlag value);
    // static field const value: static public OVRPlugin/OverlayFlag ShapeFlag_Cylinder
    static constexpr const int ShapeFlag_Cylinder = 16;
    // Get static field: static public OVRPlugin/OverlayFlag ShapeFlag_Cylinder
    static GlobalNamespace::OVRPlugin::OverlayFlag _get_ShapeFlag_Cylinder();
    // Set static field: static public OVRPlugin/OverlayFlag ShapeFlag_Cylinder
    static void _set_ShapeFlag_Cylinder(GlobalNamespace::OVRPlugin::OverlayFlag value);
    // static field const value: static public OVRPlugin/OverlayFlag ShapeFlag_Cubemap
    static constexpr const int ShapeFlag_Cubemap = 32;
    // Get static field: static public OVRPlugin/OverlayFlag ShapeFlag_Cubemap
    static GlobalNamespace::OVRPlugin::OverlayFlag _get_ShapeFlag_Cubemap();
    // Set static field: static public OVRPlugin/OverlayFlag ShapeFlag_Cubemap
    static void _set_ShapeFlag_Cubemap(GlobalNamespace::OVRPlugin::OverlayFlag value);
    // static field const value: static public OVRPlugin/OverlayFlag ShapeFlag_OffcenterCubemap
    static constexpr const int ShapeFlag_OffcenterCubemap = 64;
    // Get static field: static public OVRPlugin/OverlayFlag ShapeFlag_OffcenterCubemap
    static GlobalNamespace::OVRPlugin::OverlayFlag _get_ShapeFlag_OffcenterCubemap();
    // Set static field: static public OVRPlugin/OverlayFlag ShapeFlag_OffcenterCubemap
    static void _set_ShapeFlag_OffcenterCubemap(GlobalNamespace::OVRPlugin::OverlayFlag value);
    // static field const value: static public OVRPlugin/OverlayFlag ShapeFlagRangeMask
    static constexpr const int ShapeFlagRangeMask = 240;
    // Get static field: static public OVRPlugin/OverlayFlag ShapeFlagRangeMask
    static GlobalNamespace::OVRPlugin::OverlayFlag _get_ShapeFlagRangeMask();
    // Set static field: static public OVRPlugin/OverlayFlag ShapeFlagRangeMask
    static void _set_ShapeFlagRangeMask(GlobalNamespace::OVRPlugin::OverlayFlag value);
    // static field const value: static public OVRPlugin/OverlayFlag Hidden
    static constexpr const int Hidden = 512;
    // Get static field: static public OVRPlugin/OverlayFlag Hidden
    static GlobalNamespace::OVRPlugin::OverlayFlag _get_Hidden();
    // Set static field: static public OVRPlugin/OverlayFlag Hidden
    static void _set_Hidden(GlobalNamespace::OVRPlugin::OverlayFlag value);
    // Creating value type constructor for type: OverlayFlag
    OverlayFlag(int value_ = {}) : value{value_} {}
  }; // OVRPlugin/OverlayFlag
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OverlayFlag, "", "OVRPlugin/OverlayFlag");
#pragma pack(pop)
