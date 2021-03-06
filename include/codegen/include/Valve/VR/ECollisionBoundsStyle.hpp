// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:15 PM
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.ECollisionBoundsStyle
  struct ECollisionBoundsStyle : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_BEGINNER
    static constexpr const int COLLISION_BOUNDS_STYLE_BEGINNER = 0;
    // Get static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_BEGINNER
    static Valve::VR::ECollisionBoundsStyle _get_COLLISION_BOUNDS_STYLE_BEGINNER();
    // Set static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_BEGINNER
    static void _set_COLLISION_BOUNDS_STYLE_BEGINNER(Valve::VR::ECollisionBoundsStyle value);
    // static field const value: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_INTERMEDIATE
    static constexpr const int COLLISION_BOUNDS_STYLE_INTERMEDIATE = 1;
    // Get static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_INTERMEDIATE
    static Valve::VR::ECollisionBoundsStyle _get_COLLISION_BOUNDS_STYLE_INTERMEDIATE();
    // Set static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_INTERMEDIATE
    static void _set_COLLISION_BOUNDS_STYLE_INTERMEDIATE(Valve::VR::ECollisionBoundsStyle value);
    // static field const value: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_SQUARES
    static constexpr const int COLLISION_BOUNDS_STYLE_SQUARES = 2;
    // Get static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_SQUARES
    static Valve::VR::ECollisionBoundsStyle _get_COLLISION_BOUNDS_STYLE_SQUARES();
    // Set static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_SQUARES
    static void _set_COLLISION_BOUNDS_STYLE_SQUARES(Valve::VR::ECollisionBoundsStyle value);
    // static field const value: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_ADVANCED
    static constexpr const int COLLISION_BOUNDS_STYLE_ADVANCED = 3;
    // Get static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_ADVANCED
    static Valve::VR::ECollisionBoundsStyle _get_COLLISION_BOUNDS_STYLE_ADVANCED();
    // Set static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_ADVANCED
    static void _set_COLLISION_BOUNDS_STYLE_ADVANCED(Valve::VR::ECollisionBoundsStyle value);
    // static field const value: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_NONE
    static constexpr const int COLLISION_BOUNDS_STYLE_NONE = 4;
    // Get static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_NONE
    static Valve::VR::ECollisionBoundsStyle _get_COLLISION_BOUNDS_STYLE_NONE();
    // Set static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_NONE
    static void _set_COLLISION_BOUNDS_STYLE_NONE(Valve::VR::ECollisionBoundsStyle value);
    // static field const value: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_COUNT
    static constexpr const int COLLISION_BOUNDS_STYLE_COUNT = 5;
    // Get static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_COUNT
    static Valve::VR::ECollisionBoundsStyle _get_COLLISION_BOUNDS_STYLE_COUNT();
    // Set static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_COUNT
    static void _set_COLLISION_BOUNDS_STYLE_COUNT(Valve::VR::ECollisionBoundsStyle value);
    // Creating value type constructor for type: ECollisionBoundsStyle
    ECollisionBoundsStyle(int value_ = {}) : value{value_} {}
  }; // Valve.VR.ECollisionBoundsStyle
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::ECollisionBoundsStyle, "Valve.VR", "ECollisionBoundsStyle");
#pragma pack(pop)
