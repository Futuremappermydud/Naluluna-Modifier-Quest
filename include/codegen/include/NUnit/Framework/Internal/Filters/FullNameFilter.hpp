// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:55 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Filters.ValueMatchFilter
#include "NUnit/Framework/Internal/Filters/ValueMatchFilter.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Filters
namespace NUnit::Framework::Internal::Filters {
  // Autogenerated type: NUnit.Framework.Internal.Filters.FullNameFilter
  class FullNameFilter : public NUnit::Framework::Internal::Filters::ValueMatchFilter {
    public:
    // public System.Void .ctor(System.String expectedValue)
    // Offset: 0x1076D80
    // Implemented from: NUnit.Framework.Internal.Filters.ValueMatchFilter
    // Base method: System.Void ValueMatchFilter::.ctor(System.String expectedValue)
    static FullNameFilter* New_ctor(::Il2CppString* expectedValue);
    // public override System.Boolean Match(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x1076D84
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Boolean TestFilter::Match(NUnit.Framework.Interfaces.ITest test)
    bool Match(NUnit::Framework::Interfaces::ITest* test);
    // protected override System.String get_ElementName()
    // Offset: 0x1076E4C
    // Implemented from: NUnit.Framework.Internal.Filters.ValueMatchFilter
    // Base method: System.String ValueMatchFilter::get_ElementName()
    ::Il2CppString* get_ElementName();
  }; // NUnit.Framework.Internal.Filters.FullNameFilter
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Filters::FullNameFilter*, "NUnit.Framework.Internal.Filters", "FullNameFilter");
#pragma pack(pop)
