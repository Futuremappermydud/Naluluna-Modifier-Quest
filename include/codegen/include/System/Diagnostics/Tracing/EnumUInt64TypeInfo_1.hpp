// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:53 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
#include "System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.hpp"
// Including type: System.Diagnostics.Tracing.EventFieldFormat
#include "System/Diagnostics/Tracing/EventFieldFormat.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingMetadataCollector
  class TraceLoggingMetadataCollector;
  // Forward declaring type: TraceLoggingDataCollector
  class TraceLoggingDataCollector;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.EnumUInt64TypeInfo`1
  template<typename EnumType>
  class EnumUInt64TypeInfo_1 : public System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<EnumType> {
    public:
    // public override System.Void WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    // Offset: 0x1549978
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo
    // Base method: System.Void TraceLoggingTypeInfo::WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    void WriteMetadata(System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::Il2CppString* name, System::Diagnostics::Tracing::EventFieldFormat format) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "WriteMetadata", collector, name, format));
    }
    // public override System.Void WriteData(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, EnumType value)
    // Offset: 0x1549A10
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
    // Base method: System.Void TraceLoggingTypeInfo`1::WriteData(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, EnumType value)
    void WriteData(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, EnumType& value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "WriteData", collector, value));
    }
    // public override System.Object GetData(System.Object value)
    // Offset: 0x1549AB4
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo
    // Base method: System.Object TraceLoggingTypeInfo::GetData(System.Object value)
    ::Il2CppObject* GetData(::Il2CppObject* value) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "GetData", value));
    }
    // public System.Void .ctor()
    // Offset: 0x1549ABC
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
    // Base method: System.Void TraceLoggingTypeInfo`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static EnumUInt64TypeInfo_1<EnumType>* New_ctor() {
      return (EnumUInt64TypeInfo_1<EnumType>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumUInt64TypeInfo_1<EnumType>*>::get()));
    }
  }; // System.Diagnostics.Tracing.EnumUInt64TypeInfo`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Diagnostics::Tracing::EnumUInt64TypeInfo_1, "System.Diagnostics.Tracing", "EnumUInt64TypeInfo`1");
#pragma pack(pop)
