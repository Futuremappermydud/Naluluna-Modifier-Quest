// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:59 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRSimpleJSON.JSONNode
#include "OVRSimpleJSON/JSONNode.hpp"
// Including type: OVRSimpleJSON.JSONNode/Enumerator
#include "OVRSimpleJSON/JSONNode_Enumerator.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Autogenerated type: OVRSimpleJSON.JSONNode/ValueEnumerator
  struct JSONNode::ValueEnumerator : public System::ValueType {
    public:
    // private OVRSimpleJSON.JSONNode/Enumerator m_Enumerator
    // Offset: 0x0
    OVRSimpleJSON::JSONNode::Enumerator m_Enumerator;
    // Creating value type constructor for type: ValueEnumerator
    ValueEnumerator(OVRSimpleJSON::JSONNode::Enumerator m_Enumerator_ = {}) : m_Enumerator{m_Enumerator_} {}
    // public System.Void .ctor(System.Collections.Generic.List`1/Enumerator<OVRSimpleJSON.JSONNode> aArrayEnum)
    // Offset: 0xA37070
    static JSONNode::ValueEnumerator* New_ctor(typename System::Collections::Generic::List_1<OVRSimpleJSON::JSONNode*>::Enumerator aArrayEnum);
    // public System.Void .ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,OVRSimpleJSON.JSONNode> aDictEnum)
    // Offset: 0xA370E4
    static JSONNode::ValueEnumerator* New_ctor(typename System::Collections::Generic::Dictionary_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>::Enumerator aDictEnum);
    // public System.Void .ctor(OVRSimpleJSON.JSONNode/Enumerator aEnumerator)
    // Offset: 0xA37174
    static JSONNode::ValueEnumerator* New_ctor(OVRSimpleJSON::JSONNode::Enumerator aEnumerator);
    // public OVRSimpleJSON.JSONNode get_Current()
    // Offset: 0xA371A4
    OVRSimpleJSON::JSONNode* get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0xA371AC
    bool MoveNext();
    // public OVRSimpleJSON.JSONNode/ValueEnumerator GetEnumerator()
    // Offset: 0xA371B4
    OVRSimpleJSON::JSONNode::ValueEnumerator GetEnumerator();
  }; // OVRSimpleJSON.JSONNode/ValueEnumerator
}
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONNode::ValueEnumerator, "OVRSimpleJSON", "JSONNode/ValueEnumerator");
#pragma pack(pop)
