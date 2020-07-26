// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:26 PM
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
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CompareInfo
  class CompareInfo;
  // Forward declaring type: DateTimeFormatInfo
  class DateTimeFormatInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TokenType
  struct TokenType;
  // Forward declaring type: DTSubString
  struct DTSubString;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.__DTString
  struct __DTString : public System::ValueType {
    public:
    // System.String Value
    // Offset: 0x0
    ::Il2CppString* Value;
    // System.Int32 Index
    // Offset: 0x8
    int Index;
    // System.Int32 len
    // Offset: 0xC
    int len;
    // System.Char m_current
    // Offset: 0x10
    ::Il2CppChar m_current;
    // private System.Globalization.CompareInfo m_info
    // Offset: 0x18
    System::Globalization::CompareInfo* m_info;
    // private System.Boolean m_checkDigitToken
    // Offset: 0x20
    bool m_checkDigitToken;
    // Get static field: static private System.Char[] WhiteSpaceChecks
    static ::Array<::Il2CppChar>* _get_WhiteSpaceChecks();
    // Set static field: static private System.Char[] WhiteSpaceChecks
    static void _set_WhiteSpaceChecks(::Array<::Il2CppChar>* value);
    // Creating value type constructor for type: __DTString
    __DTString(::Il2CppString* Value_ = {}, int Index_ = {}, int len_ = {}, ::Il2CppChar m_current_ = {}, System::Globalization::CompareInfo* m_info_ = {}, bool m_checkDigitToken_ = {}) : Value{Value_}, Index{Index_}, len{len_}, m_current{m_current_}, m_info{m_info_}, m_checkDigitToken{m_checkDigitToken_} {}
    // System.Void .ctor(System.String str, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0xA53B84
    static __DTString* New_ctor(::Il2CppString* str, System::Globalization::DateTimeFormatInfo* dtfi);
    // System.Boolean GetNext()
    // Offset: 0xA53B8C
    bool GetNext();
    // System.Boolean AtEnd()
    // Offset: 0xA53B94
    bool AtEnd();
    // System.Boolean Advance(System.Int32 count)
    // Offset: 0xA53BA4
    bool Advance(int count);
    // System.Void GetRegularToken(System.TokenType tokenType, System.Int32 tokenValue, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0xA53BAC
    void GetRegularToken(System::TokenType& tokenType, int& tokenValue, System::Globalization::DateTimeFormatInfo* dtfi);
    // System.TokenType GetSeparatorToken(System.Globalization.DateTimeFormatInfo dtfi, System.Int32 indexBeforeSeparator, System.Char charBeforeSeparator)
    // Offset: 0xA53BB4
    System::TokenType GetSeparatorToken(System::Globalization::DateTimeFormatInfo* dtfi, int& indexBeforeSeparator, ::Il2CppChar& charBeforeSeparator);
    // System.Boolean MatchSpecifiedWords(System.String target, System.Boolean checkWordBoundary, System.Int32 matchLength)
    // Offset: 0xA53BBC
    bool MatchSpecifiedWords(::Il2CppString* target, bool checkWordBoundary, int& matchLength);
    // System.Boolean Match(System.Char ch)
    // Offset: 0xA53BC8
    bool Match(::Il2CppChar ch);
    // System.Boolean GetNextDigit()
    // Offset: 0xA53BD0
    bool GetNextDigit();
    // System.Char GetChar()
    // Offset: 0xA53BD8
    ::Il2CppChar GetChar();
    // System.Int32 GetDigit()
    // Offset: 0xA53BE0
    int GetDigit();
    // System.Void SkipWhiteSpaces()
    // Offset: 0xA53BE8
    void SkipWhiteSpaces();
    // System.Boolean SkipWhiteSpaceCurrent()
    // Offset: 0xA53BF0
    bool SkipWhiteSpaceCurrent();
    // System.DTSubString GetSubString()
    // Offset: 0xA53BF8
    System::DTSubString GetSubString();
    // System.Void ConsumeSubString(System.DTSubString sub)
    // Offset: 0xA53C00
    void ConsumeSubString(System::DTSubString sub);
    // static private System.Void .cctor()
    // Offset: 0x17899C8
    static void _cctor();
  }; // System.__DTString
}
DEFINE_IL2CPP_ARG_TYPE(System::__DTString, "System", "__DTString");
#pragma pack(pop)
