// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: UnityEngine.Experimental.XR.Boundary
#include "UnityEngine/Experimental/XR/Boundary.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // Autogenerated type: UnityEngine.Experimental.XR.Boundary/Type
  struct Boundary::Type : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.Experimental.XR.Boundary/Type PlayArea
    static constexpr const int PlayArea = 0;
    // Get static field: static public UnityEngine.Experimental.XR.Boundary/Type PlayArea
    static UnityEngine::Experimental::XR::Boundary::Type _get_PlayArea();
    // Set static field: static public UnityEngine.Experimental.XR.Boundary/Type PlayArea
    static void _set_PlayArea(UnityEngine::Experimental::XR::Boundary::Type value);
    // static field const value: static public UnityEngine.Experimental.XR.Boundary/Type TrackedArea
    static constexpr const int TrackedArea = 1;
    // Get static field: static public UnityEngine.Experimental.XR.Boundary/Type TrackedArea
    static UnityEngine::Experimental::XR::Boundary::Type _get_TrackedArea();
    // Set static field: static public UnityEngine.Experimental.XR.Boundary/Type TrackedArea
    static void _set_TrackedArea(UnityEngine::Experimental::XR::Boundary::Type value);
    // Creating value type constructor for type: Type
    Type(int value_ = {}) : value{value_} {}
  }; // UnityEngine.Experimental.XR.Boundary/Type
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::XR::Boundary::Type, "UnityEngine.Experimental.XR", "Boundary/Type");
#pragma pack(pop)
