// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm
  struct X509SubjectKeyIdentifierHashAlgorithm : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm Sha1
    static constexpr const int Sha1 = 0;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm Sha1
    static System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm _get_Sha1();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm Sha1
    static void _set_Sha1(System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm ShortSha1
    static constexpr const int ShortSha1 = 1;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm ShortSha1
    static System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm _get_ShortSha1();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm ShortSha1
    static void _set_ShortSha1(System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm CapiSha1
    static constexpr const int CapiSha1 = 2;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm CapiSha1
    static System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm _get_CapiSha1();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm CapiSha1
    static void _set_CapiSha1(System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm value);
    // Creating value type constructor for type: X509SubjectKeyIdentifierHashAlgorithm
    X509SubjectKeyIdentifierHashAlgorithm(int value_ = {}) : value{value_} {}
  }; // System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm, "System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierHashAlgorithm");
#pragma pack(pop)
