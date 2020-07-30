// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:17 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.TimeoutException
#include "System/TimeoutException.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Autogenerated type: System.Text.RegularExpressions.RegexMatchTimeoutException
  class RegexMatchTimeoutException : public System::TimeoutException, public System::Runtime::Serialization::ISerializable {
    public:
    // private System.String regexInput
    // Offset: 0x88
    ::Il2CppString* regexInput;
    // private System.String regexPattern
    // Offset: 0x90
    ::Il2CppString* regexPattern;
    // private System.TimeSpan matchTimeout
    // Offset: 0x98
    System::TimeSpan matchTimeout;
    // public System.Void .ctor(System.String regexInput, System.String regexPattern, System.TimeSpan matchTimeout)
    // Offset: 0x121572C
    static RegexMatchTimeoutException* New_ctor(::Il2CppString* regexInput, ::Il2CppString* regexPattern, System::TimeSpan matchTimeout);
    // private System.Void Init(System.String input, System.String pattern, System.TimeSpan timeout)
    // Offset: 0x1215800
    void Init(::Il2CppString* input, ::Il2CppString* pattern, System::TimeSpan timeout);
    // public System.Void .ctor()
    // Offset: 0x1215848
    // Implemented from: System.TimeoutException
    // Base method: System.Void TimeoutException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static RegexMatchTimeoutException* New_ctor();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1215970
    // Implemented from: System.TimeoutException
    // Base method: System.Void TimeoutException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static RegexMatchTimeoutException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo si, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1215A9C
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo si, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* si, System::Runtime::Serialization::StreamingContext context);
    // private System.Void Init()
    // Offset: 0x12158C8
    // Implemented from: System.Exception
    // Base method: System.Void Exception::Init()
    void Init();
  }; // System.Text.RegularExpressions.RegexMatchTimeoutException
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexMatchTimeoutException*, "System.Text.RegularExpressions", "RegexMatchTimeoutException");
#pragma pack(pop)
