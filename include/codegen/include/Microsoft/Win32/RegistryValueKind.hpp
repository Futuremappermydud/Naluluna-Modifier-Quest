// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:24 PM
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
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Autogenerated type: Microsoft.Win32.RegistryValueKind
  struct RegistryValueKind : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Microsoft.Win32.RegistryValueKind Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Microsoft.Win32.RegistryValueKind Unknown
    static Microsoft::Win32::RegistryValueKind _get_Unknown();
    // Set static field: static public Microsoft.Win32.RegistryValueKind Unknown
    static void _set_Unknown(Microsoft::Win32::RegistryValueKind value);
    // static field const value: static public Microsoft.Win32.RegistryValueKind String
    static constexpr const int String = 1;
    // Get static field: static public Microsoft.Win32.RegistryValueKind String
    static Microsoft::Win32::RegistryValueKind _get_String();
    // Set static field: static public Microsoft.Win32.RegistryValueKind String
    static void _set_String(Microsoft::Win32::RegistryValueKind value);
    // static field const value: static public Microsoft.Win32.RegistryValueKind ExpandString
    static constexpr const int ExpandString = 2;
    // Get static field: static public Microsoft.Win32.RegistryValueKind ExpandString
    static Microsoft::Win32::RegistryValueKind _get_ExpandString();
    // Set static field: static public Microsoft.Win32.RegistryValueKind ExpandString
    static void _set_ExpandString(Microsoft::Win32::RegistryValueKind value);
    // static field const value: static public Microsoft.Win32.RegistryValueKind Binary
    static constexpr const int Binary = 3;
    // Get static field: static public Microsoft.Win32.RegistryValueKind Binary
    static Microsoft::Win32::RegistryValueKind _get_Binary();
    // Set static field: static public Microsoft.Win32.RegistryValueKind Binary
    static void _set_Binary(Microsoft::Win32::RegistryValueKind value);
    // static field const value: static public Microsoft.Win32.RegistryValueKind DWord
    static constexpr const int DWord = 4;
    // Get static field: static public Microsoft.Win32.RegistryValueKind DWord
    static Microsoft::Win32::RegistryValueKind _get_DWord();
    // Set static field: static public Microsoft.Win32.RegistryValueKind DWord
    static void _set_DWord(Microsoft::Win32::RegistryValueKind value);
    // static field const value: static public Microsoft.Win32.RegistryValueKind MultiString
    static constexpr const int MultiString = 7;
    // Get static field: static public Microsoft.Win32.RegistryValueKind MultiString
    static Microsoft::Win32::RegistryValueKind _get_MultiString();
    // Set static field: static public Microsoft.Win32.RegistryValueKind MultiString
    static void _set_MultiString(Microsoft::Win32::RegistryValueKind value);
    // static field const value: static public Microsoft.Win32.RegistryValueKind QWord
    static constexpr const int QWord = 11;
    // Get static field: static public Microsoft.Win32.RegistryValueKind QWord
    static Microsoft::Win32::RegistryValueKind _get_QWord();
    // Set static field: static public Microsoft.Win32.RegistryValueKind QWord
    static void _set_QWord(Microsoft::Win32::RegistryValueKind value);
    // static field const value: static public Microsoft.Win32.RegistryValueKind None
    static constexpr const int None = -1;
    // Get static field: static public Microsoft.Win32.RegistryValueKind None
    static Microsoft::Win32::RegistryValueKind _get_None();
    // Set static field: static public Microsoft.Win32.RegistryValueKind None
    static void _set_None(Microsoft::Win32::RegistryValueKind value);
    // Creating value type constructor for type: RegistryValueKind
    RegistryValueKind(int value_ = {}) : value{value_} {}
  }; // Microsoft.Win32.RegistryValueKind
}
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::RegistryValueKind, "Microsoft.Win32", "RegistryValueKind");
#pragma pack(pop)
