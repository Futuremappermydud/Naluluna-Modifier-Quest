// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:04 PM
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
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ColorChangeUIEventType
  struct ColorChangeUIEventType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public ColorChangeUIEventType Drag
    static constexpr const int Drag = 0;
    // Get static field: static public ColorChangeUIEventType Drag
    static GlobalNamespace::ColorChangeUIEventType _get_Drag();
    // Set static field: static public ColorChangeUIEventType Drag
    static void _set_Drag(GlobalNamespace::ColorChangeUIEventType value);
    // static field const value: static public ColorChangeUIEventType PointerUp
    static constexpr const int PointerUp = 1;
    // Get static field: static public ColorChangeUIEventType PointerUp
    static GlobalNamespace::ColorChangeUIEventType _get_PointerUp();
    // Set static field: static public ColorChangeUIEventType PointerUp
    static void _set_PointerUp(GlobalNamespace::ColorChangeUIEventType value);
    // Creating value type constructor for type: ColorChangeUIEventType
    ColorChangeUIEventType(int value_ = {}) : value{value_} {}
  }; // ColorChangeUIEventType
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorChangeUIEventType, "", "ColorChangeUIEventType");
#pragma pack(pop)
