// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:43 PM
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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.EventAttributes
  struct EventAttributes : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Reflection.EventAttributes None
    static constexpr const int None = 0;
    // Get static field: static public System.Reflection.EventAttributes None
    static System::Reflection::EventAttributes _get_None();
    // Set static field: static public System.Reflection.EventAttributes None
    static void _set_None(System::Reflection::EventAttributes value);
    // static field const value: static public System.Reflection.EventAttributes SpecialName
    static constexpr const int SpecialName = 512;
    // Get static field: static public System.Reflection.EventAttributes SpecialName
    static System::Reflection::EventAttributes _get_SpecialName();
    // Set static field: static public System.Reflection.EventAttributes SpecialName
    static void _set_SpecialName(System::Reflection::EventAttributes value);
    // static field const value: static public System.Reflection.EventAttributes ReservedMask
    static constexpr const int ReservedMask = 1024;
    // Get static field: static public System.Reflection.EventAttributes ReservedMask
    static System::Reflection::EventAttributes _get_ReservedMask();
    // Set static field: static public System.Reflection.EventAttributes ReservedMask
    static void _set_ReservedMask(System::Reflection::EventAttributes value);
    // static field const value: static public System.Reflection.EventAttributes RTSpecialName
    static constexpr const int RTSpecialName = 1024;
    // Get static field: static public System.Reflection.EventAttributes RTSpecialName
    static System::Reflection::EventAttributes _get_RTSpecialName();
    // Set static field: static public System.Reflection.EventAttributes RTSpecialName
    static void _set_RTSpecialName(System::Reflection::EventAttributes value);
    // Creating value type constructor for type: EventAttributes
    EventAttributes(int value_ = {}) : value{value_} {}
  }; // System.Reflection.EventAttributes
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::EventAttributes, "System.Reflection", "EventAttributes");
#pragma pack(pop)
