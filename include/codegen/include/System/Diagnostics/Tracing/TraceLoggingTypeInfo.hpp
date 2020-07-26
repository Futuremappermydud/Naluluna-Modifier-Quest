// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:43 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Diagnostics.Tracing.EventKeywords
#include "System/Diagnostics/Tracing/EventKeywords.hpp"
// Including type: System.Diagnostics.Tracing.EventLevel
#include "System/Diagnostics/Tracing/EventLevel.hpp"
// Including type: System.Diagnostics.Tracing.EventOpcode
#include "System/Diagnostics/Tracing/EventOpcode.hpp"
// Including type: System.Diagnostics.Tracing.EventTags
#include "System/Diagnostics/Tracing/EventTags.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingMetadataCollector
  class TraceLoggingMetadataCollector;
  // Forward declaring type: EventFieldFormat
  struct EventFieldFormat;
  // Forward declaring type: TraceLoggingDataCollector
  class TraceLoggingDataCollector;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.TraceLoggingTypeInfo
  class TraceLoggingTypeInfo : public ::Il2CppObject {
    public:
    // private readonly System.String name
    // Offset: 0x10
    ::Il2CppString* name;
    // private readonly System.Diagnostics.Tracing.EventKeywords keywords
    // Offset: 0x18
    System::Diagnostics::Tracing::EventKeywords keywords;
    // private readonly System.Diagnostics.Tracing.EventLevel level
    // Offset: 0x20
    System::Diagnostics::Tracing::EventLevel level;
    // private readonly System.Diagnostics.Tracing.EventOpcode opcode
    // Offset: 0x24
    System::Diagnostics::Tracing::EventOpcode opcode;
    // private readonly System.Diagnostics.Tracing.EventTags tags
    // Offset: 0x28
    System::Diagnostics::Tracing::EventTags tags;
    // private readonly System.Type dataType
    // Offset: 0x30
    System::Type* dataType;
    // System.Void .ctor(System.Type dataType)
    // Offset: 0xD88C98
    static TraceLoggingTypeInfo* New_ctor(System::Type* dataType);
    // System.Void .ctor(System.Type dataType, System.String name, System.Diagnostics.Tracing.EventLevel level, System.Diagnostics.Tracing.EventOpcode opcode, System.Diagnostics.Tracing.EventKeywords keywords, System.Diagnostics.Tracing.EventTags tags)
    // Offset: 0xD88D9C
    static TraceLoggingTypeInfo* New_ctor(System::Type* dataType, ::Il2CppString* name, System::Diagnostics::Tracing::EventLevel level, System::Diagnostics::Tracing::EventOpcode opcode, System::Diagnostics::Tracing::EventKeywords keywords, System::Diagnostics::Tracing::EventTags tags);
    // public System.String get_Name()
    // Offset: 0xD88F00
    ::Il2CppString* get_Name();
    // public System.Diagnostics.Tracing.EventLevel get_Level()
    // Offset: 0xD88F08
    System::Diagnostics::Tracing::EventLevel get_Level();
    // public System.Diagnostics.Tracing.EventOpcode get_Opcode()
    // Offset: 0xD88F10
    System::Diagnostics::Tracing::EventOpcode get_Opcode();
    // public System.Diagnostics.Tracing.EventKeywords get_Keywords()
    // Offset: 0xD88F18
    System::Diagnostics::Tracing::EventKeywords get_Keywords();
    // public System.Diagnostics.Tracing.EventTags get_Tags()
    // Offset: 0xD88F20
    System::Diagnostics::Tracing::EventTags get_Tags();
    // System.Type get_DataType()
    // Offset: 0xD88F28
    System::Type* get_DataType();
    // public System.Void WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    // Offset: 0xFFFFFFFF
    void WriteMetadata(System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::Il2CppString* name, System::Diagnostics::Tracing::EventFieldFormat format);
    // public System.Void WriteObjectData(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, System.Object value)
    // Offset: 0xFFFFFFFF
    void WriteObjectData(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ::Il2CppObject* value);
    // public System.Object GetData(System.Object value)
    // Offset: 0xD8709C
    ::Il2CppObject* GetData(::Il2CppObject* value);
  }; // System.Diagnostics.Tracing.TraceLoggingTypeInfo
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::TraceLoggingTypeInfo*, "System.Diagnostics.Tracing", "TraceLoggingTypeInfo");
#pragma pack(pop)
