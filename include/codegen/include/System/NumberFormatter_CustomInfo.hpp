// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:41 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.NumberFormatter
#include "System/NumberFormatter.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.NumberFormatter/CustomInfo
  class NumberFormatter::CustomInfo : public ::Il2CppObject {
    public:
    // public System.Boolean UseGroup
    // Offset: 0x10
    bool UseGroup;
    // public System.Int32 DecimalDigits
    // Offset: 0x14
    int DecimalDigits;
    // public System.Int32 DecimalPointPos
    // Offset: 0x18
    int DecimalPointPos;
    // public System.Int32 DecimalTailSharpDigits
    // Offset: 0x1C
    int DecimalTailSharpDigits;
    // public System.Int32 IntegerDigits
    // Offset: 0x20
    int IntegerDigits;
    // public System.Int32 IntegerHeadSharpDigits
    // Offset: 0x24
    int IntegerHeadSharpDigits;
    // public System.Int32 IntegerHeadPos
    // Offset: 0x28
    int IntegerHeadPos;
    // public System.Boolean UseExponent
    // Offset: 0x2C
    bool UseExponent;
    // public System.Int32 ExponentDigits
    // Offset: 0x30
    int ExponentDigits;
    // public System.Int32 ExponentTailSharpDigits
    // Offset: 0x34
    int ExponentTailSharpDigits;
    // public System.Boolean ExponentNegativeSignOnly
    // Offset: 0x38
    bool ExponentNegativeSignOnly;
    // public System.Int32 DividePlaces
    // Offset: 0x3C
    int DividePlaces;
    // public System.Int32 Percents
    // Offset: 0x40
    int Percents;
    // public System.Int32 Permilles
    // Offset: 0x44
    int Permilles;
    // static public System.Void GetActiveSection(System.String format, System.Boolean positive, System.Boolean zero, System.Int32 offset, System.Int32 length)
    // Offset: 0x1345A84
    static void GetActiveSection(::Il2CppString* format, bool& positive, bool zero, int& offset, int& length);
    // static public System.NumberFormatter/CustomInfo Parse(System.String format, System.Int32 offset, System.Int32 length, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x1345D70
    static System::NumberFormatter::CustomInfo* Parse(::Il2CppString* format, int offset, int length, System::Globalization::NumberFormatInfo* nfi);
    // public System.String Format(System.String format, System.Int32 offset, System.Int32 length, System.Globalization.NumberFormatInfo nfi, System.Boolean positive, System.Text.StringBuilder sb_int, System.Text.StringBuilder sb_dec, System.Text.StringBuilder sb_exp)
    // Offset: 0x134658C
    ::Il2CppString* Format(::Il2CppString* format, int offset, int length, System::Globalization::NumberFormatInfo* nfi, bool positive, System::Text::StringBuilder* sb_int, System::Text::StringBuilder* sb_dec, System::Text::StringBuilder* sb_exp);
    // public System.Void .ctor()
    // Offset: 0x1346F48
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static NumberFormatter::CustomInfo* New_ctor();
  }; // System.NumberFormatter/CustomInfo
}
DEFINE_IL2CPP_ARG_TYPE(System::NumberFormatter::CustomInfo*, "System", "NumberFormatter/CustomInfo");
#pragma pack(pop)
