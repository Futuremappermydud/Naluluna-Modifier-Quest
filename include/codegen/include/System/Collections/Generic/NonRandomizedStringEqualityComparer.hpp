// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:52 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Collections.Generic.EqualityComparer`1
#include "System/Collections/Generic/EqualityComparer_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.NonRandomizedStringEqualityComparer
  class NonRandomizedStringEqualityComparer : public System::Collections::Generic::EqualityComparer_1<::Il2CppString*> {
    public:
    // public System.Boolean Equals(System.String x, System.String y)
    // Offset: 0x13202A0
    bool Equals(::Il2CppString* x, ::Il2CppString* y);
    // public System.Int32 GetHashCode(System.String obj)
    // Offset: 0x13202B0
    int GetHashCode(::Il2CppString* obj);
    // public System.Void .ctor()
    // Offset: 0x13202C8
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Void EqualityComparer`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static NonRandomizedStringEqualityComparer* New_ctor();
  }; // System.Collections.Generic.NonRandomizedStringEqualityComparer
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::NonRandomizedStringEqualityComparer*, "System.Collections.Generic", "NonRandomizedStringEqualityComparer");
#pragma pack(pop)
