// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:36 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryTypeEnum.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalObjectTypeE.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalMemberTypeE.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE
#include "System/Runtime/Serialization/Formatters/Binary/InternalMemberValueE.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: ParseRecord
  class ParseRecord;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ObjectProgress
  class ObjectProgress : public ::Il2CppObject {
    public:
    // Get static field: static System.Int32 opRecordIdCount
    static int _get_opRecordIdCount();
    // Set static field: static System.Int32 opRecordIdCount
    static void _set_opRecordIdCount(int value);
    // System.Boolean isInitial
    // Offset: 0x10
    bool isInitial;
    // System.Int32 count
    // Offset: 0x14
    int count;
    // System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum expectedType
    // Offset: 0x18
    System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum expectedType;
    // System.Object expectedTypeInformation
    // Offset: 0x20
    ::Il2CppObject* expectedTypeInformation;
    // System.String name
    // Offset: 0x28
    ::Il2CppString* name;
    // System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE objectTypeEnum
    // Offset: 0x30
    System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE objectTypeEnum;
    // System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE memberTypeEnum
    // Offset: 0x34
    System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE memberTypeEnum;
    // System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE memberValueEnum
    // Offset: 0x38
    System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE memberValueEnum;
    // System.Type dtType
    // Offset: 0x40
    System::Type* dtType;
    // System.Int32 numItems
    // Offset: 0x48
    int numItems;
    // System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum
    // Offset: 0x4C
    System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum;
    // System.Object typeInformation
    // Offset: 0x50
    ::Il2CppObject* typeInformation;
    // System.Int32 nullCount
    // Offset: 0x58
    int nullCount;
    // System.Int32 memberLength
    // Offset: 0x5C
    int memberLength;
    // System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA
    // Offset: 0x60
    ::Array<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA;
    // System.Object[] typeInformationA
    // Offset: 0x68
    ::Array<::Il2CppObject*>* typeInformationA;
    // System.String[] memberNames
    // Offset: 0x70
    ::Array<::Il2CppString*>* memberNames;
    // System.Type[] memberTypes
    // Offset: 0x78
    ::Array<System::Type*>* memberTypes;
    // System.Runtime.Serialization.Formatters.Binary.ParseRecord pr
    // Offset: 0x80
    System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr;
    // System.Void Init()
    // Offset: 0xE13EF4
    void Init();
    // System.Void ArrayCountIncrement(System.Int32 value)
    // Offset: 0xE13FC0
    void ArrayCountIncrement(int value);
    // System.Boolean GetNext(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum outBinaryTypeEnum, System.Object outTypeInformation)
    // Offset: 0xE13FD0
    bool GetNext(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& outBinaryTypeEnum, ::Il2CppObject*& outTypeInformation);
    // static private System.Void .cctor()
    // Offset: 0xE14148
    static void _cctor();
    // System.Void .ctor()
    // Offset: 0xE13E78
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ObjectProgress* New_ctor();
  }; // System.Runtime.Serialization.Formatters.Binary.ObjectProgress
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ObjectProgress*, "System.Runtime.Serialization.Formatters.Binary", "ObjectProgress");
#pragma pack(pop)
