// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Uri
#include "System/Uri.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.Uri/Offset
  struct Uri::Offset : public System::ValueType {
    public:
    // public System.UInt16 Scheme
    // Offset: 0x0
    uint16_t Scheme;
    // public System.UInt16 User
    // Offset: 0x2
    uint16_t User;
    // public System.UInt16 Host
    // Offset: 0x4
    uint16_t Host;
    // public System.UInt16 PortValue
    // Offset: 0x6
    uint16_t PortValue;
    // public System.UInt16 Path
    // Offset: 0x8
    uint16_t Path;
    // public System.UInt16 Query
    // Offset: 0xA
    uint16_t Query;
    // public System.UInt16 Fragment
    // Offset: 0xC
    uint16_t Fragment;
    // public System.UInt16 End
    // Offset: 0xE
    uint16_t End;
    // Creating value type constructor for type: Offset
    Offset(uint16_t Scheme_ = {}, uint16_t User_ = {}, uint16_t Host_ = {}, uint16_t PortValue_ = {}, uint16_t Path_ = {}, uint16_t Query_ = {}, uint16_t Fragment_ = {}, uint16_t End_ = {}) : Scheme{Scheme_}, User{User_}, Host{Host_}, PortValue{PortValue_}, Path{Path_}, Query{Query_}, Fragment{Fragment_}, End{End_} {}
  }; // System.Uri/Offset
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Uri::Offset, "System", "Uri/Offset");
#pragma pack(pop)
