// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: Mono.Xml.SmallXmlParser
#include "Mono/Xml/SmallXmlParser.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Mono.Xml
namespace Mono::Xml {
  // Autogenerated type: Mono.Xml.SmallXmlParser/IContentHandler
  class SmallXmlParser::IContentHandler {
    public:
    // public System.Void OnStartParsing(Mono.Xml.SmallXmlParser parser)
    // Offset: 0xFFFFFFFF
    void OnStartParsing(Mono::Xml::SmallXmlParser* parser);
    // public System.Void OnEndParsing(Mono.Xml.SmallXmlParser parser)
    // Offset: 0xFFFFFFFF
    void OnEndParsing(Mono::Xml::SmallXmlParser* parser);
    // public System.Void OnStartElement(System.String name, Mono.Xml.SmallXmlParser/IAttrList attrs)
    // Offset: 0xFFFFFFFF
    void OnStartElement(::Il2CppString* name, Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // public System.Void OnEndElement(System.String name)
    // Offset: 0xFFFFFFFF
    void OnEndElement(::Il2CppString* name);
    // public System.Void OnProcessingInstruction(System.String name, System.String text)
    // Offset: 0xFFFFFFFF
    void OnProcessingInstruction(::Il2CppString* name, ::Il2CppString* text);
    // public System.Void OnChars(System.String text)
    // Offset: 0xFFFFFFFF
    void OnChars(::Il2CppString* text);
    // public System.Void OnIgnorableWhitespace(System.String text)
    // Offset: 0xFFFFFFFF
    void OnIgnorableWhitespace(::Il2CppString* text);
  }; // Mono.Xml.SmallXmlParser/IContentHandler
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Xml::SmallXmlParser::IContentHandler*, "Mono.Xml", "SmallXmlParser/IContentHandler");
#pragma pack(pop)
