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
  // Forward declaring type: __DTString
  struct __DTString;
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: DateTimeResult
  struct DateTimeResult;
  // Forward declaring type: DateTimeToken
  struct DateTimeToken;
  // Forward declaring type: DateTimeRawInfo
  struct DateTimeRawInfo;
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: DateTimeFormatInfo
  class DateTimeFormatInfo;
  // Forward declaring type: DateTimeStyles
  struct DateTimeStyles;
  // Forward declaring type: Calendar
  class Calendar;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.DateTimeParse
  class DateTimeParse : public ::Il2CppObject {
    public:
    // Nested type: System::DateTimeParse::MatchNumberDelegate
    class MatchNumberDelegate;
    // Nested type: System::DateTimeParse::DTT
    struct DTT;
    // Nested type: System::DateTimeParse::TM
    struct TM;
    // Nested type: System::DateTimeParse::DS
    struct DS;
    // Get static field: static System.DateTimeParse/MatchNumberDelegate m_hebrewNumberParser
    static System::DateTimeParse::MatchNumberDelegate* _get_m_hebrewNumberParser();
    // Set static field: static System.DateTimeParse/MatchNumberDelegate m_hebrewNumberParser
    static void _set_m_hebrewNumberParser(System::DateTimeParse::MatchNumberDelegate* value);
    // Get static field: static private System.DateTimeParse/DS[][] dateParsingStates
    static ::Array<::Array<System::DateTimeParse::DS>*>* _get_dateParsingStates();
    // Set static field: static private System.DateTimeParse/DS[][] dateParsingStates
    static void _set_dateParsingStates(::Array<::Array<System::DateTimeParse::DS>*>* value);
    // static System.Boolean IsDigit(System.Char ch)
    // Offset: 0x10D6DD4
    static bool IsDigit(::Il2CppChar ch);
    // static private System.Boolean ParseFraction(System.__DTString str, System.Double result)
    // Offset: 0x10D6DE8
    static bool ParseFraction(System::__DTString& str, double& result);
    // static private System.Boolean ParseTimeZone(System.__DTString str, System.TimeSpan result)
    // Offset: 0x10D6ECC
    static bool ParseTimeZone(System::__DTString& str, System::TimeSpan& result);
    // static private System.Boolean HandleTimeZone(System.__DTString str, System.DateTimeResult result)
    // Offset: 0x10D7144
    static bool HandleTimeZone(System::__DTString& str, System::DateTimeResult& result);
    // static private System.Boolean Lex(System.DateTimeParse/DS dps, System.__DTString str, System.DateTimeToken dtok, System.DateTimeRawInfo raw, System.DateTimeResult result, System.Globalization.DateTimeFormatInfo dtfi, System.Globalization.DateTimeStyles styles)
    // Offset: 0x10D72C0
    static bool Lex(System::DateTimeParse::DS dps, System::__DTString& str, System::DateTimeToken& dtok, System::DateTimeRawInfo& raw, System::DateTimeResult& result, System::Globalization::DateTimeFormatInfo*& dtfi, System::Globalization::DateTimeStyles styles);
    // static private System.Boolean VerifyValidPunctuation(System.__DTString str)
    // Offset: 0x10D83A0
    static bool VerifyValidPunctuation(System::__DTString& str);
    // static private System.Boolean GetYearMonthDayOrder(System.String datePattern, System.Globalization.DateTimeFormatInfo dtfi, System.Int32 order)
    // Offset: 0x10D8518
    static bool GetYearMonthDayOrder(::Il2CppString* datePattern, System::Globalization::DateTimeFormatInfo* dtfi, int& order);
    // static private System.Boolean GetYearMonthOrder(System.String pattern, System.Globalization.DateTimeFormatInfo dtfi, System.Int32 order)
    // Offset: 0x10D87C0
    static bool GetYearMonthOrder(::Il2CppString* pattern, System::Globalization::DateTimeFormatInfo* dtfi, int& order);
    // static private System.Boolean GetMonthDayOrder(System.String pattern, System.Globalization.DateTimeFormatInfo dtfi, System.Int32 order)
    // Offset: 0x10D897C
    static bool GetMonthDayOrder(::Il2CppString* pattern, System::Globalization::DateTimeFormatInfo* dtfi, int& order);
    // static private System.Boolean TryAdjustYear(System.DateTimeResult result, System.Int32 year, System.Int32 adjustedYear)
    // Offset: 0x10D8B80
    static bool TryAdjustYear(System::DateTimeResult& result, int year, int& adjustedYear);
    // static private System.Boolean SetDateYMD(System.DateTimeResult result, System.Int32 year, System.Int32 month, System.Int32 day)
    // Offset: 0x10D8C80
    static bool SetDateYMD(System::DateTimeResult& result, int year, int month, int day);
    // static private System.Boolean SetDateMDY(System.DateTimeResult result, System.Int32 month, System.Int32 day, System.Int32 year)
    // Offset: 0x10D8CF8
    static bool SetDateMDY(System::DateTimeResult& result, int month, int day, int year);
    // static private System.Boolean SetDateDMY(System.DateTimeResult result, System.Int32 day, System.Int32 month, System.Int32 year)
    // Offset: 0x10D8D84
    static bool SetDateDMY(System::DateTimeResult& result, int day, int month, int year);
    // static private System.Boolean SetDateYDM(System.DateTimeResult result, System.Int32 year, System.Int32 day, System.Int32 month)
    // Offset: 0x10D8E10
    static bool SetDateYDM(System::DateTimeResult& result, int year, int day, int month);
    // static private System.Void GetDefaultYear(System.DateTimeResult result, System.Globalization.DateTimeStyles styles)
    // Offset: 0x10D8E9C
    static void GetDefaultYear(System::DateTimeResult& result, System::Globalization::DateTimeStyles& styles);
    // static private System.Boolean GetDayOfNN(System.DateTimeResult result, System.Globalization.DateTimeStyles styles, System.DateTimeRawInfo raw, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x10D9040
    static bool GetDayOfNN(System::DateTimeResult& result, System::Globalization::DateTimeStyles& styles, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi);
    // static private System.Boolean GetDayOfNNN(System.DateTimeResult result, System.DateTimeRawInfo raw, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x10D91E8
    static bool GetDayOfNNN(System::DateTimeResult& result, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi);
    // static private System.Boolean GetDayOfMN(System.DateTimeResult result, System.Globalization.DateTimeStyles styles, System.DateTimeRawInfo raw, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x10D94E4
    static bool GetDayOfMN(System::DateTimeResult& result, System::Globalization::DateTimeStyles& styles, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi);
    // static private System.Boolean GetHebrewDayOfNM(System.DateTimeResult result, System.DateTimeRawInfo raw, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x10D9734
    static bool GetHebrewDayOfNM(System::DateTimeResult& result, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi);
    // static private System.Boolean GetDayOfNM(System.DateTimeResult result, System.Globalization.DateTimeStyles styles, System.DateTimeRawInfo raw, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x10D989C
    static bool GetDayOfNM(System::DateTimeResult& result, System::Globalization::DateTimeStyles& styles, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi);
    // static private System.Boolean GetDayOfMNN(System.DateTimeResult result, System.DateTimeRawInfo raw, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x10D9AEC
    static bool GetDayOfMNN(System::DateTimeResult& result, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi);
    // static private System.Boolean GetDayOfYNN(System.DateTimeResult result, System.DateTimeRawInfo raw, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x10D9DFC
    static bool GetDayOfYNN(System::DateTimeResult& result, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi);
    // static private System.Boolean GetDayOfNNY(System.DateTimeResult result, System.DateTimeRawInfo raw, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x10D9F80
    static bool GetDayOfNNY(System::DateTimeResult& result, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi);
    // static private System.Boolean GetDayOfYMN(System.DateTimeResult result, System.DateTimeRawInfo raw, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x10DA120
    static bool GetDayOfYMN(System::DateTimeResult& result, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi);
    // static private System.Boolean GetDayOfYN(System.DateTimeResult result, System.DateTimeRawInfo raw, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x10DA200
    static bool GetDayOfYN(System::DateTimeResult& result, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi);
    // static private System.Boolean GetDayOfYM(System.DateTimeResult result, System.DateTimeRawInfo raw, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x10DA2E0
    static bool GetDayOfYM(System::DateTimeResult& result, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi);
    // static private System.Void AdjustTimeMark(System.Globalization.DateTimeFormatInfo dtfi, System.DateTimeRawInfo raw)
    // Offset: 0x10DA3A8
    static void AdjustTimeMark(System::Globalization::DateTimeFormatInfo* dtfi, System::DateTimeRawInfo& raw);
    // static private System.Boolean AdjustHour(System.Int32 hour, System.DateTimeParse/TM timeMark)
    // Offset: 0x10DA41C
    static bool AdjustHour(int& hour, System::DateTimeParse::TM timeMark);
    // static private System.Boolean GetTimeOfN(System.Globalization.DateTimeFormatInfo dtfi, System.DateTimeResult result, System.DateTimeRawInfo raw)
    // Offset: 0x10DA464
    static bool GetTimeOfN(System::Globalization::DateTimeFormatInfo* dtfi, System::DateTimeResult& result, System::DateTimeRawInfo& raw);
    // static private System.Boolean GetTimeOfNN(System.Globalization.DateTimeFormatInfo dtfi, System.DateTimeResult result, System.DateTimeRawInfo raw)
    // Offset: 0x10DA510
    static bool GetTimeOfNN(System::Globalization::DateTimeFormatInfo* dtfi, System::DateTimeResult& result, System::DateTimeRawInfo& raw);
    // static private System.Boolean GetTimeOfNNN(System.Globalization.DateTimeFormatInfo dtfi, System.DateTimeResult result, System.DateTimeRawInfo raw)
    // Offset: 0x10DA5C8
    static bool GetTimeOfNNN(System::Globalization::DateTimeFormatInfo* dtfi, System::DateTimeResult& result, System::DateTimeRawInfo& raw);
    // static private System.Boolean GetDateOfDSN(System.DateTimeResult result, System.DateTimeRawInfo raw)
    // Offset: 0x10DA694
    static bool GetDateOfDSN(System::DateTimeResult& result, System::DateTimeRawInfo& raw);
    // static private System.Boolean GetDateOfNDS(System.DateTimeResult result, System.DateTimeRawInfo raw)
    // Offset: 0x10DA738
    static bool GetDateOfNDS(System::DateTimeResult& result, System::DateTimeRawInfo& raw);
    // static private System.Boolean GetDateOfNNDS(System.DateTimeResult result, System.DateTimeRawInfo raw, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x10DA818
    static bool GetDateOfNNDS(System::DateTimeResult& result, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi);
    // static private System.Boolean ProcessDateTimeSuffix(System.DateTimeResult result, System.DateTimeRawInfo raw, System.DateTimeToken dtok)
    // Offset: 0x10DAA70
    static bool ProcessDateTimeSuffix(System::DateTimeResult& result, System::DateTimeRawInfo& raw, System::DateTimeToken& dtok);
    // static System.Boolean ProcessHebrewTerminalState(System.DateTimeParse/DS dps, System.DateTimeResult result, System.Globalization.DateTimeStyles styles, System.DateTimeRawInfo raw, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x10DAB68
    static bool ProcessHebrewTerminalState(System::DateTimeParse::DS dps, System::DateTimeResult& result, System::Globalization::DateTimeStyles& styles, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi);
    // static System.Boolean ProcessTerminaltState(System.DateTimeParse/DS dps, System.DateTimeResult result, System.Globalization.DateTimeStyles styles, System.DateTimeRawInfo raw, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x10D7FA0
    static bool ProcessTerminaltState(System::DateTimeParse::DS dps, System::DateTimeResult& result, System::Globalization::DateTimeStyles& styles, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi);
    // static System.DateTime Parse(System.String s, System.Globalization.DateTimeFormatInfo dtfi, System.Globalization.DateTimeStyles styles)
    // Offset: 0x10D2054
    static System::DateTime Parse(::Il2CppString* s, System::Globalization::DateTimeFormatInfo* dtfi, System::Globalization::DateTimeStyles styles);
    // static System.Boolean TryParse(System.String s, System.Globalization.DateTimeFormatInfo dtfi, System.Globalization.DateTimeStyles styles, System.DateTimeResult result)
    // Offset: 0x10DAE54
    static bool TryParse(::Il2CppString* s, System::Globalization::DateTimeFormatInfo* dtfi, System::Globalization::DateTimeStyles styles, System::DateTimeResult& result);
    // static private System.Boolean DetermineTimeZoneAdjustments(System.DateTimeResult result, System.Globalization.DateTimeStyles styles, System.Boolean bTimeOnly)
    // Offset: 0x10DBE84
    static bool DetermineTimeZoneAdjustments(System::DateTimeResult& result, System::Globalization::DateTimeStyles styles, bool bTimeOnly);
    // static private System.Boolean DateTimeOffsetTimeZonePostProcessing(System.DateTimeResult result, System.Globalization.DateTimeStyles styles)
    // Offset: 0x10DC078
    static bool DateTimeOffsetTimeZonePostProcessing(System::DateTimeResult& result, System::Globalization::DateTimeStyles styles);
    // static private System.Boolean AdjustTimeZoneToUniversal(System.DateTimeResult result)
    // Offset: 0x10DC274
    static bool AdjustTimeZoneToUniversal(System::DateTimeResult& result);
    // static private System.Boolean AdjustTimeZoneToLocal(System.DateTimeResult result, System.Boolean bTimeOnly)
    // Offset: 0x10DC344
    static bool AdjustTimeZoneToLocal(System::DateTimeResult& result, bool bTimeOnly);
    // static private System.Boolean ParseISO8601(System.DateTimeRawInfo raw, System.__DTString str, System.Globalization.DateTimeStyles styles, System.DateTimeResult result)
    // Offset: 0x10DB6CC
    static bool ParseISO8601(System::DateTimeRawInfo& raw, System::__DTString& str, System::Globalization::DateTimeStyles styles, System::DateTimeResult& result);
    // static System.Boolean MatchHebrewDigits(System.__DTString str, System.Int32 digitLen, System.Int32 number)
    // Offset: 0x10DC5D4
    static bool MatchHebrewDigits(System::__DTString& str, int digitLen, int& number);
    // static System.Boolean ParseDigits(System.__DTString str, System.Int32 digitLen, System.Int32 result)
    // Offset: 0x10DC52C
    static bool ParseDigits(System::__DTString& str, int digitLen, int& result);
    // static System.Boolean ParseDigits(System.__DTString str, System.Int32 minDigitLen, System.Int32 maxDigitLen, System.Int32 result)
    // Offset: 0x10DC6C0
    static bool ParseDigits(System::__DTString& str, int minDigitLen, int maxDigitLen, int& result);
    // static private System.DateTime GetDateTimeNow(System.DateTimeResult result, System.Globalization.DateTimeStyles styles)
    // Offset: 0x10D8F48
    static System::DateTime GetDateTimeNow(System::DateTimeResult& result, System::Globalization::DateTimeStyles& styles);
    // static private System.Boolean CheckDefaultDateTime(System.DateTimeResult result, System.Globalization.Calendar cal, System.Globalization.DateTimeStyles styles)
    // Offset: 0x10DBBF0
    static bool CheckDefaultDateTime(System::DateTimeResult& result, System::Globalization::Calendar*& cal, System::Globalization::DateTimeStyles styles);
    // static private System.Exception GetDateTimeParseException(System.DateTimeResult result)
    // Offset: 0x10DB538
    static System::Exception* GetDateTimeParseException(System::DateTimeResult& result);
    // static private System.Void .cctor()
    // Offset: 0x10DC77C
    static void _cctor();
  }; // System.DateTimeParse
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::DateTimeParse*, "System", "DateTimeParse");
#pragma pack(pop)
