// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:26 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RandomNumberGenerator
  class RandomNumberGenerator;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Guid
  struct Guid : public System::ValueType, public System::IFormattable, public System::IComparable, public System::IComparable_1<System::Guid>, public System::IEquatable_1<System::Guid> {
    public:
    // Nested type: System::Guid::GuidStyles
    struct GuidStyles;
    // Nested type: System::Guid::GuidParseThrowStyle
    struct GuidParseThrowStyle;
    // Nested type: System::Guid::ParseFailureKind
    struct ParseFailureKind;
    // Nested type: System::Guid::GuidResult
    struct GuidResult;
    // Get static field: static public readonly System.Guid Empty
    static System::Guid _get_Empty();
    // Set static field: static public readonly System.Guid Empty
    static void _set_Empty(System::Guid value);
    // private System.Int32 _a
    // Offset: 0x0
    int a;
    // private System.Int16 _b
    // Offset: 0x4
    int16_t b;
    // private System.Int16 _c
    // Offset: 0x6
    int16_t c;
    // private System.Byte _d
    // Offset: 0x8
    uint8_t d;
    // private System.Byte _e
    // Offset: 0x9
    uint8_t e;
    // private System.Byte _f
    // Offset: 0xA
    uint8_t f;
    // private System.Byte _g
    // Offset: 0xB
    uint8_t g;
    // private System.Byte _h
    // Offset: 0xC
    uint8_t h;
    // private System.Byte _i
    // Offset: 0xD
    uint8_t i;
    // private System.Byte _j
    // Offset: 0xE
    uint8_t j;
    // private System.Byte _k
    // Offset: 0xF
    uint8_t k;
    // Get static field: static private System.Object _rngAccess
    static ::Il2CppObject* _get__rngAccess();
    // Set static field: static private System.Object _rngAccess
    static void _set__rngAccess(::Il2CppObject* value);
    // Get static field: static private System.Security.Cryptography.RandomNumberGenerator _rng
    static System::Security::Cryptography::RandomNumberGenerator* _get__rng();
    // Set static field: static private System.Security.Cryptography.RandomNumberGenerator _rng
    static void _set__rng(System::Security::Cryptography::RandomNumberGenerator* value);
    // Get static field: static private System.Security.Cryptography.RandomNumberGenerator _fastRng
    static System::Security::Cryptography::RandomNumberGenerator* _get__fastRng();
    // Set static field: static private System.Security.Cryptography.RandomNumberGenerator _fastRng
    static void _set__fastRng(System::Security::Cryptography::RandomNumberGenerator* value);
    // Creating value type constructor for type: Guid
    Guid(int a_ = {}, int16_t b_ = {}, int16_t c_ = {}, uint8_t d_ = {}, uint8_t e_ = {}, uint8_t f_ = {}, uint8_t g_ = {}, uint8_t h_ = {}, uint8_t i_ = {}, uint8_t j_ = {}, uint8_t k_ = {}) : a{a_}, b{b_}, c{c_}, d{d_}, e{e_}, f{f_}, g{g_}, h{h_}, i{i_}, j{j_}, k{k_} {}
    // public System.Void .ctor(System.Byte[] b)
    // Offset: 0xA3DC18
    static Guid* New_ctor(::Array<uint8_t>* b);
    // public System.Void .ctor(System.UInt32 a, System.UInt16 b, System.UInt16 c, System.Byte d, System.Byte e, System.Byte f, System.Byte g, System.Byte h, System.Byte i, System.Byte j, System.Byte k)
    // Offset: 0xA3DC20
    static Guid* New_ctor(uint a, uint16_t b, uint16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k);
    // public System.Void .ctor(System.Int32 a, System.Int16 b, System.Int16 c, System.Byte d, System.Byte e, System.Byte f, System.Byte g, System.Byte h, System.Byte i, System.Byte j, System.Byte k)
    // Offset: 0xA3DC60
    static Guid* New_ctor(int a, int16_t b, int16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k);
    // public System.Void .ctor(System.String g)
    // Offset: 0xA3DCA0
    static Guid* New_ctor(::Il2CppString* g);
    // static public System.Guid Parse(System.String input)
    // Offset: 0x1113AD0
    static System::Guid Parse(::Il2CppString* input);
    // static public System.Boolean TryParse(System.String input, System.Guid result)
    // Offset: 0x1113BD8
    static bool TryParse(::Il2CppString* input, System::Guid& result);
    // static private System.Boolean TryParseGuid(System.String g, System.Guid/GuidStyles flags, System.Guid/GuidResult result)
    // Offset: 0x11136A8
    static bool TryParseGuid(::Il2CppString* g, System::Guid::GuidStyles flags, System::Guid::GuidResult& result);
    // static private System.Boolean TryParseGuidWithHexPrefix(System.String guidString, System.Guid/GuidResult result)
    // Offset: 0x111404C
    static bool TryParseGuidWithHexPrefix(::Il2CppString* guidString, System::Guid::GuidResult& result);
    // static private System.Boolean TryParseGuidWithNoStyle(System.String guidString, System.Guid/GuidResult result)
    // Offset: 0x11145D0
    static bool TryParseGuidWithNoStyle(::Il2CppString* guidString, System::Guid::GuidResult& result);
    // static private System.Boolean TryParseGuidWithDashes(System.String guidString, System.Guid/GuidResult result)
    // Offset: 0x1113CD8
    static bool TryParseGuidWithDashes(::Il2CppString* guidString, System::Guid::GuidResult& result);
    // static private System.Boolean StringToShort(System.String str, System.Int32 requiredLength, System.Int32 flags, System.Int16 result, System.Guid/GuidResult parseResult)
    // Offset: 0x1114CA8
    static bool StringToShort(::Il2CppString* str, int requiredLength, int flags, int16_t& result, System::Guid::GuidResult& parseResult);
    // static private System.Boolean StringToShort(System.String str, System.Int32* parsePos, System.Int32 requiredLength, System.Int32 flags, System.Int16 result, System.Guid/GuidResult parseResult)
    // Offset: 0x1114E78
    static bool StringToShort(::Il2CppString* str, int* parsePos, int requiredLength, int flags, int16_t& result, System::Guid::GuidResult& parseResult);
    // static private System.Boolean StringToInt(System.String str, System.Int32 requiredLength, System.Int32 flags, System.Int32 result, System.Guid/GuidResult parseResult)
    // Offset: 0x1114C10
    static bool StringToInt(::Il2CppString* str, int requiredLength, int flags, int& result, System::Guid::GuidResult& parseResult);
    // static private System.Boolean StringToInt(System.String str, System.Int32 parsePos, System.Int32 requiredLength, System.Int32 flags, System.Int32 result, System.Guid/GuidResult parseResult)
    // Offset: 0x1114DD4
    static bool StringToInt(::Il2CppString* str, int& parsePos, int requiredLength, int flags, int& result, System::Guid::GuidResult& parseResult);
    // static private System.Boolean StringToInt(System.String str, System.Int32* parsePos, System.Int32 requiredLength, System.Int32 flags, System.Int32 result, System.Guid/GuidResult parseResult)
    // Offset: 0x1114F34
    static bool StringToInt(::Il2CppString* str, int* parsePos, int requiredLength, int flags, int& result, System::Guid::GuidResult& parseResult);
    // static private System.Boolean StringToLong(System.String str, System.Int32 parsePos, System.Int32 flags, System.Int64 result, System.Guid/GuidResult parseResult)
    // Offset: 0x1114D40
    static bool StringToLong(::Il2CppString* str, int& parsePos, int flags, int64_t& result, System::Guid::GuidResult& parseResult);
    // static private System.Boolean StringToLong(System.String str, System.Int32* parsePos, System.Int32 flags, System.Int64 result, System.Guid/GuidResult parseResult)
    // Offset: 0x111515C
    static bool StringToLong(::Il2CppString* str, int* parsePos, int flags, int64_t& result, System::Guid::GuidResult& parseResult);
    // static private System.String EatAllWhitespace(System.String str)
    // Offset: 0x11149DC
    static ::Il2CppString* EatAllWhitespace(::Il2CppString* str);
    // static private System.Boolean IsHexPrefix(System.String str, System.Int32 i)
    // Offset: 0x1114AF4
    static bool IsHexPrefix(::Il2CppString* str, int i);
    // public System.Byte[] ToByteArray()
    // Offset: 0xA3DCA8
    ::Array<uint8_t>* ToByteArray();
    // private System.Int32 GetResult(System.UInt32 me, System.UInt32 them)
    // Offset: 0xA3DCF0
    int GetResult(uint me, uint them);
    // public System.String ToString(System.String format)
    // Offset: 0xA3DD10
    ::Il2CppString* ToString(::Il2CppString* format);
    // static private System.Char HexToChar(System.Int32 a)
    // Offset: 0x111601C
    static ::Il2CppChar HexToChar(int a);
    // static private System.Int32 HexsToChars(System.Char* guidChars, System.Int32 offset, System.Int32 a, System.Int32 b)
    // Offset: 0x1116038
    static int HexsToChars(::Il2CppChar* guidChars, int offset, int a, int b);
    // static private System.Int32 HexsToChars(System.Char* guidChars, System.Int32 offset, System.Int32 a, System.Int32 b, System.Boolean hex)
    // Offset: 0x11160C8
    static int HexsToChars(::Il2CppChar* guidChars, int offset, int a, int b, bool hex);
    // static public System.Guid NewGuid()
    // Offset: 0x111622C
    static System::Guid NewGuid();
    // static private System.Void .cctor()
    // Offset: 0x1116408
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0xA3DCB0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0xA3DCB8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0xA3DCE0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public System.Boolean Equals(System.Guid g)
    // Offset: 0xA3DCE8
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(System.Guid g)
    bool Equals(System::Guid g);
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0xA3DD00
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object value)
    int CompareTo(::Il2CppObject* value);
    // Creating proxy method: System_IComparable_CompareTo
    // Maps to method: CompareTo
    int System_IComparable_CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.Guid value)
    // Offset: 0xA3DD08
    // Implemented from: System.IComparable`1
    // Base method: System.Int32 IComparable`1::CompareTo(System.Guid value)
    int CompareTo(System::Guid value);
    // public System.String ToString(System.String format, System.IFormatProvider provider)
    // Offset: 0xA3DD18
    // Implemented from: System.IFormattable
    // Base method: System.String IFormattable::ToString(System.String format, System.IFormatProvider provider)
    ::Il2CppString* ToString(::Il2CppString* format, System::IFormatProvider* provider);
  }; // System.Guid
  // static public System.Boolean op_Equality(System.Guid a, System.Guid b)
  // Offset: 0x1115ED4
  bool operator ==(const System::Guid& a, const System::Guid& b);
  // static public System.Boolean op_Inequality(System.Guid a, System.Guid b)
  // Offset: 0x1115F80
  bool operator !=(const System::Guid& a, const System::Guid& b);
}
DEFINE_IL2CPP_ARG_TYPE(System::Guid, "System", "Guid");
#pragma pack(pop)
