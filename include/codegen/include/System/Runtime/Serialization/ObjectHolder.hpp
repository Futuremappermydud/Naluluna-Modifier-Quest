// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:35 PM
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
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: ISerializationSurrogate
  class ISerializationSurrogate;
  // Forward declaring type: FixupHolderList
  class FixupHolderList;
  // Forward declaring type: LongList
  class LongList;
  // Forward declaring type: ValueTypeFixupInfo
  class ValueTypeFixupInfo;
  // Forward declaring type: TypeLoadExceptionHolder
  class TypeLoadExceptionHolder;
  // Forward declaring type: ObjectManager
  class ObjectManager;
  // Forward declaring type: FixupHolder
  class FixupHolder;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Autogenerated type: System.Runtime.Serialization.ObjectHolder
  class ObjectHolder : public ::Il2CppObject {
    public:
    // private System.Object m_object
    // Offset: 0x10
    ::Il2CppObject* m_object;
    // System.Int64 m_id
    // Offset: 0x18
    int64_t m_id;
    // private System.Int32 m_missingElementsRemaining
    // Offset: 0x20
    int m_missingElementsRemaining;
    // private System.Int32 m_missingDecendents
    // Offset: 0x24
    int m_missingDecendents;
    // System.Runtime.Serialization.SerializationInfo m_serInfo
    // Offset: 0x28
    System::Runtime::Serialization::SerializationInfo* m_serInfo;
    // System.Runtime.Serialization.ISerializationSurrogate m_surrogate
    // Offset: 0x30
    System::Runtime::Serialization::ISerializationSurrogate* m_surrogate;
    // System.Runtime.Serialization.FixupHolderList m_missingElements
    // Offset: 0x38
    System::Runtime::Serialization::FixupHolderList* m_missingElements;
    // System.Runtime.Serialization.LongList m_dependentObjects
    // Offset: 0x40
    System::Runtime::Serialization::LongList* m_dependentObjects;
    // System.Runtime.Serialization.ObjectHolder m_next
    // Offset: 0x48
    System::Runtime::Serialization::ObjectHolder* m_next;
    // System.Int32 m_flags
    // Offset: 0x50
    int m_flags;
    // private System.Boolean m_markForFixupWhenAvailable
    // Offset: 0x54
    bool m_markForFixupWhenAvailable;
    // private System.Runtime.Serialization.ValueTypeFixupInfo m_valueFixup
    // Offset: 0x58
    System::Runtime::Serialization::ValueTypeFixupInfo* m_valueFixup;
    // private System.Runtime.Serialization.TypeLoadExceptionHolder m_typeLoad
    // Offset: 0x60
    System::Runtime::Serialization::TypeLoadExceptionHolder* m_typeLoad;
    // private System.Boolean m_reachable
    // Offset: 0x68
    bool m_reachable;
    // System.Void .ctor(System.Int64 objID)
    // Offset: 0xFE2A00
    static ObjectHolder* New_ctor(int64_t objID);
    // System.Void .ctor(System.Object obj, System.Int64 objID, System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.ISerializationSurrogate surrogate, System.Int64 idOfContainingObj, System.Reflection.FieldInfo field, System.Int32[] arrayIndex)
    // Offset: 0xFE2B7C
    static ObjectHolder* New_ctor(::Il2CppObject* obj, int64_t objID, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::ISerializationSurrogate* surrogate, int64_t idOfContainingObj, System::Reflection::FieldInfo* field, ::Array<int>* arrayIndex);
    // System.Void .ctor(System.String obj, System.Int64 objID, System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.ISerializationSurrogate surrogate, System.Int64 idOfContainingObj, System.Reflection.FieldInfo field, System.Int32[] arrayIndex)
    // Offset: 0xFE2A38
    static ObjectHolder* New_ctor(::Il2CppString* obj, int64_t objID, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::ISerializationSurrogate* surrogate, int64_t idOfContainingObj, System::Reflection::FieldInfo* field, ::Array<int>* arrayIndex);
    // private System.Void IncrementDescendentFixups(System.Int32 amount)
    // Offset: 0xFE2FD0
    void IncrementDescendentFixups(int amount);
    // System.Void DecrementFixupsRemaining(System.Runtime.Serialization.ObjectManager manager)
    // Offset: 0xFE2FE0
    void DecrementFixupsRemaining(System::Runtime::Serialization::ObjectManager* manager);
    // System.Void RemoveDependency(System.Int64 id)
    // Offset: 0xFE3074
    void RemoveDependency(int64_t id);
    // System.Void AddFixup(System.Runtime.Serialization.FixupHolder fixup, System.Runtime.Serialization.ObjectManager manager)
    // Offset: 0xFE308C
    void AddFixup(System::Runtime::Serialization::FixupHolder* fixup, System::Runtime::Serialization::ObjectManager* manager);
    // private System.Void UpdateDescendentDependencyChain(System.Int32 amount, System.Runtime.Serialization.ObjectManager manager)
    // Offset: 0xFE3010
    void UpdateDescendentDependencyChain(int amount, System::Runtime::Serialization::ObjectManager* manager);
    // System.Void AddDependency(System.Int64 dependentObject)
    // Offset: 0xFE3230
    void AddDependency(int64_t dependentObject);
    // System.Void UpdateData(System.Object obj, System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.ISerializationSurrogate surrogate, System.Int64 idOfContainer, System.Reflection.FieldInfo field, System.Int32[] arrayIndex, System.Runtime.Serialization.ObjectManager manager)
    // Offset: 0xFE32C0
    void UpdateData(::Il2CppObject* obj, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::ISerializationSurrogate* surrogate, int64_t idOfContainer, System::Reflection::FieldInfo* field, ::Array<int>* arrayIndex, System::Runtime::Serialization::ObjectManager* manager);
    // System.Void MarkForCompletionWhenAvailable()
    // Offset: 0xFE3568
    void MarkForCompletionWhenAvailable();
    // System.Void SetFlags()
    // Offset: 0xFE2F1C
    void SetFlags();
    // System.Boolean get_IsIncompleteObjectReference()
    // Offset: 0xFE3574
    bool get_IsIncompleteObjectReference();
    // System.Void set_IsIncompleteObjectReference(System.Boolean value)
    // Offset: 0xFE3580
    void set_IsIncompleteObjectReference(bool value);
    // System.Boolean get_RequiresDelayedFixup()
    // Offset: 0xFE359C
    bool get_RequiresDelayedFixup();
    // System.Boolean get_RequiresValueTypeFixup()
    // Offset: 0xFE3004
    bool get_RequiresValueTypeFixup();
    // System.Boolean get_ValueTypeFixupPerformed()
    // Offset: 0xFE35AC
    bool get_ValueTypeFixupPerformed();
    // System.Void set_ValueTypeFixupPerformed(System.Boolean value)
    // Offset: 0xFE35E4
    void set_ValueTypeFixupPerformed(bool value);
    // System.Boolean get_HasISerializable()
    // Offset: 0xFE35F8
    bool get_HasISerializable();
    // System.Boolean get_HasSurrogate()
    // Offset: 0xFE3604
    bool get_HasSurrogate();
    // System.Boolean get_CanSurrogatedObjectValueChange()
    // Offset: 0xFE3610
    bool get_CanSurrogatedObjectValueChange();
    // System.Boolean get_CanObjectValueChange()
    // Offset: 0xFE36BC
    bool get_CanObjectValueChange();
    // System.Int32 get_DirectlyDependentObjects()
    // Offset: 0xFE36DC
    int get_DirectlyDependentObjects();
    // System.Int32 get_TotalDependentObjects()
    // Offset: 0xFE36E4
    int get_TotalDependentObjects();
    // System.Boolean get_Reachable()
    // Offset: 0xFE36F0
    bool get_Reachable();
    // System.Void set_Reachable(System.Boolean value)
    // Offset: 0xFE36F8
    void set_Reachable(bool value);
    // System.Boolean get_TypeLoadExceptionReachable()
    // Offset: 0xFE3704
    bool get_TypeLoadExceptionReachable();
    // System.Runtime.Serialization.TypeLoadExceptionHolder get_TypeLoadException()
    // Offset: 0xFE3714
    System::Runtime::Serialization::TypeLoadExceptionHolder* get_TypeLoadException();
    // System.Void set_TypeLoadException(System.Runtime.Serialization.TypeLoadExceptionHolder value)
    // Offset: 0xFE371C
    void set_TypeLoadException(System::Runtime::Serialization::TypeLoadExceptionHolder* value);
    // System.Object get_ObjectValue()
    // Offset: 0xFE3724
    ::Il2CppObject* get_ObjectValue();
    // System.Void SetObjectValue(System.Object obj, System.Runtime.Serialization.ObjectManager manager)
    // Offset: 0xFE3480
    void SetObjectValue(::Il2CppObject* obj, System::Runtime::Serialization::ObjectManager* manager);
    // System.Runtime.Serialization.SerializationInfo get_SerializationInfo()
    // Offset: 0xFE3D98
    System::Runtime::Serialization::SerializationInfo* get_SerializationInfo();
    // System.Void set_SerializationInfo(System.Runtime.Serialization.SerializationInfo value)
    // Offset: 0xFE3DA0
    void set_SerializationInfo(System::Runtime::Serialization::SerializationInfo* value);
    // System.Runtime.Serialization.ISerializationSurrogate get_Surrogate()
    // Offset: 0xFE3DA8
    System::Runtime::Serialization::ISerializationSurrogate* get_Surrogate();
    // System.Runtime.Serialization.LongList get_DependentObjects()
    // Offset: 0xFE3DB0
    System::Runtime::Serialization::LongList* get_DependentObjects();
    // System.Void set_DependentObjects(System.Runtime.Serialization.LongList value)
    // Offset: 0xFE3DB8
    void set_DependentObjects(System::Runtime::Serialization::LongList* value);
    // System.Boolean get_RequiresSerInfoFixup()
    // Offset: 0xFE3DC0
    bool get_RequiresSerInfoFixup();
    // System.Void set_RequiresSerInfoFixup(System.Boolean value)
    // Offset: 0xFE3DDC
    void set_RequiresSerInfoFixup(bool value);
    // System.Runtime.Serialization.ValueTypeFixupInfo get_ValueFixup()
    // Offset: 0xFE3DF8
    System::Runtime::Serialization::ValueTypeFixupInfo* get_ValueFixup();
    // System.Boolean get_CompletelyFixed()
    // Offset: 0xFE3E00
    bool get_CompletelyFixed();
    // System.Int64 get_ContainerID()
    // Offset: 0xFE316C
    int64_t get_ContainerID();
  }; // System.Runtime.Serialization.ObjectHolder
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::ObjectHolder*, "System.Runtime.Serialization", "ObjectHolder");
#pragma pack(pop)
