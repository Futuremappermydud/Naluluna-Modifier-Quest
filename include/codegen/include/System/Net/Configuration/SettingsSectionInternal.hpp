// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:19 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Net.Sockets.IPProtectionLevel
#include "System/Net/Sockets/IPProtectionLevel.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Autogenerated type: System.Net.Configuration.SettingsSectionInternal
  class SettingsSectionInternal : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Net.Configuration.SettingsSectionInternal instance
    static System::Net::Configuration::SettingsSectionInternal* _get_instance();
    // Set static field: static private readonly System.Net.Configuration.SettingsSectionInternal instance
    static void _set_instance(System::Net::Configuration::SettingsSectionInternal* value);
    // readonly System.Boolean HttpListenerUnescapeRequestUrl
    // Offset: 0x10
    bool HttpListenerUnescapeRequestUrl;
    // readonly System.Net.Sockets.IPProtectionLevel IPProtectionLevel
    // Offset: 0x14
    System::Net::Sockets::IPProtectionLevel IPProtectionLevel;
    // static System.Net.Configuration.SettingsSectionInternal get_Section()
    // Offset: 0xF55298
    static System::Net::Configuration::SettingsSectionInternal* get_Section();
    // System.Boolean get_Ipv6Enabled()
    // Offset: 0xF55300
    bool get_Ipv6Enabled();
    // static private System.Void .cctor()
    // Offset: 0xF55320
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0xF55308
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SettingsSectionInternal* New_ctor();
  }; // System.Net.Configuration.SettingsSectionInternal
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::SettingsSectionInternal*, "System.Net.Configuration", "SettingsSectionInternal");
#pragma pack(pop)
