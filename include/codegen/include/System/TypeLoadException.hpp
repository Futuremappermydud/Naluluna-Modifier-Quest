// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:27 PM
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
  // Autogenerated type: System.TypeLoadException
  class TypeLoadException : public System::SystemException, public System::Runtime::Serialization::ISerializable {
    public:
    // private System.String ClassName
    // Offset: 0x88
    ::Il2CppString* ClassName;
    // private System.String AssemblyName
    // Offset: 0x90
    ::Il2CppString* AssemblyName;
    // private System.String MessageArg
    // Offset: 0x98
    ::Il2CppString* MessageArg;
    // System.Int32 ResourceId
    // Offset: 0xA0
    int ResourceId;
    // private System.Void SetMessageField()
    // Offset: 0x17804F8
    void SetMessageField();
    // private System.Void .ctor(System.String className, System.String assemblyName)
    // Offset: 0x1780648
    static TypeLoadException* New_ctor(::Il2CppString* className, ::Il2CppString* assemblyName);
    // private System.Void .ctor(System.String className, System.String assemblyName, System.String messageArg, System.Int32 resourceId)
    // Offset: 0x1780654
    static TypeLoadException* New_ctor(::Il2CppString* className, ::Il2CppString* assemblyName, ::Il2CppString* messageArg, int resourceId);
    // public System.Void .ctor()
    // Offset: 0x1780460
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static TypeLoadException* New_ctor();
    // public System.Void .ctor(System.String message)
    // Offset: 0x177FCD0
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    static TypeLoadException* New_ctor(::Il2CppString* message);
    // public override System.String get_Message()
    // Offset: 0x17804D4
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::Il2CppString* get_Message();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x17806E8
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static TypeLoadException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1780830
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.TypeLoadException
}
DEFINE_IL2CPP_ARG_TYPE(System::TypeLoadException*, "System", "TypeLoadException");
#pragma pack(pop)
