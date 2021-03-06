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
  // Autogenerated type: NetEase.Docker.InitializeData
  struct InitializeData : public System::ValueType {
    public:
    // private System.Boolean <InitializeSuccessful>k__BackingField
    // Offset: 0x0
    bool InitializeSuccessful;
    // private System.Int32 <InitializeCode>k__BackingField
    // Offset: 0x4
    int InitializeCode;
    // Creating value type constructor for type: InitializeData
    InitializeData(bool InitializeSuccessful_ = {}, int InitializeCode_ = {}) : InitializeSuccessful{InitializeSuccessful_}, InitializeCode{InitializeCode_} {}
    // public System.Boolean get_InitializeSuccessful()
    // Offset: 0xA5C9EC
    bool get_InitializeSuccessful();
    // public System.Void set_InitializeSuccessful(System.Boolean value)
    // Offset: 0xA5C9F4
    void set_InitializeSuccessful(bool value);
    // public System.Void set_InitializeCode(System.Int32 value)
    // Offset: 0xA5CA00
    void set_InitializeCode(int value);
  }; // NetEase.Docker.InitializeData
}
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::InitializeData, "NetEase.Docker", "InitializeData");
#pragma pack(pop)
