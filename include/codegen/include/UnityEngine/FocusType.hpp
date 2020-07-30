// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:33 PM
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
  // Autogenerated type: UnityEngine.FocusType
  struct FocusType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.FocusType Native
    static constexpr const int Native = 0;
    // Get static field: static public UnityEngine.FocusType Native
    static UnityEngine::FocusType _get_Native();
    // Set static field: static public UnityEngine.FocusType Native
    static void _set_Native(UnityEngine::FocusType value);
    // static field const value: static public UnityEngine.FocusType Keyboard
    static constexpr const int Keyboard = 1;
    // Get static field: static public UnityEngine.FocusType Keyboard
    static UnityEngine::FocusType _get_Keyboard();
    // Set static field: static public UnityEngine.FocusType Keyboard
    static void _set_Keyboard(UnityEngine::FocusType value);
    // static field const value: static public UnityEngine.FocusType Passive
    static constexpr const int Passive = 2;
    // Get static field: static public UnityEngine.FocusType Passive
    static UnityEngine::FocusType _get_Passive();
    // Set static field: static public UnityEngine.FocusType Passive
    static void _set_Passive(UnityEngine::FocusType value);
    // Creating value type constructor for type: FocusType
    FocusType(int value_ = {}) : value{value_} {}
  }; // UnityEngine.FocusType
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::FocusType, "UnityEngine", "FocusType");
#pragma pack(pop)
