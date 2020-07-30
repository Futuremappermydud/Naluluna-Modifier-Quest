// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:36 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: AppInitScenesTransitionSetupDataSO
#include "GlobalNamespace/AppInitScenesTransitionSetupDataSO.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType
  struct AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType DoNotOverride
    static constexpr const int DoNotOverride = 0;
    // Get static field: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType DoNotOverride
    static GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType _get_DoNotOverride();
    // Set static field: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType DoNotOverride
    static void _set_DoNotOverride(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType value);
    // static field const value: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType AppStart
    static constexpr const int AppStart = 1;
    // Get static field: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType AppStart
    static GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType _get_AppStart();
    // Set static field: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType AppStart
    static void _set_AppStart(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType value);
    // static field const value: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType AppRestart
    static constexpr const int AppRestart = 2;
    // Get static field: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType AppRestart
    static GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType _get_AppRestart();
    // Set static field: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType AppRestart
    static void _set_AppRestart(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType value);
    // static field const value: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType MultiSceneEditor
    static constexpr const int MultiSceneEditor = 3;
    // Get static field: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType MultiSceneEditor
    static GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType _get_MultiSceneEditor();
    // Set static field: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType MultiSceneEditor
    static void _set_MultiSceneEditor(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType value);
    // Creating value type constructor for type: AppInitOverrideStartType
    AppInitOverrideStartType(int value_ = {}) : value{value_} {}
  }; // AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType, "", "AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType");
#pragma pack(pop)
