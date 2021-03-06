// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:24 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TextElementType
  struct TextElementType : public System::Enum {
    public:
    // public System.Byte value__
    // Offset: 0x0
    uint8_t value;
    // static field const value: static public TMPro.TextElementType Character
    static constexpr const uint8_t Character = 1u;
    // Get static field: static public TMPro.TextElementType Character
    static TMPro::TextElementType _get_Character();
    // Set static field: static public TMPro.TextElementType Character
    static void _set_Character(TMPro::TextElementType value);
    // static field const value: static public TMPro.TextElementType Sprite
    static constexpr const uint8_t Sprite = 2u;
    // Get static field: static public TMPro.TextElementType Sprite
    static TMPro::TextElementType _get_Sprite();
    // Set static field: static public TMPro.TextElementType Sprite
    static void _set_Sprite(TMPro::TextElementType value);
    // Creating value type constructor for type: TextElementType
    TextElementType(uint8_t value_ = {}) : value{value_} {}
  }; // TMPro.TextElementType
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TextElementType, "TMPro", "TextElementType");
#pragma pack(pop)
