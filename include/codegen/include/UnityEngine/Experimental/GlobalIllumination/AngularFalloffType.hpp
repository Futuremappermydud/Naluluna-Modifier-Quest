// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:32 PM
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
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Autogenerated type: UnityEngine.Experimental.GlobalIllumination.AngularFalloffType
  struct AngularFalloffType : public System::Enum {
    public:
    // public System.Byte value__
    // Offset: 0x0
    uint8_t value;
    // static field const value: static public UnityEngine.Experimental.GlobalIllumination.AngularFalloffType LUT
    static constexpr const uint8_t LUT = 0u;
    // Get static field: static public UnityEngine.Experimental.GlobalIllumination.AngularFalloffType LUT
    static UnityEngine::Experimental::GlobalIllumination::AngularFalloffType _get_LUT();
    // Set static field: static public UnityEngine.Experimental.GlobalIllumination.AngularFalloffType LUT
    static void _set_LUT(UnityEngine::Experimental::GlobalIllumination::AngularFalloffType value);
    // static field const value: static public UnityEngine.Experimental.GlobalIllumination.AngularFalloffType AnalyticAndInnerAngle
    static constexpr const uint8_t AnalyticAndInnerAngle = 1u;
    // Get static field: static public UnityEngine.Experimental.GlobalIllumination.AngularFalloffType AnalyticAndInnerAngle
    static UnityEngine::Experimental::GlobalIllumination::AngularFalloffType _get_AnalyticAndInnerAngle();
    // Set static field: static public UnityEngine.Experimental.GlobalIllumination.AngularFalloffType AnalyticAndInnerAngle
    static void _set_AnalyticAndInnerAngle(UnityEngine::Experimental::GlobalIllumination::AngularFalloffType value);
    // Creating value type constructor for type: AngularFalloffType
    AngularFalloffType(uint8_t value_ = {}) : value{value_} {}
  }; // UnityEngine.Experimental.GlobalIllumination.AngularFalloffType
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::AngularFalloffType, "UnityEngine.Experimental.GlobalIllumination", "AngularFalloffType");
#pragma pack(pop)
