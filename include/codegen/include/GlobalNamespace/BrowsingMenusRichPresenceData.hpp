// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IRichPresenceData
#include "GlobalNamespace/IRichPresenceData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BrowsingMenusRichPresenceData
  class BrowsingMenusRichPresenceData : public ::Il2CppObject, public GlobalNamespace::IRichPresenceData {
    public:
    // private System.String <localizedDescription>k__BackingField
    // Offset: 0x10
    ::Il2CppString* localizedDescription;
    // static field const value: static private System.String kBrowsingMenusRichPresenceLocalizationKey
    static constexpr const char* kBrowsingMenusRichPresenceLocalizationKey = "BROWSING_MENUS_PRESENCE";
    // Get static field: static private System.String kBrowsingMenusRichPresenceLocalizationKey
    static ::Il2CppString* _get_kBrowsingMenusRichPresenceLocalizationKey();
    // Set static field: static private System.String kBrowsingMenusRichPresenceLocalizationKey
    static void _set_kBrowsingMenusRichPresenceLocalizationKey(::Il2CppString* value);
    // private System.Void set_localizedDescription(System.String value)
    // Offset: 0xB7D394
    void set_localizedDescription(::Il2CppString* value);
    // public System.String get_apiName()
    // Offset: 0xB7D344
    // Implemented from: IRichPresenceData
    // Base method: System.String IRichPresenceData::get_apiName()
    ::Il2CppString* get_apiName();
    // public System.String get_localizedDescription()
    // Offset: 0xB7D38C
    // Implemented from: IRichPresenceData
    // Base method: System.String IRichPresenceData::get_localizedDescription()
    ::Il2CppString* get_localizedDescription();
    // public System.Void .ctor()
    // Offset: 0xB7D39C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BrowsingMenusRichPresenceData* New_ctor();
  }; // BrowsingMenusRichPresenceData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BrowsingMenusRichPresenceData*, "", "BrowsingMenusRichPresenceData");
#pragma pack(pop)
