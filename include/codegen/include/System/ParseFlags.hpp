// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:39 PM
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
// Type namespace: System
namespace System {
  // Autogenerated type: System.ParseFlags
  struct ParseFlags : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.ParseFlags HaveYear
    static constexpr const int HaveYear = 1;
    // Get static field: static public System.ParseFlags HaveYear
    static System::ParseFlags _get_HaveYear();
    // Set static field: static public System.ParseFlags HaveYear
    static void _set_HaveYear(System::ParseFlags value);
    // static field const value: static public System.ParseFlags HaveMonth
    static constexpr const int HaveMonth = 2;
    // Get static field: static public System.ParseFlags HaveMonth
    static System::ParseFlags _get_HaveMonth();
    // Set static field: static public System.ParseFlags HaveMonth
    static void _set_HaveMonth(System::ParseFlags value);
    // static field const value: static public System.ParseFlags HaveDay
    static constexpr const int HaveDay = 4;
    // Get static field: static public System.ParseFlags HaveDay
    static System::ParseFlags _get_HaveDay();
    // Set static field: static public System.ParseFlags HaveDay
    static void _set_HaveDay(System::ParseFlags value);
    // static field const value: static public System.ParseFlags HaveHour
    static constexpr const int HaveHour = 8;
    // Get static field: static public System.ParseFlags HaveHour
    static System::ParseFlags _get_HaveHour();
    // Set static field: static public System.ParseFlags HaveHour
    static void _set_HaveHour(System::ParseFlags value);
    // static field const value: static public System.ParseFlags HaveMinute
    static constexpr const int HaveMinute = 16;
    // Get static field: static public System.ParseFlags HaveMinute
    static System::ParseFlags _get_HaveMinute();
    // Set static field: static public System.ParseFlags HaveMinute
    static void _set_HaveMinute(System::ParseFlags value);
    // static field const value: static public System.ParseFlags HaveSecond
    static constexpr const int HaveSecond = 32;
    // Get static field: static public System.ParseFlags HaveSecond
    static System::ParseFlags _get_HaveSecond();
    // Set static field: static public System.ParseFlags HaveSecond
    static void _set_HaveSecond(System::ParseFlags value);
    // static field const value: static public System.ParseFlags HaveTime
    static constexpr const int HaveTime = 64;
    // Get static field: static public System.ParseFlags HaveTime
    static System::ParseFlags _get_HaveTime();
    // Set static field: static public System.ParseFlags HaveTime
    static void _set_HaveTime(System::ParseFlags value);
    // static field const value: static public System.ParseFlags HaveDate
    static constexpr const int HaveDate = 128;
    // Get static field: static public System.ParseFlags HaveDate
    static System::ParseFlags _get_HaveDate();
    // Set static field: static public System.ParseFlags HaveDate
    static void _set_HaveDate(System::ParseFlags value);
    // static field const value: static public System.ParseFlags TimeZoneUsed
    static constexpr const int TimeZoneUsed = 256;
    // Get static field: static public System.ParseFlags TimeZoneUsed
    static System::ParseFlags _get_TimeZoneUsed();
    // Set static field: static public System.ParseFlags TimeZoneUsed
    static void _set_TimeZoneUsed(System::ParseFlags value);
    // static field const value: static public System.ParseFlags TimeZoneUtc
    static constexpr const int TimeZoneUtc = 512;
    // Get static field: static public System.ParseFlags TimeZoneUtc
    static System::ParseFlags _get_TimeZoneUtc();
    // Set static field: static public System.ParseFlags TimeZoneUtc
    static void _set_TimeZoneUtc(System::ParseFlags value);
    // static field const value: static public System.ParseFlags ParsedMonthName
    static constexpr const int ParsedMonthName = 1024;
    // Get static field: static public System.ParseFlags ParsedMonthName
    static System::ParseFlags _get_ParsedMonthName();
    // Set static field: static public System.ParseFlags ParsedMonthName
    static void _set_ParsedMonthName(System::ParseFlags value);
    // static field const value: static public System.ParseFlags CaptureOffset
    static constexpr const int CaptureOffset = 2048;
    // Get static field: static public System.ParseFlags CaptureOffset
    static System::ParseFlags _get_CaptureOffset();
    // Set static field: static public System.ParseFlags CaptureOffset
    static void _set_CaptureOffset(System::ParseFlags value);
    // static field const value: static public System.ParseFlags YearDefault
    static constexpr const int YearDefault = 4096;
    // Get static field: static public System.ParseFlags YearDefault
    static System::ParseFlags _get_YearDefault();
    // Set static field: static public System.ParseFlags YearDefault
    static void _set_YearDefault(System::ParseFlags value);
    // static field const value: static public System.ParseFlags Rfc1123Pattern
    static constexpr const int Rfc1123Pattern = 8192;
    // Get static field: static public System.ParseFlags Rfc1123Pattern
    static System::ParseFlags _get_Rfc1123Pattern();
    // Set static field: static public System.ParseFlags Rfc1123Pattern
    static void _set_Rfc1123Pattern(System::ParseFlags value);
    // static field const value: static public System.ParseFlags UtcSortPattern
    static constexpr const int UtcSortPattern = 16384;
    // Get static field: static public System.ParseFlags UtcSortPattern
    static System::ParseFlags _get_UtcSortPattern();
    // Set static field: static public System.ParseFlags UtcSortPattern
    static void _set_UtcSortPattern(System::ParseFlags value);
    // Creating value type constructor for type: ParseFlags
    ParseFlags(int value_ = {}) : value{value_} {}
  }; // System.ParseFlags
}
DEFINE_IL2CPP_ARG_TYPE(System::ParseFlags, "System", "ParseFlags");
#pragma pack(pop)
