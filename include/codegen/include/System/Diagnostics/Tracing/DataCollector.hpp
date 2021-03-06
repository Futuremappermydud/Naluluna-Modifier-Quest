// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:53 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Diagnostics.Tracing.EventSource
#include "System/Diagnostics/Tracing/EventSource.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: GCHandle
  struct GCHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.DataCollector
  struct DataCollector : public System::ValueType {
    public:
    // Get static field: static System.Diagnostics.Tracing.DataCollector ThreadInstance
    static System::Diagnostics::Tracing::DataCollector _get_ThreadInstance();
    // Set static field: static System.Diagnostics.Tracing.DataCollector ThreadInstance
    static void _set_ThreadInstance(System::Diagnostics::Tracing::DataCollector value);
    // private System.Byte* scratchEnd
    // Offset: 0x0
    uint8_t* scratchEnd;
    // private System.Diagnostics.Tracing.EventSource/EventData* datasEnd
    // Offset: 0x8
    System::Diagnostics::Tracing::EventSource::EventData* datasEnd;
    // private System.Runtime.InteropServices.GCHandle* pinsEnd
    // Offset: 0x10
    System::Runtime::InteropServices::GCHandle* pinsEnd;
    // private System.Diagnostics.Tracing.EventSource/EventData* datasStart
    // Offset: 0x18
    System::Diagnostics::Tracing::EventSource::EventData* datasStart;
    // private System.Byte* scratch
    // Offset: 0x20
    uint8_t* scratch;
    // private System.Diagnostics.Tracing.EventSource/EventData* datas
    // Offset: 0x28
    System::Diagnostics::Tracing::EventSource::EventData* datas;
    // private System.Runtime.InteropServices.GCHandle* pins
    // Offset: 0x30
    System::Runtime::InteropServices::GCHandle* pins;
    // private System.Byte[] buffer
    // Offset: 0x38
    ::Array<uint8_t>* buffer;
    // private System.Int32 bufferPos
    // Offset: 0x40
    int bufferPos;
    // private System.Int32 bufferNesting
    // Offset: 0x44
    int bufferNesting;
    // private System.Boolean writingScalars
    // Offset: 0x48
    bool writingScalars;
    // Creating value type constructor for type: DataCollector
    DataCollector(uint8_t* scratchEnd_ = {}, System::Diagnostics::Tracing::EventSource::EventData* datasEnd_ = {}, System::Runtime::InteropServices::GCHandle* pinsEnd_ = {}, System::Diagnostics::Tracing::EventSource::EventData* datasStart_ = {}, uint8_t* scratch_ = {}, System::Diagnostics::Tracing::EventSource::EventData* datas_ = {}, System::Runtime::InteropServices::GCHandle* pins_ = {}, ::Array<uint8_t>* buffer_ = {}, int bufferPos_ = {}, int bufferNesting_ = {}, bool writingScalars_ = {}) : scratchEnd{scratchEnd_}, datasEnd{datasEnd_}, pinsEnd{pinsEnd_}, datasStart{datasStart_}, scratch{scratch_}, datas{datas_}, pins{pins_}, buffer{buffer_}, bufferPos{bufferPos_}, bufferNesting{bufferNesting_}, writingScalars{writingScalars_} {}
    // System.Void Enable(System.Byte* scratch, System.Int32 scratchSize, System.Diagnostics.Tracing.EventSource/EventData* datas, System.Int32 dataCount, System.Runtime.InteropServices.GCHandle* pins, System.Int32 pinCount)
    // Offset: 0xA28768
    void Enable(uint8_t* scratch, int scratchSize, System::Diagnostics::Tracing::EventSource::EventData* datas, int dataCount, System::Runtime::InteropServices::GCHandle* pins, int pinCount);
    // System.Void Disable()
    // Offset: 0xA2878C
    void Disable();
    // System.Diagnostics.Tracing.EventSource/EventData* Finish()
    // Offset: 0xA2879C
    System::Diagnostics::Tracing::EventSource::EventData* Finish();
    // System.Void AddScalar(System.Void* value, System.Int32 size)
    // Offset: 0xA287C4
    void AddScalar(void* value, int size);
    // System.Void AddBinary(System.String value, System.Int32 size)
    // Offset: 0xA287CC
    void AddBinary(::Il2CppString* value, int size);
    // System.Void AddBinary(System.Array value, System.Int32 size)
    // Offset: 0xA287D4
    void AddBinary(System::Array* value, int size);
    // System.Void AddArray(System.Array value, System.Int32 length, System.Int32 itemSize)
    // Offset: 0xA287E0
    void AddArray(System::Array* value, int length, int itemSize);
    // System.Int32 BeginBufferedArray()
    // Offset: 0xA287E8
    int BeginBufferedArray();
    // System.Void EndBufferedArray(System.Int32 bookmark, System.Int32 count)
    // Offset: 0xA28824
    void EndBufferedArray(int bookmark, int count);
    // System.Void BeginBuffered()
    // Offset: 0xA2882C
    void BeginBuffered();
    // System.Void EndBuffered()
    // Offset: 0xA2885C
    void EndBuffered();
    // private System.Void EnsureBuffer()
    // Offset: 0xA28864
    void EnsureBuffer();
    // private System.Void EnsureBuffer(System.Int32 additionalSize)
    // Offset: 0xA28888
    void EnsureBuffer(int additionalSize);
    // private System.Void GrowBuffer(System.Int32 required)
    // Offset: 0xA288B0
    void GrowBuffer(int required);
    // private System.Void PinArray(System.Object value, System.Int32 size)
    // Offset: 0xA288B8
    void PinArray(::Il2CppObject* value, int size);
    // private System.Void ScalarsBegin()
    // Offset: 0xA288C0
    void ScalarsBegin();
    // private System.Void ScalarsEnd()
    // Offset: 0xA288C8
    void ScalarsEnd();
  }; // System.Diagnostics.Tracing.DataCollector
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::DataCollector, "System.Diagnostics.Tracing", "DataCollector");
#pragma pack(pop)
