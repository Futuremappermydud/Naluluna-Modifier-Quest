// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:53 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Diagnostics.Tracing.EventFieldTags
#include "System/Diagnostics/Tracing/EventFieldTags.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingDataType
  struct TraceLoggingDataType;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.FieldMetadata
  class FieldMetadata : public ::Il2CppObject {
    public:
    // private readonly System.String name
    // Offset: 0x10
    ::Il2CppString* name;
    // private readonly System.Int32 nameSize
    // Offset: 0x18
    int nameSize;
    // private readonly System.Diagnostics.Tracing.EventFieldTags tags
    // Offset: 0x1C
    System::Diagnostics::Tracing::EventFieldTags tags;
    // private readonly System.Byte[] custom
    // Offset: 0x20
    ::Array<uint8_t>* custom;
    // private readonly System.UInt16 fixedCount
    // Offset: 0x28
    uint16_t fixedCount;
    // private System.Byte inType
    // Offset: 0x2A
    uint8_t inType;
    // private System.Byte outType
    // Offset: 0x2B
    uint8_t outType;
    // public System.Void .ctor(System.String name, System.Diagnostics.Tracing.TraceLoggingDataType type, System.Diagnostics.Tracing.EventFieldTags tags, System.Boolean variableCount)
    // Offset: 0xD7F6C8
    static FieldMetadata* New_ctor(::Il2CppString* name, System::Diagnostics::Tracing::TraceLoggingDataType type, System::Diagnostics::Tracing::EventFieldTags tags, bool variableCount);
    // private System.Void .ctor(System.String name, System.Diagnostics.Tracing.TraceLoggingDataType dataType, System.Diagnostics.Tracing.EventFieldTags tags, System.Byte countFlags, System.UInt16 fixedCount, System.Byte[] custom)
    // Offset: 0xD7F6F0
    static FieldMetadata* New_ctor(::Il2CppString* name, System::Diagnostics::Tracing::TraceLoggingDataType dataType, System::Diagnostics::Tracing::EventFieldTags tags, uint8_t countFlags, uint16_t fixedCount, ::Array<uint8_t>* custom);
    // public System.Void IncrementStructFieldCount()
    // Offset: 0xD7F978
    void IncrementStructFieldCount();
    // public System.Void Encode(System.Int32 pos, System.Byte[] metadata)
    // Offset: 0xD7FA18
    void Encode(int& pos, ::Array<uint8_t>* metadata);
  }; // System.Diagnostics.Tracing.FieldMetadata
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::FieldMetadata*, "System.Diagnostics.Tracing", "FieldMetadata");
#pragma pack(pop)
