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
  // Autogenerated type: Mono.Xml.SmallXmlParser/IAttrList
  class SmallXmlParser::IAttrList {
    public:
    // public System.Int32 get_Length()
    // Offset: 0xFFFFFFFF
    int get_Length();
    // public System.String GetName(System.Int32 i)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* GetName(int i);
    // public System.String GetValue(System.Int32 i)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* GetValue(int i);
    // public System.String GetValue(System.String name)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* GetValue(::Il2CppString* name);
    // public System.String[] get_Names()
    // Offset: 0xFFFFFFFF
    ::Array<::Il2CppString*>* get_Names();
    // public System.String[] get_Values()
    // Offset: 0xFFFFFFFF
    ::Array<::Il2CppString*>* get_Values();
  }; // Mono.Xml.SmallXmlParser/IAttrList
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Xml::SmallXmlParser::IAttrList*, "Mono.Xml", "SmallXmlParser/IAttrList");
#pragma pack(pop)
