// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:56 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: NUnit.Framework.Internal.TestNameGenerator/NameFragment
#include "NUnit/Framework/Internal/TestNameGenerator_NameFragment.hpp"
// Including type: NUnit.Framework.Internal.TestNameGenerator
#include "NUnit/Framework/Internal/TestNameGenerator.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.TestNameGenerator/MethodNameFragment
  class TestNameGenerator::MethodNameFragment : public NUnit::Framework::Internal::TestNameGenerator::NameFragment {
    public:
    // public override System.String GetText(System.Reflection.MethodInfo method, System.Object[] args)
    // Offset: 0x18DBE38
    // Implemented from: NUnit.Framework.Internal.TestNameGenerator/NameFragment
    // Base method: System.String NameFragment::GetText(System.Reflection.MethodInfo method, System.Object[] args)
    ::Il2CppString* GetText(System::Reflection::MethodInfo* method, ::Array<::Il2CppObject*>* args);
    // public System.Void .ctor()
    // Offset: 0x18DAF30
    // Implemented from: NUnit.Framework.Internal.TestNameGenerator/NameFragment
    // Base method: System.Void NameFragment::.ctor()
    // Base method: System.Void Object::.ctor()
    static TestNameGenerator::MethodNameFragment* New_ctor();
  }; // NUnit.Framework.Internal.TestNameGenerator/MethodNameFragment
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestNameGenerator::MethodNameFragment*, "NUnit.Framework.Internal", "TestNameGenerator/MethodNameFragment");
#pragma pack(pop)
