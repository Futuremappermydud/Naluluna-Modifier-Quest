// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:29 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Resources.ResourceManager
#include "System/Resources/ResourceManager.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Version
  class Version;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: RuntimeAssembly
  class RuntimeAssembly;
}
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Forward declaring type: UltimateResourceFallbackLocation
  struct UltimateResourceFallbackLocation;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Autogenerated type: System.Resources.ResourceManager/ResourceManagerMediator
  class ResourceManager::ResourceManagerMediator : public ::Il2CppObject {
    public:
    // private System.Resources.ResourceManager _rm
    // Offset: 0x10
    System::Resources::ResourceManager* rm;
    // System.Void .ctor(System.Resources.ResourceManager rm)
    // Offset: 0x114655C
    static ResourceManager::ResourceManagerMediator* New_ctor(System::Resources::ResourceManager* rm);
    // System.String get_ModuleDir()
    // Offset: 0x11437CC
    ::Il2CppString* get_ModuleDir();
    // System.Type get_LocationInfo()
    // Offset: 0x11434BC
    System::Type* get_LocationInfo();
    // System.Type get_UserResourceSet()
    // Offset: 0x11437E8
    System::Type* get_UserResourceSet();
    // System.String get_BaseNameField()
    // Offset: 0x11434A0
    ::Il2CppString* get_BaseNameField();
    // System.Globalization.CultureInfo get_NeutralResourcesCulture()
    // Offset: 0x1144FDC
    System::Globalization::CultureInfo* get_NeutralResourcesCulture();
    // System.String GetResourceFileName(System.Globalization.CultureInfo culture)
    // Offset: 0x11433BC
    ::Il2CppString* GetResourceFileName(System::Globalization::CultureInfo* culture);
    // System.Boolean get_LookedForSatelliteContractVersion()
    // Offset: 0x11459DC
    bool get_LookedForSatelliteContractVersion();
    // System.Void set_LookedForSatelliteContractVersion(System.Boolean value)
    // Offset: 0x1145A78
    void set_LookedForSatelliteContractVersion(bool value);
    // System.Version get_SatelliteContractVersion()
    // Offset: 0x1145B04
    System::Version* get_SatelliteContractVersion();
    // System.Void set_SatelliteContractVersion(System.Version value)
    // Offset: 0x1145A5C
    void set_SatelliteContractVersion(System::Version* value);
    // System.Version ObtainSatelliteContractVersion(System.Reflection.Assembly a)
    // Offset: 0x11459F8
    System::Version* ObtainSatelliteContractVersion(System::Reflection::Assembly* a);
    // System.Resources.UltimateResourceFallbackLocation get_FallbackLoc()
    // Offset: 0x1143D08
    System::Resources::UltimateResourceFallbackLocation get_FallbackLoc();
    // System.Reflection.RuntimeAssembly get_CallingAssembly()
    // Offset: 0x114562C
    System::Reflection::RuntimeAssembly* get_CallingAssembly();
    // System.Reflection.RuntimeAssembly get_MainAssembly()
    // Offset: 0x1143D24
    System::Reflection::RuntimeAssembly* get_MainAssembly();
    // System.String get_BaseName()
    // Offset: 0x1145DC8
    ::Il2CppString* get_BaseName();
  }; // System.Resources.ResourceManager/ResourceManagerMediator
}
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ResourceManager::ResourceManagerMediator*, "System.Resources", "ResourceManager/ResourceManagerMediator");
#pragma pack(pop)
