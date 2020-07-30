// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:36 PM
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
// Type namespace: UnityEngine.TextCore
namespace UnityEngine::TextCore {
  // Autogenerated type: UnityEngine.TextCore.FaceInfo
  struct FaceInfo : public System::ValueType {
    public:
    // private System.String m_FamilyName
    // Offset: 0x0
    ::Il2CppString* m_FamilyName;
    // private System.String m_StyleName
    // Offset: 0x8
    ::Il2CppString* m_StyleName;
    // private System.Int32 m_PointSize
    // Offset: 0x10
    int m_PointSize;
    // private System.Single m_Scale
    // Offset: 0x14
    float m_Scale;
    // private System.Single m_LineHeight
    // Offset: 0x18
    float m_LineHeight;
    // private System.Single m_AscentLine
    // Offset: 0x1C
    float m_AscentLine;
    // private System.Single m_CapLine
    // Offset: 0x20
    float m_CapLine;
    // private System.Single m_MeanLine
    // Offset: 0x24
    float m_MeanLine;
    // private System.Single m_Baseline
    // Offset: 0x28
    float m_Baseline;
    // private System.Single m_DescentLine
    // Offset: 0x2C
    float m_DescentLine;
    // private System.Single m_SuperscriptOffset
    // Offset: 0x30
    float m_SuperscriptOffset;
    // private System.Single m_SuperscriptSize
    // Offset: 0x34
    float m_SuperscriptSize;
    // private System.Single m_SubscriptOffset
    // Offset: 0x38
    float m_SubscriptOffset;
    // private System.Single m_SubscriptSize
    // Offset: 0x3C
    float m_SubscriptSize;
    // private System.Single m_UnderlineOffset
    // Offset: 0x40
    float m_UnderlineOffset;
    // private System.Single m_UnderlineThickness
    // Offset: 0x44
    float m_UnderlineThickness;
    // private System.Single m_StrikethroughOffset
    // Offset: 0x48
    float m_StrikethroughOffset;
    // private System.Single m_StrikethroughThickness
    // Offset: 0x4C
    float m_StrikethroughThickness;
    // private System.Single m_TabWidth
    // Offset: 0x50
    float m_TabWidth;
    // Creating value type constructor for type: FaceInfo
    FaceInfo(::Il2CppString* m_FamilyName_ = {}, ::Il2CppString* m_StyleName_ = {}, int m_PointSize_ = {}, float m_Scale_ = {}, float m_LineHeight_ = {}, float m_AscentLine_ = {}, float m_CapLine_ = {}, float m_MeanLine_ = {}, float m_Baseline_ = {}, float m_DescentLine_ = {}, float m_SuperscriptOffset_ = {}, float m_SuperscriptSize_ = {}, float m_SubscriptOffset_ = {}, float m_SubscriptSize_ = {}, float m_UnderlineOffset_ = {}, float m_UnderlineThickness_ = {}, float m_StrikethroughOffset_ = {}, float m_StrikethroughThickness_ = {}, float m_TabWidth_ = {}) : m_FamilyName{m_FamilyName_}, m_StyleName{m_StyleName_}, m_PointSize{m_PointSize_}, m_Scale{m_Scale_}, m_LineHeight{m_LineHeight_}, m_AscentLine{m_AscentLine_}, m_CapLine{m_CapLine_}, m_MeanLine{m_MeanLine_}, m_Baseline{m_Baseline_}, m_DescentLine{m_DescentLine_}, m_SuperscriptOffset{m_SuperscriptOffset_}, m_SuperscriptSize{m_SuperscriptSize_}, m_SubscriptOffset{m_SubscriptOffset_}, m_SubscriptSize{m_SubscriptSize_}, m_UnderlineOffset{m_UnderlineOffset_}, m_UnderlineThickness{m_UnderlineThickness_}, m_StrikethroughOffset{m_StrikethroughOffset_}, m_StrikethroughThickness{m_StrikethroughThickness_}, m_TabWidth{m_TabWidth_} {}
    // public System.Void set_familyName(System.String value)
    // Offset: 0xA5AC48
    void set_familyName(::Il2CppString* value);
    // public System.Void set_styleName(System.String value)
    // Offset: 0xA5AC50
    void set_styleName(::Il2CppString* value);
    // public System.Int32 get_pointSize()
    // Offset: 0xA5AC58
    int get_pointSize();
    // public System.Void set_pointSize(System.Int32 value)
    // Offset: 0xA5AC60
    void set_pointSize(int value);
    // public System.Single get_scale()
    // Offset: 0xA5AC68
    float get_scale();
    // public System.Void set_scale(System.Single value)
    // Offset: 0xA5AC70
    void set_scale(float value);
    // public System.Single get_lineHeight()
    // Offset: 0xA5AC78
    float get_lineHeight();
    // public System.Void set_lineHeight(System.Single value)
    // Offset: 0xA5AC80
    void set_lineHeight(float value);
    // public System.Single get_ascentLine()
    // Offset: 0xA5AC88
    float get_ascentLine();
    // public System.Void set_ascentLine(System.Single value)
    // Offset: 0xA5AC90
    void set_ascentLine(float value);
    // public System.Single get_capLine()
    // Offset: 0xA5AC98
    float get_capLine();
    // public System.Void set_capLine(System.Single value)
    // Offset: 0xA5ACA0
    void set_capLine(float value);
    // public System.Void set_meanLine(System.Single value)
    // Offset: 0xA5ACA8
    void set_meanLine(float value);
    // public System.Single get_baseline()
    // Offset: 0xA5ACB0
    float get_baseline();
    // public System.Void set_baseline(System.Single value)
    // Offset: 0xA5ACB8
    void set_baseline(float value);
    // public System.Single get_descentLine()
    // Offset: 0xA5ACC0
    float get_descentLine();
    // public System.Void set_descentLine(System.Single value)
    // Offset: 0xA5ACC8
    void set_descentLine(float value);
    // public System.Single get_superscriptOffset()
    // Offset: 0xA5ACD0
    float get_superscriptOffset();
    // public System.Void set_superscriptOffset(System.Single value)
    // Offset: 0xA5ACD8
    void set_superscriptOffset(float value);
    // public System.Single get_superscriptSize()
    // Offset: 0xA5ACE0
    float get_superscriptSize();
    // public System.Void set_superscriptSize(System.Single value)
    // Offset: 0xA5ACE8
    void set_superscriptSize(float value);
    // public System.Single get_subscriptOffset()
    // Offset: 0xA5ACF0
    float get_subscriptOffset();
    // public System.Void set_subscriptOffset(System.Single value)
    // Offset: 0xA5ACF8
    void set_subscriptOffset(float value);
    // public System.Single get_subscriptSize()
    // Offset: 0xA5AD00
    float get_subscriptSize();
    // public System.Void set_subscriptSize(System.Single value)
    // Offset: 0xA5AD08
    void set_subscriptSize(float value);
    // public System.Single get_underlineOffset()
    // Offset: 0xA5AD10
    float get_underlineOffset();
    // public System.Void set_underlineOffset(System.Single value)
    // Offset: 0xA5AD18
    void set_underlineOffset(float value);
    // public System.Single get_underlineThickness()
    // Offset: 0xA5AD20
    float get_underlineThickness();
    // public System.Void set_underlineThickness(System.Single value)
    // Offset: 0xA5AD28
    void set_underlineThickness(float value);
    // public System.Single get_strikethroughOffset()
    // Offset: 0xA5AD30
    float get_strikethroughOffset();
    // public System.Void set_strikethroughOffset(System.Single value)
    // Offset: 0xA5AD38
    void set_strikethroughOffset(float value);
    // public System.Void set_strikethroughThickness(System.Single value)
    // Offset: 0xA5AD40
    void set_strikethroughThickness(float value);
    // public System.Single get_tabWidth()
    // Offset: 0xA5AD48
    float get_tabWidth();
    // public System.Void set_tabWidth(System.Single value)
    // Offset: 0xA5AD50
    void set_tabWidth(float value);
  }; // UnityEngine.TextCore.FaceInfo
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::FaceInfo, "UnityEngine.TextCore", "FaceInfo");
#pragma pack(pop)
