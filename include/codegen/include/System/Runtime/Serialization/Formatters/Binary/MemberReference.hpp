// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:48 PM
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
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.MemberReference
  class MemberReference : public ::Il2CppObject {
    public:
    // System.Int32 idRef
    // Offset: 0x10
    int idRef;
    // System.Void Set(System.Int32 idRef)
    // Offset: 0xE13004
    void Set(int idRef);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0xE1300C
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0xE13050
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0xE13084
    void Dump();
    // System.Void .ctor()
    // Offset: 0xE12FFC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MemberReference* New_ctor();
  }; // System.Runtime.Serialization.Formatters.Binary.MemberReference
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::MemberReference*, "System.Runtime.Serialization.Formatters.Binary", "MemberReference");
#pragma pack(pop)
