// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SaberMovementData
#include "GlobalNamespace/SaberMovementData.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ISaberMovementDataProcessor
  class ISaberMovementDataProcessor {
    public:
    // public System.Void ProcessNewData(SaberMovementData/Data newData, SaberMovementData/Data prevData, System.Boolean prevDataAreValid)
    // Offset: 0xFFFFFFFF
    void ProcessNewData(GlobalNamespace::SaberMovementData::Data newData, GlobalNamespace::SaberMovementData::Data prevData, bool prevDataAreValid);
  }; // ISaberMovementDataProcessor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ISaberMovementDataProcessor*, "", "ISaberMovementDataProcessor");
#pragma pack(pop)
