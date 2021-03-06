// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: UriComponents
  struct UriComponents;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.IriHelper
  class IriHelper : public ::Il2CppObject {
    public:
    // static System.Boolean CheckIriUnicodeRange(System.Char unicode, System.Boolean isQuery)
    // Offset: 0xF6BD7C
    static bool CheckIriUnicodeRange(::Il2CppChar unicode, bool isQuery);
    // static System.Boolean CheckIriUnicodeRange(System.Char highSurr, System.Char lowSurr, System.Boolean surrogatePair, System.Boolean isQuery)
    // Offset: 0xF6BDD4
    static bool CheckIriUnicodeRange(::Il2CppChar highSurr, ::Il2CppChar lowSurr, bool& surrogatePair, bool isQuery);
    // static System.Boolean CheckIsReserved(System.Char ch, System.UriComponents component)
    // Offset: 0xF6C290
    static bool CheckIsReserved(::Il2CppChar ch, System::UriComponents component);
    // static System.String EscapeUnescapeIri(System.Char* pInput, System.Int32 start, System.Int32 end, System.UriComponents component)
    // Offset: 0xF6C3F4
    static ::Il2CppString* EscapeUnescapeIri(::Il2CppChar* pInput, int start, int end, System::UriComponents component);
  }; // System.IriHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IriHelper*, "System", "IriHelper");
#pragma pack(pop)
