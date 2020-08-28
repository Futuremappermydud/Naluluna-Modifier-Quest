// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
// Including type: System.IConvertible
#include "System/IConvertible.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: RuntimeType
  class RuntimeType;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Array
  class Array;
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: TypeCode
  struct TypeCode;
  // Forward declaring type: Decimal
  struct Decimal;
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Enum
  class Enum : public System::ValueType, public System::IComparable, public System::IFormattable, public System::IConvertible {
    public:
    // Nested type: System::Enum::ParseFailureKind
    struct ParseFailureKind;
    // Nested type: System::Enum::EnumResult
    struct EnumResult;
    // Nested type: System::Enum::ValuesAndNames
    class ValuesAndNames;
    // Get static field: static private readonly System.Char[] enumSeperatorCharArray
    static ::Array<::Il2CppChar>* _get_enumSeperatorCharArray();
    // Set static field: static private readonly System.Char[] enumSeperatorCharArray
    static void _set_enumSeperatorCharArray(::Array<::Il2CppChar>* value);
    // static field const value: static private System.String enumSeperator
    static constexpr const char* enumSeperator = ", ";
    // Get static field: static private System.String enumSeperator
    static ::Il2CppString* _get_enumSeperator();
    // Set static field: static private System.String enumSeperator
    static void _set_enumSeperator(::Il2CppString* value);
    // static private System.Enum/ValuesAndNames GetCachedValuesAndNames(System.RuntimeType enumType, System.Boolean getNames)
    // Offset: 0xDA3004
    static System::Enum::ValuesAndNames* GetCachedValuesAndNames(System::RuntimeType* enumType, bool getNames);
    // static private System.String InternalFormattedHexString(System.Object value)
    // Offset: 0xDA31B8
    static ::Il2CppString* InternalFormattedHexString(::Il2CppObject* value);
    // static private System.String InternalFormat(System.RuntimeType eT, System.Object value)
    // Offset: 0xDA35C4
    static ::Il2CppString* InternalFormat(System::RuntimeType* eT, ::Il2CppObject* value);
    // static private System.String InternalFlagsFormat(System.RuntimeType eT, System.Object value)
    // Offset: 0xDA37C4
    static ::Il2CppString* InternalFlagsFormat(System::RuntimeType* eT, ::Il2CppObject* value);
    // static System.UInt64 ToUInt64(System.Object value)
    // Offset: 0xDA39BC
    static uint64_t ToUInt64(::Il2CppObject* value);
    // static private System.Int32 InternalCompareTo(System.Object o1, System.Object o2)
    // Offset: 0xDA3B44
    static int InternalCompareTo(::Il2CppObject* o1, ::Il2CppObject* o2);
    // static System.RuntimeType InternalGetUnderlyingType(System.RuntimeType enumType)
    // Offset: 0xDA3B48
    static System::RuntimeType* InternalGetUnderlyingType(System::RuntimeType* enumType);
    // static private System.Boolean GetEnumValuesAndNames(System.RuntimeType enumType, System.UInt64[] values, System.String[] names)
    // Offset: 0xDA3164
    static bool GetEnumValuesAndNames(System::RuntimeType* enumType, ::Array<uint64_t>*& values, ::Array<::Il2CppString*>*& names);
    // static private System.Object InternalBoxEnum(System.RuntimeType enumType, System.Int64 value)
    // Offset: 0xDA3B4C
    static ::Il2CppObject* InternalBoxEnum(System::RuntimeType* enumType, int64_t value);
    // static public System.Object Parse(System.Type enumType, System.String value)
    // Offset: 0xDA3B50
    static ::Il2CppObject* Parse(System::Type* enumType, ::Il2CppString* value);
    // static public System.Object Parse(System.Type enumType, System.String value, System.Boolean ignoreCase)
    // Offset: 0xDA3BC8
    static ::Il2CppObject* Parse(System::Type* enumType, ::Il2CppString* value, bool ignoreCase);
    // static private System.Boolean TryParseEnum(System.Type enumType, System.String value, System.Boolean ignoreCase, System.Enum/EnumResult parseResult)
    // Offset: 0xDA3D08
    static bool TryParseEnum(System::Type* enumType, ::Il2CppString* value, bool ignoreCase, System::Enum::EnumResult& parseResult);
    // static public System.Type GetUnderlyingType(System.Type enumType)
    // Offset: 0xD9B178
    static System::Type* GetUnderlyingType(System::Type* enumType);
    // static public System.Array GetValues(System.Type enumType)
    // Offset: 0xDA4D2C
    static System::Array* GetValues(System::Type* enumType);
    // static System.UInt64[] InternalGetValues(System.RuntimeType enumType)
    // Offset: 0xDA4DF4
    static ::Array<uint64_t>* InternalGetValues(System::RuntimeType* enumType);
    // static public System.String GetName(System.Type enumType, System.Object value)
    // Offset: 0xDA36EC
    static ::Il2CppString* GetName(System::Type* enumType, ::Il2CppObject* value);
    // static public System.String[] GetNames(System.Type enumType)
    // Offset: 0xDA4E6C
    static ::Array<::Il2CppString*>* GetNames(System::Type* enumType);
    // static System.String[] InternalGetNames(System.RuntimeType enumType)
    // Offset: 0xDA4F34
    static ::Array<::Il2CppString*>* InternalGetNames(System::RuntimeType* enumType);
    // static public System.Object ToObject(System.Type enumType, System.Object value)
    // Offset: 0xDA4660
    static ::Il2CppObject* ToObject(System::Type* enumType, ::Il2CppObject* value);
    // static public System.Boolean IsDefined(System.Type enumType, System.Object value)
    // Offset: 0xDA5F70
    static bool IsDefined(System::Type* enumType, ::Il2CppObject* value);
    // private System.Object get_value()
    // Offset: 0xDA6048
    ::Il2CppObject* get_value();
    // System.Object GetValue()
    // Offset: 0xDA604C
    ::Il2CppObject* GetValue();
    // private System.Int32 get_hashcode()
    // Offset: 0xDA6050
    int get_hashcode();
    // public System.String ToString(System.String format)
    // Offset: 0xDA6134
    ::Il2CppString* ToString(::Il2CppString* format);
    // static public System.Object ToObject(System.Type enumType, System.SByte value)
    // Offset: 0xDA516C
    static ::Il2CppObject* ToObject(System::Type* enumType, int8_t value);
    // static public System.Object ToObject(System.Type enumType, System.Int16 value)
    // Offset: 0xDA532C
    static ::Il2CppObject* ToObject(System::Type* enumType, int16_t value);
    // static public System.Object ToObject(System.Type enumType, System.Int32 value)
    // Offset: 0xDA4FAC
    static ::Il2CppObject* ToObject(System::Type* enumType, int value);
    // static public System.Object ToObject(System.Type enumType, System.Byte value)
    // Offset: 0xDA586C
    static ::Il2CppObject* ToObject(System::Type* enumType, uint8_t value);
    // static public System.Object ToObject(System.Type enumType, System.UInt16 value)
    // Offset: 0xDA5A2C
    static ::Il2CppObject* ToObject(System::Type* enumType, uint16_t value);
    // static public System.Object ToObject(System.Type enumType, System.UInt32 value)
    // Offset: 0xDA56AC
    static ::Il2CppObject* ToObject(System::Type* enumType, uint value);
    // static public System.Object ToObject(System.Type enumType, System.Int64 value)
    // Offset: 0xDA54EC
    static ::Il2CppObject* ToObject(System::Type* enumType, int64_t value);
    // static public System.Object ToObject(System.Type enumType, System.UInt64 value)
    // Offset: 0xDA4B6C
    static ::Il2CppObject* ToObject(System::Type* enumType, uint64_t value);
    // static private System.Object ToObject(System.Type enumType, System.Char value)
    // Offset: 0xDA5BEC
    static ::Il2CppObject* ToObject(System::Type* enumType, ::Il2CppChar value);
    // static private System.Object ToObject(System.Type enumType, System.Boolean value)
    // Offset: 0xDA5DAC
    static ::Il2CppObject* ToObject(System::Type* enumType, bool value);
    // static private System.Void .cctor()
    // Offset: 0xDA738C
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xDA6054
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xDA605C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xDA6060
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public System.String ToString(System.String format, System.IFormatProvider provider)
    // Offset: 0xDA6130
    // Implemented from: System.IFormattable
    // Base method: System.String IFormattable::ToString(System.String format, System.IFormatProvider provider)
    ::Il2CppString* ToString(::Il2CppString* format, System::IFormatProvider* provider);
    // public System.Int32 CompareTo(System.Object target)
    // Offset: 0xDA635C
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object target)
    int CompareTo(::Il2CppObject* target);
    // Creating proxy method: System_IComparable_CompareTo
    // Maps to method: CompareTo
    int System_IComparable_CompareTo(::Il2CppObject* target);
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0xDA6588
    // Implemented from: System.IConvertible
    // Base method: System.String IConvertible::ToString(System.IFormatProvider provider)
    ::Il2CppString* ToString(System::IFormatProvider* provider);
    // public System.TypeCode GetTypeCode()
    // Offset: 0xDA6594
    // Implemented from: System.IConvertible
    // Base method: System.TypeCode IConvertible::GetTypeCode()
    System::TypeCode GetTypeCode();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0xDA695C
    // Implemented from: System.IConvertible
    // Base method: System.Boolean IConvertible::ToBoolean(System.IFormatProvider provider)
    bool System_IConvertible_ToBoolean(System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0xDA6A08
    // Implemented from: System.IConvertible
    // Base method: System.Char IConvertible::ToChar(System.IFormatProvider provider)
    ::Il2CppChar System_IConvertible_ToChar(System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0xDA6AB4
    // Implemented from: System.IConvertible
    // Base method: System.SByte IConvertible::ToSByte(System.IFormatProvider provider)
    int8_t System_IConvertible_ToSByte(System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0xDA6B60
    // Implemented from: System.IConvertible
    // Base method: System.Byte IConvertible::ToByte(System.IFormatProvider provider)
    uint8_t System_IConvertible_ToByte(System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0xDA6C0C
    // Implemented from: System.IConvertible
    // Base method: System.Int16 IConvertible::ToInt16(System.IFormatProvider provider)
    int16_t System_IConvertible_ToInt16(System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0xDA6CB8
    // Implemented from: System.IConvertible
    // Base method: System.UInt16 IConvertible::ToUInt16(System.IFormatProvider provider)
    uint16_t System_IConvertible_ToUInt16(System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0xDA6D64
    // Implemented from: System.IConvertible
    // Base method: System.Int32 IConvertible::ToInt32(System.IFormatProvider provider)
    int System_IConvertible_ToInt32(System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0xDA6E10
    // Implemented from: System.IConvertible
    // Base method: System.UInt32 IConvertible::ToUInt32(System.IFormatProvider provider)
    uint System_IConvertible_ToUInt32(System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0xDA6EBC
    // Implemented from: System.IConvertible
    // Base method: System.Int64 IConvertible::ToInt64(System.IFormatProvider provider)
    int64_t System_IConvertible_ToInt64(System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0xDA6F68
    // Implemented from: System.IConvertible
    // Base method: System.UInt64 IConvertible::ToUInt64(System.IFormatProvider provider)
    uint64_t System_IConvertible_ToUInt64(System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0xDA7014
    // Implemented from: System.IConvertible
    // Base method: System.Single IConvertible::ToSingle(System.IFormatProvider provider)
    float System_IConvertible_ToSingle(System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0xDA70C0
    // Implemented from: System.IConvertible
    // Base method: System.Double IConvertible::ToDouble(System.IFormatProvider provider)
    double System_IConvertible_ToDouble(System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0xDA716C
    // Implemented from: System.IConvertible
    // Base method: System.Decimal IConvertible::ToDecimal(System.IFormatProvider provider)
    System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0xDA7218
    // Implemented from: System.IConvertible
    // Base method: System.DateTime IConvertible::ToDateTime(System.IFormatProvider provider)
    System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type type, System.IFormatProvider provider)
    // Offset: 0xDA7304
    // Implemented from: System.IConvertible
    // Base method: System.Object IConvertible::ToType(System.Type type, System.IFormatProvider provider)
    ::Il2CppObject* System_IConvertible_ToType(System::Type* type, System::IFormatProvider* provider);
    // protected System.Void .ctor()
    // Offset: 0xDA7384
    // Implemented from: System.ValueType
    // Base method: System.Void ValueType::.ctor()
    // Base method: System.Void Object::.ctor()
    static Enum* New_ctor();
  }; // System.Enum
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Enum*, "System", "Enum");
#pragma pack(pop)
