// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NamedPresetsSO
#include "GlobalNamespace/NamedPresetsSO.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NamedPreset
  class NamedPreset;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MainEffectGraphicsSettingsPresetsSO
  class MainEffectGraphicsSettingsPresetsSO : public GlobalNamespace::NamedPresetsSO {
    public:
    // Nested type: GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset
    class Preset;
    // private MainEffectGraphicsSettingsPresetsSO/Preset[] _presets
    // Offset: 0x18
    ::Array<GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset*>* presets;
    // public MainEffectGraphicsSettingsPresetsSO/Preset[] get_presets()
    // Offset: 0xBFD180
    ::Array<GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset*>* get_presets();
    // public override NamedPreset[] get_namedPresets()
    // Offset: 0xBFD188
    // Implemented from: NamedPresetsSO
    // Base method: NamedPreset[] NamedPresetsSO::get_namedPresets()
    ::Array<GlobalNamespace::NamedPreset*>* get_namedPresets();
    // public System.Void .ctor()
    // Offset: 0xBFD190
    // Implemented from: NamedPresetsSO
    // Base method: System.Void NamedPresetsSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MainEffectGraphicsSettingsPresetsSO* New_ctor();
  }; // MainEffectGraphicsSettingsPresetsSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*, "", "MainEffectGraphicsSettingsPresetsSO");
#pragma pack(pop)
