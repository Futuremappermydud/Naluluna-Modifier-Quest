// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveTyped
  class MemberPrimitiveTyped : public ::Il2CppObject {
    public:
    // System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE primitiveTypeEnum
    // Offset: 0x10
    System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE primitiveTypeEnum;
    // System.Object value
    // Offset: 0x18
    ::Il2CppObject* value;
    // System.Void Set(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE primitiveTypeEnum, System.Object value)
    // Offset: 0xE2ACFC
    void Set(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE primitiveTypeEnum, ::Il2CppObject* value);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0xE2AD0C
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0xE2AD64
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0xE2ADB8
    void Dump();
    // System.Void .ctor()
    // Offset: 0xE2ACF4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MemberPrimitiveTyped* New_ctor();
  }; // System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveTyped
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*, "System.Runtime.Serialization.Formatters.Binary", "MemberPrimitiveTyped");
#pragma pack(pop)
