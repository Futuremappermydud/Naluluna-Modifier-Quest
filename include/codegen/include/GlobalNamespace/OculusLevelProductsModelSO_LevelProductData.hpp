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
  // Autogenerated type: OculusLevelProductsModelSO/LevelProductData
  class OculusLevelProductsModelSO::LevelProductData : public ::Il2CppObject {
    public:
    // private System.String _levelId
    // Offset: 0x10
    ::Il2CppString* levelId;
    // private System.String _sku
    // Offset: 0x18
    ::Il2CppString* sku;
    // private System.String _assetFile
    // Offset: 0x20
    ::Il2CppString* assetFile;
    // public System.String get_sku()
    // Offset: 0xC397D4
    ::Il2CppString* get_sku();
    // public System.String get_levelId()
    // Offset: 0xC397DC
    ::Il2CppString* get_levelId();
    // public System.String get_assetFile()
    // Offset: 0xC397E4
    ::Il2CppString* get_assetFile();
    // public System.Void .ctor()
    // Offset: 0xC397EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OculusLevelProductsModelSO::LevelProductData* New_ctor();
  }; // OculusLevelProductsModelSO/LevelProductData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*, "", "OculusLevelProductsModelSO/LevelProductData");
#pragma pack(pop)
