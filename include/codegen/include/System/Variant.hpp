// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:41 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.BRECORD
#include "System/BRECORD.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Variant
  struct Variant : public System::ValueType {
    public:
    // public System.Int16 vt
    // Offset: 0x0
    int16_t vt;
    // public System.UInt16 wReserved1
    // Offset: 0x2
    uint16_t wReserved1;
    // public System.UInt16 wReserved2
    // Offset: 0x4
    uint16_t wReserved2;
    // public System.UInt16 wReserved3
    // Offset: 0x6
    uint16_t wReserved3;
    // public System.Int64 llVal
    // Offset: 0x8
    int64_t llVal;
    // public System.Int32 lVal
    // Offset: 0x8
    int lVal;
    // public System.Byte bVal
    // Offset: 0x8
    uint8_t bVal;
    // public System.Int16 iVal
    // Offset: 0x8
    int16_t iVal;
    // public System.Single fltVal
    // Offset: 0x8
    float fltVal;
    // public System.Double dblVal
    // Offset: 0x8
    double dblVal;
    // public System.Int16 boolVal
    // Offset: 0x8
    int16_t boolVal;
    // public System.IntPtr bstrVal
    // Offset: 0x8
    System::IntPtr bstrVal;
    // public System.SByte cVal
    // Offset: 0x8
    int8_t cVal;
    // public System.UInt16 uiVal
    // Offset: 0x8
    uint16_t uiVal;
    // public System.UInt32 ulVal
    // Offset: 0x8
    uint ulVal;
    // public System.UInt64 ullVal
    // Offset: 0x8
    uint64_t ullVal;
    // public System.Int32 intVal
    // Offset: 0x8
    int intVal;
    // public System.UInt32 uintVal
    // Offset: 0x8
    uint uintVal;
    // public System.IntPtr pdispVal
    // Offset: 0x8
    System::IntPtr pdispVal;
    // public System.BRECORD bRecord
    // Offset: 0x8
    System::BRECORD bRecord;
    // Creating value type constructor for type: Variant
    Variant(int16_t vt_ = {}, uint16_t wReserved1_ = {}, uint16_t wReserved2_ = {}, uint16_t wReserved3_ = {}, int64_t llVal_ = {}, int lVal_ = {}, uint8_t bVal_ = {}, int16_t iVal_ = {}, float fltVal_ = {}, double dblVal_ = {}, int16_t boolVal_ = {}, System::IntPtr bstrVal_ = {}, int8_t cVal_ = {}, uint16_t uiVal_ = {}, uint ulVal_ = {}, uint64_t ullVal_ = {}, int intVal_ = {}, uint uintVal_ = {}, System::IntPtr pdispVal_ = {}, System::BRECORD bRecord_ = {}) : vt{vt_}, wReserved1{wReserved1_}, wReserved2{wReserved2_}, wReserved3{wReserved3_}, llVal{llVal_}, lVal{lVal_}, bVal{bVal_}, iVal{iVal_}, fltVal{fltVal_}, dblVal{dblVal_}, boolVal{boolVal_}, bstrVal{bstrVal_}, cVal{cVal_}, uiVal{uiVal_}, ulVal{ulVal_}, ullVal{ullVal_}, intVal{intVal_}, uintVal{uintVal_}, pdispVal{pdispVal_}, bRecord{bRecord_} {}
    // public System.Void Clear()
    // Offset: 0xA53ADC
    void Clear();
  }; // System.Variant
}
DEFINE_IL2CPP_ARG_TYPE(System::Variant, "System", "Variant");
#pragma pack(pop)
