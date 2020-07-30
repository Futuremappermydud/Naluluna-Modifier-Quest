// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:26 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MenuLightsPresetSO
  class MenuLightsPresetSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::MenuLightsPresetSO::LightIdColorPair
    class LightIdColorPair;
    // private ColorSO _playersPlaceNeonsColor
    // Offset: 0x18
    GlobalNamespace::ColorSO* playersPlaceNeonsColor;
    // private System.Single _playersPlaceNeonsIntensity
    // Offset: 0x20
    float playersPlaceNeonsIntensity;
    // private MenuLightsPresetSO/LightIdColorPair[] _lightIdColorPairs
    // Offset: 0x28
    ::Array<GlobalNamespace::MenuLightsPresetSO::LightIdColorPair*>* lightIdColorPairs;
    // public ColorSO get_playersPlaceNeonsColor()
    // Offset: 0xBECF94
    GlobalNamespace::ColorSO* get_playersPlaceNeonsColor();
    // public System.Single get_playersPlaceNeonsIntensity()
    // Offset: 0xBECF9C
    float get_playersPlaceNeonsIntensity();
    // public MenuLightsPresetSO/LightIdColorPair[] get_lightIdColorPairs()
    // Offset: 0xBECFA4
    ::Array<GlobalNamespace::MenuLightsPresetSO::LightIdColorPair*>* get_lightIdColorPairs();
    // public System.Void .ctor()
    // Offset: 0xBECFAC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MenuLightsPresetSO* New_ctor();
  }; // MenuLightsPresetSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuLightsPresetSO*, "", "MenuLightsPresetSO");
#pragma pack(pop)
