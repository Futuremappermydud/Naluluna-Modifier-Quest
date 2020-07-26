// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IList
  class IList;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Autogenerated type: System.Runtime.Remoting.ProviderData
  class ProviderData : public ::Il2CppObject {
    public:
    // System.String Ref
    // Offset: 0x10
    ::Il2CppString* Ref;
    // System.String Type
    // Offset: 0x18
    ::Il2CppString* Type;
    // System.String Id
    // Offset: 0x20
    ::Il2CppString* Id;
    // System.Collections.Hashtable CustomProperties
    // Offset: 0x28
    System::Collections::Hashtable* CustomProperties;
    // System.Collections.IList CustomData
    // Offset: 0x30
    System::Collections::IList* CustomData;
    // public System.Void CopyFrom(System.Runtime.Remoting.ProviderData other)
    // Offset: 0xDFEC04
    void CopyFrom(System::Runtime::Remoting::ProviderData* other);
    // public System.Void .ctor()
    // Offset: 0xDFF260
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ProviderData* New_ctor();
  }; // System.Runtime.Remoting.ProviderData
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ProviderData*, "System.Runtime.Remoting", "ProviderData");
#pragma pack(pop)
