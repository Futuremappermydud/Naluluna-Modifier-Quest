// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: NetEase.Docker
namespace NetEase::Docker {
  // Autogenerated type: NetEase.Docker.RequestHighscoreData
  struct RequestHighscoreData : public System::ValueType {
    public:
    // private System.String <Track>k__BackingField
    // Offset: 0x0
    ::Il2CppString* Track;
    // private System.String <HighscoreType>k__BackingField
    // Offset: 0x8
    ::Il2CppString* HighscoreType;
    // Creating value type constructor for type: RequestHighscoreData
    RequestHighscoreData(::Il2CppString* Track_ = {}, ::Il2CppString* HighscoreType_ = {}) : Track{Track_}, HighscoreType{HighscoreType_} {}
    // public System.String get_Track()
    // Offset: 0xA5CC20
    ::Il2CppString* get_Track();
    // public System.Void set_Track(System.String value)
    // Offset: 0xA5CC28
    void set_Track(::Il2CppString* value);
    // public System.Void set_HighscoreType(System.String value)
    // Offset: 0xA5CC30
    void set_HighscoreType(::Il2CppString* value);
  }; // NetEase.Docker.RequestHighscoreData
}
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::RequestHighscoreData, "NetEase.Docker", "RequestHighscoreData");
#pragma pack(pop)
