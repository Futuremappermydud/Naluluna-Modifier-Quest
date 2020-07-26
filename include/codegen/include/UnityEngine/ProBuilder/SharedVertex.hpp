// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:17 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Collections.Generic.ICollection`1
#include "System/Collections/Generic/ICollection_1.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Skipping declaration: IEnumerable`1 because it is already included!
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.SharedVertex
  class SharedVertex : public ::Il2CppObject, public System::Collections::Generic::ICollection_1<int>, public System::Collections::Generic::IEnumerable_1<int>, public System::Collections::IEnumerable {
    public:
    // Nested type: UnityEngine::ProBuilder::SharedVertex::$$c
    class $$c;
    // private System.Int32[] m_Vertices
    // Offset: 0x10
    ::Array<int>* m_Vertices;
    // System.Int32[] get_arrayInternal()
    // Offset: 0x18B3028
    ::Array<int>* get_arrayInternal();
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<System.Int32> indexes)
    // Offset: 0x18B3030
    static SharedVertex* New_ctor(System::Collections::Generic::IEnumerable_1<int>* indexes);
    // public System.Void .ctor(UnityEngine.ProBuilder.SharedVertex sharedVertex)
    // Offset: 0x18B30E8
    static SharedVertex* New_ctor(UnityEngine::ProBuilder::SharedVertex* sharedVertex);
    // public System.Int32 get_Item(System.Int32 i)
    // Offset: 0x18B31E0
    int get_Item(int i);
    // public System.Void set_Item(System.Int32 i, System.Int32 value)
    // Offset: 0x18B321C
    void set_Item(int i, int value);
    // public System.Collections.Generic.IEnumerator`1<System.Int32> GetEnumerator()
    // Offset: 0x18B3258
    System::Collections::Generic::IEnumerator_1<int>* GetEnumerator();
    // public System.Void CopyTo(System.Int32[] array, System.Int32 arrayIndex)
    // Offset: 0x18B34A4
    void CopyTo(::Array<int>* array, int arrayIndex);
    // static public System.Void GetSharedVertexLookup(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.SharedVertex> sharedVertices, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup)
    // Offset: 0x18B3578
    static void GetSharedVertexLookup(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::SharedVertex*>* sharedVertices, System::Collections::Generic::Dictionary_2<int, int>* lookup);
    // System.Void ShiftIndexes(System.Int32 offset)
    // Offset: 0x18B3904
    void ShiftIndexes(int offset);
    // static UnityEngine.ProBuilder.SharedVertex[] ToSharedVertices(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>> lookup)
    // Offset: 0x18B3970
    static ::Array<UnityEngine::ProBuilder::SharedVertex*>* ToSharedVertices(System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<int, int>>* lookup);
    // static private UnityEngine.ProBuilder.SharedVertex[] ToSharedVertices(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>> list)
    // Offset: 0x18B3DD4
    static ::Array<UnityEngine::ProBuilder::SharedVertex*>* ToSharedVertices(System::Collections::Generic::List_1<System::Collections::Generic::List_1<int>*>* list);
    // static public UnityEngine.ProBuilder.SharedVertex[] GetSharedVerticesWithPositions(System.Collections.Generic.IList`1<UnityEngine.Vector3> positions)
    // Offset: 0x18B3F30
    static ::Array<UnityEngine::ProBuilder::SharedVertex*>* GetSharedVerticesWithPositions(System::Collections::Generic::IList_1<UnityEngine::Vector3>* positions);
    // static UnityEngine.ProBuilder.SharedVertex[] RemoveAndShift(System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup, System.Collections.Generic.IEnumerable`1<System.Int32> remove)
    // Offset: 0x18B4394
    static ::Array<UnityEngine::ProBuilder::SharedVertex*>* RemoveAndShift(System::Collections::Generic::Dictionary_2<int, int>* lookup, System::Collections::Generic::IEnumerable_1<int>* remove);
    // static UnityEngine.ProBuilder.SharedVertex[] SortedRemoveAndShift(System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup, System.Collections.Generic.List`1<System.Int32> remove)
    // Offset: 0x18B442C
    static ::Array<UnityEngine::ProBuilder::SharedVertex*>* SortedRemoveAndShift(System::Collections::Generic::Dictionary_2<int, int>* lookup, System::Collections::Generic::List_1<int>* remove);
    // static System.Void SetCoincident(System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup, System.Collections.Generic.IEnumerable`1<System.Int32> vertices)
    // Offset: 0x18B471C
    static void SetCoincident(System::Collections::Generic::Dictionary_2<int, int>*& lookup, System::Collections::Generic::IEnumerable_1<int>* vertices);
    // public override System.String ToString()
    // Offset: 0x18B3308
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x18B3364
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Void Add(System.Int32 item)
    // Offset: 0x18B3368
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection`1::Add(System.Int32 item)
    void Add(int item);
    // Creating proxy method: System_Collections_Generic_ICollection_1_Add
    // Maps to method: Add
    void System_Collections_Generic_ICollection_1_Add(int item);
    // public System.Void Clear()
    // Offset: 0x18B33D8
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection`1::Clear()
    void Clear();
    // Creating proxy method: System_Collections_Generic_ICollection_1_Clear
    // Maps to method: Clear
    void System_Collections_Generic_ICollection_1_Clear();
    // public System.Boolean Contains(System.Int32 item)
    // Offset: 0x18B3438
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection`1::Contains(System.Int32 item)
    bool Contains(int item);
    // Creating proxy method: System_Collections_Generic_ICollection_1_Contains
    // Maps to method: Contains
    bool System_Collections_Generic_ICollection_1_Contains(int item);
    // public System.Boolean Remove(System.Int32 item)
    // Offset: 0x18B34C0
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection`1::Remove(System.Int32 item)
    bool Remove(int item);
    // Creating proxy method: System_Collections_Generic_ICollection_1_Remove
    // Maps to method: Remove
    bool System_Collections_Generic_ICollection_1_Remove(int item);
    // public System.Int32 get_Count()
    // Offset: 0x18B31C4
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Int32 ICollection`1::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_Generic_ICollection_1_get_Count
    // Maps to method: get_Count
    int System_Collections_Generic_ICollection_1_get_Count();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x18B355C
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection`1::get_IsReadOnly()
    bool get_IsReadOnly();
    // Creating proxy method: System_Collections_Generic_ICollection_1_get_IsReadOnly
    // Maps to method: get_IsReadOnly
    bool System_Collections_Generic_ICollection_1_get_IsReadOnly();
  }; // UnityEngine.ProBuilder.SharedVertex
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SharedVertex*, "UnityEngine.ProBuilder", "SharedVertex");
#pragma pack(pop)
