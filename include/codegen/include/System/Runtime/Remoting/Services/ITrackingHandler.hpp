// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:49 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ObjRef
  class ObjRef;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Services
namespace System::Runtime::Remoting::Services {
  // Autogenerated type: System.Runtime.Remoting.Services.ITrackingHandler
  class ITrackingHandler {
    public:
    // public System.Void DisconnectedObject(System.Object obj)
    // Offset: 0xFFFFFFFF
    void DisconnectedObject(::Il2CppObject* obj);
    // public System.Void MarshaledObject(System.Object obj, System.Runtime.Remoting.ObjRef or)
    // Offset: 0xFFFFFFFF
    void MarshaledObject(::Il2CppObject* obj, System::Runtime::Remoting::ObjRef* _or);
    // public System.Void UnmarshaledObject(System.Object obj, System.Runtime.Remoting.ObjRef or)
    // Offset: 0xFFFFFFFF
    void UnmarshaledObject(::Il2CppObject* obj, System::Runtime::Remoting::ObjRef* _or);
  }; // System.Runtime.Remoting.Services.ITrackingHandler
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Services::ITrackingHandler*, "System.Runtime.Remoting.Services", "ITrackingHandler");
#pragma pack(pop)
