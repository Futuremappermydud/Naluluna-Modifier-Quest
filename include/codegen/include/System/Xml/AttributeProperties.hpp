// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:15 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.AttributeProperties
  struct AttributeProperties : public System::Enum {
    public:
    // public System.UInt32 value__
    // Offset: 0x0
    uint value;
    // static field const value: static public System.Xml.AttributeProperties DEFAULT
    static constexpr const uint DEFAULT = 0u;
    // Get static field: static public System.Xml.AttributeProperties DEFAULT
    static System::Xml::AttributeProperties _get_DEFAULT();
    // Set static field: static public System.Xml.AttributeProperties DEFAULT
    static void _set_DEFAULT(System::Xml::AttributeProperties value);
    // static field const value: static public System.Xml.AttributeProperties URI
    static constexpr const uint URI = 1u;
    // Get static field: static public System.Xml.AttributeProperties URI
    static System::Xml::AttributeProperties _get_URI();
    // Set static field: static public System.Xml.AttributeProperties URI
    static void _set_URI(System::Xml::AttributeProperties value);
    // static field const value: static public System.Xml.AttributeProperties BOOLEAN
    static constexpr const uint BOOLEAN = 2u;
    // Get static field: static public System.Xml.AttributeProperties BOOLEAN
    static System::Xml::AttributeProperties _get_BOOLEAN();
    // Set static field: static public System.Xml.AttributeProperties BOOLEAN
    static void _set_BOOLEAN(System::Xml::AttributeProperties value);
    // static field const value: static public System.Xml.AttributeProperties NAME
    static constexpr const uint NAME = 4u;
    // Get static field: static public System.Xml.AttributeProperties NAME
    static System::Xml::AttributeProperties _get_NAME();
    // Set static field: static public System.Xml.AttributeProperties NAME
    static void _set_NAME(System::Xml::AttributeProperties value);
    // Creating value type constructor for type: AttributeProperties
    AttributeProperties(uint value_ = {}) : value{value_} {}
  }; // System.Xml.AttributeProperties
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::AttributeProperties, "System.Xml", "AttributeProperties");
#pragma pack(pop)
