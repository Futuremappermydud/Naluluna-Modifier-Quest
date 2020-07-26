// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:59 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: OVRSimpleJSON.JSONNode
#include "OVRSimpleJSON/JSONNode.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Forward declaring type: JSONNodeType
  struct JSONNodeType;
  // Forward declaring type: JSONTextMode
  struct JSONTextMode;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Autogenerated type: OVRSimpleJSON.JSONNumber
  class JSONNumber : public OVRSimpleJSON::JSONNode {
    public:
    // private System.Double m_Data
    // Offset: 0x10
    double m_Data;
    // public System.Void .ctor(System.Double aData)
    // Offset: 0xF3BDB0
    static JSONNumber* New_ctor(double aData);
    // public System.Void .ctor(System.String aData)
    // Offset: 0xF41398
    static JSONNumber* New_ctor(::Il2CppString* aData);
    // static private System.Boolean IsNumeric(System.Object value)
    // Offset: 0xF41460
    static bool IsNumeric(::Il2CppObject* value);
    // public override OVRSimpleJSON.JSONNodeType get_Tag()
    // Offset: 0xF41204
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNodeType JSONNode::get_Tag()
    OVRSimpleJSON::JSONNodeType get_Tag();
    // public override System.Boolean get_IsNumber()
    // Offset: 0xF4120C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::get_IsNumber()
    bool get_IsNumber();
    // public override OVRSimpleJSON.JSONNode/Enumerator GetEnumerator()
    // Offset: 0xF41214
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode/Enumerator JSONNode::GetEnumerator()
    OVRSimpleJSON::JSONNode::Enumerator GetEnumerator();
    // public override System.String get_Value()
    // Offset: 0xF41234
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.String JSONNode::get_Value()
    ::Il2CppString* get_Value();
    // public override System.Void set_Value(System.String value)
    // Offset: 0xF412AC
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_Value(System.String value)
    void set_Value(::Il2CppString* value);
    // public override System.Double get_AsDouble()
    // Offset: 0xF41370
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Double JSONNode::get_AsDouble()
    double get_AsDouble();
    // public override System.Void set_AsDouble(System.Double value)
    // Offset: 0xF41378
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_AsDouble(System.Double value)
    void set_AsDouble(double value);
    // public override System.Int64 get_AsLong()
    // Offset: 0xF41380
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Int64 JSONNode::get_AsLong()
    int64_t get_AsLong();
    // public override System.Void set_AsLong(System.Int64 value)
    // Offset: 0xF4138C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_AsLong(System.Int64 value)
    void set_AsLong(int64_t value);
    // override System.Void WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    // Offset: 0xF41420
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    void WriteToStringBuilder(System::Text::StringBuilder* aSB, int aIndent, int aIndentInc, OVRSimpleJSON::JSONTextMode aMode);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xF41590
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF416BC
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Int32 JSONNode::GetHashCode()
    int GetHashCode();
  }; // OVRSimpleJSON.JSONNumber
}
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONNumber*, "OVRSimpleJSON", "JSONNumber");
#pragma pack(pop)
