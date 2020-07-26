// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:19 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: TMPro.TMP_Dropdown
#include "TMPro/TMP_Dropdown.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_Dropdown/OptionData
  class TMP_Dropdown::OptionData : public ::Il2CppObject {
    public:
    // private System.String m_Text
    // Offset: 0x10
    ::Il2CppString* m_Text;
    // private UnityEngine.Sprite m_Image
    // Offset: 0x18
    UnityEngine::Sprite* m_Image;
    // public System.String get_text()
    // Offset: 0xB6E89C
    ::Il2CppString* get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0xB6E8A4
    void set_text(::Il2CppString* value);
    // public UnityEngine.Sprite get_image()
    // Offset: 0xB6E8AC
    UnityEngine::Sprite* get_image();
    // public System.Void set_image(UnityEngine.Sprite value)
    // Offset: 0xB6E8B4
    void set_image(UnityEngine::Sprite* value);
    // public System.Void .ctor(System.String text)
    // Offset: 0xB6C4E0
    static TMP_Dropdown::OptionData* New_ctor(::Il2CppString* text);
    // public System.Void .ctor(UnityEngine.Sprite image)
    // Offset: 0xB6C60C
    static TMP_Dropdown::OptionData* New_ctor(UnityEngine::Sprite* image);
    // public System.Void .ctor(System.String text, UnityEngine.Sprite image)
    // Offset: 0xB6E8BC
    static TMP_Dropdown::OptionData* New_ctor(::Il2CppString* text, UnityEngine::Sprite* image);
    // public System.Void .ctor()
    // Offset: 0xB6B880
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TMP_Dropdown::OptionData* New_ctor();
  }; // TMPro.TMP_Dropdown/OptionData
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Dropdown::OptionData*, "TMPro", "TMP_Dropdown/OptionData");
#pragma pack(pop)
