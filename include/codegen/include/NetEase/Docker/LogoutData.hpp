// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:40 PM
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
// Type namespace: NetEase.Docker
namespace NetEase::Docker {
  // Autogenerated type: NetEase.Docker.LogoutData
  struct LogoutData : public System::ValueType {
    public:
    // private System.Int32 <LogoutCode>k__BackingField
    // Offset: 0x0
    int LogoutCode;
    // Creating value type constructor for type: LogoutData
    LogoutData(int LogoutCode_ = {}) : LogoutCode{LogoutCode_} {}
    // public System.Void set_LogoutCode(System.Int32 value)
    // Offset: 0xA5CADC
    void set_LogoutCode(int value);
  }; // NetEase.Docker.LogoutData
}
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::LogoutData, "NetEase.Docker", "LogoutData");
#pragma pack(pop)
