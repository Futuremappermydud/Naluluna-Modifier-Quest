// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:19 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Configuration.ConfigurationElement
#include "System/Configuration/ConfigurationElement.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Forward declaring type: ConfigurationPropertyCollection
  class ConfigurationPropertyCollection;
}
// Completed forward declares
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Autogenerated type: System.Net.Configuration.Ipv6Element
  class Ipv6Element : public System::Configuration::ConfigurationElement {
    public:
    // public System.Void .ctor()
    // Offset: 0xF54FD8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Ipv6Element* New_ctor();
    // protected override System.Configuration.ConfigurationPropertyCollection get_Properties()
    // Offset: 0xF55018
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Configuration.ConfigurationPropertyCollection ConfigurationElement::get_Properties()
    System::Configuration::ConfigurationPropertyCollection* get_Properties();
  }; // System.Net.Configuration.Ipv6Element
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::Ipv6Element*, "System.Net.Configuration", "Ipv6Element");
#pragma pack(pop)
