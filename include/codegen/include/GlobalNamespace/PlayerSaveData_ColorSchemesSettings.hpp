// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:27 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerSaveData/ColorSchemesSettings
  class PlayerSaveData::ColorSchemesSettings : public ::Il2CppObject {
    public:
    // public System.Boolean overrideDefaultColors
    // Offset: 0x10
    bool overrideDefaultColors;
    // public System.String selectedColorSchemeId
    // Offset: 0x18
    ::Il2CppString* selectedColorSchemeId;
    // public System.Collections.Generic.List`1<PlayerSaveData/ColorScheme> colorSchemes
    // Offset: 0x20
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::ColorScheme*>* colorSchemes;
    // public System.Void .ctor(System.Boolean overrideDefaultColors, System.String selectedColorSchemeId, System.Collections.Generic.List`1<PlayerSaveData/ColorScheme> colorSchemes)
    // Offset: 0xBC702C
    static PlayerSaveData::ColorSchemesSettings* New_ctor(bool overrideDefaultColors, ::Il2CppString* selectedColorSchemeId, System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::ColorScheme*>* colorSchemes);
  }; // PlayerSaveData/ColorSchemesSettings
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::ColorSchemesSettings*, "", "PlayerSaveData/ColorSchemesSettings");
#pragma pack(pop)
