// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:25 PM
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
  // Forward declaring type: TypeCode
  struct TypeCode;
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: IConvertible
  class IConvertible;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Decimal
  struct Decimal;
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: Base64FormattingOptions
  struct Base64FormattingOptions;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Convert
  class Convert : public ::Il2CppObject {
    public:
    // Get static field: static readonly System.RuntimeType[] ConvertTypes
    static ::Array<System::RuntimeType*>* _get_ConvertTypes();
    // Set static field: static readonly System.RuntimeType[] ConvertTypes
    static void _set_ConvertTypes(::Array<System::RuntimeType*>* value);
    // Get static field: static private readonly System.RuntimeType EnumType
    static System::RuntimeType* _get_EnumType();
    // Set static field: static private readonly System.RuntimeType EnumType
    static void _set_EnumType(System::RuntimeType* value);
    // Get static field: static readonly System.Char[] base64Table
    static ::Array<::Il2CppChar>* _get_base64Table();
    // Set static field: static readonly System.Char[] base64Table
    static void _set_base64Table(::Array<::Il2CppChar>* value);
    // Get static field: static public readonly System.Object DBNull
    static ::Il2CppObject* _get_DBNull();
    // Set static field: static public readonly System.Object DBNull
    static void _set_DBNull(::Il2CppObject* value);
    // static public System.TypeCode GetTypeCode(System.Object value)
    // Offset: 0x10AF7D4
    static System::TypeCode GetTypeCode(::Il2CppObject* value);
    // static public System.Object ChangeType(System.Object value, System.TypeCode typeCode, System.IFormatProvider provider)
    // Offset: 0x10AF8A8
    static ::Il2CppObject* ChangeType(::Il2CppObject* value, System::TypeCode typeCode, System::IFormatProvider* provider);
    // static System.Object DefaultToType(System.IConvertible value, System.Type targetType, System.IFormatProvider provider)
    // Offset: 0x10B012C
    static ::Il2CppObject* DefaultToType(System::IConvertible* value, System::Type* targetType, System::IFormatProvider* provider);
    // static public System.Object ChangeType(System.Object value, System.Type conversionType, System.IFormatProvider provider)
    // Offset: 0x10B1314
    static ::Il2CppObject* ChangeType(::Il2CppObject* value, System::Type* conversionType, System::IFormatProvider* provider);
    // static public System.Boolean ToBoolean(System.Object value, System.IFormatProvider provider)
    // Offset: 0x10B22FC
    static bool ToBoolean(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.Boolean ToBoolean(System.SByte value)
    // Offset: 0x10B2410
    static bool ToBoolean(int8_t value);
    // static public System.Boolean ToBoolean(System.Byte value)
    // Offset: 0x10B241C
    static bool ToBoolean(uint8_t value);
    // static public System.Boolean ToBoolean(System.Int16 value)
    // Offset: 0x10B2428
    static bool ToBoolean(int16_t value);
    // static public System.Boolean ToBoolean(System.UInt16 value)
    // Offset: 0x10B2434
    static bool ToBoolean(uint16_t value);
    // static public System.Boolean ToBoolean(System.Int32 value)
    // Offset: 0x10B2440
    static bool ToBoolean(int value);
    // static public System.Boolean ToBoolean(System.UInt32 value)
    // Offset: 0x10B244C
    static bool ToBoolean(uint value);
    // static public System.Boolean ToBoolean(System.Int64 value)
    // Offset: 0x10B2458
    static bool ToBoolean(int64_t value);
    // static public System.Boolean ToBoolean(System.UInt64 value)
    // Offset: 0x10B2464
    static bool ToBoolean(uint64_t value);
    // static public System.Boolean ToBoolean(System.String value)
    // Offset: 0x10B2470
    static bool ToBoolean(::Il2CppString* value);
    // static public System.Boolean ToBoolean(System.String value, System.IFormatProvider provider)
    // Offset: 0x10B24EC
    static bool ToBoolean(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.Boolean ToBoolean(System.Single value)
    // Offset: 0x10B2568
    static bool ToBoolean(float value);
    // static public System.Boolean ToBoolean(System.Double value)
    // Offset: 0x10B2574
    static bool ToBoolean(double value);
    // static public System.Boolean ToBoolean(System.Decimal value)
    // Offset: 0x10B2580
    static bool ToBoolean(System::Decimal value);
    // static public System.Char ToChar(System.Object value, System.IFormatProvider provider)
    // Offset: 0x10B2604
    static ::Il2CppChar ToChar(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.Char ToChar(System.SByte value)
    // Offset: 0x10B2718
    static ::Il2CppChar ToChar(int8_t value);
    // static public System.Char ToChar(System.Byte value)
    // Offset: 0x10B27B0
    static ::Il2CppChar ToChar(uint8_t value);
    // static public System.Char ToChar(System.Int16 value)
    // Offset: 0x10B27B8
    static ::Il2CppChar ToChar(int16_t value);
    // static public System.Char ToChar(System.UInt16 value)
    // Offset: 0x10B2854
    static ::Il2CppChar ToChar(uint16_t value);
    // static public System.Char ToChar(System.Int32 value)
    // Offset: 0x10B2858
    static ::Il2CppChar ToChar(int value);
    // static public System.Char ToChar(System.UInt32 value)
    // Offset: 0x10B28F4
    static ::Il2CppChar ToChar(uint value);
    // static public System.Char ToChar(System.Int64 value)
    // Offset: 0x10B2990
    static ::Il2CppChar ToChar(int64_t value);
    // static public System.Char ToChar(System.UInt64 value)
    // Offset: 0x10B2A2C
    static ::Il2CppChar ToChar(uint64_t value);
    // static public System.Char ToChar(System.String value, System.IFormatProvider provider)
    // Offset: 0x10B2AC8
    static ::Il2CppChar ToChar(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.SByte ToSByte(System.Object value, System.IFormatProvider provider)
    // Offset: 0x10B2BB0
    static int8_t ToSByte(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.SByte ToSByte(System.Boolean value)
    // Offset: 0x10B2CC4
    static int8_t ToSByte(bool value);
    // static public System.SByte ToSByte(System.Char value)
    // Offset: 0x10B2CCC
    static int8_t ToSByte(::Il2CppChar value);
    // static public System.SByte ToSByte(System.Byte value)
    // Offset: 0x10B2D6C
    static int8_t ToSByte(uint8_t value);
    // static public System.SByte ToSByte(System.Int16 value)
    // Offset: 0x10B2E08
    static int8_t ToSByte(int16_t value);
    // static public System.SByte ToSByte(System.UInt16 value)
    // Offset: 0x10B2EAC
    static int8_t ToSByte(uint16_t value);
    // static public System.SByte ToSByte(System.Int32 value)
    // Offset: 0x10B2F4C
    static int8_t ToSByte(int value);
    // static public System.SByte ToSByte(System.UInt32 value)
    // Offset: 0x10B2FEC
    static int8_t ToSByte(uint value);
    // static public System.SByte ToSByte(System.Int64 value)
    // Offset: 0x10B3088
    static int8_t ToSByte(int64_t value);
    // static public System.SByte ToSByte(System.UInt64 value)
    // Offset: 0x10B3128
    static int8_t ToSByte(uint64_t value);
    // static public System.SByte ToSByte(System.Single value)
    // Offset: 0x10B31C4
    static int8_t ToSByte(float value);
    // static public System.SByte ToSByte(System.Double value)
    // Offset: 0x10B3230
    static int8_t ToSByte(double value);
    // static public System.SByte ToSByte(System.Decimal value)
    // Offset: 0x10B33B4
    static int8_t ToSByte(System::Decimal value);
    // static public System.SByte ToSByte(System.String value, System.IFormatProvider provider)
    // Offset: 0x10B3438
    static int8_t ToSByte(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.Byte ToByte(System.Object value, System.IFormatProvider provider)
    // Offset: 0x10B3448
    static uint8_t ToByte(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.Byte ToByte(System.Boolean value)
    // Offset: 0x10B355C
    static uint8_t ToByte(bool value);
    // static public System.Byte ToByte(System.Char value)
    // Offset: 0x10B3564
    static uint8_t ToByte(::Il2CppChar value);
    // static public System.Byte ToByte(System.SByte value)
    // Offset: 0x10B3604
    static uint8_t ToByte(int8_t value);
    // static public System.Byte ToByte(System.Int16 value)
    // Offset: 0x10B36A0
    static uint8_t ToByte(int16_t value);
    // static public System.Byte ToByte(System.UInt16 value)
    // Offset: 0x10B3740
    static uint8_t ToByte(uint16_t value);
    // static public System.Byte ToByte(System.Int32 value)
    // Offset: 0x10B37E0
    static uint8_t ToByte(int value);
    // static public System.Byte ToByte(System.UInt32 value)
    // Offset: 0x10B387C
    static uint8_t ToByte(uint value);
    // static public System.Byte ToByte(System.Int64 value)
    // Offset: 0x10B3918
    static uint8_t ToByte(int64_t value);
    // static public System.Byte ToByte(System.UInt64 value)
    // Offset: 0x10B39B4
    static uint8_t ToByte(uint64_t value);
    // static public System.Byte ToByte(System.Single value)
    // Offset: 0x10B3A50
    static uint8_t ToByte(float value);
    // static public System.Byte ToByte(System.Double value)
    // Offset: 0x10B3ABC
    static uint8_t ToByte(double value);
    // static public System.Byte ToByte(System.Decimal value)
    // Offset: 0x10B3B2C
    static uint8_t ToByte(System::Decimal value);
    // static public System.Byte ToByte(System.String value)
    // Offset: 0x10B3BB0
    static uint8_t ToByte(::Il2CppString* value);
    // static public System.Byte ToByte(System.String value, System.IFormatProvider provider)
    // Offset: 0x10B3C38
    static uint8_t ToByte(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.Int16 ToInt16(System.Object value, System.IFormatProvider provider)
    // Offset: 0x10B3C50
    static int16_t ToInt16(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.Int16 ToInt16(System.Boolean value)
    // Offset: 0x10B3D64
    static int16_t ToInt16(bool value);
    // static public System.Int16 ToInt16(System.Char value)
    // Offset: 0x10B3D6C
    static int16_t ToInt16(::Il2CppChar value);
    // static public System.Int16 ToInt16(System.SByte value)
    // Offset: 0x10B3E08
    static int16_t ToInt16(int8_t value);
    // static public System.Int16 ToInt16(System.Byte value)
    // Offset: 0x10B3E10
    static int16_t ToInt16(uint8_t value);
    // static public System.Int16 ToInt16(System.UInt16 value)
    // Offset: 0x10B3E18
    static int16_t ToInt16(uint16_t value);
    // static public System.Int16 ToInt16(System.Int32 value)
    // Offset: 0x10B3EB4
    static int16_t ToInt16(int value);
    // static public System.Int16 ToInt16(System.UInt32 value)
    // Offset: 0x10B3F54
    static int16_t ToInt16(uint value);
    // static public System.Int16 ToInt16(System.Int64 value)
    // Offset: 0x10B3FF0
    static int16_t ToInt16(int64_t value);
    // static public System.Int16 ToInt16(System.UInt64 value)
    // Offset: 0x10B4090
    static int16_t ToInt16(uint64_t value);
    // static public System.Int16 ToInt16(System.Single value)
    // Offset: 0x10B412C
    static int16_t ToInt16(float value);
    // static public System.Int16 ToInt16(System.Double value)
    // Offset: 0x10B4198
    static int16_t ToInt16(double value);
    // static public System.Int16 ToInt16(System.Decimal value)
    // Offset: 0x10B4208
    static int16_t ToInt16(System::Decimal value);
    // static public System.Int16 ToInt16(System.String value, System.IFormatProvider provider)
    // Offset: 0x10B428C
    static int16_t ToInt16(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.UInt16 ToUInt16(System.Object value, System.IFormatProvider provider)
    // Offset: 0x10B42A4
    static uint16_t ToUInt16(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.UInt16 ToUInt16(System.Boolean value)
    // Offset: 0x10B43B8
    static uint16_t ToUInt16(bool value);
    // static public System.UInt16 ToUInt16(System.Char value)
    // Offset: 0x10B43C0
    static uint16_t ToUInt16(::Il2CppChar value);
    // static public System.UInt16 ToUInt16(System.SByte value)
    // Offset: 0x10B43C4
    static uint16_t ToUInt16(int8_t value);
    // static public System.UInt16 ToUInt16(System.Byte value)
    // Offset: 0x10B445C
    static uint16_t ToUInt16(uint8_t value);
    // static public System.UInt16 ToUInt16(System.Int16 value)
    // Offset: 0x10B4464
    static uint16_t ToUInt16(int16_t value);
    // static public System.UInt16 ToUInt16(System.Int32 value)
    // Offset: 0x10B4500
    static uint16_t ToUInt16(int value);
    // static public System.UInt16 ToUInt16(System.UInt32 value)
    // Offset: 0x10B459C
    static uint16_t ToUInt16(uint value);
    // static public System.UInt16 ToUInt16(System.Int64 value)
    // Offset: 0x10B4638
    static uint16_t ToUInt16(int64_t value);
    // static public System.UInt16 ToUInt16(System.UInt64 value)
    // Offset: 0x10B46D4
    static uint16_t ToUInt16(uint64_t value);
    // static public System.UInt16 ToUInt16(System.Single value)
    // Offset: 0x10B4770
    static uint16_t ToUInt16(float value);
    // static public System.UInt16 ToUInt16(System.Double value)
    // Offset: 0x10B47DC
    static uint16_t ToUInt16(double value);
    // static public System.UInt16 ToUInt16(System.Decimal value)
    // Offset: 0x10B484C
    static uint16_t ToUInt16(System::Decimal value);
    // static public System.UInt16 ToUInt16(System.String value, System.IFormatProvider provider)
    // Offset: 0x10B48D0
    static uint16_t ToUInt16(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.Int32 ToInt32(System.Object value)
    // Offset: 0x10B48E8
    static int ToInt32(::Il2CppObject* value);
    // static public System.Int32 ToInt32(System.Object value, System.IFormatProvider provider)
    // Offset: 0x10B49F8
    static int ToInt32(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.Int32 ToInt32(System.Boolean value)
    // Offset: 0x10B4B0C
    static int ToInt32(bool value);
    // static public System.Int32 ToInt32(System.Char value)
    // Offset: 0x10B4B14
    static int ToInt32(::Il2CppChar value);
    // static public System.Int32 ToInt32(System.Byte value)
    // Offset: 0x10B4B1C
    static int ToInt32(uint8_t value);
    // static public System.Int32 ToInt32(System.Int16 value)
    // Offset: 0x10B4B24
    static int ToInt32(int16_t value);
    // static public System.Int32 ToInt32(System.UInt16 value)
    // Offset: 0x10B4B2C
    static int ToInt32(uint16_t value);
    // static public System.Int32 ToInt32(System.UInt32 value)
    // Offset: 0x10B4B34
    static int ToInt32(uint value);
    // static public System.Int32 ToInt32(System.Int64 value)
    // Offset: 0x10B4BCC
    static int ToInt32(int64_t value);
    // static public System.Int32 ToInt32(System.UInt64 value)
    // Offset: 0x10B4C6C
    static int ToInt32(uint64_t value);
    // static public System.Int32 ToInt32(System.Single value)
    // Offset: 0x10B4D08
    static int ToInt32(float value);
    // static public System.Int32 ToInt32(System.Double value)
    // Offset: 0x10B32A0
    static int ToInt32(double value);
    // static public System.Int32 ToInt32(System.Decimal value)
    // Offset: 0x10B4D74
    static int ToInt32(System::Decimal value);
    // static public System.Int32 ToInt32(System.String value, System.IFormatProvider provider)
    // Offset: 0x10B4DEC
    static int ToInt32(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.UInt32 ToUInt32(System.Object value)
    // Offset: 0x10B4E04
    static uint ToUInt32(::Il2CppObject* value);
    // static public System.UInt32 ToUInt32(System.Object value, System.IFormatProvider provider)
    // Offset: 0x10B4F14
    static uint ToUInt32(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.UInt32 ToUInt32(System.Boolean value)
    // Offset: 0x10B5028
    static uint ToUInt32(bool value);
    // static public System.UInt32 ToUInt32(System.Char value)
    // Offset: 0x10B5030
    static uint ToUInt32(::Il2CppChar value);
    // static public System.UInt32 ToUInt32(System.SByte value)
    // Offset: 0x10B5038
    static uint ToUInt32(int8_t value);
    // static public System.UInt32 ToUInt32(System.Byte value)
    // Offset: 0x10B50D0
    static uint ToUInt32(uint8_t value);
    // static public System.UInt32 ToUInt32(System.Int16 value)
    // Offset: 0x10B50D8
    static uint ToUInt32(int16_t value);
    // static public System.UInt32 ToUInt32(System.UInt16 value)
    // Offset: 0x10B5170
    static uint ToUInt32(uint16_t value);
    // static public System.UInt32 ToUInt32(System.Int32 value)
    // Offset: 0x10B5178
    static uint ToUInt32(int value);
    // static public System.UInt32 ToUInt32(System.Int64 value)
    // Offset: 0x10B5210
    static uint ToUInt32(int64_t value);
    // static public System.UInt32 ToUInt32(System.UInt64 value)
    // Offset: 0x10B52AC
    static uint ToUInt32(uint64_t value);
    // static public System.UInt32 ToUInt32(System.Single value)
    // Offset: 0x10B5348
    static uint ToUInt32(float value);
    // static public System.UInt32 ToUInt32(System.Double value)
    // Offset: 0x10B53B4
    static uint ToUInt32(double value);
    // static public System.UInt32 ToUInt32(System.Decimal value)
    // Offset: 0x10B549C
    static uint ToUInt32(System::Decimal value);
    // static public System.UInt32 ToUInt32(System.String value, System.IFormatProvider provider)
    // Offset: 0x10B5520
    static uint ToUInt32(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.Int64 ToInt64(System.Object value)
    // Offset: 0x10B5538
    static int64_t ToInt64(::Il2CppObject* value);
    // static public System.Int64 ToInt64(System.Object value, System.IFormatProvider provider)
    // Offset: 0x10B5648
    static int64_t ToInt64(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.Int64 ToInt64(System.Boolean value)
    // Offset: 0x10B575C
    static int64_t ToInt64(bool value);
    // static public System.Int64 ToInt64(System.Char value)
    // Offset: 0x10B5764
    static int64_t ToInt64(::Il2CppChar value);
    // static public System.Int64 ToInt64(System.SByte value)
    // Offset: 0x10B576C
    static int64_t ToInt64(int8_t value);
    // static public System.Int64 ToInt64(System.Byte value)
    // Offset: 0x10B5774
    static int64_t ToInt64(uint8_t value);
    // static public System.Int64 ToInt64(System.Int16 value)
    // Offset: 0x10B577C
    static int64_t ToInt64(int16_t value);
    // static public System.Int64 ToInt64(System.UInt16 value)
    // Offset: 0x10B5784
    static int64_t ToInt64(uint16_t value);
    // static public System.Int64 ToInt64(System.Int32 value)
    // Offset: 0x10B578C
    static int64_t ToInt64(int value);
    // static public System.Int64 ToInt64(System.UInt32 value)
    // Offset: 0x10B5794
    static int64_t ToInt64(uint value);
    // static public System.Int64 ToInt64(System.UInt64 value)
    // Offset: 0x10B579C
    static int64_t ToInt64(uint64_t value);
    // static public System.Int64 ToInt64(System.Single value)
    // Offset: 0x10B5834
    static int64_t ToInt64(float value);
    // static public System.Int64 ToInt64(System.Double value)
    // Offset: 0x10B58A0
    static int64_t ToInt64(double value);
    // static public System.Int64 ToInt64(System.Decimal value)
    // Offset: 0x10B5998
    static int64_t ToInt64(System::Decimal value);
    // static public System.Int64 ToInt64(System.String value)
    // Offset: 0x10B5A1C
    static int64_t ToInt64(::Il2CppString* value);
    // static public System.Int64 ToInt64(System.String value, System.IFormatProvider provider)
    // Offset: 0x10B5AA4
    static int64_t ToInt64(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.UInt64 ToUInt64(System.Object value)
    // Offset: 0x10B5ABC
    static uint64_t ToUInt64(::Il2CppObject* value);
    // static public System.UInt64 ToUInt64(System.Object value, System.IFormatProvider provider)
    // Offset: 0x10B5BCC
    static uint64_t ToUInt64(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.UInt64 ToUInt64(System.Boolean value)
    // Offset: 0x10B5CE0
    static uint64_t ToUInt64(bool value);
    // static public System.UInt64 ToUInt64(System.Char value)
    // Offset: 0x10B5CE8
    static uint64_t ToUInt64(::Il2CppChar value);
    // static public System.UInt64 ToUInt64(System.SByte value)
    // Offset: 0x10B5CF0
    static uint64_t ToUInt64(int8_t value);
    // static public System.UInt64 ToUInt64(System.Byte value)
    // Offset: 0x10B5D8C
    static uint64_t ToUInt64(uint8_t value);
    // static public System.UInt64 ToUInt64(System.Int16 value)
    // Offset: 0x10B5D94
    static uint64_t ToUInt64(int16_t value);
    // static public System.UInt64 ToUInt64(System.UInt16 value)
    // Offset: 0x10B5E30
    static uint64_t ToUInt64(uint16_t value);
    // static public System.UInt64 ToUInt64(System.Int32 value)
    // Offset: 0x10B5E38
    static uint64_t ToUInt64(int value);
    // static public System.UInt64 ToUInt64(System.UInt32 value)
    // Offset: 0x10B5ED0
    static uint64_t ToUInt64(uint value);
    // static public System.UInt64 ToUInt64(System.Int64 value)
    // Offset: 0x10B5ED8
    static uint64_t ToUInt64(int64_t value);
    // static public System.UInt64 ToUInt64(System.Single value)
    // Offset: 0x10B5F70
    static uint64_t ToUInt64(float value);
    // static public System.UInt64 ToUInt64(System.Double value)
    // Offset: 0x10B5FDC
    static uint64_t ToUInt64(double value);
    // static public System.UInt64 ToUInt64(System.Decimal value)
    // Offset: 0x10B60D4
    static uint64_t ToUInt64(System::Decimal value);
    // static public System.UInt64 ToUInt64(System.String value, System.IFormatProvider provider)
    // Offset: 0x10B6158
    static uint64_t ToUInt64(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.Single ToSingle(System.Object value)
    // Offset: 0x10B6170
    static float ToSingle(::Il2CppObject* value);
    // static public System.Single ToSingle(System.Object value, System.IFormatProvider provider)
    // Offset: 0x10B6280
    static float ToSingle(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.Single ToSingle(System.SByte value)
    // Offset: 0x10B6394
    static float ToSingle(int8_t value);
    // static public System.Single ToSingle(System.Byte value)
    // Offset: 0x10B63A0
    static float ToSingle(uint8_t value);
    // static public System.Single ToSingle(System.Int16 value)
    // Offset: 0x10B63AC
    static float ToSingle(int16_t value);
    // static public System.Single ToSingle(System.UInt16 value)
    // Offset: 0x10B63B8
    static float ToSingle(uint16_t value);
    // static public System.Single ToSingle(System.Int32 value)
    // Offset: 0x10B63C4
    static float ToSingle(int value);
    // static public System.Single ToSingle(System.UInt32 value)
    // Offset: 0x10B63CC
    static float ToSingle(uint value);
    // static public System.Single ToSingle(System.Int64 value)
    // Offset: 0x10B63D8
    static float ToSingle(int64_t value);
    // static public System.Single ToSingle(System.UInt64 value)
    // Offset: 0x10B63E0
    static float ToSingle(uint64_t value);
    // static public System.Single ToSingle(System.Double value)
    // Offset: 0x10B63EC
    static float ToSingle(double value);
    // static public System.Single ToSingle(System.Decimal value)
    // Offset: 0x10B63F4
    static float ToSingle(System::Decimal value);
    // static public System.Single ToSingle(System.String value, System.IFormatProvider provider)
    // Offset: 0x10B646C
    static float ToSingle(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.Single ToSingle(System.Boolean value)
    // Offset: 0x10B6488
    static float ToSingle(bool value);
    // static public System.Double ToDouble(System.Object value)
    // Offset: 0x10B649C
    static double ToDouble(::Il2CppObject* value);
    // static public System.Double ToDouble(System.Object value, System.IFormatProvider provider)
    // Offset: 0x10B65AC
    static double ToDouble(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.Double ToDouble(System.SByte value)
    // Offset: 0x10B66C0
    static double ToDouble(int8_t value);
    // static public System.Double ToDouble(System.Byte value)
    // Offset: 0x10B66CC
    static double ToDouble(uint8_t value);
    // static public System.Double ToDouble(System.Int16 value)
    // Offset: 0x10B66D8
    static double ToDouble(int16_t value);
    // static public System.Double ToDouble(System.UInt16 value)
    // Offset: 0x10B66E4
    static double ToDouble(uint16_t value);
    // static public System.Double ToDouble(System.Int32 value)
    // Offset: 0x10B66F0
    static double ToDouble(int value);
    // static public System.Double ToDouble(System.UInt32 value)
    // Offset: 0x10B66F8
    static double ToDouble(uint value);
    // static public System.Double ToDouble(System.Int64 value)
    // Offset: 0x10B6700
    static double ToDouble(int64_t value);
    // static public System.Double ToDouble(System.UInt64 value)
    // Offset: 0x10B6708
    static double ToDouble(uint64_t value);
    // static public System.Double ToDouble(System.Single value)
    // Offset: 0x10B6710
    static double ToDouble(float value);
    // static public System.Double ToDouble(System.Decimal value)
    // Offset: 0x10B6718
    static double ToDouble(System::Decimal value);
    // static public System.Double ToDouble(System.String value, System.IFormatProvider provider)
    // Offset: 0x10B6790
    static double ToDouble(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.Double ToDouble(System.Boolean value)
    // Offset: 0x10B6824
    static double ToDouble(bool value);
    // static public System.Decimal ToDecimal(System.Object value)
    // Offset: 0x10B6838
    static System::Decimal ToDecimal(::Il2CppObject* value);
    // static public System.Decimal ToDecimal(System.Object value, System.IFormatProvider provider)
    // Offset: 0x10B6968
    static System::Decimal ToDecimal(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.Decimal ToDecimal(System.SByte value)
    // Offset: 0x10B6A9C
    static System::Decimal ToDecimal(int8_t value);
    // static public System.Decimal ToDecimal(System.Byte value)
    // Offset: 0x10B6B04
    static System::Decimal ToDecimal(uint8_t value);
    // static public System.Decimal ToDecimal(System.Int16 value)
    // Offset: 0x10B6B6C
    static System::Decimal ToDecimal(int16_t value);
    // static public System.Decimal ToDecimal(System.UInt16 value)
    // Offset: 0x10B6BD4
    static System::Decimal ToDecimal(uint16_t value);
    // static public System.Decimal ToDecimal(System.Int32 value)
    // Offset: 0x10B6C3C
    static System::Decimal ToDecimal(int value);
    // static public System.Decimal ToDecimal(System.UInt32 value)
    // Offset: 0x10B6CA4
    static System::Decimal ToDecimal(uint value);
    // static public System.Decimal ToDecimal(System.Int64 value)
    // Offset: 0x10B6D0C
    static System::Decimal ToDecimal(int64_t value);
    // static public System.Decimal ToDecimal(System.UInt64 value)
    // Offset: 0x10B6D74
    static System::Decimal ToDecimal(uint64_t value);
    // static public System.Decimal ToDecimal(System.Single value)
    // Offset: 0x10B6DDC
    static System::Decimal ToDecimal(float value);
    // static public System.Decimal ToDecimal(System.Double value)
    // Offset: 0x10B6E4C
    static System::Decimal ToDecimal(double value);
    // static public System.Decimal ToDecimal(System.String value, System.IFormatProvider provider)
    // Offset: 0x10B6EBC
    static System::Decimal ToDecimal(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.Decimal ToDecimal(System.Decimal value)
    // Offset: 0x10B6F60
    static System::Decimal ToDecimal(System::Decimal value);
    // static public System.Decimal ToDecimal(System.Boolean value)
    // Offset: 0x10B6F64
    static System::Decimal ToDecimal(bool value);
    // static public System.DateTime ToDateTime(System.String value, System.IFormatProvider provider)
    // Offset: 0x10B6FD0
    static System::DateTime ToDateTime(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.String ToString(System.Object value, System.IFormatProvider provider)
    // Offset: 0x10B71F0
    static ::Il2CppString* ToString(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.String ToString(System.Char value, System.IFormatProvider provider)
    // Offset: 0x10B7390
    static ::Il2CppString* ToString(::Il2CppChar value, System::IFormatProvider* provider);
    // static public System.String ToString(System.Int32 value, System.IFormatProvider provider)
    // Offset: 0x10B73B8
    static ::Il2CppString* ToString(int value, System::IFormatProvider* provider);
    // static public System.Int32 ToInt32(System.String value, System.Int32 fromBase)
    // Offset: 0x10B73E0
    static int ToInt32(::Il2CppString* value, int fromBase);
    // static public System.String ToBase64String(System.Byte[] inArray)
    // Offset: 0x10B74B0
    static ::Il2CppString* ToBase64String(::Array<uint8_t>* inArray);
    // static public System.String ToBase64String(System.Byte[] inArray, System.Int32 offset, System.Int32 length)
    // Offset: 0x10B7818
    static ::Il2CppString* ToBase64String(::Array<uint8_t>* inArray, int offset, int length);
    // static public System.String ToBase64String(System.Byte[] inArray, System.Int32 offset, System.Int32 length, System.Base64FormattingOptions options)
    // Offset: 0x10B7560
    static ::Il2CppString* ToBase64String(::Array<uint8_t>* inArray, int offset, int length, System::Base64FormattingOptions options);
    // static public System.Int32 ToBase64CharArray(System.Byte[] inArray, System.Int32 offsetIn, System.Int32 length, System.Char[] outArray, System.Int32 offsetOut)
    // Offset: 0x10B7BD8
    static int ToBase64CharArray(::Array<uint8_t>* inArray, int offsetIn, int length, ::Array<::Il2CppChar>* outArray, int offsetOut);
    // static public System.Int32 ToBase64CharArray(System.Byte[] inArray, System.Int32 offsetIn, System.Int32 length, System.Char[] outArray, System.Int32 offsetOut, System.Base64FormattingOptions options)
    // Offset: 0x10B7C70
    static int ToBase64CharArray(::Array<uint8_t>* inArray, int offsetIn, int length, ::Array<::Il2CppChar>* outArray, int offsetOut, System::Base64FormattingOptions options);
    // static private System.Int32 ConvertToBase64Array(System.Char* outChars, System.Byte* inData, System.Int32 offset, System.Int32 length, System.Boolean insertLineBreaks)
    // Offset: 0x10B7988
    static int ConvertToBase64Array(::Il2CppChar* outChars, uint8_t* inData, int offset, int length, bool insertLineBreaks);
    // static private System.Int32 ToBase64_CalculateAndValidateOutputLength(System.Int32 inputLength, System.Boolean insertLineBreaks)
    // Offset: 0x10B7898
    static int ToBase64_CalculateAndValidateOutputLength(int inputLength, bool insertLineBreaks);
    // static public System.Byte[] FromBase64String(System.String s)
    // Offset: 0x10B7FAC
    static ::Array<uint8_t>* FromBase64String(::Il2CppString* s);
    // static private System.Byte[] FromBase64CharPtr(System.Char* inputPtr, System.Int32 inputLength)
    // Offset: 0x10B8068
    static ::Array<uint8_t>* FromBase64CharPtr(::Il2CppChar* inputPtr, int inputLength);
    // static private System.Int32 FromBase64_Decode(System.Char* startInputPtr, System.Int32 inputLength, System.Byte* startDestPtr, System.Int32 destLength)
    // Offset: 0x10B82A4
    static int FromBase64_Decode(::Il2CppChar* startInputPtr, int inputLength, uint8_t* startDestPtr, int destLength);
    // static private System.Int32 FromBase64_ComputeResultLength(System.Char* inputPtr, System.Int32 inputLength)
    // Offset: 0x10B81A0
    static int FromBase64_ComputeResultLength(::Il2CppChar* inputPtr, int inputLength);
    // static private System.Void .cctor()
    // Offset: 0x10B8508
    static void _cctor();
  }; // System.Convert
}
DEFINE_IL2CPP_ARG_TYPE(System::Convert*, "System", "Convert");
#pragma pack(pop)
