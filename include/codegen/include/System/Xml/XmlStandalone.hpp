// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:20 PM
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
  // Autogenerated type: System.Xml.XmlStandalone
  struct XmlStandalone : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Xml.XmlStandalone Omit
    static constexpr const int Omit = 0;
    // Get static field: static public System.Xml.XmlStandalone Omit
    static System::Xml::XmlStandalone _get_Omit();
    // Set static field: static public System.Xml.XmlStandalone Omit
    static void _set_Omit(System::Xml::XmlStandalone value);
    // static field const value: static public System.Xml.XmlStandalone Yes
    static constexpr const int Yes = 1;
    // Get static field: static public System.Xml.XmlStandalone Yes
    static System::Xml::XmlStandalone _get_Yes();
    // Set static field: static public System.Xml.XmlStandalone Yes
    static void _set_Yes(System::Xml::XmlStandalone value);
    // static field const value: static public System.Xml.XmlStandalone No
    static constexpr const int No = 2;
    // Get static field: static public System.Xml.XmlStandalone No
    static System::Xml::XmlStandalone _get_No();
    // Set static field: static public System.Xml.XmlStandalone No
    static void _set_No(System::Xml::XmlStandalone value);
    // Creating value type constructor for type: XmlStandalone
    XmlStandalone(int value_ = {}) : value{value_} {}
  }; // System.Xml.XmlStandalone
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlStandalone, "System.Xml", "XmlStandalone");
#pragma pack(pop)
