// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.UI.Dropdown
#include "UnityEngine/UI/Dropdown.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.Dropdown/OptionData
  class Dropdown::OptionData : public ::Il2CppObject {
    public:
    // private System.String m_Text
    // Offset: 0x10
    ::Il2CppString* m_Text;
    // private UnityEngine.Sprite m_Image
    // Offset: 0x18
    UnityEngine::Sprite* m_Image;
    // public System.String get_text()
    // Offset: 0x1152AE8
    ::Il2CppString* get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0x1152AF0
    void set_text(::Il2CppString* value);
    // public UnityEngine.Sprite get_image()
    // Offset: 0x1152AF8
    UnityEngine::Sprite* get_image();
    // public System.Void set_image(UnityEngine.Sprite value)
    // Offset: 0x1152B00
    void set_image(UnityEngine::Sprite* value);
    // public System.Void .ctor(System.String text)
    // Offset: 0x1152B10
    static Dropdown::OptionData* New_ctor(::Il2CppString* text);
    // public System.Void .ctor(UnityEngine.Sprite image)
    // Offset: 0x1152B44
    static Dropdown::OptionData* New_ctor(UnityEngine::Sprite* image);
    // public System.Void .ctor(System.String text, UnityEngine.Sprite image)
    // Offset: 0x1152B78
    static Dropdown::OptionData* New_ctor(::Il2CppString* text, UnityEngine::Sprite* image);
    // public System.Void .ctor()
    // Offset: 0x1152B08
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Dropdown::OptionData* New_ctor();
  }; // UnityEngine.UI.Dropdown/OptionData
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Dropdown::OptionData*, "UnityEngine.UI", "Dropdown/OptionData");
#pragma pack(pop)
