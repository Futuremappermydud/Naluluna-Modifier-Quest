// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:54 PM
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
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.SessionMask
  struct SessionMask : public System::ValueType {
    public:
    // private System.UInt32 m_mask
    // Offset: 0x0
    uint m_mask;
    // Creating value type constructor for type: SessionMask
    SessionMask(uint m_mask_ = {}) : m_mask{m_mask_} {}
    // public System.Void .ctor(System.UInt32 mask)
    // Offset: 0xA2B504
    static SessionMask* New_ctor(uint mask);
    // public System.Boolean IsEqualOrSupersetOf(System.Diagnostics.Tracing.SessionMask m)
    // Offset: 0xA2B510
    bool IsEqualOrSupersetOf(System::Diagnostics::Tracing::SessionMask m);
    // static public System.Diagnostics.Tracing.SessionMask get_All()
    // Offset: 0xD862B0
    static System::Diagnostics::Tracing::SessionMask get_All();
    // static public System.Diagnostics.Tracing.SessionMask FromId(System.Int32 perEventSourceSessionId)
    // Offset: 0xD862B8
    static System::Diagnostics::Tracing::SessionMask FromId(int perEventSourceSessionId);
    // public System.UInt64 ToEventKeywords()
    // Offset: 0xA2B524
    uint64_t ToEventKeywords();
    // static public System.Diagnostics.Tracing.SessionMask FromEventKeywords(System.UInt64 m)
    // Offset: 0xD862D4
    static System::Diagnostics::Tracing::SessionMask FromEventKeywords(uint64_t m);
    // public System.Boolean get_Item(System.Int32 perEventSourceSessionId)
    // Offset: 0xA2B530
    bool get_Item(int perEventSourceSessionId);
    // public System.Void set_Item(System.Int32 perEventSourceSessionId, System.Boolean value)
    // Offset: 0xA2B54C
    void set_Item(int perEventSourceSessionId, bool value);
  }; // System.Diagnostics.Tracing.SessionMask
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::SessionMask, "System.Diagnostics.Tracing", "SessionMask");
#pragma pack(pop)
