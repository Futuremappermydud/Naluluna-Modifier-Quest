// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:48 PM
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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ActivatedClientTypeEntry
  class ActivatedClientTypeEntry;
  // Forward declaring type: WellKnownClientTypeEntry
  class WellKnownClientTypeEntry;
  // Forward declaring type: ActivatedServiceTypeEntry
  class ActivatedServiceTypeEntry;
  // Forward declaring type: WellKnownServiceTypeEntry
  class WellKnownServiceTypeEntry;
  // Forward declaring type: ChannelData
  class ChannelData;
  // Forward declaring type: ProviderData
  class ProviderData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Autogenerated type: System.Runtime.Remoting.RemotingConfiguration
  class RemotingConfiguration : public ::Il2CppObject {
    public:
    // Get static field: static private System.String applicationID
    static ::Il2CppString* _get_applicationID();
    // Set static field: static private System.String applicationID
    static void _set_applicationID(::Il2CppString* value);
    // Get static field: static private System.String applicationName
    static ::Il2CppString* _get_applicationName();
    // Set static field: static private System.String applicationName
    static void _set_applicationName(::Il2CppString* value);
    // Get static field: static private System.String processGuid
    static ::Il2CppString* _get_processGuid();
    // Set static field: static private System.String processGuid
    static void _set_processGuid(::Il2CppString* value);
    // Get static field: static private System.Boolean defaultConfigRead
    static bool _get_defaultConfigRead();
    // Set static field: static private System.Boolean defaultConfigRead
    static void _set_defaultConfigRead(bool value);
    // Get static field: static private System.Boolean defaultDelayedConfigRead
    static bool _get_defaultDelayedConfigRead();
    // Set static field: static private System.Boolean defaultDelayedConfigRead
    static void _set_defaultDelayedConfigRead(bool value);
    // Get static field: static private System.String _errorMode
    static ::Il2CppString* _get__errorMode();
    // Set static field: static private System.String _errorMode
    static void _set__errorMode(::Il2CppString* value);
    // Get static field: static private System.Collections.Hashtable wellKnownClientEntries
    static System::Collections::Hashtable* _get_wellKnownClientEntries();
    // Set static field: static private System.Collections.Hashtable wellKnownClientEntries
    static void _set_wellKnownClientEntries(System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable activatedClientEntries
    static System::Collections::Hashtable* _get_activatedClientEntries();
    // Set static field: static private System.Collections.Hashtable activatedClientEntries
    static void _set_activatedClientEntries(System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable wellKnownServiceEntries
    static System::Collections::Hashtable* _get_wellKnownServiceEntries();
    // Set static field: static private System.Collections.Hashtable wellKnownServiceEntries
    static void _set_wellKnownServiceEntries(System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable activatedServiceEntries
    static System::Collections::Hashtable* _get_activatedServiceEntries();
    // Set static field: static private System.Collections.Hashtable activatedServiceEntries
    static void _set_activatedServiceEntries(System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable channelTemplates
    static System::Collections::Hashtable* _get_channelTemplates();
    // Set static field: static private System.Collections.Hashtable channelTemplates
    static void _set_channelTemplates(System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable clientProviderTemplates
    static System::Collections::Hashtable* _get_clientProviderTemplates();
    // Set static field: static private System.Collections.Hashtable clientProviderTemplates
    static void _set_clientProviderTemplates(System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable serverProviderTemplates
    static System::Collections::Hashtable* _get_serverProviderTemplates();
    // Set static field: static private System.Collections.Hashtable serverProviderTemplates
    static void _set_serverProviderTemplates(System::Collections::Hashtable* value);
    // static public System.String get_ApplicationName()
    // Offset: 0xE026E8
    static ::Il2CppString* get_ApplicationName();
    // static public System.Void set_ApplicationName(System.String value)
    // Offset: 0xE02750
    static void set_ApplicationName(::Il2CppString* value);
    // static public System.String get_ProcessId()
    // Offset: 0xE027C0
    static ::Il2CppString* get_ProcessId();
    // static System.Void LoadDefaultDelayedChannels()
    // Offset: 0xE0288C
    static void LoadDefaultDelayedChannels();
    // static public System.Runtime.Remoting.ActivatedClientTypeEntry IsRemotelyActivatedClientType(System.Type svrType)
    // Offset: 0xE02B90
    static System::Runtime::Remoting::ActivatedClientTypeEntry* IsRemotelyActivatedClientType(System::Type* svrType);
    // static public System.Runtime.Remoting.WellKnownClientTypeEntry IsWellKnownClientType(System.Type svrType)
    // Offset: 0xE02D10
    static System::Runtime::Remoting::WellKnownClientTypeEntry* IsWellKnownClientType(System::Type* svrType);
    // static public System.Void RegisterActivatedClientType(System.Runtime.Remoting.ActivatedClientTypeEntry entry)
    // Offset: 0xE02E90
    static void RegisterActivatedClientType(System::Runtime::Remoting::ActivatedClientTypeEntry* entry);
    // static public System.Void RegisterActivatedServiceType(System.Runtime.Remoting.ActivatedServiceTypeEntry entry)
    // Offset: 0xE030FC
    static void RegisterActivatedServiceType(System::Runtime::Remoting::ActivatedServiceTypeEntry* entry);
    // static public System.Void RegisterWellKnownClientType(System.Runtime.Remoting.WellKnownClientTypeEntry entry)
    // Offset: 0xE03230
    static void RegisterWellKnownClientType(System::Runtime::Remoting::WellKnownClientTypeEntry* entry);
    // static public System.Void RegisterWellKnownServiceType(System.Runtime.Remoting.WellKnownServiceTypeEntry entry)
    // Offset: 0xE0349C
    static void RegisterWellKnownServiceType(System::Runtime::Remoting::WellKnownServiceTypeEntry* entry);
    // static System.Void RegisterChannelTemplate(System.Runtime.Remoting.ChannelData channel)
    // Offset: 0xE03710
    static void RegisterChannelTemplate(System::Runtime::Remoting::ChannelData* channel);
    // static System.Void RegisterClientProviderTemplate(System.Runtime.Remoting.ProviderData prov)
    // Offset: 0xE0379C
    static void RegisterClientProviderTemplate(System::Runtime::Remoting::ProviderData* prov);
    // static System.Void RegisterServerProviderTemplate(System.Runtime.Remoting.ProviderData prov)
    // Offset: 0xE03828
    static void RegisterServerProviderTemplate(System::Runtime::Remoting::ProviderData* prov);
    // static System.Void RegisterChannels(System.Collections.ArrayList channels, System.Boolean onlyDelayed)
    // Offset: 0xE038B4
    static void RegisterChannels(System::Collections::ArrayList* channels, bool onlyDelayed);
    // static System.Void RegisterTypes(System.Collections.ArrayList types)
    // Offset: 0xE0446C
    static void RegisterTypes(System::Collections::ArrayList* types);
    // static public System.Boolean CustomErrorsEnabled(System.Boolean isLocalRequest)
    // Offset: 0xE04908
    static bool CustomErrorsEnabled(bool isLocalRequest);
    // static System.Void SetCustomErrorsMode(System.String mode)
    // Offset: 0xE049D4
    static void SetCustomErrorsMode(::Il2CppString* mode);
    // static private System.Void .cctor()
    // Offset: 0xE04B30
    static void _cctor();
  }; // System.Runtime.Remoting.RemotingConfiguration
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::RemotingConfiguration*, "System.Runtime.Remoting", "RemotingConfiguration");
#pragma pack(pop)
