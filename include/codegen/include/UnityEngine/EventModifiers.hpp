// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:33 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.EventModifiers
  struct EventModifiers : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.EventModifiers None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.EventModifiers None
    static UnityEngine::EventModifiers _get_None();
    // Set static field: static public UnityEngine.EventModifiers None
    static void _set_None(UnityEngine::EventModifiers value);
    // static field const value: static public UnityEngine.EventModifiers Shift
    static constexpr const int Shift = 1;
    // Get static field: static public UnityEngine.EventModifiers Shift
    static UnityEngine::EventModifiers _get_Shift();
    // Set static field: static public UnityEngine.EventModifiers Shift
    static void _set_Shift(UnityEngine::EventModifiers value);
    // static field const value: static public UnityEngine.EventModifiers Control
    static constexpr const int Control = 2;
    // Get static field: static public UnityEngine.EventModifiers Control
    static UnityEngine::EventModifiers _get_Control();
    // Set static field: static public UnityEngine.EventModifiers Control
    static void _set_Control(UnityEngine::EventModifiers value);
    // static field const value: static public UnityEngine.EventModifiers Alt
    static constexpr const int Alt = 4;
    // Get static field: static public UnityEngine.EventModifiers Alt
    static UnityEngine::EventModifiers _get_Alt();
    // Set static field: static public UnityEngine.EventModifiers Alt
    static void _set_Alt(UnityEngine::EventModifiers value);
    // static field const value: static public UnityEngine.EventModifiers Command
    static constexpr const int Command = 8;
    // Get static field: static public UnityEngine.EventModifiers Command
    static UnityEngine::EventModifiers _get_Command();
    // Set static field: static public UnityEngine.EventModifiers Command
    static void _set_Command(UnityEngine::EventModifiers value);
    // static field const value: static public UnityEngine.EventModifiers Numeric
    static constexpr const int Numeric = 16;
    // Get static field: static public UnityEngine.EventModifiers Numeric
    static UnityEngine::EventModifiers _get_Numeric();
    // Set static field: static public UnityEngine.EventModifiers Numeric
    static void _set_Numeric(UnityEngine::EventModifiers value);
    // static field const value: static public UnityEngine.EventModifiers CapsLock
    static constexpr const int CapsLock = 32;
    // Get static field: static public UnityEngine.EventModifiers CapsLock
    static UnityEngine::EventModifiers _get_CapsLock();
    // Set static field: static public UnityEngine.EventModifiers CapsLock
    static void _set_CapsLock(UnityEngine::EventModifiers value);
    // static field const value: static public UnityEngine.EventModifiers FunctionKey
    static constexpr const int FunctionKey = 64;
    // Get static field: static public UnityEngine.EventModifiers FunctionKey
    static UnityEngine::EventModifiers _get_FunctionKey();
    // Set static field: static public UnityEngine.EventModifiers FunctionKey
    static void _set_FunctionKey(UnityEngine::EventModifiers value);
    // Creating value type constructor for type: EventModifiers
    EventModifiers(int value_ = {}) : value{value_} {}
  }; // UnityEngine.EventModifiers
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventModifiers, "UnityEngine", "EventModifiers");
#pragma pack(pop)
