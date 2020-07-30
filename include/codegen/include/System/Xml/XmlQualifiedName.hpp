// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:20 PM
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
// Forward declaring namespace: System::Xml
namespace System::Xml {
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.XmlQualifiedName
  class XmlQualifiedName : public ::Il2CppObject {
    public:
    // Nested type: System::Xml::XmlQualifiedName::HashCodeOfStringDelegate
    class HashCodeOfStringDelegate;
    // Get static field: static private System.Xml.XmlQualifiedName/HashCodeOfStringDelegate hashCodeDelegate
    static System::Xml::XmlQualifiedName::HashCodeOfStringDelegate* _get_hashCodeDelegate();
    // Set static field: static private System.Xml.XmlQualifiedName/HashCodeOfStringDelegate hashCodeDelegate
    static void _set_hashCodeDelegate(System::Xml::XmlQualifiedName::HashCodeOfStringDelegate* value);
    // private System.String name
    // Offset: 0x10
    ::Il2CppString* name;
    // private System.String ns
    // Offset: 0x18
    ::Il2CppString* ns;
    // private System.Int32 hash
    // Offset: 0x20
    int hash;
    // Get static field: static public readonly System.Xml.XmlQualifiedName Empty
    static System::Xml::XmlQualifiedName* _get_Empty();
    // Set static field: static public readonly System.Xml.XmlQualifiedName Empty
    static void _set_Empty(System::Xml::XmlQualifiedName* value);
    // public System.Void .ctor(System.String name)
    // Offset: 0x1192058
    static XmlQualifiedName* New_ctor(::Il2CppString* name);
    // public System.Void .ctor(System.String name, System.String ns)
    // Offset: 0x1191FA8
    static XmlQualifiedName* New_ctor(::Il2CppString* name, ::Il2CppString* ns);
    // public System.String get_Namespace()
    // Offset: 0x11920C0
    ::Il2CppString* get_Namespace();
    // public System.String get_Name()
    // Offset: 0x11920C8
    ::Il2CppString* get_Name();
    // static private System.Xml.XmlQualifiedName/HashCodeOfStringDelegate GetHashCodeDelegate()
    // Offset: 0x11921BC
    static System::Xml::XmlQualifiedName::HashCodeOfStringDelegate* GetHashCodeDelegate();
    // static private System.Boolean IsRandomizedHashingDisabled()
    // Offset: 0x11929DC
    static bool IsRandomizedHashingDisabled();
    // static private System.Int32 GetHashCodeOfString(System.String s, System.Int32 length, System.Int64 additionalEntropy)
    // Offset: 0x11929F8
    static int GetHashCodeOfString(::Il2CppString* s, int length, int64_t additionalEntropy);
    // System.Void Init(System.String name, System.String ns)
    // Offset: 0x1189784
    void Init(::Il2CppString* name, ::Il2CppString* ns);
    // static private System.Void .cctor()
    // Offset: 0x1192A14
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x11893BC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static XmlQualifiedName* New_ctor();
    // public override System.Int32 GetHashCode()
    // Offset: 0x11920D0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x119277C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x11927F4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
  }; // System.Xml.XmlQualifiedName
  // static public System.Boolean op_Equality(System.Xml.XmlQualifiedName a, System.Xml.XmlQualifiedName b)
  // Offset: 0x1192970
  bool operator ==(System::Xml::XmlQualifiedName* a, System::Xml::XmlQualifiedName& b);
  // static public System.Boolean op_Inequality(System.Xml.XmlQualifiedName a, System.Xml.XmlQualifiedName b)
  // Offset: 0x11928F0
  bool operator !=(System::Xml::XmlQualifiedName* a, System::Xml::XmlQualifiedName& b);
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlQualifiedName*, "System.Xml", "XmlQualifiedName");
#pragma pack(pop)
