// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.UncNameHelper
  class UncNameHelper : public ::Il2CppObject {
    public:
    // static System.String ParseCanonicalName(System.String str, System.Int32 start, System.Int32 end, System.Boolean loopback)
    // Offset: 0x15044E0
    static ::Il2CppString* ParseCanonicalName(::Il2CppString* str, int start, int end, bool& loopback);
    // static System.Boolean IsValid(System.Char* name, System.UInt16 start, System.Int32 returnedEnd, System.Boolean notImplicitFile)
    // Offset: 0x15044E8
    static bool IsValid(::Il2CppChar* name, uint16_t start, int& returnedEnd, bool notImplicitFile);
  }; // System.UncNameHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::UncNameHelper*, "System", "UncNameHelper");
#pragma pack(pop)
