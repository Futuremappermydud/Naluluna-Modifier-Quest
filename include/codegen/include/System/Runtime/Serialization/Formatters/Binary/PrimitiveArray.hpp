// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.PrimitiveArray
  class PrimitiveArray : public ::Il2CppObject {
    public:
    // private System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code
    // Offset: 0x10
    System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code;
    // private System.Boolean[] booleanA
    // Offset: 0x18
    ::Array<bool>* booleanA;
    // private System.Char[] charA
    // Offset: 0x20
    ::Array<::Il2CppChar>* charA;
    // private System.Double[] doubleA
    // Offset: 0x28
    ::Array<double>* doubleA;
    // private System.Int16[] int16A
    // Offset: 0x30
    ::Array<int16_t>* int16A;
    // private System.Int32[] int32A
    // Offset: 0x38
    ::Array<int>* int32A;
    // private System.Int64[] int64A
    // Offset: 0x40
    ::Array<int64_t>* int64A;
    // private System.SByte[] sbyteA
    // Offset: 0x48
    ::Array<int8_t>* sbyteA;
    // private System.Single[] singleA
    // Offset: 0x50
    ::Array<float>* singleA;
    // private System.UInt16[] uint16A
    // Offset: 0x58
    ::Array<uint16_t>* uint16A;
    // private System.UInt32[] uint32A
    // Offset: 0x60
    ::Array<uint>* uint32A;
    // private System.UInt64[] uint64A
    // Offset: 0x68
    ::Array<uint64_t>* uint64A;
    // System.Void .ctor(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code, System.Array array)
    // Offset: 0xFD8C78
    static PrimitiveArray* New_ctor(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, System::Array* array);
    // System.Void Init(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code, System.Array array)
    // Offset: 0xFD8CB8
    void Init(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, System::Array* array);
    // System.Void SetValue(System.String value, System.Int32 index)
    // Offset: 0xFD8F80
    void SetValue(::Il2CppString* value, int index);
  }; // System.Runtime.Serialization.Formatters.Binary.PrimitiveArray
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*, "System.Runtime.Serialization.Formatters.Binary", "PrimitiveArray");
#pragma pack(pop)
