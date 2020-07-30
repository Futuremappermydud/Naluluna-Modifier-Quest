// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:42 PM
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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderNLS
  class EncoderNLS;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.EncoderFallbackBuffer
  class EncoderFallbackBuffer : public ::Il2CppObject {
    public:
    // System.Char* charStart
    // Offset: 0x10
    ::Il2CppChar* charStart;
    // System.Char* charEnd
    // Offset: 0x18
    ::Il2CppChar* charEnd;
    // System.Text.EncoderNLS encoder
    // Offset: 0x20
    System::Text::EncoderNLS* encoder;
    // System.Boolean setEncoder
    // Offset: 0x28
    bool setEncoder;
    // System.Boolean bUsedEncoder
    // Offset: 0x29
    bool bUsedEncoder;
    // System.Boolean bFallingBack
    // Offset: 0x2A
    bool bFallingBack;
    // System.Int32 iRecursionCount
    // Offset: 0x2C
    int iRecursionCount;
    // public System.Boolean Fallback(System.Char charUnknown, System.Int32 index)
    // Offset: 0xFFFFFFFF
    bool Fallback(::Il2CppChar charUnknown, int index);
    // public System.Boolean Fallback(System.Char charUnknownHigh, System.Char charUnknownLow, System.Int32 index)
    // Offset: 0xFFFFFFFF
    bool Fallback(::Il2CppChar charUnknownHigh, ::Il2CppChar charUnknownLow, int index);
    // public System.Char GetNextChar()
    // Offset: 0xFFFFFFFF
    ::Il2CppChar GetNextChar();
    // public System.Boolean MovePrevious()
    // Offset: 0xFFFFFFFF
    bool MovePrevious();
    // public System.Int32 get_Remaining()
    // Offset: 0xFFFFFFFF
    int get_Remaining();
    // public System.Void Reset()
    // Offset: 0x12D8A34
    void Reset();
    // System.Void InternalReset()
    // Offset: 0x12D8A68
    void InternalReset();
    // System.Void InternalInitialize(System.Char* charStart, System.Char* charEnd, System.Text.EncoderNLS encoder, System.Boolean setEncoder)
    // Offset: 0x12D469C
    void InternalInitialize(::Il2CppChar* charStart, ::Il2CppChar* charEnd, System::Text::EncoderNLS* encoder, bool setEncoder);
    // System.Char InternalGetNextChar()
    // Offset: 0x12D46E0
    ::Il2CppChar InternalGetNextChar();
    // System.Boolean InternalFallback(System.Char ch, System.Char* chars)
    // Offset: 0x12D8A80
    bool InternalFallback(::Il2CppChar ch, ::Il2CppChar*& chars);
    // System.Void ThrowLastCharRecursive(System.Int32 charRecursive)
    // Offset: 0x12D8C50
    void ThrowLastCharRecursive(int charRecursive);
    // protected System.Void .ctor()
    // Offset: 0x12D805C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static EncoderFallbackBuffer* New_ctor();
  }; // System.Text.EncoderFallbackBuffer
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncoderFallbackBuffer*, "System.Text", "EncoderFallbackBuffer");
#pragma pack(pop)
