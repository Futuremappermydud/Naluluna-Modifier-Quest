// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:38 PM
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.SetPropertyUtility
  class SetPropertyUtility : public ::Il2CppObject {
    public:
    // static public System.Boolean SetColor(UnityEngine.Color currentValue, UnityEngine.Color newValue)
    // Offset: 0x11FB740
    static bool SetColor(UnityEngine::Color& currentValue, UnityEngine::Color newValue);
    // static public System.Boolean SetStruct(T currentValue, T newValue)
    // Offset: 0xE4E5A4
    template<class T>
    static bool SetStruct(T& currentValue, T newValue) {
      static_assert(std::is_convertible_v<T, System::ValueType*>);
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<bool>("UnityEngine.UI", "SetPropertyUtility", "SetStruct", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, currentValue, newValue));
    }
    // static public System.Boolean SetClass(T currentValue, T newValue)
    // Offset: 0xE4E544
    template<class T>
    static bool SetClass(T& currentValue, T newValue) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<bool>("UnityEngine.UI", "SetPropertyUtility", "SetClass", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, currentValue, newValue));
    }
  }; // UnityEngine.UI.SetPropertyUtility
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::SetPropertyUtility*, "UnityEngine.UI", "SetPropertyUtility");
#pragma pack(pop)
