// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:41 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEqualityComparer
  class IEqualityComparer;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Autogenerated type: System.Collections.IStructuralEquatable
  class IStructuralEquatable {
    public:
    // public System.Boolean Equals(System.Object other, System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFF
    bool System_Collections_IStructuralEquatable_Equals(::Il2CppObject* other, System::Collections::IEqualityComparer* comparer);
    // public System.Int32 GetHashCode(System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFF
    int System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer* comparer);
  }; // System.Collections.IStructuralEquatable
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::IStructuralEquatable*, "System.Collections", "IStructuralEquatable");
#pragma pack(pop)
