// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:23 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.FontAssetCreationSettings
  struct FontAssetCreationSettings : public System::ValueType {
    public:
    // public System.String sourceFontFileName
    // Offset: 0x0
    ::Il2CppString* sourceFontFileName;
    // public System.String sourceFontFileGUID
    // Offset: 0x8
    ::Il2CppString* sourceFontFileGUID;
    // public System.Int32 pointSizeSamplingMode
    // Offset: 0x10
    int pointSizeSamplingMode;
    // public System.Int32 pointSize
    // Offset: 0x14
    int pointSize;
    // public System.Int32 padding
    // Offset: 0x18
    int padding;
    // public System.Int32 packingMode
    // Offset: 0x1C
    int packingMode;
    // public System.Int32 atlasWidth
    // Offset: 0x20
    int atlasWidth;
    // public System.Int32 atlasHeight
    // Offset: 0x24
    int atlasHeight;
    // public System.Int32 characterSetSelectionMode
    // Offset: 0x28
    int characterSetSelectionMode;
    // public System.String characterSequence
    // Offset: 0x30
    ::Il2CppString* characterSequence;
    // public System.String referencedFontAssetGUID
    // Offset: 0x38
    ::Il2CppString* referencedFontAssetGUID;
    // public System.String referencedTextAssetGUID
    // Offset: 0x40
    ::Il2CppString* referencedTextAssetGUID;
    // public System.Int32 fontStyle
    // Offset: 0x48
    int fontStyle;
    // public System.Single fontStyleModifier
    // Offset: 0x4C
    float fontStyleModifier;
    // public System.Int32 renderMode
    // Offset: 0x50
    int renderMode;
    // public System.Boolean includeFontFeatures
    // Offset: 0x54
    bool includeFontFeatures;
    // Creating value type constructor for type: FontAssetCreationSettings
    FontAssetCreationSettings(::Il2CppString* sourceFontFileName_ = {}, ::Il2CppString* sourceFontFileGUID_ = {}, int pointSizeSamplingMode_ = {}, int pointSize_ = {}, int padding_ = {}, int packingMode_ = {}, int atlasWidth_ = {}, int atlasHeight_ = {}, int characterSetSelectionMode_ = {}, ::Il2CppString* characterSequence_ = {}, ::Il2CppString* referencedFontAssetGUID_ = {}, ::Il2CppString* referencedTextAssetGUID_ = {}, int fontStyle_ = {}, float fontStyleModifier_ = {}, int renderMode_ = {}, bool includeFontFeatures_ = {}) : sourceFontFileName{sourceFontFileName_}, sourceFontFileGUID{sourceFontFileGUID_}, pointSizeSamplingMode{pointSizeSamplingMode_}, pointSize{pointSize_}, padding{padding_}, packingMode{packingMode_}, atlasWidth{atlasWidth_}, atlasHeight{atlasHeight_}, characterSetSelectionMode{characterSetSelectionMode_}, characterSequence{characterSequence_}, referencedFontAssetGUID{referencedFontAssetGUID_}, referencedTextAssetGUID{referencedTextAssetGUID_}, fontStyle{fontStyle_}, fontStyleModifier{fontStyleModifier_}, renderMode{renderMode_}, includeFontFeatures{includeFontFeatures_} {}
    // System.Void .ctor(System.String sourceFontFileGUID, System.Int32 pointSize, System.Int32 pointSizeSamplingMode, System.Int32 padding, System.Int32 packingMode, System.Int32 atlasWidth, System.Int32 atlasHeight, System.Int32 characterSelectionMode, System.String characterSet, System.Int32 renderMode)
    // Offset: 0xA26F20
    static FontAssetCreationSettings* New_ctor(::Il2CppString* sourceFontFileGUID, int pointSize, int pointSizeSamplingMode, int padding, int packingMode, int atlasWidth, int atlasHeight, int characterSelectionMode, ::Il2CppString* characterSet, int renderMode);
  }; // TMPro.FontAssetCreationSettings
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::FontAssetCreationSettings, "TMPro", "FontAssetCreationSettings");
#pragma pack(pop)
