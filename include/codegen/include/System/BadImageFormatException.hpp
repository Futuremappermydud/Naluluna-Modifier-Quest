// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.SystemException
#include "System/SystemException.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.BadImageFormatException
  class BadImageFormatException : public System::SystemException {
    public:
    // private System.String _fileName
    // Offset: 0x88
    ::Il2CppString* fileName;
    // private System.String _fusionLog
    // Offset: 0x90
    ::Il2CppString* fusionLog;
    // public System.Void .ctor(System.String message, System.String fileName)
    // Offset: 0x1316A1C
    static BadImageFormatException* New_ctor(::Il2CppString* message, ::Il2CppString* fileName);
    // private System.Void SetMessageField()
    // Offset: 0x1316A88
    void SetMessageField();
    // public System.String get_FusionLog()
    // Offset: 0x1316F4C
    ::Il2CppString* get_FusionLog();
    // public System.Void .ctor()
    // Offset: 0x1316940
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static BadImageFormatException* New_ctor();
    // public System.Void .ctor(System.String message)
    // Offset: 0x13169B4
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    static BadImageFormatException* New_ctor(::Il2CppString* message);
    // public System.Void .ctor(System.String message, System.Exception inner)
    // Offset: 0x13169E8
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message, System.Exception inner)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception inner)
    static BadImageFormatException* New_ctor(::Il2CppString* message, System::Exception* inner);
    // public override System.String get_Message()
    // Offset: 0x1316A64
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::Il2CppString* get_Message();
    // public override System.String ToString()
    // Offset: 0x1316B28
    // Implemented from: System.Exception
    // Base method: System.String Exception::ToString()
    ::Il2CppString* ToString();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1316DF4
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static BadImageFormatException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1316F54
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.BadImageFormatException
}
DEFINE_IL2CPP_ARG_TYPE(System::BadImageFormatException*, "System", "BadImageFormatException");
#pragma pack(pop)
