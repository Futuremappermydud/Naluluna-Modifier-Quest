// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeSO
  class ColorSchemeSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ColorScheme
  class ColorScheme : public ::Il2CppObject {
    public:
    // private System.String _colorSchemeId
    // Offset: 0x10
    ::Il2CppString* colorSchemeId;
    // private System.String _colorSchemeName
    // Offset: 0x18
    ::Il2CppString* colorSchemeName;
    // private System.Boolean _isEditable
    // Offset: 0x20
    bool isEditable;
    // private UnityEngine.Color _saberAColor
    // Offset: 0x24
    UnityEngine::Color saberAColor;
    // private UnityEngine.Color _saberBColor
    // Offset: 0x34
    UnityEngine::Color saberBColor;
    // private UnityEngine.Color _obstaclesColor
    // Offset: 0x44
    UnityEngine::Color obstaclesColor;
    // private UnityEngine.Color _environmentColor0
    // Offset: 0x54
    UnityEngine::Color environmentColor0;
    // private UnityEngine.Color _environmentColor1
    // Offset: 0x64
    UnityEngine::Color environmentColor1;
    // private System.Boolean _supportsEnvironmentColorBoost
    // Offset: 0x74
    bool supportsEnvironmentColorBoost;
    // private UnityEngine.Color _environmentColor0Boost
    // Offset: 0x78
    UnityEngine::Color environmentColor0Boost;
    // private UnityEngine.Color _environmentColor1Boost
    // Offset: 0x88
    UnityEngine::Color environmentColor1Boost;
    // public System.String get_colorSchemeId()
    // Offset: 0x1980AC0
    ::Il2CppString* get_colorSchemeId();
    // public System.String get_colorSchemeName()
    // Offset: 0x1980AC8
    ::Il2CppString* get_colorSchemeName();
    // public System.Boolean get_isEditable()
    // Offset: 0x1980AD0
    bool get_isEditable();
    // public UnityEngine.Color get_saberAColor()
    // Offset: 0x1980AD8
    UnityEngine::Color get_saberAColor();
    // public UnityEngine.Color get_saberBColor()
    // Offset: 0x1980AE4
    UnityEngine::Color get_saberBColor();
    // public UnityEngine.Color get_environmentColor0()
    // Offset: 0x1980AF0
    UnityEngine::Color get_environmentColor0();
    // public UnityEngine.Color get_environmentColor1()
    // Offset: 0x1980AFC
    UnityEngine::Color get_environmentColor1();
    // public System.Boolean get_supportsEnvironmentColorBoost()
    // Offset: 0x1980B08
    bool get_supportsEnvironmentColorBoost();
    // public UnityEngine.Color get_environmentColor0Boost()
    // Offset: 0x1980B10
    UnityEngine::Color get_environmentColor0Boost();
    // public UnityEngine.Color get_environmentColor1Boost()
    // Offset: 0x1980B1C
    UnityEngine::Color get_environmentColor1Boost();
    // public UnityEngine.Color get_obstaclesColor()
    // Offset: 0x1980B28
    UnityEngine::Color get_obstaclesColor();
    // public System.Void .ctor(System.String colorSchemeId, System.String colorSchemeName, System.Boolean isEditable, UnityEngine.Color saberAColor, UnityEngine.Color saberBColor, UnityEngine.Color environmentColor0, UnityEngine.Color environmentColor1, System.Boolean supportsEnvironmentColorBoost, UnityEngine.Color environmentColor0Boost, UnityEngine.Color environmentColor1Boost, UnityEngine.Color obstaclesColor)
    // Offset: 0x1980B34
    static ColorScheme* New_ctor(::Il2CppString* colorSchemeId, ::Il2CppString* colorSchemeName, bool isEditable, UnityEngine::Color saberAColor, UnityEngine::Color saberBColor, UnityEngine::Color environmentColor0, UnityEngine::Color environmentColor1, bool supportsEnvironmentColorBoost, UnityEngine::Color environmentColor0Boost, UnityEngine::Color environmentColor1Boost, UnityEngine::Color obstaclesColor);
    // public System.Void .ctor(ColorScheme colorScheme, UnityEngine.Color saberAColor, UnityEngine.Color saberBColor, UnityEngine.Color environmentColor0, UnityEngine.Color environmentColor1, System.Boolean supportsEnvironmentColorBoost, UnityEngine.Color environmentColor0Boost, UnityEngine.Color environmentColor1Boost, UnityEngine.Color obstaclesColor)
    // Offset: 0x1980C60
    static ColorScheme* New_ctor(GlobalNamespace::ColorScheme* colorScheme, UnityEngine::Color saberAColor, UnityEngine::Color saberBColor, UnityEngine::Color environmentColor0, UnityEngine::Color environmentColor1, bool supportsEnvironmentColorBoost, UnityEngine::Color environmentColor0Boost, UnityEngine::Color environmentColor1Boost, UnityEngine::Color obstaclesColor);
    // public System.Void .ctor(ColorScheme colorScheme)
    // Offset: 0x1980CEC
    static ColorScheme* New_ctor(GlobalNamespace::ColorScheme* colorScheme);
    // public System.Void .ctor(ColorSchemeSO colorScheme)
    // Offset: 0x1980D98
    static ColorScheme* New_ctor(GlobalNamespace::ColorSchemeSO* colorScheme);
  }; // ColorScheme
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorScheme*, "", "ColorScheme");
#pragma pack(pop)
