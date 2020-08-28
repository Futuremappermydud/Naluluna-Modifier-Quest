// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeType
  class TimeType;
  // Forward declaring type: DateTimeKind
  struct DateTimeKind;
  // Forward declaring type: TimeZoneInfoOptions
  struct TimeZoneInfoOptions;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: Microsoft::Win32
namespace Microsoft::Win32 {
  // Forward declaring type: RegistryKey
  class RegistryKey;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.TimeZoneInfo
  class TimeZoneInfo : public ::Il2CppObject, public System::IEquatable_1<System::TimeZoneInfo*>, public System::Runtime::Serialization::ISerializable, public System::Runtime::Serialization::IDeserializationCallback {
    public:
    // Nested type: System::TimeZoneInfo::AdjustmentRule
    class AdjustmentRule;
    // Nested type: System::TimeZoneInfo::TransitionTime
    struct TransitionTime;
    // Nested type: System::TimeZoneInfo::SYSTEMTIME
    struct SYSTEMTIME;
    // Nested type: System::TimeZoneInfo::TIME_ZONE_INFORMATION
    struct TIME_ZONE_INFORMATION;
    // Nested type: System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION
    struct DYNAMIC_TIME_ZONE_INFORMATION;
    // Nested type: System::TimeZoneInfo::$$c
    class $$c;
    // private System.TimeSpan baseUtcOffset
    // Offset: 0x10
    System::TimeSpan baseUtcOffset;
    // private System.String daylightDisplayName
    // Offset: 0x18
    ::Il2CppString* daylightDisplayName;
    // private System.String displayName
    // Offset: 0x20
    ::Il2CppString* displayName;
    // private System.String id
    // Offset: 0x28
    ::Il2CppString* id;
    // private System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeType>> transitions
    // Offset: 0x30
    System::Collections::Generic::List_1<System::Collections::Generic::KeyValuePair_2<System::DateTime, System::TimeType*>>* transitions;
    // private System.String standardDisplayName
    // Offset: 0x38
    ::Il2CppString* standardDisplayName;
    // private System.Boolean supportsDaylightSavingTime
    // Offset: 0x40
    bool supportsDaylightSavingTime;
    // private System.TimeZoneInfo/AdjustmentRule[] adjustmentRules
    // Offset: 0x48
    ::Array<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules;
    // Get static field: static private System.TimeZoneInfo local
    static System::TimeZoneInfo* _get_local();
    // Set static field: static private System.TimeZoneInfo local
    static void _set_local(System::TimeZoneInfo* value);
    // Get static field: static private System.Boolean readlinkNotFound
    static bool _get_readlinkNotFound();
    // Set static field: static private System.Boolean readlinkNotFound
    static void _set_readlinkNotFound(bool value);
    // Get static field: static private System.TimeZoneInfo utc
    static System::TimeZoneInfo* _get_utc();
    // Set static field: static private System.TimeZoneInfo utc
    static void _set_utc(System::TimeZoneInfo* value);
    // Get static field: static private System.String timeZoneDirectory
    static ::Il2CppString* _get_timeZoneDirectory();
    // Set static field: static private System.String timeZoneDirectory
    static void _set_timeZoneDirectory(::Il2CppString* value);
    // Get static field: static private Microsoft.Win32.RegistryKey timeZoneKey
    static Microsoft::Win32::RegistryKey* _get_timeZoneKey();
    // Set static field: static private Microsoft.Win32.RegistryKey timeZoneKey
    static void _set_timeZoneKey(Microsoft::Win32::RegistryKey* value);
    // Get static field: static private Microsoft.Win32.RegistryKey localZoneKey
    static Microsoft::Win32::RegistryKey* _get_localZoneKey();
    // Set static field: static private Microsoft.Win32.RegistryKey localZoneKey
    static void _set_localZoneKey(Microsoft::Win32::RegistryKey* value);
    // Get static field: static private System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo> systemTimeZones
    static System::Collections::ObjectModel::ReadOnlyCollection_1<System::TimeZoneInfo*>* _get_systemTimeZones();
    // Set static field: static private System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo> systemTimeZones
    static void _set_systemTimeZones(System::Collections::ObjectModel::ReadOnlyCollection_1<System::TimeZoneInfo*>* value);
    // static System.Boolean UtcOffsetOutOfRange(System.TimeSpan offset)
    // Offset: 0xCF18C4
    static bool UtcOffsetOutOfRange(System::TimeSpan offset);
    // static private System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule> CreateAdjustmentRule(System.Int32 year, System.Int64[] data, System.String[] names, System.String standardNameCurrentYear, System.String daylightNameCurrentYear)
    // Offset: 0xCF18F4
    static System::Collections::Generic::List_1<System::TimeZoneInfo::AdjustmentRule*>* CreateAdjustmentRule(int year, ::Array<int64_t>*& data, ::Array<::Il2CppString*>*& names, ::Il2CppString* standardNameCurrentYear, ::Il2CppString* daylightNameCurrentYear);
    // static private System.TimeZoneInfo CreateLocalUnity()
    // Offset: 0xCF1FEC
    static System::TimeZoneInfo* CreateLocalUnity();
    // static System.UInt32 EnumDynamicTimeZoneInformation(System.UInt32 dwIndex, System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION lpTimeZoneInformation)
    // Offset: 0xCF2488
    static uint EnumDynamicTimeZoneInformation(uint dwIndex, System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& lpTimeZoneInformation);
    // static System.UInt32 GetDynamicTimeZoneInformation(System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION pTimeZoneInformation)
    // Offset: 0xCF2578
    static uint GetDynamicTimeZoneInformation(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& pTimeZoneInformation);
    // static System.UInt32 GetDynamicTimeZoneInformationWin32(System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION pTimeZoneInformation)
    // Offset: 0xCF2658
    static uint GetDynamicTimeZoneInformationWin32(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& pTimeZoneInformation);
    // static System.UInt32 GetDynamicTimeZoneInformationEffectiveYears(System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION lpTimeZoneInformation, System.UInt32 FirstYear, System.UInt32 LastYear)
    // Offset: 0xCF2738
    static uint GetDynamicTimeZoneInformationEffectiveYears(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& lpTimeZoneInformation, uint& FirstYear, uint& LastYear);
    // static System.Boolean GetTimeZoneInformationForYear(System.UInt16 wYear, System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION pdtzi, System.TimeZoneInfo/TIME_ZONE_INFORMATION ptzi)
    // Offset: 0xCF283C
    static bool GetTimeZoneInformationForYear(uint16_t wYear, System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& pdtzi, System::TimeZoneInfo::TIME_ZONE_INFORMATION& ptzi);
    // static System.TimeZoneInfo/AdjustmentRule CreateAdjustmentRuleFromTimeZoneInformation(System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation, System.DateTime startDate, System.DateTime endDate, System.Int32 defaultBaseUtcOffset)
    // Offset: 0xCF2994
    static System::TimeZoneInfo::AdjustmentRule* CreateAdjustmentRuleFromTimeZoneInformation(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION& timeZoneInformation, System::DateTime startDate, System::DateTime endDate, int defaultBaseUtcOffset);
    // static private System.Boolean TransitionTimeFromTimeZoneInformation(System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation, System.TimeZoneInfo/TransitionTime transitionTime, System.Boolean readStartDate)
    // Offset: 0xCF2C28
    static bool TransitionTimeFromTimeZoneInformation(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation, System::TimeZoneInfo::TransitionTime& transitionTime, bool readStartDate);
    // static System.TimeZoneInfo TryCreateTimeZone(System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation)
    // Offset: 0xCF2DBC
    static System::TimeZoneInfo* TryCreateTimeZone(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation);
    // static System.TimeZoneInfo GetLocalTimeZoneInfoWinRTFallback()
    // Offset: 0xCF3744
    static System::TimeZoneInfo* GetLocalTimeZoneInfoWinRTFallback();
    // static System.String GetLocalTimeZoneKeyNameWin32Fallback()
    // Offset: 0xCF38F0
    static ::Il2CppString* GetLocalTimeZoneKeyNameWin32Fallback();
    // static System.TimeZoneInfo FindSystemTimeZoneByIdWinRTFallback(System.String id)
    // Offset: 0xCF3A00
    static System::TimeZoneInfo* FindSystemTimeZoneByIdWinRTFallback(::Il2CppString* id);
    // static System.Collections.Generic.List`1<System.TimeZoneInfo> GetSystemTimeZonesWinRTFallback()
    // Offset: 0xCF3D80
    static System::Collections::Generic::List_1<System::TimeZoneInfo*>* GetSystemTimeZonesWinRTFallback();
    // public System.TimeSpan get_BaseUtcOffset()
    // Offset: 0xCF3FB4
    System::TimeSpan get_BaseUtcOffset();
    // public System.String get_DisplayName()
    // Offset: 0xCF3FBC
    ::Il2CppString* get_DisplayName();
    // public System.String get_Id()
    // Offset: 0xCF3FC4
    ::Il2CppString* get_Id();
    // static public System.TimeZoneInfo get_Local()
    // Offset: 0xCF3EFC
    static System::TimeZoneInfo* get_Local();
    // static private System.Int32 readlink(System.String path, System.Byte[] buffer, System.Int32 buflen)
    // Offset: 0xCF44A8
    static int readlink(::Il2CppString* path, ::Array<uint8_t>* buffer, int buflen);
    // static private System.String readlink(System.String path)
    // Offset: 0xCF4560
    static ::Il2CppString* readlink(::Il2CppString* path);
    // static private System.Boolean TryGetNameFromPath(System.String path, System.String name)
    // Offset: 0xCF4710
    static bool TryGetNameFromPath(::Il2CppString* path, ::Il2CppString*& name);
    // static private System.TimeZoneInfo CreateLocal()
    // Offset: 0xCF3FCC
    static System::TimeZoneInfo* CreateLocal();
    // static private System.TimeZoneInfo FindSystemTimeZoneByIdCore(System.String id)
    // Offset: 0xCF4FF4
    static System::TimeZoneInfo* FindSystemTimeZoneByIdCore(::Il2CppString* id);
    // static private System.Void GetSystemTimeZonesCore(System.Collections.Generic.List`1<System.TimeZoneInfo> systemTimeZones)
    // Offset: 0xCF5078
    static void GetSystemTimeZonesCore(System::Collections::Generic::List_1<System::TimeZoneInfo*>* systemTimeZones);
    // public System.Boolean get_SupportsDaylightSavingTime()
    // Offset: 0xCF5B84
    bool get_SupportsDaylightSavingTime();
    // static public System.TimeZoneInfo get_Utc()
    // Offset: 0xCF3850
    static System::TimeZoneInfo* get_Utc();
    // static private System.String get_TimeZoneDirectory()
    // Offset: 0xCF4970
    static ::Il2CppString* get_TimeZoneDirectory();
    // static private System.Boolean get_IsWindows()
    // Offset: 0xCF49E8
    static bool get_IsWindows();
    // static private System.String TrimSpecial(System.String str)
    // Offset: 0xCF4B78
    static ::Il2CppString* TrimSpecial(::Il2CppString* str);
    // static private Microsoft.Win32.RegistryKey get_TimeZoneKey()
    // Offset: 0xCF5A40
    static Microsoft::Win32::RegistryKey* get_TimeZoneKey();
    // static private Microsoft.Win32.RegistryKey get_LocalZoneKey()
    // Offset: 0xCF4A34
    static Microsoft::Win32::RegistryKey* get_LocalZoneKey();
    // static private System.Boolean TryAddTicks(System.DateTime date, System.Int64 ticks, System.DateTime result, System.DateTimeKind kind)
    // Offset: 0xCF5B9C
    static bool TryAddTicks(System::DateTime date, int64_t ticks, System::DateTime& result, System::DateTimeKind kind);
    // static public System.DateTime ConvertTime(System.DateTime dateTime, System.TimeZoneInfo sourceTimeZone, System.TimeZoneInfo destinationTimeZone)
    // Offset: 0xCF5D18
    static System::DateTime ConvertTime(System::DateTime dateTime, System::TimeZoneInfo* sourceTimeZone, System::TimeZoneInfo* destinationTimeZone);
    // private System.DateTime ConvertTimeFromUtc(System.DateTime dateTime)
    // Offset: 0xCF6118
    System::DateTime ConvertTimeFromUtc(System::DateTime dateTime);
    // static public System.DateTime ConvertTimeFromUtc(System.DateTime dateTime, System.TimeZoneInfo destinationTimeZone)
    // Offset: 0xCF6084
    static System::DateTime ConvertTimeFromUtc(System::DateTime dateTime, System::TimeZoneInfo* destinationTimeZone);
    // static System.DateTime ConvertTimeToUtc(System.DateTime dateTime, System.TimeZoneInfoOptions flags)
    // Offset: 0xCF629C
    static System::DateTime ConvertTimeToUtc(System::DateTime dateTime, System::TimeZoneInfoOptions flags);
    // static public System.DateTime ConvertTimeToUtc(System.DateTime dateTime, System.TimeZoneInfo sourceTimeZone)
    // Offset: 0xCF607C
    static System::DateTime ConvertTimeToUtc(System::DateTime dateTime, System::TimeZoneInfo* sourceTimeZone);
    // static private System.DateTime ConvertTimeToUtc(System.DateTime dateTime, System.TimeZoneInfo sourceTimeZone, System.TimeZoneInfoOptions flags)
    // Offset: 0xCF62CC
    static System::DateTime ConvertTimeToUtc(System::DateTime dateTime, System::TimeZoneInfo* sourceTimeZone, System::TimeZoneInfoOptions flags);
    // static System.TimeSpan GetDateTimeNowUtcOffsetFromUtc(System.DateTime time, System.Boolean isAmbiguousLocalDst)
    // Offset: 0xCF653C
    static System::TimeSpan GetDateTimeNowUtcOffsetFromUtc(System::DateTime time, bool& isAmbiguousLocalDst);
    // static public System.TimeZoneInfo CreateCustomTimeZone(System.String id, System.TimeSpan baseUtcOffset, System.String displayName, System.String standardDisplayName)
    // Offset: 0xCF5B8C
    static System::TimeZoneInfo* CreateCustomTimeZone(::Il2CppString* id, System::TimeSpan baseUtcOffset, ::Il2CppString* displayName, ::Il2CppString* standardDisplayName);
    // static public System.TimeZoneInfo CreateCustomTimeZone(System.String id, System.TimeSpan baseUtcOffset, System.String displayName, System.String standardDisplayName, System.String daylightDisplayName, System.TimeZoneInfo/AdjustmentRule[] adjustmentRules)
    // Offset: 0xCF65E4
    static System::TimeZoneInfo* CreateCustomTimeZone(::Il2CppString* id, System::TimeSpan baseUtcOffset, ::Il2CppString* displayName, ::Il2CppString* standardDisplayName, ::Il2CppString* daylightDisplayName, ::Array<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules);
    // static public System.TimeZoneInfo CreateCustomTimeZone(System.String id, System.TimeSpan baseUtcOffset, System.String displayName, System.String standardDisplayName, System.String daylightDisplayName, System.TimeZoneInfo/AdjustmentRule[] adjustmentRules, System.Boolean disableDaylightSavingTime)
    // Offset: 0xCF23D8
    static System::TimeZoneInfo* CreateCustomTimeZone(::Il2CppString* id, System::TimeSpan baseUtcOffset, ::Il2CppString* displayName, ::Il2CppString* standardDisplayName, ::Il2CppString* daylightDisplayName, ::Array<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules, bool disableDaylightSavingTime);
    // static public System.TimeZoneInfo FindSystemTimeZoneById(System.String id)
    // Offset: 0xCF4CEC
    static System::TimeZoneInfo* FindSystemTimeZoneById(::Il2CppString* id);
    // static private System.TimeZoneInfo FindSystemTimeZoneByFileName(System.String id, System.String filepath)
    // Offset: 0xCF4E38
    static System::TimeZoneInfo* FindSystemTimeZoneByFileName(::Il2CppString* id, ::Il2CppString* filepath);
    // static private System.TimeZoneInfo FromRegistryKey(System.String id, Microsoft.Win32.RegistryKey key)
    // Offset: 0xCF6838
    static System::TimeZoneInfo* FromRegistryKey(::Il2CppString* id, Microsoft::Win32::RegistryKey* key);
    // static private System.Void ParseRegTzi(System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule> adjustmentRules, System.Int32 start_year, System.Int32 end_year, System.Byte[] buffer)
    // Offset: 0xCF6D60
    static void ParseRegTzi(System::Collections::Generic::List_1<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules, int start_year, int end_year, ::Array<uint8_t>* buffer);
    // public System.TimeZoneInfo/AdjustmentRule[] GetAdjustmentRules()
    // Offset: 0xCF7290
    ::Array<System::TimeZoneInfo::AdjustmentRule*>* GetAdjustmentRules();
    // static public System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo> GetSystemTimeZones()
    // Offset: 0xCF3CAC
    static System::Collections::ObjectModel::ReadOnlyCollection_1<System::TimeZoneInfo*>* GetSystemTimeZones();
    // public System.TimeSpan GetUtcOffset(System.DateTime dateTime)
    // Offset: 0xCF6278
    System::TimeSpan GetUtcOffset(System::DateTime dateTime);
    // private System.TimeSpan GetUtcOffset(System.DateTime dateTime, System.Boolean isDST)
    // Offset: 0xCF646C
    System::TimeSpan GetUtcOffset(System::DateTime dateTime, bool& isDST);
    // static private System.TimeSpan GetUtcOffsetHelper(System.DateTime dateTime, System.TimeZoneInfo tz, System.Boolean isDST)
    // Offset: 0xCF7538
    static System::TimeSpan GetUtcOffsetHelper(System::DateTime dateTime, System::TimeZoneInfo* tz, bool& isDST);
    // public System.Boolean HasSameRules(System.TimeZoneInfo other)
    // Offset: 0xCF66B0
    bool HasSameRules(System::TimeZoneInfo* other);
    // public System.Boolean IsAmbiguousTime(System.DateTime dateTime)
    // Offset: 0xCF7C4C
    bool IsAmbiguousTime(System::DateTime dateTime);
    // private System.Boolean IsInDST(System.TimeZoneInfo/AdjustmentRule rule, System.DateTime dateTime)
    // Offset: 0xCF7BAC
    bool IsInDST(System::TimeZoneInfo::AdjustmentRule* rule, System::DateTime dateTime);
    // private System.Boolean IsInDSTForYear(System.TimeZoneInfo/AdjustmentRule rule, System.DateTime dateTime, System.Int32 year)
    // Offset: 0xCF7FFC
    bool IsInDSTForYear(System::TimeZoneInfo::AdjustmentRule* rule, System::DateTime dateTime, int year);
    // public System.Boolean IsInvalidTime(System.DateTime dateTime)
    // Offset: 0xCF5F28
    bool IsInvalidTime(System::DateTime dateTime);
    // static private System.Void Validate(System.String id, System.TimeSpan baseUtcOffset, System.TimeZoneInfo/AdjustmentRule[] adjustmentRules)
    // Offset: 0xCF8330
    static void Validate(::Il2CppString* id, System::TimeSpan baseUtcOffset, ::Array<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xCF8768
    static TimeZoneInfo* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Void .ctor(System.String id, System.TimeSpan baseUtcOffset, System.String displayName, System.String standardDisplayName, System.String daylightDisplayName, System.TimeZoneInfo/AdjustmentRule[] adjustmentRules, System.Boolean disableDaylightSavingTime)
    // Offset: 0xCF3260
    static TimeZoneInfo* New_ctor(::Il2CppString* id, System::TimeSpan baseUtcOffset, ::Il2CppString* displayName, ::Il2CppString* standardDisplayName, ::Il2CppString* daylightDisplayName, ::Array<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules, bool disableDaylightSavingTime);
    // private System.TimeZoneInfo/AdjustmentRule GetApplicableRule(System.DateTime dateTime)
    // Offset: 0xCF79F0
    System::TimeZoneInfo::AdjustmentRule* GetApplicableRule(System::DateTime dateTime);
    // private System.Boolean TryGetTransitionOffset(System.DateTime dateTime, System.TimeSpan offset, System.Boolean isDst)
    // Offset: 0xCF77D0
    bool TryGetTransitionOffset(System::DateTime dateTime, System::TimeSpan& offset, bool& isDst);
    // static private System.DateTime TransitionPoint(System.TimeZoneInfo/TransitionTime transition, System.Int32 year)
    // Offset: 0xCF7E38
    static System::DateTime TransitionPoint(System::TimeZoneInfo::TransitionTime transition, int year);
    // static private System.TimeZoneInfo/AdjustmentRule[] ValidateRules(System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule> adjustmentRules)
    // Offset: 0xCF714C
    static ::Array<System::TimeZoneInfo::AdjustmentRule*>* ValidateRules(System::Collections::Generic::List_1<System::TimeZoneInfo::AdjustmentRule*>* adjustmentRules);
    // static private System.TimeZoneInfo BuildFromStream(System.String id, System.IO.Stream stream)
    // Offset: 0xCF6BAC
    static System::TimeZoneInfo* BuildFromStream(::Il2CppString* id, System::IO::Stream* stream);
    // static private System.Boolean ValidTZFile(System.Byte[] buffer, System.Int32 length)
    // Offset: 0xCF8AB4
    static bool ValidTZFile(::Array<uint8_t>* buffer, int length);
    // static private System.Int32 SwapInt32(System.Int32 i)
    // Offset: 0xCF94A0
    static int SwapInt32(int i);
    // static private System.Int32 ReadBigEndianInt32(System.Byte[] buffer, System.Int32 start)
    // Offset: 0xCF94A8
    static int ReadBigEndianInt32(::Array<uint8_t>* buffer, int start);
    // static private System.TimeZoneInfo ParseTZBuffer(System.String id, System.Byte[] buffer, System.Int32 length)
    // Offset: 0xCF8BA4
    static System::TimeZoneInfo* ParseTZBuffer(::Il2CppString* id, ::Array<uint8_t>* buffer, int length);
    // static private System.Collections.Generic.Dictionary`2<System.Int32,System.String> ParseAbbreviations(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0xCF953C
    static System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>* ParseAbbreviations(::Array<uint8_t>* buffer, int index, int count);
    // static private System.Collections.Generic.Dictionary`2<System.Int32,System.TimeType> ParseTimesTypes(System.Byte[] buffer, System.Int32 index, System.Int32 count, System.Collections.Generic.Dictionary`2<System.Int32,System.String> abbreviations)
    // Offset: 0xCF970C
    static System::Collections::Generic::Dictionary_2<int, System::TimeType*>* ParseTimesTypes(::Array<uint8_t>* buffer, int index, int count, System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>* abbreviations);
    // static private System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeType>> ParseTransitions(System.Byte[] buffer, System.Int32 index, System.Int32 count, System.Collections.Generic.Dictionary`2<System.Int32,System.TimeType> time_types)
    // Offset: 0xCF98B0
    static System::Collections::Generic::List_1<System::Collections::Generic::KeyValuePair_2<System::DateTime, System::TimeType*>>* ParseTransitions(::Array<uint8_t>* buffer, int index, int count, System::Collections::Generic::Dictionary_2<int, System::TimeType*>* time_types);
    // static private System.DateTime DateTimeFromUnixTime(System.Int64 unix_time)
    // Offset: 0xCF9A0C
    static System::DateTime DateTimeFromUnixTime(int64_t unix_time);
    // static System.TimeSpan GetLocalUtcOffset(System.DateTime dateTime, System.TimeZoneInfoOptions flags)
    // Offset: 0xCF9A54
    static System::TimeSpan GetLocalUtcOffset(System::DateTime dateTime, System::TimeZoneInfoOptions flags);
    // System.TimeSpan GetUtcOffset(System.DateTime dateTime, System.TimeZoneInfoOptions flags)
    // Offset: 0xCF9A8C
    System::TimeSpan GetUtcOffset(System::DateTime dateTime, System::TimeZoneInfoOptions flags);
    // static System.TimeSpan GetUtcOffsetFromUtc(System.DateTime time, System.TimeZoneInfo zone, System.Boolean isDaylightSavings, System.Boolean isAmbiguousLocalDst)
    // Offset: 0xCF6580
    static System::TimeSpan GetUtcOffsetFromUtc(System::DateTime time, System::TimeZoneInfo* zone, bool& isDaylightSavings, bool& isAmbiguousLocalDst);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xCF65EC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(System.TimeZoneInfo other)
    // Offset: 0xCF6660
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(System.TimeZoneInfo other)
    bool Equals(System::TimeZoneInfo* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xCF7328
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xCF73CC
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object sender)
    // Offset: 0xCF8234
    // Implemented from: System.Runtime.Serialization.IDeserializationCallback
    // Base method: System.Void IDeserializationCallback::OnDeserialization(System.Object sender)
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
    // public override System.String ToString()
    // Offset: 0xCF8760
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // System.Void .ctor()
    // Offset: 0xCF9AB0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TimeZoneInfo* New_ctor();
  }; // System.TimeZoneInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::TimeZoneInfo*, "System", "TimeZoneInfo");
#pragma pack(pop)
