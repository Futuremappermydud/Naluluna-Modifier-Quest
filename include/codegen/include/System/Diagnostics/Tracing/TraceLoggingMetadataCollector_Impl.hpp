// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:54 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingMetadataCollector
#include "System/Diagnostics/Tracing/TraceLoggingMetadataCollector.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: FieldMetadata
  class FieldMetadata;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.TraceLoggingMetadataCollector/Impl
  class TraceLoggingMetadataCollector::Impl : public ::Il2CppObject {
    public:
    // readonly System.Collections.Generic.List`1<System.Diagnostics.Tracing.FieldMetadata> fields
    // Offset: 0x10
    System::Collections::Generic::List_1<System::Diagnostics::Tracing::FieldMetadata*>* fields;
    // System.Int16 scratchSize
    // Offset: 0x18
    int16_t scratchSize;
    // System.SByte dataCount
    // Offset: 0x1A
    int8_t dataCount;
    // System.SByte pinCount
    // Offset: 0x1B
    int8_t pinCount;
    // private System.Int32 bufferNesting
    // Offset: 0x1C
    int bufferNesting;
    // private System.Boolean scalar
    // Offset: 0x20
    bool scalar;
    // public System.Void AddScalar(System.Int32 size)
    // Offset: 0xD888B0
    void AddScalar(int size);
    // public System.Void AddNonscalar()
    // Offset: 0xD88958
    void AddNonscalar();
    // public System.Void BeginBuffered()
    // Offset: 0xD88A94
    void BeginBuffered();
    // public System.Void EndBuffered()
    // Offset: 0xD88B78
    void EndBuffered();
    // public System.Int32 Encode(System.Byte[] metadata)
    // Offset: 0xD88B88
    int Encode(::Array<uint8_t>* metadata);
    // public System.Void .ctor()
    // Offset: 0xD88648
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TraceLoggingMetadataCollector::Impl* New_ctor();
  }; // System.Diagnostics.Tracing.TraceLoggingMetadataCollector/Impl
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl*, "System.Diagnostics.Tracing", "TraceLoggingMetadataCollector/Impl");
#pragma pack(pop)
