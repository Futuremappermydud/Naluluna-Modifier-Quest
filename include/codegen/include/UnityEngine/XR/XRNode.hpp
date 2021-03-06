// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:39 PM
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
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Autogenerated type: UnityEngine.XR.XRNode
  struct XRNode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.XR.XRNode LeftEye
    static constexpr const int LeftEye = 0;
    // Get static field: static public UnityEngine.XR.XRNode LeftEye
    static UnityEngine::XR::XRNode _get_LeftEye();
    // Set static field: static public UnityEngine.XR.XRNode LeftEye
    static void _set_LeftEye(UnityEngine::XR::XRNode value);
    // static field const value: static public UnityEngine.XR.XRNode RightEye
    static constexpr const int RightEye = 1;
    // Get static field: static public UnityEngine.XR.XRNode RightEye
    static UnityEngine::XR::XRNode _get_RightEye();
    // Set static field: static public UnityEngine.XR.XRNode RightEye
    static void _set_RightEye(UnityEngine::XR::XRNode value);
    // static field const value: static public UnityEngine.XR.XRNode CenterEye
    static constexpr const int CenterEye = 2;
    // Get static field: static public UnityEngine.XR.XRNode CenterEye
    static UnityEngine::XR::XRNode _get_CenterEye();
    // Set static field: static public UnityEngine.XR.XRNode CenterEye
    static void _set_CenterEye(UnityEngine::XR::XRNode value);
    // static field const value: static public UnityEngine.XR.XRNode Head
    static constexpr const int Head = 3;
    // Get static field: static public UnityEngine.XR.XRNode Head
    static UnityEngine::XR::XRNode _get_Head();
    // Set static field: static public UnityEngine.XR.XRNode Head
    static void _set_Head(UnityEngine::XR::XRNode value);
    // static field const value: static public UnityEngine.XR.XRNode LeftHand
    static constexpr const int LeftHand = 4;
    // Get static field: static public UnityEngine.XR.XRNode LeftHand
    static UnityEngine::XR::XRNode _get_LeftHand();
    // Set static field: static public UnityEngine.XR.XRNode LeftHand
    static void _set_LeftHand(UnityEngine::XR::XRNode value);
    // static field const value: static public UnityEngine.XR.XRNode RightHand
    static constexpr const int RightHand = 5;
    // Get static field: static public UnityEngine.XR.XRNode RightHand
    static UnityEngine::XR::XRNode _get_RightHand();
    // Set static field: static public UnityEngine.XR.XRNode RightHand
    static void _set_RightHand(UnityEngine::XR::XRNode value);
    // static field const value: static public UnityEngine.XR.XRNode GameController
    static constexpr const int GameController = 6;
    // Get static field: static public UnityEngine.XR.XRNode GameController
    static UnityEngine::XR::XRNode _get_GameController();
    // Set static field: static public UnityEngine.XR.XRNode GameController
    static void _set_GameController(UnityEngine::XR::XRNode value);
    // static field const value: static public UnityEngine.XR.XRNode TrackingReference
    static constexpr const int TrackingReference = 7;
    // Get static field: static public UnityEngine.XR.XRNode TrackingReference
    static UnityEngine::XR::XRNode _get_TrackingReference();
    // Set static field: static public UnityEngine.XR.XRNode TrackingReference
    static void _set_TrackingReference(UnityEngine::XR::XRNode value);
    // static field const value: static public UnityEngine.XR.XRNode HardwareTracker
    static constexpr const int HardwareTracker = 8;
    // Get static field: static public UnityEngine.XR.XRNode HardwareTracker
    static UnityEngine::XR::XRNode _get_HardwareTracker();
    // Set static field: static public UnityEngine.XR.XRNode HardwareTracker
    static void _set_HardwareTracker(UnityEngine::XR::XRNode value);
    // Creating value type constructor for type: XRNode
    XRNode(int value_ = {}) : value{value_} {}
  }; // UnityEngine.XR.XRNode
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRNode, "UnityEngine.XR", "XRNode");
#pragma pack(pop)
