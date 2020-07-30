// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:39 PM
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
  // Autogenerated type: System.ExecutionEngineException
  class ExecutionEngineException : public System::SystemException {
    public:
    // public System.Void .ctor()
    // Offset: 0xD91DB0
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static ExecutionEngineException* New_ctor();
    // public System.Void .ctor(System.String message)
    // Offset: 0xD91E14
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    static ExecutionEngineException* New_ctor(::Il2CppString* message);
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0xD9091C
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message, System.Exception innerException)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception innerException)
    static ExecutionEngineException* New_ctor(::Il2CppString* message, System::Exception* innerException);
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xD91E44
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static ExecutionEngineException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.ExecutionEngineException
}
DEFINE_IL2CPP_ARG_TYPE(System::ExecutionEngineException*, "System", "ExecutionEngineException");
#pragma pack(pop)
