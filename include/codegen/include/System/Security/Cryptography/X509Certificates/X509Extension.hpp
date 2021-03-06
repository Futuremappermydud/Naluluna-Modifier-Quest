// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Security.Cryptography.AsnEncodedData
#include "System/Security/Cryptography/AsnEncodedData.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Extension
  class X509Extension : public System::Security::Cryptography::AsnEncodedData {
    public:
    // private System.Boolean _critical
    // Offset: 0x20
    bool critical;
    // public System.Boolean get_Critical()
    // Offset: 0x1204E80
    bool get_Critical();
    // public System.Void set_Critical(System.Boolean value)
    // Offset: 0x1204E88
    void set_Critical(bool value);
    // System.String FormatUnkownData(System.Byte[] data)
    // Offset: 0x12046B8
    ::Il2CppString* FormatUnkownData(::Array<uint8_t>* data);
    // protected System.Void .ctor()
    // Offset: 0x1203CEC
    // Implemented from: System.Security.Cryptography.AsnEncodedData
    // Base method: System.Void AsnEncodedData::.ctor()
    // Base method: System.Void Object::.ctor()
    static X509Extension* New_ctor();
    // public override System.Void CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    // Offset: 0x1204E94
    // Implemented from: System.Security.Cryptography.AsnEncodedData
    // Base method: System.Void AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    void CopyFrom(System::Security::Cryptography::AsnEncodedData* asnEncodedData);
  }; // System.Security.Cryptography.X509Certificates.X509Extension
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509Extension*, "System.Security.Cryptography.X509Certificates", "X509Extension");
#pragma pack(pop)
