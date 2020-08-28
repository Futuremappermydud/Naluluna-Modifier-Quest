// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/Bool
#include "GlobalNamespace/OVRPlugin_Bool.hpp"
// Including type: OVRPlugin/Vector3f
// Already included the same include: GlobalNamespace/OVRPlugin.hpp
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/BoundaryTestResult
  struct OVRPlugin::BoundaryTestResult : public System::ValueType {
    public:
    // public OVRPlugin/Bool IsTriggering
    // Offset: 0x0
    GlobalNamespace::OVRPlugin::Bool IsTriggering;
    // public System.Single ClosestDistance
    // Offset: 0x4
    float ClosestDistance;
    // public OVRPlugin/Vector3f ClosestPoint
    // Offset: 0x8
    GlobalNamespace::OVRPlugin::Vector3f ClosestPoint;
    // public OVRPlugin/Vector3f ClosestPointNormal
    // Offset: 0x14
    GlobalNamespace::OVRPlugin::Vector3f ClosestPointNormal;
    // Creating value type constructor for type: BoundaryTestResult
    BoundaryTestResult(GlobalNamespace::OVRPlugin::Bool IsTriggering_ = {}, float ClosestDistance_ = {}, GlobalNamespace::OVRPlugin::Vector3f ClosestPoint_ = {}, GlobalNamespace::OVRPlugin::Vector3f ClosestPointNormal_ = {}) : IsTriggering{IsTriggering_}, ClosestDistance{ClosestDistance_}, ClosestPoint{ClosestPoint_}, ClosestPointNormal{ClosestPointNormal_} {}
  }; // OVRPlugin/BoundaryTestResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::BoundaryTestResult, "", "OVRPlugin/BoundaryTestResult");
#pragma pack(pop)
