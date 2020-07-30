// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:10 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: SteamVR_Controller
#include "GlobalNamespace/SteamVR_Controller.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_Controller/DeviceRelation
  struct SteamVR_Controller::DeviceRelation : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public SteamVR_Controller/DeviceRelation First
    static constexpr const int First = 0;
    // Get static field: static public SteamVR_Controller/DeviceRelation First
    static GlobalNamespace::SteamVR_Controller::DeviceRelation _get_First();
    // Set static field: static public SteamVR_Controller/DeviceRelation First
    static void _set_First(GlobalNamespace::SteamVR_Controller::DeviceRelation value);
    // static field const value: static public SteamVR_Controller/DeviceRelation Leftmost
    static constexpr const int Leftmost = 1;
    // Get static field: static public SteamVR_Controller/DeviceRelation Leftmost
    static GlobalNamespace::SteamVR_Controller::DeviceRelation _get_Leftmost();
    // Set static field: static public SteamVR_Controller/DeviceRelation Leftmost
    static void _set_Leftmost(GlobalNamespace::SteamVR_Controller::DeviceRelation value);
    // static field const value: static public SteamVR_Controller/DeviceRelation Rightmost
    static constexpr const int Rightmost = 2;
    // Get static field: static public SteamVR_Controller/DeviceRelation Rightmost
    static GlobalNamespace::SteamVR_Controller::DeviceRelation _get_Rightmost();
    // Set static field: static public SteamVR_Controller/DeviceRelation Rightmost
    static void _set_Rightmost(GlobalNamespace::SteamVR_Controller::DeviceRelation value);
    // static field const value: static public SteamVR_Controller/DeviceRelation FarthestLeft
    static constexpr const int FarthestLeft = 3;
    // Get static field: static public SteamVR_Controller/DeviceRelation FarthestLeft
    static GlobalNamespace::SteamVR_Controller::DeviceRelation _get_FarthestLeft();
    // Set static field: static public SteamVR_Controller/DeviceRelation FarthestLeft
    static void _set_FarthestLeft(GlobalNamespace::SteamVR_Controller::DeviceRelation value);
    // static field const value: static public SteamVR_Controller/DeviceRelation FarthestRight
    static constexpr const int FarthestRight = 4;
    // Get static field: static public SteamVR_Controller/DeviceRelation FarthestRight
    static GlobalNamespace::SteamVR_Controller::DeviceRelation _get_FarthestRight();
    // Set static field: static public SteamVR_Controller/DeviceRelation FarthestRight
    static void _set_FarthestRight(GlobalNamespace::SteamVR_Controller::DeviceRelation value);
    // Creating value type constructor for type: DeviceRelation
    DeviceRelation(int value_ = {}) : value{value_} {}
  }; // SteamVR_Controller/DeviceRelation
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Controller::DeviceRelation, "", "SteamVR_Controller/DeviceRelation");
#pragma pack(pop)
