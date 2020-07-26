// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:58 PM
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.VROverlayFlags
  struct VROverlayFlags : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVR.OpenVR.VROverlayFlags None
    static constexpr const int None = 0;
    // Get static field: static public OVR.OpenVR.VROverlayFlags None
    static OVR::OpenVR::VROverlayFlags _get_None();
    // Set static field: static public OVR.OpenVR.VROverlayFlags None
    static void _set_None(OVR::OpenVR::VROverlayFlags value);
    // static field const value: static public OVR.OpenVR.VROverlayFlags Curved
    static constexpr const int Curved = 1;
    // Get static field: static public OVR.OpenVR.VROverlayFlags Curved
    static OVR::OpenVR::VROverlayFlags _get_Curved();
    // Set static field: static public OVR.OpenVR.VROverlayFlags Curved
    static void _set_Curved(OVR::OpenVR::VROverlayFlags value);
    // static field const value: static public OVR.OpenVR.VROverlayFlags RGSS4X
    static constexpr const int RGSS4X = 2;
    // Get static field: static public OVR.OpenVR.VROverlayFlags RGSS4X
    static OVR::OpenVR::VROverlayFlags _get_RGSS4X();
    // Set static field: static public OVR.OpenVR.VROverlayFlags RGSS4X
    static void _set_RGSS4X(OVR::OpenVR::VROverlayFlags value);
    // static field const value: static public OVR.OpenVR.VROverlayFlags NoDashboardTab
    static constexpr const int NoDashboardTab = 3;
    // Get static field: static public OVR.OpenVR.VROverlayFlags NoDashboardTab
    static OVR::OpenVR::VROverlayFlags _get_NoDashboardTab();
    // Set static field: static public OVR.OpenVR.VROverlayFlags NoDashboardTab
    static void _set_NoDashboardTab(OVR::OpenVR::VROverlayFlags value);
    // static field const value: static public OVR.OpenVR.VROverlayFlags AcceptsGamepadEvents
    static constexpr const int AcceptsGamepadEvents = 4;
    // Get static field: static public OVR.OpenVR.VROverlayFlags AcceptsGamepadEvents
    static OVR::OpenVR::VROverlayFlags _get_AcceptsGamepadEvents();
    // Set static field: static public OVR.OpenVR.VROverlayFlags AcceptsGamepadEvents
    static void _set_AcceptsGamepadEvents(OVR::OpenVR::VROverlayFlags value);
    // static field const value: static public OVR.OpenVR.VROverlayFlags ShowGamepadFocus
    static constexpr const int ShowGamepadFocus = 5;
    // Get static field: static public OVR.OpenVR.VROverlayFlags ShowGamepadFocus
    static OVR::OpenVR::VROverlayFlags _get_ShowGamepadFocus();
    // Set static field: static public OVR.OpenVR.VROverlayFlags ShowGamepadFocus
    static void _set_ShowGamepadFocus(OVR::OpenVR::VROverlayFlags value);
    // static field const value: static public OVR.OpenVR.VROverlayFlags SendVRScrollEvents
    static constexpr const int SendVRScrollEvents = 6;
    // Get static field: static public OVR.OpenVR.VROverlayFlags SendVRScrollEvents
    static OVR::OpenVR::VROverlayFlags _get_SendVRScrollEvents();
    // Set static field: static public OVR.OpenVR.VROverlayFlags SendVRScrollEvents
    static void _set_SendVRScrollEvents(OVR::OpenVR::VROverlayFlags value);
    // static field const value: static public OVR.OpenVR.VROverlayFlags SendVRTouchpadEvents
    static constexpr const int SendVRTouchpadEvents = 7;
    // Get static field: static public OVR.OpenVR.VROverlayFlags SendVRTouchpadEvents
    static OVR::OpenVR::VROverlayFlags _get_SendVRTouchpadEvents();
    // Set static field: static public OVR.OpenVR.VROverlayFlags SendVRTouchpadEvents
    static void _set_SendVRTouchpadEvents(OVR::OpenVR::VROverlayFlags value);
    // static field const value: static public OVR.OpenVR.VROverlayFlags ShowTouchPadScrollWheel
    static constexpr const int ShowTouchPadScrollWheel = 8;
    // Get static field: static public OVR.OpenVR.VROverlayFlags ShowTouchPadScrollWheel
    static OVR::OpenVR::VROverlayFlags _get_ShowTouchPadScrollWheel();
    // Set static field: static public OVR.OpenVR.VROverlayFlags ShowTouchPadScrollWheel
    static void _set_ShowTouchPadScrollWheel(OVR::OpenVR::VROverlayFlags value);
    // static field const value: static public OVR.OpenVR.VROverlayFlags TransferOwnershipToInternalProcess
    static constexpr const int TransferOwnershipToInternalProcess = 9;
    // Get static field: static public OVR.OpenVR.VROverlayFlags TransferOwnershipToInternalProcess
    static OVR::OpenVR::VROverlayFlags _get_TransferOwnershipToInternalProcess();
    // Set static field: static public OVR.OpenVR.VROverlayFlags TransferOwnershipToInternalProcess
    static void _set_TransferOwnershipToInternalProcess(OVR::OpenVR::VROverlayFlags value);
    // static field const value: static public OVR.OpenVR.VROverlayFlags SideBySide_Parallel
    static constexpr const int SideBySide_Parallel = 10;
    // Get static field: static public OVR.OpenVR.VROverlayFlags SideBySide_Parallel
    static OVR::OpenVR::VROverlayFlags _get_SideBySide_Parallel();
    // Set static field: static public OVR.OpenVR.VROverlayFlags SideBySide_Parallel
    static void _set_SideBySide_Parallel(OVR::OpenVR::VROverlayFlags value);
    // static field const value: static public OVR.OpenVR.VROverlayFlags SideBySide_Crossed
    static constexpr const int SideBySide_Crossed = 11;
    // Get static field: static public OVR.OpenVR.VROverlayFlags SideBySide_Crossed
    static OVR::OpenVR::VROverlayFlags _get_SideBySide_Crossed();
    // Set static field: static public OVR.OpenVR.VROverlayFlags SideBySide_Crossed
    static void _set_SideBySide_Crossed(OVR::OpenVR::VROverlayFlags value);
    // static field const value: static public OVR.OpenVR.VROverlayFlags Panorama
    static constexpr const int Panorama = 12;
    // Get static field: static public OVR.OpenVR.VROverlayFlags Panorama
    static OVR::OpenVR::VROverlayFlags _get_Panorama();
    // Set static field: static public OVR.OpenVR.VROverlayFlags Panorama
    static void _set_Panorama(OVR::OpenVR::VROverlayFlags value);
    // static field const value: static public OVR.OpenVR.VROverlayFlags StereoPanorama
    static constexpr const int StereoPanorama = 13;
    // Get static field: static public OVR.OpenVR.VROverlayFlags StereoPanorama
    static OVR::OpenVR::VROverlayFlags _get_StereoPanorama();
    // Set static field: static public OVR.OpenVR.VROverlayFlags StereoPanorama
    static void _set_StereoPanorama(OVR::OpenVR::VROverlayFlags value);
    // static field const value: static public OVR.OpenVR.VROverlayFlags SortWithNonSceneOverlays
    static constexpr const int SortWithNonSceneOverlays = 14;
    // Get static field: static public OVR.OpenVR.VROverlayFlags SortWithNonSceneOverlays
    static OVR::OpenVR::VROverlayFlags _get_SortWithNonSceneOverlays();
    // Set static field: static public OVR.OpenVR.VROverlayFlags SortWithNonSceneOverlays
    static void _set_SortWithNonSceneOverlays(OVR::OpenVR::VROverlayFlags value);
    // static field const value: static public OVR.OpenVR.VROverlayFlags VisibleInDashboard
    static constexpr const int VisibleInDashboard = 15;
    // Get static field: static public OVR.OpenVR.VROverlayFlags VisibleInDashboard
    static OVR::OpenVR::VROverlayFlags _get_VisibleInDashboard();
    // Set static field: static public OVR.OpenVR.VROverlayFlags VisibleInDashboard
    static void _set_VisibleInDashboard(OVR::OpenVR::VROverlayFlags value);
    // Creating value type constructor for type: VROverlayFlags
    VROverlayFlags(int value_ = {}) : value{value_} {}
  }; // OVR.OpenVR.VROverlayFlags
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VROverlayFlags, "OVR.OpenVR", "VROverlayFlags");
#pragma pack(pop)
