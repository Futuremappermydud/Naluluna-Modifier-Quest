// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:16 PM
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
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // Autogenerated type: System.Linq.EmptyEnumerable`1
  template<typename TElement>
  class EmptyEnumerable_1 : public ::Il2CppObject {
    public:
    // Autogenerated static field getter
    // Get static field: static public readonly TElement[] Instance
    static ::Array<TElement>* _get_Instance() {
      return CRASH_UNLESS((il2cpp_utils::GetFieldValue<::Array<TElement>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EmptyEnumerable_1<TElement>*>::get(), "Instance")));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly TElement[] Instance
    static void _set_Instance(::Array<TElement>* value) {
      CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EmptyEnumerable_1<TElement>*>::get(), "Instance", value));
    }
    // static private System.Void .cctor()
    // Offset: 0x126F404
    static void _cctor() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EmptyEnumerable_1<TElement>*>::get(), ".cctor"));
    }
  }; // System.Linq.EmptyEnumerable`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::EmptyEnumerable_1, "System.Linq", "EmptyEnumerable`1");
#pragma pack(pop)
