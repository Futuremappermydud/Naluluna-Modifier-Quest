// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Xml.XmlWellFormedWriter/AttributeValueCache
#include "System/Xml/XmlWellFormedWriter_AttributeValueCache.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.XmlWellFormedWriter/AttributeValueCache/BufferChunk
  class XmlWellFormedWriter::AttributeValueCache::BufferChunk : public ::Il2CppObject {
    public:
    // System.Char[] buffer
    // Offset: 0x10
    ::Array<::Il2CppChar>* buffer;
    // System.Int32 index
    // Offset: 0x18
    int index;
    // System.Int32 count
    // Offset: 0x1C
    int count;
    // System.Void .ctor(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x192A174
    static XmlWellFormedWriter::AttributeValueCache::BufferChunk* New_ctor(::Array<::Il2CppChar>* buffer, int index, int count);
  }; // System.Xml.XmlWellFormedWriter/AttributeValueCache/BufferChunk
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlWellFormedWriter::AttributeValueCache::BufferChunk*, "System.Xml", "XmlWellFormedWriter/AttributeValueCache/BufferChunk");
#pragma pack(pop)
