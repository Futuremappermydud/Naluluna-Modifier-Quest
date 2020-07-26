// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:25 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MemberAccessException
#include "System/MemberAccessException.hpp"
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
  // Autogenerated type: System.FieldAccessException
  class FieldAccessException : public System::MemberAccessException {
    public:
    // public System.Void .ctor()
    // Offset: 0xD91E4C
    // Implemented from: System.MemberAccessException
    // Base method: System.Void MemberAccessException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static FieldAccessException* New_ctor();
    // public System.Void .ctor(System.String message)
    // Offset: 0xD91EB0
    // Implemented from: System.MemberAccessException
    // Base method: System.Void MemberAccessException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    static FieldAccessException* New_ctor(::Il2CppString* message);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xD91EE0
    // Implemented from: System.MemberAccessException
    // Base method: System.Void MemberAccessException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static FieldAccessException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.FieldAccessException
}
DEFINE_IL2CPP_ARG_TYPE(System::FieldAccessException*, "System", "FieldAccessException");
#pragma pack(pop)
