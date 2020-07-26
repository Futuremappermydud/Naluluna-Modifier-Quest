// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:29 PM
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
// Type namespace: System.Resources
namespace System::Resources {
  // Autogenerated type: System.Resources.MissingSatelliteAssemblyException
  class MissingSatelliteAssemblyException : public System::SystemException {
    public:
    // private System.String _cultureName
    // Offset: 0x88
    ::Il2CppString* cultureName;
    // public System.Void .ctor(System.String message, System.String cultureName)
    // Offset: 0x1145D80
    static MissingSatelliteAssemblyException* New_ctor(::Il2CppString* message, ::Il2CppString* cultureName);
    // public System.Void .ctor()
    // Offset: 0x1145E64
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissingSatelliteAssemblyException* New_ctor();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1145ED8
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static MissingSatelliteAssemblyException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.Resources.MissingSatelliteAssemblyException
}
DEFINE_IL2CPP_ARG_TYPE(System::Resources::MissingSatelliteAssemblyException*, "System.Resources", "MissingSatelliteAssemblyException");
#pragma pack(pop)
