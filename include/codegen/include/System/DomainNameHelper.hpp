// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:12 PM
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
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.DomainNameHelper
  class DomainNameHelper : public ::Il2CppObject {
    public:
    // static System.String ParseCanonicalName(System.String str, System.Int32 start, System.Int32 end, System.Boolean loopback)
    // Offset: 0xF4C35C
    static ::Il2CppString* ParseCanonicalName(::Il2CppString* str, int start, int end, bool& loopback);
    // static System.Boolean IsValid(System.Char* name, System.UInt16 pos, System.Int32 returnedEnd, System.Boolean notCanonical, System.Boolean notImplicitFile)
    // Offset: 0xF4C4F4
    static bool IsValid(::Il2CppChar* name, uint16_t pos, int& returnedEnd, bool& notCanonical, bool notImplicitFile);
    // static System.Boolean IsValidByIri(System.Char* name, System.UInt16 pos, System.Int32 returnedEnd, System.Boolean notCanonical, System.Boolean notImplicitFile)
    // Offset: 0xF4C720
    static bool IsValidByIri(::Il2CppChar* name, uint16_t pos, int& returnedEnd, bool& notCanonical, bool notImplicitFile);
    // static System.String IdnEquivalent(System.Char* hostname, System.Int32 start, System.Int32 end, System.Boolean allAscii, System.Boolean atLeastOneValidIdn)
    // Offset: 0xF4C908
    static ::Il2CppString* IdnEquivalent(::Il2CppChar* hostname, int start, int end, bool& allAscii, bool& atLeastOneValidIdn);
    // static System.String IdnEquivalent(System.Char* hostname, System.Int32 start, System.Int32 end, System.Boolean allAscii, System.String bidiStrippedHost)
    // Offset: 0xF4CB88
    static ::Il2CppString* IdnEquivalent(::Il2CppChar* hostname, int start, int end, bool& allAscii, ::Il2CppString*& bidiStrippedHost);
    // static private System.Boolean IsIdnAce(System.String input, System.Int32 index)
    // Offset: 0xF4CDD0
    static bool IsIdnAce(::Il2CppString* input, int index);
    // static private System.Boolean IsIdnAce(System.Char* input, System.Int32 index)
    // Offset: 0xF4CD84
    static bool IsIdnAce(::Il2CppChar* input, int index);
    // static System.String UnicodeEquivalent(System.String idnHost, System.Char* hostname, System.Int32 start, System.Int32 end)
    // Offset: 0xF4CE6C
    static ::Il2CppString* UnicodeEquivalent(::Il2CppString* idnHost, ::Il2CppChar* hostname, int start, int end);
    // static System.String UnicodeEquivalent(System.Char* hostname, System.Int32 start, System.Int32 end, System.Boolean allAscii, System.Boolean atLeastOneValidIdn)
    // Offset: 0xF4CF94
    static ::Il2CppString* UnicodeEquivalent(::Il2CppChar* hostname, int start, int end, bool& allAscii, bool& atLeastOneValidIdn);
    // static private System.Boolean IsASCIILetterOrDigit(System.Char character, System.Boolean notCanonical)
    // Offset: 0xF4C670
    static bool IsASCIILetterOrDigit(::Il2CppChar character, bool& notCanonical);
    // static private System.Boolean IsValidDomainLabelCharacter(System.Char character, System.Boolean notCanonical)
    // Offset: 0xF4C6BC
    static bool IsValidDomainLabelCharacter(::Il2CppChar character, bool& notCanonical);
  }; // System.DomainNameHelper
}
DEFINE_IL2CPP_ARG_TYPE(System::DomainNameHelper*, "System", "DomainNameHelper");
#pragma pack(pop)
