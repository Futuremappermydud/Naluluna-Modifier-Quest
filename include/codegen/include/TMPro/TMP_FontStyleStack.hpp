// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:23 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: FontStyles
  struct FontStyles;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_FontStyleStack
  struct TMP_FontStyleStack : public System::ValueType {
    public:
    // public System.Byte bold
    // Offset: 0x0
    uint8_t bold;
    // public System.Byte italic
    // Offset: 0x1
    uint8_t italic;
    // public System.Byte underline
    // Offset: 0x2
    uint8_t underline;
    // public System.Byte strikethrough
    // Offset: 0x3
    uint8_t strikethrough;
    // public System.Byte highlight
    // Offset: 0x4
    uint8_t highlight;
    // public System.Byte superscript
    // Offset: 0x5
    uint8_t superscript;
    // public System.Byte subscript
    // Offset: 0x6
    uint8_t subscript;
    // public System.Byte uppercase
    // Offset: 0x7
    uint8_t uppercase;
    // public System.Byte lowercase
    // Offset: 0x8
    uint8_t lowercase;
    // public System.Byte smallcaps
    // Offset: 0x9
    uint8_t smallcaps;
    // Creating value type constructor for type: TMP_FontStyleStack
    TMP_FontStyleStack(uint8_t bold_ = {}, uint8_t italic_ = {}, uint8_t underline_ = {}, uint8_t strikethrough_ = {}, uint8_t highlight_ = {}, uint8_t superscript_ = {}, uint8_t subscript_ = {}, uint8_t uppercase_ = {}, uint8_t lowercase_ = {}, uint8_t smallcaps_ = {}) : bold{bold_}, italic{italic_}, underline{underline_}, strikethrough{strikethrough_}, highlight{highlight_}, superscript{superscript_}, subscript{subscript_}, uppercase{uppercase_}, lowercase{lowercase_}, smallcaps{smallcaps_} {}
    // public System.Void Clear()
    // Offset: 0xA27174
    void Clear();
    // public System.Byte Add(TMPro.FontStyles style)
    // Offset: 0xA27180
    uint8_t Add(TMPro::FontStyles style);
    // public System.Byte Remove(TMPro.FontStyles style)
    // Offset: 0xA27188
    uint8_t Remove(TMPro::FontStyles style);
  }; // TMPro.TMP_FontStyleStack
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_FontStyleStack, "TMPro", "TMP_FontStyleStack");
#pragma pack(pop)
