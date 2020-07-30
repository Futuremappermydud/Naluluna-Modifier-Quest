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
  // Autogenerated type: NUnit.Framework.Internal.TestNameGenerator/ArgumentFragment
  class TestNameGenerator::ArgumentFragment : public NUnit::Framework::Internal::TestNameGenerator::NameFragment {
    public:
    // private System.Int32 _index
    // Offset: 0x10
    int index;
    // private System.Int32 _maxStringLength
    // Offset: 0x14
    int maxStringLength;
    // public System.Void .ctor(System.Int32 index, System.Int32 maxStringLength)
    // Offset: 0x18DAF8C
    static TestNameGenerator::ArgumentFragment* New_ctor(int index, int maxStringLength);
    // public override System.String GetText(System.Reflection.MethodInfo method, System.Object[] args)
    // Offset: 0x18DBAFC
    // Implemented from: NUnit.Framework.Internal.TestNameGenerator/NameFragment
    // Base method: System.String NameFragment::GetText(System.Reflection.MethodInfo method, System.Object[] args)
    ::Il2CppString* GetText(System::Reflection::MethodInfo* method, ::Array<::Il2CppObject*>* args);
  }; // NUnit.Framework.Internal.TestNameGenerator/ArgumentFragment
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestNameGenerator::ArgumentFragment*, "NUnit.Framework.Internal", "TestNameGenerator/ArgumentFragment");
#pragma pack(pop)
