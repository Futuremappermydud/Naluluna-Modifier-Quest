// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:23 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: TestPlatformAdditionalContentModel
#include "GlobalNamespace/TestPlatformAdditionalContentModel.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TestPlatformAdditionalContentModel/Entitlement
  class TestPlatformAdditionalContentModel::Entitlement : public ::Il2CppObject {
    public:
    // public System.String id
    // Offset: 0x10
    ::Il2CppString* id;
    // public AdditionalContentModel/EntitlementStatus status
    // Offset: 0x18
    GlobalNamespace::AdditionalContentModel::EntitlementStatus status;
    // public System.Void .ctor()
    // Offset: 0xC303D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TestPlatformAdditionalContentModel::Entitlement* New_ctor();
  }; // TestPlatformAdditionalContentModel/Entitlement
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestPlatformAdditionalContentModel::Entitlement*, "", "TestPlatformAdditionalContentModel/Entitlement");
#pragma pack(pop)
