// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:45 PM
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
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CalendarData
  class CalendarData;
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Autogenerated type: System.Globalization.CultureData
  class CultureData : public ::Il2CppObject {
    public:
    // private System.String sAM1159
    // Offset: 0x10
    ::Il2CppString* sAM1159;
    // private System.String sPM2359
    // Offset: 0x18
    ::Il2CppString* sPM2359;
    // private System.String sTimeSeparator
    // Offset: 0x20
    ::Il2CppString* sTimeSeparator;
    // private System.String[] saLongTimes
    // Offset: 0x28
    ::Array<::Il2CppString*>* saLongTimes;
    // private System.String[] saShortTimes
    // Offset: 0x30
    ::Array<::Il2CppString*>* saShortTimes;
    // private System.Int32 iFirstDayOfWeek
    // Offset: 0x38
    int iFirstDayOfWeek;
    // private System.Int32 iFirstWeekOfYear
    // Offset: 0x3C
    int iFirstWeekOfYear;
    // private System.Int32[] waCalendars
    // Offset: 0x40
    ::Array<int>* waCalendars;
    // private System.Globalization.CalendarData[] calendars
    // Offset: 0x48
    ::Array<System::Globalization::CalendarData*>* calendars;
    // private System.String sISO639Language
    // Offset: 0x50
    ::Il2CppString* sISO639Language;
    // private readonly System.String sRealName
    // Offset: 0x58
    ::Il2CppString* sRealName;
    // private System.Boolean bUseOverrides
    // Offset: 0x60
    bool bUseOverrides;
    // private System.Int32 calendarId
    // Offset: 0x64
    int calendarId;
    // private System.Int32 numberIndex
    // Offset: 0x68
    int numberIndex;
    // private System.Int32 iDefaultAnsiCodePage
    // Offset: 0x6C
    int iDefaultAnsiCodePage;
    // private System.Int32 iDefaultOemCodePage
    // Offset: 0x70
    int iDefaultOemCodePage;
    // private System.Int32 iDefaultMacCodePage
    // Offset: 0x74
    int iDefaultMacCodePage;
    // private System.Int32 iDefaultEbcdicCodePage
    // Offset: 0x78
    int iDefaultEbcdicCodePage;
    // private System.Boolean isRightToLeft
    // Offset: 0x7C
    bool isRightToLeft;
    // private System.String sListSeparator
    // Offset: 0x80
    ::Il2CppString* sListSeparator;
    // Get static field: static private System.Globalization.CultureData s_Invariant
    static System::Globalization::CultureData* _get_s_Invariant();
    // Set static field: static private System.Globalization.CultureData s_Invariant
    static void _set_s_Invariant(System::Globalization::CultureData* value);
    // private System.Void .ctor(System.String name)
    // Offset: 0x129BAB8
    static CultureData* New_ctor(::Il2CppString* name);
    // static public System.Globalization.CultureData get_Invariant()
    // Offset: 0x129BAEC
    static System::Globalization::CultureData* get_Invariant();
    // static public System.Globalization.CultureData GetCultureData(System.String cultureName, System.Boolean useUserOverride)
    // Offset: 0x129BEC0
    static System::Globalization::CultureData* GetCultureData(::Il2CppString* cultureName, bool useUserOverride);
    // static public System.Globalization.CultureData GetCultureData(System.String cultureName, System.Boolean useUserOverride, System.Int32 datetimeIndex, System.Int32 calendarId, System.Int32 numberIndex, System.String iso2lang, System.Int32 ansiCodePage, System.Int32 oemCodePage, System.Int32 macCodePage, System.Int32 ebcdicCodePage, System.Boolean rightToLeft, System.String listSeparator)
    // Offset: 0x129BFBC
    static System::Globalization::CultureData* GetCultureData(::Il2CppString* cultureName, bool useUserOverride, int datetimeIndex, int calendarId, int numberIndex, ::Il2CppString* iso2lang, int ansiCodePage, int oemCodePage, int macCodePage, int ebcdicCodePage, bool rightToLeft, ::Il2CppString* listSeparator);
    // static System.Globalization.CultureData GetCultureData(System.Int32 culture, System.Boolean bUseUserOverride)
    // Offset: 0x129C114
    static System::Globalization::CultureData* GetCultureData(int culture, bool bUseUserOverride);
    // private System.Void fill_culture_data(System.Int32 datetimeIndex)
    // Offset: 0x129C110
    void fill_culture_data(int datetimeIndex);
    // public System.Globalization.CalendarData GetCalendar(System.Int32 calendarId)
    // Offset: 0x129C11C
    System::Globalization::CalendarData* GetCalendar(int calendarId);
    // System.String[] get_LongTimes()
    // Offset: 0x129C25C
    ::Array<::Il2CppString*>* get_LongTimes();
    // System.String[] get_ShortTimes()
    // Offset: 0x129C280
    ::Array<::Il2CppString*>* get_ShortTimes();
    // System.String get_SISO639LANGNAME()
    // Offset: 0x129C2A4
    ::Il2CppString* get_SISO639LANGNAME();
    // System.Int32 get_IFIRSTDAYOFWEEK()
    // Offset: 0x129C2AC
    int get_IFIRSTDAYOFWEEK();
    // System.Int32 get_IFIRSTWEEKOFYEAR()
    // Offset: 0x129C2B4
    int get_IFIRSTWEEKOFYEAR();
    // System.String get_SAM1159()
    // Offset: 0x129C2BC
    ::Il2CppString* get_SAM1159();
    // System.String get_SPM2359()
    // Offset: 0x129C2C4
    ::Il2CppString* get_SPM2359();
    // System.String get_TimeSeparator()
    // Offset: 0x129C2CC
    ::Il2CppString* get_TimeSeparator();
    // System.Int32[] get_CalendarIds()
    // Offset: 0x129C2D4
    ::Array<int>* get_CalendarIds();
    // System.Boolean get_IsInvariantCulture()
    // Offset: 0x129C43C
    bool get_IsInvariantCulture();
    // System.String get_CultureName()
    // Offset: 0x129C448
    ::Il2CppString* get_CultureName();
    // System.String get_SCOMPAREINFO()
    // Offset: 0x129C450
    ::Il2CppString* get_SCOMPAREINFO();
    // System.String get_STEXTINFO()
    // Offset: 0x129C498
    ::Il2CppString* get_STEXTINFO();
    // System.Int32 get_ILANGUAGE()
    // Offset: 0x129C4A0
    int get_ILANGUAGE();
    // System.Boolean get_UseUserOverride()
    // Offset: 0x129C4A8
    bool get_UseUserOverride();
    // System.String[] EraNames(System.Int32 calendarId)
    // Offset: 0x129C4B0
    ::Array<::Il2CppString*>* EraNames(int calendarId);
    // System.String[] AbbrevEraNames(System.Int32 calendarId)
    // Offset: 0x129C4D0
    ::Array<::Il2CppString*>* AbbrevEraNames(int calendarId);
    // System.String[] AbbreviatedEnglishEraNames(System.Int32 calendarId)
    // Offset: 0x129C4F0
    ::Array<::Il2CppString*>* AbbreviatedEnglishEraNames(int calendarId);
    // System.String[] ShortDates(System.Int32 calendarId)
    // Offset: 0x129C510
    ::Array<::Il2CppString*>* ShortDates(int calendarId);
    // System.String[] LongDates(System.Int32 calendarId)
    // Offset: 0x129C530
    ::Array<::Il2CppString*>* LongDates(int calendarId);
    // System.String[] YearMonths(System.Int32 calendarId)
    // Offset: 0x129C550
    ::Array<::Il2CppString*>* YearMonths(int calendarId);
    // System.String[] DayNames(System.Int32 calendarId)
    // Offset: 0x129C570
    ::Array<::Il2CppString*>* DayNames(int calendarId);
    // System.String[] AbbreviatedDayNames(System.Int32 calendarId)
    // Offset: 0x129C590
    ::Array<::Il2CppString*>* AbbreviatedDayNames(int calendarId);
    // System.String[] MonthNames(System.Int32 calendarId)
    // Offset: 0x129C5B0
    ::Array<::Il2CppString*>* MonthNames(int calendarId);
    // System.String[] GenitiveMonthNames(System.Int32 calendarId)
    // Offset: 0x129C5D0
    ::Array<::Il2CppString*>* GenitiveMonthNames(int calendarId);
    // System.String[] AbbreviatedMonthNames(System.Int32 calendarId)
    // Offset: 0x129C5F0
    ::Array<::Il2CppString*>* AbbreviatedMonthNames(int calendarId);
    // System.String[] AbbreviatedGenitiveMonthNames(System.Int32 calendarId)
    // Offset: 0x129C610
    ::Array<::Il2CppString*>* AbbreviatedGenitiveMonthNames(int calendarId);
    // System.String[] LeapYearMonthNames(System.Int32 calendarId)
    // Offset: 0x129C630
    ::Array<::Il2CppString*>* LeapYearMonthNames(int calendarId);
    // System.String MonthDay(System.Int32 calendarId)
    // Offset: 0x129C650
    ::Il2CppString* MonthDay(int calendarId);
    // System.String DateSeparator(System.Int32 calendarId)
    // Offset: 0x129C670
    ::Il2CppString* DateSeparator(int calendarId);
    // static private System.String GetDateSeparator(System.String format)
    // Offset: 0x129C6AC
    static ::Il2CppString* GetDateSeparator(::Il2CppString* format);
    // static private System.String GetSeparator(System.String format, System.String timeParts)
    // Offset: 0x129C6FC
    static ::Il2CppString* GetSeparator(::Il2CppString* format, ::Il2CppString* timeParts);
    // static private System.Int32 IndexOfTimePart(System.String format, System.Int32 startIndex, System.String timeParts)
    // Offset: 0x129C808
    static int IndexOfTimePart(::Il2CppString* format, int startIndex, ::Il2CppString* timeParts);
    // static private System.String UnescapeNlsString(System.String str, System.Int32 start, System.Int32 end)
    // Offset: 0x129C900
    static ::Il2CppString* UnescapeNlsString(::Il2CppString* str, int start, int end);
    // static System.String[] ReescapeWin32Strings(System.String[] array)
    // Offset: 0x129CAB4
    static ::Array<::Il2CppString*>* ReescapeWin32Strings(::Array<::Il2CppString*>* array);
    // static System.String ReescapeWin32String(System.String str)
    // Offset: 0x129CAB8
    static ::Il2CppString* ReescapeWin32String(::Il2CppString* str);
    // System.Void GetNFIValues(System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x129CABC
    void GetNFIValues(System::Globalization::NumberFormatInfo* nfi);
    // static private System.Void fill_number_data(System.Globalization.NumberFormatInfo nfi, System.Int32 numberIndex)
    // Offset: 0x129CB34
    static void fill_number_data(System::Globalization::NumberFormatInfo* nfi, int numberIndex);
  }; // System.Globalization.CultureData
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::CultureData*, "System.Globalization", "CultureData");
#pragma pack(pop)
