// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Forward declaring type: ConfigurationPropertyCollection
  class ConfigurationPropertyCollection;
}
// Completed forward declares
// Type namespace: System.Configuration
namespace System::Configuration {
  // Autogenerated type: System.Configuration.ConfigurationElement
  class ConfigurationElement : public ::Il2CppObject {
    public:
    // protected internal System.Configuration.ConfigurationPropertyCollection get_Properties()
    // Offset: 0x19642A0
    System::Configuration::ConfigurationPropertyCollection* get_Properties();
    // protected internal System.Boolean IsModified()
    // Offset: 0x19642E0
    bool IsModified();
    // protected internal System.Void Reset(System.Configuration.ConfigurationElement parentElement)
    // Offset: 0x1964320
    void Reset(System::Configuration::ConfigurationElement* parentElement);
    // protected internal System.Void ResetModified()
    // Offset: 0x1964360
    void ResetModified();
  }; // System.Configuration.ConfigurationElement
}
DEFINE_IL2CPP_ARG_TYPE(System::Configuration::ConfigurationElement*, "System.Configuration", "ConfigurationElement");
#pragma pack(pop)
