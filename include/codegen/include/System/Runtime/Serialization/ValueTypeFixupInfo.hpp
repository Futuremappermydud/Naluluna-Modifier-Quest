// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:47 PM
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
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Autogenerated type: System.Runtime.Serialization.ValueTypeFixupInfo
  class ValueTypeFixupInfo : public ::Il2CppObject {
    public:
    // private System.Int64 m_containerID
    // Offset: 0x10
    int64_t m_containerID;
    // private System.Reflection.FieldInfo m_parentField
    // Offset: 0x18
    System::Reflection::FieldInfo* m_parentField;
    // private System.Int32[] m_parentIndex
    // Offset: 0x20
    ::Array<int>* m_parentIndex;
    // public System.Void .ctor(System.Int64 containerID, System.Reflection.FieldInfo member, System.Int32[] parentIndex)
    // Offset: 0xFE2D90
    static ValueTypeFixupInfo* New_ctor(int64_t containerID, System::Reflection::FieldInfo* member, ::Array<int>* parentIndex);
    // public System.Int64 get_ContainerID()
    // Offset: 0xFEB7BC
    int64_t get_ContainerID();
    // public System.Reflection.FieldInfo get_ParentField()
    // Offset: 0xFEB7C4
    System::Reflection::FieldInfo* get_ParentField();
    // public System.Int32[] get_ParentIndex()
    // Offset: 0xFEB7CC
    ::Array<int>* get_ParentIndex();
  }; // System.Runtime.Serialization.ValueTypeFixupInfo
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::ValueTypeFixupInfo*, "System.Runtime.Serialization", "ValueTypeFixupInfo");
#pragma pack(pop)
