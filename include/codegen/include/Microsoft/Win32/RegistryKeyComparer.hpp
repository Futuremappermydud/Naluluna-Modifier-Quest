// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Collections.IEqualityComparer
#include "System/Collections/IEqualityComparer.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Autogenerated type: Microsoft.Win32.RegistryKeyComparer
  class RegistryKeyComparer : public ::Il2CppObject, public System::Collections::IEqualityComparer {
    public:
    // public System.Boolean Equals(System.Object x, System.Object y)
    // Offset: 0x1097340
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object x, System.Object y)
    // Base method: System.Boolean IEqualityComparer::Equals(System.Object x, System.Object y)
    bool Equals(::Il2CppObject* x, ::Il2CppObject* y);
    // Creating proxy method: System_Collections_IEqualityComparer_Equals
    // Maps to method: Equals
    bool System_Collections_IEqualityComparer_Equals(::Il2CppObject* x, ::Il2CppObject* y);
    // public System.Int32 GetHashCode(System.Object obj)
    // Offset: 0x10973F4
    // Implemented from: System.Collections.IEqualityComparer
    // Base method: System.Int32 IEqualityComparer::GetHashCode(System.Object obj)
    int GetHashCode(::Il2CppObject* obj);
    // Creating proxy method: System_Collections_IEqualityComparer_GetHashCode
    // Maps to method: GetHashCode
    int System_Collections_IEqualityComparer_GetHashCode(::Il2CppObject* obj);
    // public System.Void .ctor()
    // Offset: 0x1091D4C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RegistryKeyComparer* New_ctor();
  }; // Microsoft.Win32.RegistryKeyComparer
}
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::RegistryKeyComparer*, "Microsoft.Win32", "RegistryKeyComparer");
#pragma pack(pop)
