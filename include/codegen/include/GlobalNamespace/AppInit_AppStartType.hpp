// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: AppInit
#include "GlobalNamespace/AppInit.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AppInit/AppStartType
  struct AppInit::AppStartType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public AppInit/AppStartType AppStart
    static constexpr const int AppStart = 0;
    // Get static field: static public AppInit/AppStartType AppStart
    static GlobalNamespace::AppInit::AppStartType _get_AppStart();
    // Set static field: static public AppInit/AppStartType AppStart
    static void _set_AppStart(GlobalNamespace::AppInit::AppStartType value);
    // static field const value: static public AppInit/AppStartType AppRestart
    static constexpr const int AppRestart = 1;
    // Get static field: static public AppInit/AppStartType AppRestart
    static GlobalNamespace::AppInit::AppStartType _get_AppRestart();
    // Set static field: static public AppInit/AppStartType AppRestart
    static void _set_AppRestart(GlobalNamespace::AppInit::AppStartType value);
    // static field const value: static public AppInit/AppStartType MultiSceneEditor
    static constexpr const int MultiSceneEditor = 2;
    // Get static field: static public AppInit/AppStartType MultiSceneEditor
    static GlobalNamespace::AppInit::AppStartType _get_MultiSceneEditor();
    // Set static field: static public AppInit/AppStartType MultiSceneEditor
    static void _set_MultiSceneEditor(GlobalNamespace::AppInit::AppStartType value);
    // Creating value type constructor for type: AppStartType
    AppStartType(int value_ = {}) : value{value_} {}
  }; // AppInit/AppStartType
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AppInit::AppStartType, "", "AppInit/AppStartType");
#pragma pack(pop)
