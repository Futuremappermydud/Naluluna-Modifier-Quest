// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Runtime.Remoting.Metadata.SoapAttribute
#include "System/Runtime/Remoting/Metadata/SoapAttribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Metadata
namespace System::Runtime::Remoting::Metadata {
  // Autogenerated type: System.Runtime.Remoting.Metadata.SoapTypeAttribute
  class SoapTypeAttribute : public System::Runtime::Remoting::Metadata::SoapAttribute {
    public:
    // private System.Boolean _useAttribute
    // Offset: 0x28
    bool useAttribute;
    // private System.String _xmlElementName
    // Offset: 0x30
    ::Il2CppString* xmlElementName;
    // private System.String _xmlNamespace
    // Offset: 0x38
    ::Il2CppString* xmlNamespace;
    // private System.String _xmlTypeName
    // Offset: 0x40
    ::Il2CppString* xmlTypeName;
    // private System.String _xmlTypeNamespace
    // Offset: 0x48
    ::Il2CppString* xmlTypeNamespace;
    // private System.Boolean _isType
    // Offset: 0x50
    bool isType;
    // private System.Boolean _isElement
    // Offset: 0x51
    bool isElement;
    // public System.String get_XmlElementName()
    // Offset: 0xDFD6A0
    ::Il2CppString* get_XmlElementName();
    // public System.String get_XmlTypeName()
    // Offset: 0xDFD6B0
    ::Il2CppString* get_XmlTypeName();
    // public System.String get_XmlTypeNamespace()
    // Offset: 0xDFD6B8
    ::Il2CppString* get_XmlTypeNamespace();
    // System.Boolean get_IsInteropXmlElement()
    // Offset: 0xDFD6C0
    bool get_IsInteropXmlElement();
    // System.Boolean get_IsInteropXmlType()
    // Offset: 0xDFD6C8
    bool get_IsInteropXmlType();
    // public System.Void .ctor()
    // Offset: 0xDFD690
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Void SoapAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static SoapTypeAttribute* New_ctor();
    // public override System.Boolean get_UseAttribute()
    // Offset: 0xDFD698
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Boolean SoapAttribute::get_UseAttribute()
    bool get_UseAttribute();
    // public override System.String get_XmlNamespace()
    // Offset: 0xDFD6A8
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.String SoapAttribute::get_XmlNamespace()
    ::Il2CppString* get_XmlNamespace();
    // override System.Void SetReflectionObject(System.Object reflectionObject)
    // Offset: 0xDFD6D0
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Void SoapAttribute::SetReflectionObject(System.Object reflectionObject)
    void SetReflectionObject(::Il2CppObject* reflectionObject);
  }; // System.Runtime.Remoting.Metadata.SoapTypeAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Metadata::SoapTypeAttribute*, "System.Runtime.Remoting.Metadata", "SoapTypeAttribute");
#pragma pack(pop)
