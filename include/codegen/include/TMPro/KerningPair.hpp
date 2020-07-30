// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:23 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: TMPro.GlyphValueRecord_Legacy
#include "TMPro/GlyphValueRecord_Legacy.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.KerningPair
  class KerningPair : public ::Il2CppObject {
    public:
    // private System.UInt32 m_FirstGlyph
    // Offset: 0x10
    uint m_FirstGlyph;
    // private TMPro.GlyphValueRecord_Legacy m_FirstGlyphAdjustments
    // Offset: 0x14
    TMPro::GlyphValueRecord_Legacy m_FirstGlyphAdjustments;
    // private System.UInt32 m_SecondGlyph
    // Offset: 0x24
    uint m_SecondGlyph;
    // private TMPro.GlyphValueRecord_Legacy m_SecondGlyphAdjustments
    // Offset: 0x28
    TMPro::GlyphValueRecord_Legacy m_SecondGlyphAdjustments;
    // public System.Single xOffset
    // Offset: 0x38
    float xOffset;
    // Get static field: static TMPro.KerningPair empty
    static TMPro::KerningPair* _get_empty();
    // Set static field: static TMPro.KerningPair empty
    static void _set_empty(TMPro::KerningPair* value);
    // private System.Boolean m_IgnoreSpacingAdjustments
    // Offset: 0x3C
    bool m_IgnoreSpacingAdjustments;
    // public System.UInt32 get_firstGlyph()
    // Offset: 0xB64F9C
    uint get_firstGlyph();
    // public System.Void set_firstGlyph(System.UInt32 value)
    // Offset: 0xB64FA4
    void set_firstGlyph(uint value);
    // public TMPro.GlyphValueRecord_Legacy get_firstGlyphAdjustments()
    // Offset: 0xB64FAC
    TMPro::GlyphValueRecord_Legacy get_firstGlyphAdjustments();
    // public System.UInt32 get_secondGlyph()
    // Offset: 0xB64FB8
    uint get_secondGlyph();
    // public System.Void set_secondGlyph(System.UInt32 value)
    // Offset: 0xB64FC0
    void set_secondGlyph(uint value);
    // public TMPro.GlyphValueRecord_Legacy get_secondGlyphAdjustments()
    // Offset: 0xB64FC8
    TMPro::GlyphValueRecord_Legacy get_secondGlyphAdjustments();
    // public System.Boolean get_ignoreSpacingAdjustments()
    // Offset: 0xB64FD4
    bool get_ignoreSpacingAdjustments();
    // public System.Void .ctor(System.UInt32 left, System.UInt32 right, System.Single offset)
    // Offset: 0xB6500C
    static KerningPair* New_ctor(uint left, uint right, float offset);
    // public System.Void .ctor(System.UInt32 firstGlyph, TMPro.GlyphValueRecord_Legacy firstGlyphAdjustments, System.UInt32 secondGlyph, TMPro.GlyphValueRecord_Legacy secondGlyphAdjustments)
    // Offset: 0xB65058
    static KerningPair* New_ctor(uint firstGlyph, TMPro::GlyphValueRecord_Legacy firstGlyphAdjustments, uint secondGlyph, TMPro::GlyphValueRecord_Legacy secondGlyphAdjustments);
    // System.Void ConvertLegacyKerningData()
    // Offset: 0xB650E4
    void ConvertLegacyKerningData();
    // static private System.Void .cctor()
    // Offset: 0xB650F0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0xB64FDC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static KerningPair* New_ctor();
  }; // TMPro.KerningPair
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::KerningPair*, "TMPro", "KerningPair");
#pragma pack(pop)
