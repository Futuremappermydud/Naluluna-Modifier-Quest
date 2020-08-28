// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Enum/ParseFailureKind
#include "System/Enum_ParseFailureKind.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Enum/EnumResult
  struct Enum::EnumResult : public System::ValueType {
    public:
    // System.Object parsedEnum
    // Offset: 0x0
    ::Il2CppObject* parsedEnum;
    // System.Boolean canThrow
    // Offset: 0x8
    bool canThrow;
    // System.Enum/ParseFailureKind m_failure
    // Offset: 0xC
    System::Enum::ParseFailureKind m_failure;
    // System.String m_failureMessageID
    // Offset: 0x10
    ::Il2CppString* m_failureMessageID;
    // System.String m_failureParameter
    // Offset: 0x18
    ::Il2CppString* m_failureParameter;
    // System.Object m_failureMessageFormatArgument
    // Offset: 0x20
    ::Il2CppObject* m_failureMessageFormatArgument;
    // System.Exception m_innerException
    // Offset: 0x28
    System::Exception* m_innerException;
    // Creating value type constructor for type: EnumResult
    EnumResult(::Il2CppObject* parsedEnum_ = {}, bool canThrow_ = {}, System::Enum::ParseFailureKind m_failure_ = {}, ::Il2CppString* m_failureMessageID_ = {}, ::Il2CppString* m_failureParameter_ = {}, ::Il2CppObject* m_failureMessageFormatArgument_ = {}, System::Exception* m_innerException_ = {}) : parsedEnum{parsedEnum_}, canThrow{canThrow_}, m_failure{m_failure_}, m_failureMessageID{m_failureMessageID_}, m_failureParameter{m_failureParameter_}, m_failureMessageFormatArgument{m_failureMessageFormatArgument_}, m_innerException{m_innerException_} {}
    // System.Void Init(System.Boolean canMethodThrow)
    // Offset: 0xA3031C
    void Init(bool canMethodThrow);
    // System.Void SetFailure(System.Exception unhandledException)
    // Offset: 0xA30328
    void SetFailure(System::Exception* unhandledException);
    // System.Void SetFailure(System.Enum/ParseFailureKind failure, System.String failureParameter)
    // Offset: 0xA30338
    void SetFailure(System::Enum::ParseFailureKind failure, ::Il2CppString* failureParameter);
    // System.Void SetFailure(System.Enum/ParseFailureKind failure, System.String failureMessageID, System.Object failureMessageFormatArgument)
    // Offset: 0xA30340
    void SetFailure(System::Enum::ParseFailureKind failure, ::Il2CppString* failureMessageID, ::Il2CppObject* failureMessageFormatArgument);
    // System.Exception GetEnumParseException()
    // Offset: 0xA30348
    System::Exception* GetEnumParseException();
  }; // System.Enum/EnumResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Enum::EnumResult, "System", "Enum/EnumResult");
#pragma pack(pop)
