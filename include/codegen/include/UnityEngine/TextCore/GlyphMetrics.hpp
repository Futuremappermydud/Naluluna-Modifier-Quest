// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.TextCore
namespace UnityEngine::TextCore {
  // Autogenerated type: UnityEngine.TextCore.GlyphMetrics
  struct GlyphMetrics : public System::ValueType, public System::IEquatable_1<UnityEngine::TextCore::GlyphMetrics> {
    public:
    // private System.Single m_Width
    // Offset: 0x0
    float m_Width;
    // private System.Single m_Height
    // Offset: 0x4
    float m_Height;
    // private System.Single m_HorizontalBearingX
    // Offset: 0x8
    float m_HorizontalBearingX;
    // private System.Single m_HorizontalBearingY
    // Offset: 0xC
    float m_HorizontalBearingY;
    // private System.Single m_HorizontalAdvance
    // Offset: 0x10
    float m_HorizontalAdvance;
    // Creating value type constructor for type: GlyphMetrics
    GlyphMetrics(float m_Width_ = {}, float m_Height_ = {}, float m_HorizontalBearingX_ = {}, float m_HorizontalBearingY_ = {}, float m_HorizontalAdvance_ = {}) : m_Width{m_Width_}, m_Height{m_Height_}, m_HorizontalBearingX{m_HorizontalBearingX_}, m_HorizontalBearingY{m_HorizontalBearingY_}, m_HorizontalAdvance{m_HorizontalAdvance_} {}
    // public System.Single get_width()
    // Offset: 0xA5ADC4
    float get_width();
    // public System.Single get_height()
    // Offset: 0xA5ADCC
    float get_height();
    // public System.Single get_horizontalBearingX()
    // Offset: 0xA5ADD4
    float get_horizontalBearingX();
    // public System.Single get_horizontalBearingY()
    // Offset: 0xA5ADDC
    float get_horizontalBearingY();
    // public System.Single get_horizontalAdvance()
    // Offset: 0xA5ADE4
    float get_horizontalAdvance();
    // public System.Void .ctor(System.Single width, System.Single height, System.Single bearingX, System.Single bearingY, System.Single advance)
    // Offset: 0xA5ADEC
    static GlyphMetrics* New_ctor(float width, float height, float bearingX, float bearingY, float advance);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA5ADFC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xA5AE04
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(UnityEngine.TextCore.GlyphMetrics other)
    // Offset: 0xA5AE0C
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.TextCore.GlyphMetrics other)
    bool Equals(UnityEngine::TextCore::GlyphMetrics other);
  }; // UnityEngine.TextCore.GlyphMetrics
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::GlyphMetrics, "UnityEngine.TextCore", "GlyphMetrics");
#pragma pack(pop)
