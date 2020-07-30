// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:43 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ApplicationException
#include "System/ApplicationException.hpp"
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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.InvalidFilterCriteriaException
  class InvalidFilterCriteriaException : public System::ApplicationException {
    public:
    // public System.Void .ctor()
    // Offset: 0x1353D20
    // Implemented from: System.ApplicationException
    // Base method: System.Void ApplicationException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static InvalidFilterCriteriaException* New_ctor();
    // public System.Void .ctor(System.String message)
    // Offset: 0x1353D94
    // Implemented from: System.ApplicationException
    // Base method: System.Void ApplicationException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    static InvalidFilterCriteriaException* New_ctor(::Il2CppString* message);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1353DC8
    // Implemented from: System.ApplicationException
    // Base method: System.Void ApplicationException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static InvalidFilterCriteriaException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.Reflection.InvalidFilterCriteriaException
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::InvalidFilterCriteriaException*, "System.Reflection", "InvalidFilterCriteriaException");
#pragma pack(pop)
