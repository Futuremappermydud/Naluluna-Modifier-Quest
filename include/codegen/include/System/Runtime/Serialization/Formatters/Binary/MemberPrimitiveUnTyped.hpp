// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:48 PM
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
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveUnTyped
  class MemberPrimitiveUnTyped : public ::Il2CppObject {
    public:
    // System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE typeInformation
    // Offset: 0x10
    System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE typeInformation;
    // System.Object value
    // Offset: 0x18
    ::Il2CppObject* value;
    // System.Void Set(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE typeInformation, System.Object value)
    // Offset: 0xE12F74
    void Set(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE typeInformation, ::Il2CppObject* value);
    // System.Void Set(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE typeInformation)
    // Offset: 0xE12F84
    void Set(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE typeInformation);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0xE12F8C
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0xE12FB4
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0xE12FF8
    void Dump();
    // System.Void .ctor()
    // Offset: 0xE12F6C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MemberPrimitiveUnTyped* New_ctor();
  }; // System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveUnTyped
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*, "System.Runtime.Serialization.Formatters.Binary", "MemberPrimitiveUnTyped");
#pragma pack(pop)
