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
  // Forward declaring type: Punycode
  class Punycode;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Autogenerated type: System.Globalization.IdnMapping
  class IdnMapping : public ::Il2CppObject {
    public:
    // private System.Boolean allow_unassigned
    // Offset: 0x10
    bool allow_unassigned;
    // private System.Boolean use_std3
    // Offset: 0x11
    bool use_std3;
    // private System.Globalization.Punycode puny
    // Offset: 0x18
    System::Globalization::Punycode* puny;
    // public System.String GetAscii(System.String unicode)
    // Offset: 0x12B5D2C
    ::Il2CppString* GetAscii(::Il2CppString* unicode);
    // public System.String GetAscii(System.String unicode, System.Int32 index, System.Int32 count)
    // Offset: 0x12B5DC8
    ::Il2CppString* GetAscii(::Il2CppString* unicode, int index, int count);
    // private System.String Convert(System.String input, System.Int32 index, System.Int32 count, System.Boolean toAscii)
    // Offset: 0x12B5ED8
    ::Il2CppString* Convert(::Il2CppString* input, int index, int count, bool toAscii);
    // private System.String ToAscii(System.String s, System.Int32 offset)
    // Offset: 0x12B6104
    ::Il2CppString* ToAscii(::Il2CppString* s, int offset);
    // private System.Void VerifyLength(System.String s, System.Int32 offset)
    // Offset: 0x12B686C
    void VerifyLength(::Il2CppString* s, int offset);
    // private System.String NamePrep(System.String s, System.Int32 offset)
    // Offset: 0x12B6520
    ::Il2CppString* NamePrep(::Il2CppString* s, int offset);
    // private System.Void VerifyProhibitedCharacters(System.String s, System.Int32 offset)
    // Offset: 0x12B6964
    void VerifyProhibitedCharacters(::Il2CppString* s, int offset);
    // private System.Void VerifyStd3AsciiRules(System.String s, System.Int32 offset)
    // Offset: 0x12B667C
    void VerifyStd3AsciiRules(::Il2CppString* s, int offset);
    // public System.String GetUnicode(System.String ascii)
    // Offset: 0x12B6BB0
    ::Il2CppString* GetUnicode(::Il2CppString* ascii);
    // public System.String GetUnicode(System.String ascii, System.Int32 index, System.Int32 count)
    // Offset: 0x12B6C4C
    ::Il2CppString* GetUnicode(::Il2CppString* ascii, int index, int count);
    // private System.String ToUnicode(System.String s, System.Int32 offset)
    // Offset: 0x12B6344
    ::Il2CppString* ToUnicode(::Il2CppString* s, int offset);
    // public System.Void .ctor()
    // Offset: 0x12B5BE4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static IdnMapping* New_ctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x12B5C58
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x12B5D10
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Globalization.IdnMapping
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::IdnMapping*, "System.Globalization", "IdnMapping");
#pragma pack(pop)
