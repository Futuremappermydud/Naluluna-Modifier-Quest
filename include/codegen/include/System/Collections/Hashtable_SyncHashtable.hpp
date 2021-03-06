// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:51 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
  // Forward declaring type: ICollection
  class ICollection;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Autogenerated type: System.Collections.Hashtable/SyncHashtable
  class Hashtable::SyncHashtable : public System::Collections::Hashtable, public System::Collections::IEnumerable {
    public:
    // protected System.Collections.Hashtable _table
    // Offset: 0x50
    System::Collections::Hashtable* table;
    // System.Void .ctor(System.Collections.Hashtable table)
    // Offset: 0x13228CC
    static Hashtable::SyncHashtable* New_ctor(System::Collections::Hashtable* table);
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1323CBC
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static Hashtable::SyncHashtable* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1323E1C
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Int32 get_Count()
    // Offset: 0x1323F9C
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Int32 Hashtable::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // public override System.Object get_Item(System.Object key)
    // Offset: 0x1323FC0
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Object Hashtable::get_Item(System.Object key)
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IDictionary_get_Item
    // Maps to method: get_Item
    ::Il2CppObject* System_Collections_IDictionary_get_Item(::Il2CppObject* key);
    // public override System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0x1323FE4
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::set_Item(System.Object key, System.Object value)
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IDictionary_set_Item
    // Maps to method: set_Item
    void System_Collections_IDictionary_set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // public override System.Object get_SyncRoot()
    // Offset: 0x13240C8
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Object Hashtable::get_SyncRoot()
    ::Il2CppObject* get_SyncRoot();
    // public override System.Void Add(System.Object key, System.Object value)
    // Offset: 0x13240EC
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::Add(System.Object key, System.Object value)
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public override System.Void Clear()
    // Offset: 0x13241D0
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::Clear()
    void Clear();
    // public override System.Boolean Contains(System.Object key)
    // Offset: 0x132429C
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Boolean Hashtable::Contains(System.Object key)
    bool Contains(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IDictionary_Contains
    // Maps to method: Contains
    bool System_Collections_IDictionary_Contains(::Il2CppObject* key);
    // public override System.Boolean ContainsKey(System.Object key)
    // Offset: 0x13242C0
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Boolean Hashtable::ContainsKey(System.Object key)
    bool ContainsKey(::Il2CppObject* key);
    // public override System.Void CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0x1324388
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::CopyTo(System.Array array, System.Int32 arrayIndex)
    void CopyTo(System::Array* array, int arrayIndex);
    // Creating proxy method: System_Collections_ICollection_CopyTo
    // Maps to method: CopyTo
    void System_Collections_ICollection_CopyTo(System::Array* array, int arrayIndex);
    // public override System.Object Clone()
    // Offset: 0x132446C
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Object Hashtable::Clone()
    ::Il2CppObject* Clone();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x13245B8
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public override System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x13245DC
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Collections.IDictionaryEnumerator Hashtable::GetEnumerator()
    System::Collections::IDictionaryEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IDictionary_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();
    // public override System.Collections.ICollection get_Keys()
    // Offset: 0x1324600
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Collections.ICollection Hashtable::get_Keys()
    System::Collections::ICollection* get_Keys();
    // Creating proxy method: System_Collections_IDictionary_get_Keys
    // Maps to method: get_Keys
    System::Collections::ICollection* System_Collections_IDictionary_get_Keys();
    // public override System.Collections.ICollection get_Values()
    // Offset: 0x13246E4
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Collections.ICollection Hashtable::get_Values()
    System::Collections::ICollection* get_Values();
    // public override System.Void Remove(System.Object key)
    // Offset: 0x13247C8
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::Remove(System.Object key)
    void Remove(::Il2CppObject* key);
    // public override System.Void OnDeserialization(System.Object sender)
    // Offset: 0x132489C
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::OnDeserialization(System.Object sender)
    void OnDeserialization(::Il2CppObject* sender);
    // Creating proxy method: System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
    // Maps to method: OnDeserialization
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
  }; // System.Collections.Hashtable/SyncHashtable
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Hashtable::SyncHashtable*, "System.Collections", "Hashtable/SyncHashtable");
#pragma pack(pop)
