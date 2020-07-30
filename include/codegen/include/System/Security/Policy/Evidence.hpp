// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:47 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Policy
namespace System::Security::Policy {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Security.Policy
namespace System::Security::Policy {
  // Autogenerated type: System.Security.Policy.Evidence
  class Evidence : public ::Il2CppObject, public System::Collections::ICollection, public System::Collections::IEnumerable {
    public:
    // Nested type: System::Security::Policy::Evidence::EvidenceEnumerator
    class EvidenceEnumerator;
    // private System.Boolean _locked
    // Offset: 0x10
    bool locked;
    // private System.Collections.ArrayList hostEvidenceList
    // Offset: 0x18
    System::Collections::ArrayList* hostEvidenceList;
    // private System.Collections.ArrayList assemblyEvidenceList
    // Offset: 0x20
    System::Collections::ArrayList* assemblyEvidenceList;
    // public System.Void .ctor()
    // Offset: 0xDD614C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Evidence* New_ctor();
    // public System.Int32 get_Count()
    // Offset: 0xDD6154
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0xDD61B4
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 index)
    void CopyTo(System::Array* array, int index);
    // Creating proxy method: System_Collections_ICollection_CopyTo
    // Maps to method: CopyTo
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0xDD627C
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IEnumerable_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Security.Policy.Evidence
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Policy::Evidence*, "System.Security.Policy", "Evidence");
#pragma pack(pop)
