// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:55 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestCaseData
  class ITestCaseData;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Autogenerated type: NUnit.Framework.Interfaces.ICombiningStrategy
  class ICombiningStrategy {
    public:
    // public System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestCaseData> GetTestCases(System.Collections.IEnumerable[] sources)
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<NUnit::Framework::Interfaces::ITestCaseData*>* GetTestCases(::Array<System::Collections::IEnumerable*>* sources);
  }; // NUnit.Framework.Interfaces.ICombiningStrategy
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::ICombiningStrategy*, "NUnit.Framework.Interfaces", "ICombiningStrategy");
#pragma pack(pop)
