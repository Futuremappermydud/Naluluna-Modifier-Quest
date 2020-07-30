// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
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
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.LockRecursionException
  class LockRecursionException : public System::Exception {
    public:
    // public System.Void .ctor()
    // Offset: 0x13C4ACC
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static LockRecursionException* New_ctor();
    // public System.Void .ctor(System.String message)
    // Offset: 0x13C4B34
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message)
    static LockRecursionException* New_ctor(::Il2CppString* message);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x13C4BAC
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static LockRecursionException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.Threading.LockRecursionException
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::LockRecursionException*, "System.Threading", "LockRecursionException");
#pragma pack(pop)
