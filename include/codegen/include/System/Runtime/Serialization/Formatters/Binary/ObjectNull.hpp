// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:36 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
  // Forward declaring type: BinaryHeaderEnum
  struct BinaryHeaderEnum;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ObjectNull
  class ObjectNull : public ::Il2CppObject {
    public:
    // System.Int32 nullCount
    // Offset: 0x10
    int nullCount;
    // System.Void SetNullCount(System.Int32 nullCount)
    // Offset: 0xE13D74
    void SetNullCount(int nullCount);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0xE13D7C
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input, System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
    // Offset: 0xE13E08
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input, System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);
    // public System.Void Dump()
    // Offset: 0xE13E74
    void Dump();
    // System.Void .ctor()
    // Offset: 0xE13D6C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ObjectNull* New_ctor();
  }; // System.Runtime.Serialization.Formatters.Binary.ObjectNull
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ObjectNull*, "System.Runtime.Serialization.Formatters.Binary", "ObjectNull");
#pragma pack(pop)
