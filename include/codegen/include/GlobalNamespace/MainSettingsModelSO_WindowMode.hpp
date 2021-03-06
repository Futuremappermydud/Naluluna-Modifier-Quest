// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MainSettingsModelSO
#include "GlobalNamespace/MainSettingsModelSO.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MainSettingsModelSO/WindowMode
  struct MainSettingsModelSO::WindowMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public MainSettingsModelSO/WindowMode Windowed
    static constexpr const int Windowed = 0;
    // Get static field: static public MainSettingsModelSO/WindowMode Windowed
    static GlobalNamespace::MainSettingsModelSO::WindowMode _get_Windowed();
    // Set static field: static public MainSettingsModelSO/WindowMode Windowed
    static void _set_Windowed(GlobalNamespace::MainSettingsModelSO::WindowMode value);
    // static field const value: static public MainSettingsModelSO/WindowMode Fullscreen
    static constexpr const int Fullscreen = 1;
    // Get static field: static public MainSettingsModelSO/WindowMode Fullscreen
    static GlobalNamespace::MainSettingsModelSO::WindowMode _get_Fullscreen();
    // Set static field: static public MainSettingsModelSO/WindowMode Fullscreen
    static void _set_Fullscreen(GlobalNamespace::MainSettingsModelSO::WindowMode value);
    // Creating value type constructor for type: WindowMode
    WindowMode(int value_ = {}) : value{value_} {}
  }; // MainSettingsModelSO/WindowMode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainSettingsModelSO::WindowMode, "", "MainSettingsModelSO/WindowMode");
#pragma pack(pop)
