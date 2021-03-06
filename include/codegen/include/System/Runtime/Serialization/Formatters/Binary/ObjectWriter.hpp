// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Queue
  class Queue;
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: ObjectIDGenerator
  class ObjectIDGenerator;
  // Forward declaring type: ISurrogateSelector
  class ISurrogateSelector;
  // Forward declaring type: SerializationObjectManager
  class SerializationObjectManager;
  // Forward declaring type: SerializationBinder
  class SerializationBinder;
  // Forward declaring type: IFormatterConverter
  class IFormatterConverter;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: InternalFE
  class InternalFE;
  // Forward declaring type: SerObjectInfoInit
  class SerObjectInfoInit;
  // Forward declaring type: SerStack
  class SerStack;
  // Forward declaring type: WriteObjectInfo
  class WriteObjectInfo;
  // Forward declaring type: NameInfo
  class NameInfo;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: Header
  class Header;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters
namespace System::Runtime::Serialization::Formatters {
  // Forward declaring type: FormatterTypeStyle
  struct FormatterTypeStyle;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ObjectWriter
  class ObjectWriter : public ::Il2CppObject {
    public:
    // private System.Collections.Queue m_objectQueue
    // Offset: 0x10
    System::Collections::Queue* m_objectQueue;
    // private System.Runtime.Serialization.ObjectIDGenerator m_idGenerator
    // Offset: 0x18
    System::Runtime::Serialization::ObjectIDGenerator* m_idGenerator;
    // private System.Int32 m_currentId
    // Offset: 0x20
    int m_currentId;
    // private System.Runtime.Serialization.ISurrogateSelector m_surrogates
    // Offset: 0x28
    System::Runtime::Serialization::ISurrogateSelector* m_surrogates;
    // private System.Runtime.Serialization.StreamingContext m_context
    // Offset: 0x30
    System::Runtime::Serialization::StreamingContext m_context;
    // private System.Runtime.Serialization.Formatters.Binary.__BinaryWriter serWriter
    // Offset: 0x40
    System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* serWriter;
    // private System.Runtime.Serialization.SerializationObjectManager m_objectManager
    // Offset: 0x48
    System::Runtime::Serialization::SerializationObjectManager* m_objectManager;
    // private System.Int64 topId
    // Offset: 0x50
    int64_t topId;
    // private System.String topName
    // Offset: 0x58
    ::Il2CppString* topName;
    // private System.Runtime.Remoting.Messaging.Header[] headers
    // Offset: 0x60
    ::Array<System::Runtime::Remoting::Messaging::Header*>* headers;
    // private System.Runtime.Serialization.Formatters.Binary.InternalFE formatterEnums
    // Offset: 0x68
    System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums;
    // private System.Runtime.Serialization.SerializationBinder m_binder
    // Offset: 0x70
    System::Runtime::Serialization::SerializationBinder* m_binder;
    // private System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit
    // Offset: 0x78
    System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit;
    // private System.Runtime.Serialization.IFormatterConverter m_formatterConverter
    // Offset: 0x80
    System::Runtime::Serialization::IFormatterConverter* m_formatterConverter;
    // System.Object[] crossAppDomainArray
    // Offset: 0x88
    ::Array<::Il2CppObject*>* crossAppDomainArray;
    // private System.Object previousObj
    // Offset: 0x90
    ::Il2CppObject* previousObj;
    // private System.Int64 previousId
    // Offset: 0x98
    int64_t previousId;
    // private System.Type previousType
    // Offset: 0xA0
    System::Type* previousType;
    // private System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE previousCode
    // Offset: 0xA8
    System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE previousCode;
    // private System.Collections.Hashtable assemblyToIdTable
    // Offset: 0xB0
    System::Collections::Hashtable* assemblyToIdTable;
    // private System.Runtime.Serialization.Formatters.Binary.SerStack niPool
    // Offset: 0xB8
    System::Runtime::Serialization::Formatters::Binary::SerStack* niPool;
    // System.Void .ctor(System.Runtime.Serialization.ISurrogateSelector selector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.Formatters.Binary.InternalFE formatterEnums, System.Runtime.Serialization.SerializationBinder binder)
    // Offset: 0xFEC648
    static ObjectWriter* New_ctor(System::Runtime::Serialization::ISurrogateSelector* selector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums, System::Runtime::Serialization::SerializationBinder* binder);
    // System.Void Serialize(System.Object graph, System.Runtime.Remoting.Messaging.Header[] inHeaders, System.Runtime.Serialization.Formatters.Binary.__BinaryWriter serWriter, System.Boolean fCheck)
    // Offset: 0xFEC8C4
    void Serialize(::Il2CppObject* graph, ::Array<System::Runtime::Remoting::Messaging::Header*>* inHeaders, System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* serWriter, bool fCheck);
    // System.Runtime.Serialization.SerializationObjectManager get_ObjectManager()
    // Offset: 0xFED954
    System::Runtime::Serialization::SerializationObjectManager* get_ObjectManager();
    // private System.Void Write(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo)
    // Offset: 0xFED3EC
    void Write(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo);
    // private System.Void Write(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, System.String[] memberNames, System.Type[] memberTypes, System.Object[] memberData, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo[] memberObjectInfos)
    // Offset: 0xFEE3F0
    void Write(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::Array<::Il2CppString*>* memberNames, ::Array<System::Type*>* memberTypes, ::Array<::Il2CppObject*>* memberData, ::Array<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>* memberObjectInfos);
    // private System.Void WriteMemberSetup(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, System.String memberName, System.Type memberType, System.Object memberData, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo memberObjectInfo)
    // Offset: 0xFEEBB8
    void WriteMemberSetup(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::Il2CppString* memberName, System::Type* memberType, ::Il2CppObject* memberData, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo);
    // private System.Void WriteMembers(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberTypeNameInfo, System.Object memberData, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo memberObjectInfo)
    // Offset: 0xFEED04
    void WriteMembers(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* memberTypeNameInfo, ::Il2CppObject* memberData, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo);
    // private System.Void WriteArray(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo memberObjectInfo)
    // Offset: 0xFEDA20
    void WriteArray(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo);
    // private System.Void WriteArrayMember(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, System.Object data)
    // Offset: 0xFEF69C
    void WriteArrayMember(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, ::Il2CppObject* data);
    // private System.Void WriteRectangle(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Int32 rank, System.Int32[] maxA, System.Array array, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemNameTypeInfo, System.Int32[] lowerBoundA)
    // Offset: 0xFEFCB8
    void WriteRectangle(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, int rank, ::Array<int>* maxA, System::Array* array, System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemNameTypeInfo, ::Array<int>* lowerBoundA);
    // private System.Object GetNext(System.Int64 objID)
    // Offset: 0xFED7C0
    ::Il2CppObject* GetNext(int64_t& objID);
    // private System.Int64 InternalGetId(System.Object obj, System.Boolean assignUniqueIdToValueType, System.Type type, System.Boolean isNew)
    // Offset: 0xFED014
    int64_t InternalGetId(::Il2CppObject* obj, bool assignUniqueIdToValueType, System::Type* type, bool& isNew);
    // private System.Int64 Schedule(System.Object obj, System.Boolean assignUniqueIdToValueType, System.Type type)
    // Offset: 0xFEFF18
    int64_t Schedule(::Il2CppObject* obj, bool assignUniqueIdToValueType, System::Type* type);
    // private System.Int64 Schedule(System.Object obj, System.Boolean assignUniqueIdToValueType, System.Type type, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo)
    // Offset: 0xFEF18C
    int64_t Schedule(::Il2CppObject* obj, bool assignUniqueIdToValueType, System::Type* type, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo);
    // private System.Boolean WriteKnownValueClass(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, System.Object data)
    // Offset: 0xFEF264
    bool WriteKnownValueClass(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::Il2CppObject* data);
    // private System.Void WriteObjectRef(System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo, System.Int64 objectId)
    // Offset: 0xFEF224
    void WriteObjectRef(System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, int64_t objectId);
    // private System.Void WriteString(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, System.Object stringObject)
    // Offset: 0xFEFF94
    void WriteString(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::Il2CppObject* stringObject);
    // private System.Boolean CheckForNull(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, System.Object data)
    // Offset: 0xFEF04C
    bool CheckForNull(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::Il2CppObject* data);
    // private System.Void WriteSerializedStreamHeader(System.Int64 topId, System.Int64 headerId)
    // Offset: 0xFECC70
    void WriteSerializedStreamHeader(int64_t topId, int64_t headerId);
    // private System.Runtime.Serialization.Formatters.Binary.NameInfo TypeToNameInfo(System.Type type, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code, System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo)
    // Offset: 0xFF04F0
    System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo(System::Type* type, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo);
    // private System.Runtime.Serialization.Formatters.Binary.NameInfo TypeToNameInfo(System.Type type)
    // Offset: 0xFEECCC
    System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo(System::Type* type);
    // private System.Runtime.Serialization.Formatters.Binary.NameInfo TypeToNameInfo(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo)
    // Offset: 0xFED39C
    System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo);
    // private System.Runtime.Serialization.Formatters.Binary.NameInfo TypeToNameInfo(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo)
    // Offset: 0xFEF138
    System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo);
    // private System.Void TypeToNameInfo(System.Type type, System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo)
    // Offset: 0xFEF0F4
    void TypeToNameInfo(System::Type* type, System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo);
    // private System.Runtime.Serialization.Formatters.Binary.NameInfo MemberToNameInfo(System.String name)
    // Offset: 0xFEEB7C
    System::Runtime::Serialization::Formatters::Binary::NameInfo* MemberToNameInfo(::Il2CppString* name);
    // System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE ToCode(System.Type type)
    // Offset: 0xFEE2B4
    System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToCode(System::Type* type);
    // private System.Int64 GetAssemblyId(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo)
    // Offset: 0xFED190
    int64_t GetAssemblyId(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo);
    // private System.Type GetType(System.Object obj)
    // Offset: 0xFEE298
    System::Type* GetType(::Il2CppObject* obj);
    // private System.Runtime.Serialization.Formatters.Binary.NameInfo GetNameInfo()
    // Offset: 0xFF05A0
    System::Runtime::Serialization::Formatters::Binary::NameInfo* GetNameInfo();
    // private System.Boolean CheckTypeFormat(System.Runtime.Serialization.Formatters.FormatterTypeStyle test, System.Runtime.Serialization.Formatters.FormatterTypeStyle want)
    // Offset: 0xFEE28C
    bool CheckTypeFormat(System::Runtime::Serialization::Formatters::FormatterTypeStyle test, System::Runtime::Serialization::Formatters::FormatterTypeStyle want);
    // private System.Void PutNameInfo(System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo)
    // Offset: 0xFED79C
    void PutNameInfo(System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo);
  }; // System.Runtime.Serialization.Formatters.Binary.ObjectWriter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, "System.Runtime.Serialization.Formatters.Binary", "ObjectWriter");
#pragma pack(pop)
