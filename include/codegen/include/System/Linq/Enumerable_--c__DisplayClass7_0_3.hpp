// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Linq.Enumerable
#include "System/Linq/Enumerable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // Autogenerated type: System.Linq.Enumerable/<>c__DisplayClass7_0`3
  template<typename TMiddle, typename TResult, typename TSource>
  class Enumerable::$$c__DisplayClass7_0_3 : public ::Il2CppObject {
    public:
    // public System.Func`2<TMiddle,TResult> selector2
    // Offset: 0x0
    System::Func_2<TMiddle, TResult>* selector2;
    // public System.Func`2<TSource,TMiddle> selector1
    // Offset: 0x0
    System::Func_2<TSource, TMiddle>* selector1;
    // TResult <CombineSelectors>b__0(TSource x)
    // Offset: 0x126FF80
    TResult $CombineSelectors$b__0(TSource x) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TResult>(this, "<CombineSelectors>b__0", x));
    }
    // public System.Void .ctor()
    // Offset: 0x126FF68
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Enumerable::$$c__DisplayClass7_0_3<TMiddle, TResult, TSource>* New_ctor() {
      return (Enumerable::$$c__DisplayClass7_0_3<TMiddle, TResult, TSource>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Enumerable::$$c__DisplayClass7_0_3<TMiddle, TResult, TSource>*>::get()));
    }
  }; // System.Linq.Enumerable/<>c__DisplayClass7_0`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Enumerable::$$c__DisplayClass7_0_3, "System.Linq", "Enumerable/<>c__DisplayClass7_0`3");
#pragma pack(pop)
