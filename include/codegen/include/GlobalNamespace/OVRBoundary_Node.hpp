// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRBoundary
#include "GlobalNamespace/OVRBoundary.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRBoundary/Node
  struct OVRBoundary::Node : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVRBoundary/Node HandLeft
    static constexpr const int HandLeft = 3;
    // Get static field: static public OVRBoundary/Node HandLeft
    static GlobalNamespace::OVRBoundary::Node _get_HandLeft();
    // Set static field: static public OVRBoundary/Node HandLeft
    static void _set_HandLeft(GlobalNamespace::OVRBoundary::Node value);
    // static field const value: static public OVRBoundary/Node HandRight
    static constexpr const int HandRight = 4;
    // Get static field: static public OVRBoundary/Node HandRight
    static GlobalNamespace::OVRBoundary::Node _get_HandRight();
    // Set static field: static public OVRBoundary/Node HandRight
    static void _set_HandRight(GlobalNamespace::OVRBoundary::Node value);
    // static field const value: static public OVRBoundary/Node Head
    static constexpr const int Head = 9;
    // Get static field: static public OVRBoundary/Node Head
    static GlobalNamespace::OVRBoundary::Node _get_Head();
    // Set static field: static public OVRBoundary/Node Head
    static void _set_Head(GlobalNamespace::OVRBoundary::Node value);
    // Creating value type constructor for type: Node
    Node(int value_ = {}) : value{value_} {}
  }; // OVRBoundary/Node
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRBoundary::Node, "", "OVRBoundary/Node");
#pragma pack(pop)
