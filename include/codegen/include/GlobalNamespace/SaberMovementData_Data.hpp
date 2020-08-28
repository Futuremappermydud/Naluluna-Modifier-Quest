// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SaberMovementData
#include "GlobalNamespace/SaberMovementData.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SaberMovementData/Data
  struct SaberMovementData::Data : public System::ValueType {
    public:
    // public System.Single time
    // Offset: 0x0
    float time;
    // public System.Single segmentAngle
    // Offset: 0x4
    float segmentAngle;
    // public UnityEngine.Vector3 topPos
    // Offset: 0x8
    UnityEngine::Vector3 topPos;
    // public UnityEngine.Vector3 bottomPos
    // Offset: 0x14
    UnityEngine::Vector3 bottomPos;
    // public UnityEngine.Vector3 segmentNormal
    // Offset: 0x20
    UnityEngine::Vector3 segmentNormal;
    // Creating value type constructor for type: Data
    Data(float time_ = {}, float segmentAngle_ = {}, UnityEngine::Vector3 topPos_ = {}, UnityEngine::Vector3 bottomPos_ = {}, UnityEngine::Vector3 segmentNormal_ = {}) : time{time_}, segmentAngle{segmentAngle_}, topPos{topPos_}, bottomPos{bottomPos_}, segmentNormal{segmentNormal_} {}
  }; // SaberMovementData/Data
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberMovementData::Data, "", "SaberMovementData/Data");
#pragma pack(pop)
