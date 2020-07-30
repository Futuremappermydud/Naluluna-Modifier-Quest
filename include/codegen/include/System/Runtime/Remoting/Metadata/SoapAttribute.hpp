// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:50 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Metadata
namespace System::Runtime::Remoting::Metadata {
  // Autogenerated type: System.Runtime.Remoting.Metadata.SoapAttribute
  class SoapAttribute : public System::Attribute {
    public:
    // private System.Boolean _useAttribute
    // Offset: 0x10
    bool useAttribute;
    // protected System.String ProtXmlNamespace
    // Offset: 0x18
    ::Il2CppString* ProtXmlNamespace;
    // protected System.Object ReflectInfo
    // Offset: 0x20
    ::Il2CppObject* ReflectInfo;
    // public System.Boolean get_UseAttribute()
    // Offset: 0xDFD234
    bool get_UseAttribute();
    // public System.String get_XmlNamespace()
    // Offset: 0xDFD23C
    ::Il2CppString* get_XmlNamespace();
    // System.Void SetReflectionObject(System.Object reflectionObject)
    // Offset: 0xDFD244
    void SetReflectionObject(::Il2CppObject* reflectionObject);
    // public System.Void .ctor()
    // Offset: 0xDFD22C
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static SoapAttribute* New_ctor();
  }; // System.Runtime.Remoting.Metadata.SoapAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Metadata::SoapAttribute*, "System.Runtime.Remoting.Metadata", "SoapAttribute");
#pragma pack(pop)
