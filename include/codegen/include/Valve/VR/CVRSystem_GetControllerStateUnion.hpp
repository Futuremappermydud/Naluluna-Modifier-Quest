// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:15 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.CVRSystem
#include "Valve/VR/CVRSystem.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVRSystem/GetControllerStateUnion
  struct CVRSystem::GetControllerStateUnion : public System::ValueType {
    public:
    // public Valve.VR.IVRSystem/_GetControllerState pGetControllerState
    // Offset: 0x0
    Valve::VR::IVRSystem::_GetControllerState* pGetControllerState;
    // public Valve.VR.CVRSystem/_GetControllerStatePacked pGetControllerStatePacked
    // Offset: 0x0
    Valve::VR::CVRSystem::_GetControllerStatePacked* pGetControllerStatePacked;
    // Creating value type constructor for type: GetControllerStateUnion
    GetControllerStateUnion(Valve::VR::IVRSystem::_GetControllerState* pGetControllerState_ = {}, Valve::VR::CVRSystem::_GetControllerStatePacked* pGetControllerStatePacked_ = {}) : pGetControllerState{pGetControllerState_}, pGetControllerStatePacked{pGetControllerStatePacked_} {}
  }; // Valve.VR.CVRSystem/GetControllerStateUnion
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRSystem::GetControllerStateUnion, "Valve.VR", "CVRSystem/GetControllerStateUnion");
#pragma pack(pop)
