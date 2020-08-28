// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationEntry
  struct SerializationEntry;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Autogenerated type: System.Runtime.Serialization.SerializationInfoEnumerator
  class SerializationInfoEnumerator : public ::Il2CppObject, public System::Collections::IEnumerator {
    public:
    // private System.String[] m_members
    // Offset: 0x10
    ::Array<::Il2CppString*>* m_members;
    // private System.Object[] m_data
    // Offset: 0x18
    ::Array<::Il2CppObject*>* m_data;
    // private System.Type[] m_types
    // Offset: 0x20
    ::Array<System::Type*>* m_types;
    // private System.Int32 m_numItems
    // Offset: 0x28
    int m_numItems;
    // private System.Int32 m_currItem
    // Offset: 0x2C
    int m_currItem;
    // private System.Boolean m_current
    // Offset: 0x30
    bool m_current;
    // System.Void .ctor(System.String[] members, System.Object[] info, System.Type[] types, System.Int32 numItems)
    // Offset: 0x1001D80
    static SerializationInfoEnumerator* New_ctor(::Array<::Il2CppString*>* members, ::Array<::Il2CppObject*>* info, ::Array<System::Type*>* types, int numItems);
    // public System.Runtime.Serialization.SerializationEntry get_Current()
    // Offset: 0x100330C
    System::Runtime::Serialization::SerializationEntry get_Current();
    // public System.String get_Name()
    // Offset: 0xFF5150
    ::Il2CppString* get_Name();
    // public System.Object get_Value()
    // Offset: 0xFF52E0
    ::Il2CppObject* get_Value();
    // public System.Type get_ObjectType()
    // Offset: 0xFF5218
    System::Type* get_ObjectType();
    // public System.Boolean MoveNext()
    // Offset: 0xFF53A8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x10031D0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void Reset()
    // Offset: 0x1003424
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
  }; // System.Runtime.Serialization.SerializationInfoEnumerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationInfoEnumerator*, "System.Runtime.Serialization", "SerializationInfoEnumerator");
#pragma pack(pop)
