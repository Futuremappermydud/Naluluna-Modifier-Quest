// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:57 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: NUnit.Framework.Internal.TestSuite
#include "NUnit/Framework/Internal/TestSuite.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.ParameterizedMethodSuite
  class ParameterizedMethodSuite : public NUnit::Framework::Internal::TestSuite {
    public:
    // private System.Boolean _isTheory
    // Offset: 0x89
    bool isTheory;
    // public System.Void .ctor(NUnit.Framework.Interfaces.IMethodInfo method)
    // Offset: 0x18D59D8
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Void Test::.ctor(NUnit.Framework.Interfaces.IMethodInfo method)
    static ParameterizedMethodSuite* New_ctor(NUnit::Framework::Interfaces::IMethodInfo* method);
    // public override System.String get_TestType()
    // Offset: 0x18D5C6C
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.String Test::get_TestType()
    ::Il2CppString* get_TestType();
  }; // NUnit.Framework.Internal.ParameterizedMethodSuite
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::ParameterizedMethodSuite*, "NUnit.Framework.Internal", "ParameterizedMethodSuite");
#pragma pack(pop)
