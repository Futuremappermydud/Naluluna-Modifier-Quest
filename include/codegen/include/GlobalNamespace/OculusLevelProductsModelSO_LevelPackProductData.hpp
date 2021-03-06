// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusLevelProductsModelSO
#include "GlobalNamespace/OculusLevelProductsModelSO.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusLevelProductsModelSO/LevelPackProductData
  class OculusLevelProductsModelSO::LevelPackProductData : public ::Il2CppObject {
    public:
    // private System.String _sku
    // Offset: 0x10
    ::Il2CppString* sku;
    // private System.String _levelPackId
    // Offset: 0x18
    ::Il2CppString* levelPackId;
    // private OculusLevelProductsModelSO/LevelProductData[] _levelProductsData
    // Offset: 0x20
    ::Array<GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*>* levelProductsData;
    // public System.String get_sku()
    // Offset: 0xC39750
    ::Il2CppString* get_sku();
    // public System.String get_levelPackId()
    // Offset: 0xC39758
    ::Il2CppString* get_levelPackId();
    // public OculusLevelProductsModelSO/LevelProductData[] get_levelProductsData()
    // Offset: 0xC39760
    ::Array<GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*>* get_levelProductsData();
    // public System.Void .ctor()
    // Offset: 0xC39768
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OculusLevelProductsModelSO::LevelPackProductData* New_ctor();
  }; // OculusLevelProductsModelSO/LevelPackProductData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData*, "", "OculusLevelProductsModelSO/LevelPackProductData");
#pragma pack(pop)
