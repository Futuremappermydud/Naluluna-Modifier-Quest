// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Xml.XmlWellFormedWriter
#include "System/Xml/XmlWellFormedWriter.hpp"
// Including type: System.Xml.XmlSpace
#include "System/Xml/XmlSpace.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlRawWriter
  class XmlRawWriter;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.XmlWellFormedWriter/ElementScope
  struct XmlWellFormedWriter::ElementScope : public System::ValueType {
    public:
    // System.Int32 prevNSTop
    // Offset: 0x0
    int prevNSTop;
    // System.String prefix
    // Offset: 0x8
    ::Il2CppString* prefix;
    // System.String localName
    // Offset: 0x10
    ::Il2CppString* localName;
    // System.String namespaceUri
    // Offset: 0x18
    ::Il2CppString* namespaceUri;
    // System.Xml.XmlSpace xmlSpace
    // Offset: 0x20
    System::Xml::XmlSpace xmlSpace;
    // System.String xmlLang
    // Offset: 0x28
    ::Il2CppString* xmlLang;
    // Creating value type constructor for type: ElementScope
    ElementScope(int prevNSTop_ = {}, ::Il2CppString* prefix_ = {}, ::Il2CppString* localName_ = {}, ::Il2CppString* namespaceUri_ = {}, System::Xml::XmlSpace xmlSpace_ = {}, ::Il2CppString* xmlLang_ = {}) : prevNSTop{prevNSTop_}, prefix{prefix_}, localName{localName_}, namespaceUri{namespaceUri_}, xmlSpace{xmlSpace_}, xmlLang{xmlLang_} {}
    // System.Void Set(System.String prefix, System.String localName, System.String namespaceUri, System.Int32 prevNSTop)
    // Offset: 0xA5A76C
    void Set(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* namespaceUri, int prevNSTop);
    // System.Void WriteEndElement(System.Xml.XmlRawWriter rawWriter)
    // Offset: 0xA5A774
    void WriteEndElement(System::Xml::XmlRawWriter* rawWriter);
    // System.Void WriteFullEndElement(System.Xml.XmlRawWriter rawWriter)
    // Offset: 0xA5A77C
    void WriteFullEndElement(System::Xml::XmlRawWriter* rawWriter);
  }; // System.Xml.XmlWellFormedWriter/ElementScope
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlWellFormedWriter::ElementScope, "System.Xml", "XmlWellFormedWriter/ElementScope");
#pragma pack(pop)
