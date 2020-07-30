// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:35 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeSO
  class ColorSchemeSO;
  // Forward declaring type: SimpleColorSO
  class SimpleColorSO;
  // Forward declaring type: ColorScheme
  class ColorScheme;
  // Forward declaring type: NoteType
  struct NoteType;
  // Forward declaring type: SaberType
  struct SaberType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ColorManager
  class ColorManager : public UnityEngine::MonoBehaviour {
    public:
    // private ColorSchemeSO _defaultColorScheme
    // Offset: 0x18
    GlobalNamespace::ColorSchemeSO* defaultColorScheme;
    // private SimpleColorSO _saberAColor
    // Offset: 0x20
    GlobalNamespace::SimpleColorSO* saberAColor;
    // private SimpleColorSO _saberBColor
    // Offset: 0x28
    GlobalNamespace::SimpleColorSO* saberBColor;
    // private SimpleColorSO _environmentColor0
    // Offset: 0x30
    GlobalNamespace::SimpleColorSO* environmentColor0;
    // private SimpleColorSO _environmentColor1
    // Offset: 0x38
    GlobalNamespace::SimpleColorSO* environmentColor1;
    // private SimpleColorSO _obstaclesColor
    // Offset: 0x40
    GlobalNamespace::SimpleColorSO* obstaclesColor;
    // private ColorScheme _colorScheme
    // Offset: 0x48
    GlobalNamespace::ColorScheme* colorScheme;
    // private System.Action colorsDidChangeEvent
    // Offset: 0x50
    System::Action* colorsDidChangeEvent;
    // public System.Void add_colorsDidChangeEvent(System.Action value)
    // Offset: 0xB617F4
    void add_colorsDidChangeEvent(System::Action* value);
    // public System.Void remove_colorsDidChangeEvent(System.Action value)
    // Offset: 0xB61898
    void remove_colorsDidChangeEvent(System::Action* value);
    // protected System.Void Awake()
    // Offset: 0xB6193C
    void Awake();
    // protected System.Void Start()
    // Offset: 0xB6196C
    void Start();
    // public UnityEngine.Color ColorForNoteType(NoteType type)
    // Offset: 0xB61A0C
    UnityEngine::Color ColorForNoteType(GlobalNamespace::NoteType type);
    // public UnityEngine.Color ColorForSaberType(SaberType type)
    // Offset: 0xB61A60
    UnityEngine::Color ColorForSaberType(GlobalNamespace::SaberType type);
    // public UnityEngine.Color EffectsColorForSaberType(SaberType type)
    // Offset: 0xB61AB4
    UnityEngine::Color EffectsColorForSaberType(GlobalNamespace::SaberType type);
    // public UnityEngine.Color GetObstacleEffectColor()
    // Offset: 0xB61B4C
    UnityEngine::Color GetObstacleEffectColor();
    // public System.Void .ctor()
    // Offset: 0xB61BB0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ColorManager* New_ctor();
  }; // ColorManager
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorManager*, "", "ColorManager");
#pragma pack(pop)
