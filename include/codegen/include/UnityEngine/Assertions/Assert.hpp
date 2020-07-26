// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:33 PM
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
  // Forward declaring type: IEqualityComparer`1<T>
  template<typename T>
  class IEqualityComparer_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine.Assertions
namespace UnityEngine::Assertions {
  // Autogenerated type: UnityEngine.Assertions.Assert
  class Assert : public ::Il2CppObject {
    public:
    // Get static field: static public System.Boolean raiseExceptions
    static bool _get_raiseExceptions();
    // Set static field: static public System.Boolean raiseExceptions
    static void _set_raiseExceptions(bool value);
    // static private System.Void Fail(System.String message, System.String userMessage)
    // Offset: 0x12E93CC
    static void Fail(::Il2CppString* message, ::Il2CppString* userMessage);
    // static public System.Void AreEqual(T expected, T actual, System.String message)
    // Offset: 0xC48E94
    template<class T>
    static void AreEqual(T expected, T actual, ::Il2CppString* message) {
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine.Assertions", "Assert", "AreEqual", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, expected, actual, message));
    }
    // static public System.Void AreEqual(T expected, T actual, System.String message, System.Collections.Generic.IEqualityComparer`1<T> comparer)
    // Offset: 0xC48F44
    template<class T>
    static void AreEqual(T expected, T actual, ::Il2CppString* message, System::Collections::Generic::IEqualityComparer_1<T>* comparer) {
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine.Assertions", "Assert", "AreEqual", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, expected, actual, message, comparer));
    }
    // static public System.Void AreEqual(UnityEngine.Object expected, UnityEngine.Object actual, System.String message)
    // Offset: 0x12E9644
    static void AreEqual(UnityEngine::Object* expected, UnityEngine::Object* actual, ::Il2CppString* message);
    // static public System.Void AreEqual(System.Int32 expected, System.Int32 actual)
    // Offset: 0x12E990C
    static void AreEqual(int expected, int actual);
    // static private System.Void .cctor()
    // Offset: 0x12E99A8
    static void _cctor();
  }; // UnityEngine.Assertions.Assert
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Assertions::Assert*, "UnityEngine.Assertions", "Assert");
#pragma pack(pop)
