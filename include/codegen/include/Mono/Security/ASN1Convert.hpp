// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:37 PM
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
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1;
}
// Completed forward declares
// Type namespace: Mono.Security
namespace Mono::Security {
  // Autogenerated type: Mono.Security.ASN1Convert
  class ASN1Convert : public ::Il2CppObject {
    public:
    // static public Mono.Security.ASN1 FromInt32(System.Int32 value)
    // Offset: 0x1960110
    static Mono::Security::ASN1* FromInt32(int value);
    // static public System.Int32 ToInt32(Mono.Security.ASN1 asn1)
    // Offset: 0x19602B4
    static int ToInt32(Mono::Security::ASN1* asn1);
    // static public System.String ToOid(Mono.Security.ASN1 asn1)
    // Offset: 0x19603E0
    static ::Il2CppString* ToOid(Mono::Security::ASN1* asn1);
  }; // Mono.Security.ASN1Convert
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::ASN1Convert*, "Mono.Security", "ASN1Convert");
#pragma pack(pop)
