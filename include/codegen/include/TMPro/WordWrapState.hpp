// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:24 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: TMPro.FontStyles
#include "TMPro/FontStyles.hpp"
// Including type: TMPro.TMP_LineInfo
#include "TMPro/TMP_LineInfo.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: TMPro.TMP_FontStyleStack
#include "TMPro/TMP_FontStyleStack.hpp"
// Including type: TMPro.TMP_RichTextTagStack`1
#include "TMPro/TMP_RichTextTagStack_1.hpp"
// Including type: TMPro.FontWeight
#include "TMPro/FontWeight.hpp"
// Including type: TMPro.MaterialReference
#include "TMPro/MaterialReference.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_TextInfo
  class TMP_TextInfo;
  // Forward declaring type: TMP_ColorGradient
  class TMP_ColorGradient;
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
  // Forward declaring type: TMP_SpriteAsset
  class TMP_SpriteAsset;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.WordWrapState
  struct WordWrapState : public System::ValueType {
    public:
    // public System.Int32 previous_WordBreak
    // Offset: 0x0
    int previous_WordBreak;
    // public System.Int32 total_CharacterCount
    // Offset: 0x4
    int total_CharacterCount;
    // public System.Int32 visible_CharacterCount
    // Offset: 0x8
    int visible_CharacterCount;
    // public System.Int32 visible_SpriteCount
    // Offset: 0xC
    int visible_SpriteCount;
    // public System.Int32 visible_LinkCount
    // Offset: 0x10
    int visible_LinkCount;
    // public System.Int32 firstCharacterIndex
    // Offset: 0x14
    int firstCharacterIndex;
    // public System.Int32 firstVisibleCharacterIndex
    // Offset: 0x18
    int firstVisibleCharacterIndex;
    // public System.Int32 lastCharacterIndex
    // Offset: 0x1C
    int lastCharacterIndex;
    // public System.Int32 lastVisibleCharIndex
    // Offset: 0x20
    int lastVisibleCharIndex;
    // public System.Int32 lineNumber
    // Offset: 0x24
    int lineNumber;
    // public System.Single maxCapHeight
    // Offset: 0x28
    float maxCapHeight;
    // public System.Single maxAscender
    // Offset: 0x2C
    float maxAscender;
    // public System.Single maxDescender
    // Offset: 0x30
    float maxDescender;
    // public System.Single maxLineAscender
    // Offset: 0x34
    float maxLineAscender;
    // public System.Single maxLineDescender
    // Offset: 0x38
    float maxLineDescender;
    // public System.Single previousLineAscender
    // Offset: 0x3C
    float previousLineAscender;
    // public System.Single xAdvance
    // Offset: 0x40
    float xAdvance;
    // public System.Single preferredWidth
    // Offset: 0x44
    float preferredWidth;
    // public System.Single preferredHeight
    // Offset: 0x48
    float preferredHeight;
    // public System.Single previousLineScale
    // Offset: 0x4C
    float previousLineScale;
    // public System.Int32 wordCount
    // Offset: 0x50
    int wordCount;
    // public TMPro.FontStyles fontStyle
    // Offset: 0x54
    TMPro::FontStyles fontStyle;
    // public System.Single fontScale
    // Offset: 0x58
    float fontScale;
    // public System.Single fontScaleMultiplier
    // Offset: 0x5C
    float fontScaleMultiplier;
    // public System.Single currentFontSize
    // Offset: 0x60
    float currentFontSize;
    // public System.Single baselineOffset
    // Offset: 0x64
    float baselineOffset;
    // public System.Single lineOffset
    // Offset: 0x68
    float lineOffset;
    // public TMPro.TMP_TextInfo textInfo
    // Offset: 0x70
    TMPro::TMP_TextInfo* textInfo;
    // public TMPro.TMP_LineInfo lineInfo
    // Offset: 0x78
    TMPro::TMP_LineInfo lineInfo;
    // public UnityEngine.Color32 vertexColor
    // Offset: 0xD4
    UnityEngine::Color32 vertexColor;
    // public UnityEngine.Color32 underlineColor
    // Offset: 0xD8
    UnityEngine::Color32 underlineColor;
    // public UnityEngine.Color32 strikethroughColor
    // Offset: 0xDC
    UnityEngine::Color32 strikethroughColor;
    // public UnityEngine.Color32 highlightColor
    // Offset: 0xE0
    UnityEngine::Color32 highlightColor;
    // public TMPro.TMP_FontStyleStack basicStyleStack
    // Offset: 0xE4
    TMPro::TMP_FontStyleStack basicStyleStack;
    // public TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> colorStack
    // Offset: 0xF0
    TMPro::TMP_RichTextTagStack_1<UnityEngine::Color32> colorStack;
    // public TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> underlineColorStack
    // Offset: 0x108
    TMPro::TMP_RichTextTagStack_1<UnityEngine::Color32> underlineColorStack;
    // public TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> strikethroughColorStack
    // Offset: 0x120
    TMPro::TMP_RichTextTagStack_1<UnityEngine::Color32> strikethroughColorStack;
    // public TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> highlightColorStack
    // Offset: 0x138
    TMPro::TMP_RichTextTagStack_1<UnityEngine::Color32> highlightColorStack;
    // public TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient> colorGradientStack
    // Offset: 0x150
    TMPro::TMP_RichTextTagStack_1<TMPro::TMP_ColorGradient*> colorGradientStack;
    // public TMPro.TMP_RichTextTagStack`1<System.Single> sizeStack
    // Offset: 0x168
    TMPro::TMP_RichTextTagStack_1<float> sizeStack;
    // public TMPro.TMP_RichTextTagStack`1<System.Single> indentStack
    // Offset: 0x180
    TMPro::TMP_RichTextTagStack_1<float> indentStack;
    // public TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight> fontWeightStack
    // Offset: 0x198
    TMPro::TMP_RichTextTagStack_1<TMPro::FontWeight> fontWeightStack;
    // public TMPro.TMP_RichTextTagStack`1<System.Int32> styleStack
    // Offset: 0x1B0
    TMPro::TMP_RichTextTagStack_1<int> styleStack;
    // public TMPro.TMP_RichTextTagStack`1<System.Single> baselineStack
    // Offset: 0x1C8
    TMPro::TMP_RichTextTagStack_1<float> baselineStack;
    // public TMPro.TMP_RichTextTagStack`1<System.Int32> actionStack
    // Offset: 0x1E0
    TMPro::TMP_RichTextTagStack_1<int> actionStack;
    // public TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference> materialReferenceStack
    // Offset: 0x1F8
    TMPro::TMP_RichTextTagStack_1<TMPro::MaterialReference> materialReferenceStack;
    // public TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions> lineJustificationStack
    // Offset: 0x240
    TMPro::TMP_RichTextTagStack_1<TMPro::TextAlignmentOptions> lineJustificationStack;
    // public System.Int32 spriteAnimationID
    // Offset: 0x258
    int spriteAnimationID;
    // public TMPro.TMP_FontAsset currentFontAsset
    // Offset: 0x260
    TMPro::TMP_FontAsset* currentFontAsset;
    // public TMPro.TMP_SpriteAsset currentSpriteAsset
    // Offset: 0x268
    TMPro::TMP_SpriteAsset* currentSpriteAsset;
    // public UnityEngine.Material currentMaterial
    // Offset: 0x270
    UnityEngine::Material* currentMaterial;
    // public System.Int32 currentMaterialIndex
    // Offset: 0x278
    int currentMaterialIndex;
    // public TMPro.Extents meshExtents
    // Offset: 0x27C
    TMPro::Extents meshExtents;
    // public System.Boolean tagNoParsing
    // Offset: 0x28C
    bool tagNoParsing;
    // public System.Boolean isNonBreakingSpace
    // Offset: 0x28D
    bool isNonBreakingSpace;
    // Creating value type constructor for type: WordWrapState
    WordWrapState(int previous_WordBreak_ = {}, int total_CharacterCount_ = {}, int visible_CharacterCount_ = {}, int visible_SpriteCount_ = {}, int visible_LinkCount_ = {}, int firstCharacterIndex_ = {}, int firstVisibleCharacterIndex_ = {}, int lastCharacterIndex_ = {}, int lastVisibleCharIndex_ = {}, int lineNumber_ = {}, float maxCapHeight_ = {}, float maxAscender_ = {}, float maxDescender_ = {}, float maxLineAscender_ = {}, float maxLineDescender_ = {}, float previousLineAscender_ = {}, float xAdvance_ = {}, float preferredWidth_ = {}, float preferredHeight_ = {}, float previousLineScale_ = {}, int wordCount_ = {}, TMPro::FontStyles fontStyle_ = {}, float fontScale_ = {}, float fontScaleMultiplier_ = {}, float currentFontSize_ = {}, float baselineOffset_ = {}, float lineOffset_ = {}, TMPro::TMP_TextInfo* textInfo_ = {}, TMPro::TMP_LineInfo lineInfo_ = {}, UnityEngine::Color32 vertexColor_ = {}, UnityEngine::Color32 underlineColor_ = {}, UnityEngine::Color32 strikethroughColor_ = {}, UnityEngine::Color32 highlightColor_ = {}, TMPro::TMP_FontStyleStack basicStyleStack_ = {}, TMPro::TMP_RichTextTagStack_1<UnityEngine::Color32> colorStack_ = {}, TMPro::TMP_RichTextTagStack_1<UnityEngine::Color32> underlineColorStack_ = {}, TMPro::TMP_RichTextTagStack_1<UnityEngine::Color32> strikethroughColorStack_ = {}, TMPro::TMP_RichTextTagStack_1<UnityEngine::Color32> highlightColorStack_ = {}, TMPro::TMP_RichTextTagStack_1<TMPro::TMP_ColorGradient*> colorGradientStack_ = {}, TMPro::TMP_RichTextTagStack_1<float> sizeStack_ = {}, TMPro::TMP_RichTextTagStack_1<float> indentStack_ = {}, TMPro::TMP_RichTextTagStack_1<TMPro::FontWeight> fontWeightStack_ = {}, TMPro::TMP_RichTextTagStack_1<int> styleStack_ = {}, TMPro::TMP_RichTextTagStack_1<float> baselineStack_ = {}, TMPro::TMP_RichTextTagStack_1<int> actionStack_ = {}, TMPro::TMP_RichTextTagStack_1<TMPro::MaterialReference> materialReferenceStack_ = {}, TMPro::TMP_RichTextTagStack_1<TMPro::TextAlignmentOptions> lineJustificationStack_ = {}, int spriteAnimationID_ = {}, TMPro::TMP_FontAsset* currentFontAsset_ = {}, TMPro::TMP_SpriteAsset* currentSpriteAsset_ = {}, UnityEngine::Material* currentMaterial_ = {}, int currentMaterialIndex_ = {}, TMPro::Extents meshExtents_ = {}, bool tagNoParsing_ = {}, bool isNonBreakingSpace_ = {}) : previous_WordBreak{previous_WordBreak_}, total_CharacterCount{total_CharacterCount_}, visible_CharacterCount{visible_CharacterCount_}, visible_SpriteCount{visible_SpriteCount_}, visible_LinkCount{visible_LinkCount_}, firstCharacterIndex{firstCharacterIndex_}, firstVisibleCharacterIndex{firstVisibleCharacterIndex_}, lastCharacterIndex{lastCharacterIndex_}, lastVisibleCharIndex{lastVisibleCharIndex_}, lineNumber{lineNumber_}, maxCapHeight{maxCapHeight_}, maxAscender{maxAscender_}, maxDescender{maxDescender_}, maxLineAscender{maxLineAscender_}, maxLineDescender{maxLineDescender_}, previousLineAscender{previousLineAscender_}, xAdvance{xAdvance_}, preferredWidth{preferredWidth_}, preferredHeight{preferredHeight_}, previousLineScale{previousLineScale_}, wordCount{wordCount_}, fontStyle{fontStyle_}, fontScale{fontScale_}, fontScaleMultiplier{fontScaleMultiplier_}, currentFontSize{currentFontSize_}, baselineOffset{baselineOffset_}, lineOffset{lineOffset_}, textInfo{textInfo_}, lineInfo{lineInfo_}, vertexColor{vertexColor_}, underlineColor{underlineColor_}, strikethroughColor{strikethroughColor_}, highlightColor{highlightColor_}, basicStyleStack{basicStyleStack_}, colorStack{colorStack_}, underlineColorStack{underlineColorStack_}, strikethroughColorStack{strikethroughColorStack_}, highlightColorStack{highlightColorStack_}, colorGradientStack{colorGradientStack_}, sizeStack{sizeStack_}, indentStack{indentStack_}, fontWeightStack{fontWeightStack_}, styleStack{styleStack_}, baselineStack{baselineStack_}, actionStack{actionStack_}, materialReferenceStack{materialReferenceStack_}, lineJustificationStack{lineJustificationStack_}, spriteAnimationID{spriteAnimationID_}, currentFontAsset{currentFontAsset_}, currentSpriteAsset{currentSpriteAsset_}, currentMaterial{currentMaterial_}, currentMaterialIndex{currentMaterialIndex_}, meshExtents{meshExtents_}, tagNoParsing{tagNoParsing_}, isNonBreakingSpace{isNonBreakingSpace_} {}
  }; // TMPro.WordWrapState
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::WordWrapState, "TMPro", "WordWrapState");
#pragma pack(pop)
