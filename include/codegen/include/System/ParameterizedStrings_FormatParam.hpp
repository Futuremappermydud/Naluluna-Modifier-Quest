// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ParameterizedStrings
#include "System/ParameterizedStrings.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.ParameterizedStrings/FormatParam
  struct ParameterizedStrings::FormatParam : public System::ValueType {
    public:
    // private readonly System.Int32 _int32
    // Offset: 0x0
    int int32;
    // private readonly System.String _string
    // Offset: 0x8
    ::Il2CppString* string;
    // Creating value type constructor for type: FormatParam
    FormatParam(int int32_ = {}, ::Il2CppString* string_ = {}) : int32{int32_}, string{string_} {}
    // public System.Void .ctor(System.Int32 value)
    // Offset: 0xA46B9C
    static ParameterizedStrings::FormatParam* New_ctor(int value);
    // private System.Void .ctor(System.Int32 intValue, System.String stringValue)
    // Offset: 0xA46BAC
    static ParameterizedStrings::FormatParam* New_ctor(int intValue, ::Il2CppString* stringValue);
    // public System.Int32 get_Int32()
    // Offset: 0xA46BBC
    int get_Int32();
    // public System.String get_String()
    // Offset: 0xA46BC4
    ::Il2CppString* get_String();
    // public System.Object get_Object()
    // Offset: 0xA46C20
    ::Il2CppObject* get_Object();
  }; // System.ParameterizedStrings/FormatParam
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ParameterizedStrings::FormatParam, "System", "ParameterizedStrings/FormatParam");
#pragma pack(pop)
