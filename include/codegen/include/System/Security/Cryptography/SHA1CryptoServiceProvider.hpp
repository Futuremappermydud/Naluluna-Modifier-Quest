// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:47 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Security.Cryptography.SHA1
#include "System/Security/Cryptography/SHA1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: SHA1Internal
  class SHA1Internal;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.SHA1CryptoServiceProvider
  class SHA1CryptoServiceProvider : public System::Security::Cryptography::SHA1 {
    public:
    // private System.Security.Cryptography.SHA1Internal sha
    // Offset: 0x28
    System::Security::Cryptography::SHA1Internal* sha;
    // public System.Void .ctor()
    // Offset: 0xDD4B8C
    // Implemented from: System.Security.Cryptography.SHA1
    // Base method: System.Void SHA1::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    static SHA1CryptoServiceProvider* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0xDD4CB8
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0xDD4D2C
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // protected override System.Void HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0xDD4D34
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    void HashCore(::Array<uint8_t>* rgb, int ibStart, int cbSize);
    // protected override System.Byte[] HashFinal()
    // Offset: 0xDD4E5C
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal()
    ::Array<uint8_t>* HashFinal();
    // public override System.Void Initialize()
    // Offset: 0xDD4F70
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize()
    void Initialize();
  }; // System.Security.Cryptography.SHA1CryptoServiceProvider
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SHA1CryptoServiceProvider*, "System.Security.Cryptography", "SHA1CryptoServiceProvider");
#pragma pack(pop)
