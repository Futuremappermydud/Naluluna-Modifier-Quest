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
// Including type: OVRPlugin/BoundaryType
#include "GlobalNamespace/OVRPlugin_BoundaryType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/BoundaryGeometry
  struct OVRPlugin::BoundaryGeometry : public System::ValueType {
    public:
    // public OVRPlugin/BoundaryType BoundaryType
    // Offset: 0x0
    GlobalNamespace::OVRPlugin::BoundaryType BoundaryType;
    // public OVRPlugin/Vector3f[] Points
    // Offset: 0x8
    ::Array<GlobalNamespace::OVRPlugin::Vector3f>* Points;
    // public System.Int32 PointsCount
    // Offset: 0x10
    int PointsCount;
    // Creating value type constructor for type: BoundaryGeometry
    BoundaryGeometry(GlobalNamespace::OVRPlugin::BoundaryType BoundaryType_ = {}, ::Array<GlobalNamespace::OVRPlugin::Vector3f>* Points_ = {}, int PointsCount_ = {}) : BoundaryType{BoundaryType_}, Points{Points_}, PointsCount{PointsCount_} {}
  }; // OVRPlugin/BoundaryGeometry
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::BoundaryGeometry, "", "OVRPlugin/BoundaryGeometry");
#pragma pack(pop)
