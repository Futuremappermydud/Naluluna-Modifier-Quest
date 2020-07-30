// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:53 PM
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Contracts
namespace System::Diagnostics::Contracts {
  // Autogenerated type: System.Diagnostics.Contracts.Contract
  class Contract : public ::Il2CppObject {
    public:
    // static public System.Boolean ForAll(System.Collections.Generic.IEnumerable`1<T> collection, System.Predicate`1<T> predicate)
    // Offset: 0xE49528
    template<class T>
    static bool ForAll(System::Collections::Generic::IEnumerable_1<T>* collection, System::Predicate_1<T>* predicate) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<bool>("System.Diagnostics.Contracts", "Contract", "ForAll", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, collection, predicate));
    }
  }; // System.Diagnostics.Contracts.Contract
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Contracts::Contract*, "System.Diagnostics.Contracts", "Contract");
#pragma pack(pop)
