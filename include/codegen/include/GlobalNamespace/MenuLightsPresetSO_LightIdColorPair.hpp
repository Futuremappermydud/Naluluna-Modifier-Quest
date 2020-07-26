// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:11 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: MenuLightsPresetSO
#include "GlobalNamespace/MenuLightsPresetSO.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MenuLightsPresetSO/LightIdColorPair
  class MenuLightsPresetSO::LightIdColorPair : public ::Il2CppObject {
    public:
    // public System.Int32 lightId
    // Offset: 0x10
    int lightId;
    // public ColorSO baseColor
    // Offset: 0x18
    GlobalNamespace::ColorSO* baseColor;
    // public System.Single intensity
    // Offset: 0x20
    float intensity;
    // public UnityEngine.Color get_lightColor()
    // Offset: 0xBECC6C
    UnityEngine::Color get_lightColor();
    // public System.Void .ctor()
    // Offset: 0xBECFBC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MenuLightsPresetSO::LightIdColorPair* New_ctor();
  }; // MenuLightsPresetSO/LightIdColorPair
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuLightsPresetSO::LightIdColorPair*, "", "MenuLightsPresetSO/LightIdColorPair");
#pragma pack(pop)
