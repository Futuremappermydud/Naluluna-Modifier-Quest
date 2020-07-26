// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:25 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.TypeLoadException
#include "System/TypeLoadException.hpp"
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
  // Autogenerated type: System.DllNotFoundException
  class DllNotFoundException : public System::TypeLoadException {
    public:
    // public System.Void .ctor()
    // Offset: 0xD89EB0
    // Implemented from: System.TypeLoadException
    // Base method: System.Void TypeLoadException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static DllNotFoundException* New_ctor();
    // public System.Void .ctor(System.String message)
    // Offset: 0xD89F14
    // Implemented from: System.TypeLoadException
    // Base method: System.Void TypeLoadException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    static DllNotFoundException* New_ctor(::Il2CppString* message);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xD89F44
    // Implemented from: System.TypeLoadException
    // Base method: System.Void TypeLoadException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static DllNotFoundException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.DllNotFoundException
}
DEFINE_IL2CPP_ARG_TYPE(System::DllNotFoundException*, "System", "DllNotFoundException");
#pragma pack(pop)
