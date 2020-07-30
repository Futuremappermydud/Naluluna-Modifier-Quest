// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Resources.ResourceReader
#include "System/Resources/ResourceReader.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: DictionaryEntry
  struct DictionaryEntry;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Autogenerated type: System.Resources.ResourceReader/ResourceEnumerator
  class ResourceReader::ResourceEnumerator : public ::Il2CppObject, public System::Collections::IDictionaryEnumerator, public System::Collections::IEnumerator {
    public:
    // private System.Resources.ResourceReader _reader
    // Offset: 0x10
    System::Resources::ResourceReader* reader;
    // private System.Boolean _currentIsValid
    // Offset: 0x18
    bool currentIsValid;
    // private System.Int32 _currentName
    // Offset: 0x1C
    int currentName;
    // private System.Int32 _dataPosition
    // Offset: 0x20
    int dataPosition;
    // System.Void .ctor(System.Resources.ResourceReader reader)
    // Offset: 0x1149138
    static ResourceReader::ResourceEnumerator* New_ctor(System::Resources::ResourceReader* reader);
    // System.Int32 get_DataPosition()
    // Offset: 0x114C878
    int get_DataPosition();
    // public System.Boolean MoveNext()
    // Offset: 0x114C3D8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // public System.Object get_Key()
    // Offset: 0x114C434
    // Implemented from: System.Collections.IDictionaryEnumerator
    // Base method: System.Object IDictionaryEnumerator::get_Key()
    ::Il2CppObject* get_Key();
    // Creating proxy method: System_Collections_IDictionaryEnumerator_get_Key
    // Maps to method: get_Key
    ::Il2CppObject* System_Collections_IDictionaryEnumerator_get_Key();
    // public System.Object get_Current()
    // Offset: 0x114C50C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* get_Current();
    // Creating proxy method: System_Collections_IEnumerator_get_Current
    // Maps to method: get_Current
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Collections.DictionaryEntry get_Entry()
    // Offset: 0x114C578
    // Implemented from: System.Collections.IDictionaryEnumerator
    // Base method: System.Collections.DictionaryEntry IDictionaryEnumerator::get_Entry()
    System::Collections::DictionaryEntry get_Entry();
    // Creating proxy method: System_Collections_IDictionaryEnumerator_get_Entry
    // Maps to method: get_Entry
    System::Collections::DictionaryEntry System_Collections_IDictionaryEnumerator_get_Entry();
    // public System.Object get_Value()
    // Offset: 0x114C880
    // Implemented from: System.Collections.IDictionaryEnumerator
    // Base method: System.Object IDictionaryEnumerator::get_Value()
    ::Il2CppObject* get_Value();
    // Creating proxy method: System_Collections_IDictionaryEnumerator_get_Value
    // Maps to method: get_Value
    ::Il2CppObject* System_Collections_IDictionaryEnumerator_get_Value();
    // public System.Void Reset()
    // Offset: 0x114C954
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
  }; // System.Resources.ResourceReader/ResourceEnumerator
}
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ResourceReader::ResourceEnumerator*, "System.Resources", "ResourceReader/ResourceEnumerator");
#pragma pack(pop)
