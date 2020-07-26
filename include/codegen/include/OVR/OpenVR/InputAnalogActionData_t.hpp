// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:59 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.InputAnalogActionData_t
  struct InputAnalogActionData_t : public System::ValueType {
    public:
    // public System.Boolean bActive
    // Offset: 0x0
    bool bActive;
    // public System.UInt64 activeOrigin
    // Offset: 0x8
    uint64_t activeOrigin;
    // public System.Single x
    // Offset: 0x10
    float x;
    // public System.Single y
    // Offset: 0x14
    float y;
    // public System.Single z
    // Offset: 0x18
    float z;
    // public System.Single deltaX
    // Offset: 0x1C
    float deltaX;
    // public System.Single deltaY
    // Offset: 0x20
    float deltaY;
    // public System.Single deltaZ
    // Offset: 0x24
    float deltaZ;
    // public System.Single fUpdateTime
    // Offset: 0x28
    float fUpdateTime;
    // Creating value type constructor for type: InputAnalogActionData_t
    InputAnalogActionData_t(bool bActive_ = {}, uint64_t activeOrigin_ = {}, float x_ = {}, float y_ = {}, float z_ = {}, float deltaX_ = {}, float deltaY_ = {}, float deltaZ_ = {}, float fUpdateTime_ = {}) : bActive{bActive_}, activeOrigin{activeOrigin_}, x{x_}, y{y_}, z{z_}, deltaX{deltaX_}, deltaY{deltaY_}, deltaZ{deltaZ_}, fUpdateTime{fUpdateTime_} {}
  }; // OVR.OpenVR.InputAnalogActionData_t
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::InputAnalogActionData_t, "OVR.OpenVR", "InputAnalogActionData_t");
#pragma pack(pop)
