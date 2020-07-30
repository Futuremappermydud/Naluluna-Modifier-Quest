// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:06 PM
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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.KeyValuePairType
  struct KeyValuePairType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Oculus.Platform.KeyValuePairType String
    static constexpr const int String = 0;
    // Get static field: static public Oculus.Platform.KeyValuePairType String
    static Oculus::Platform::KeyValuePairType _get_String();
    // Set static field: static public Oculus.Platform.KeyValuePairType String
    static void _set_String(Oculus::Platform::KeyValuePairType value);
    // static field const value: static public Oculus.Platform.KeyValuePairType Int
    static constexpr const int Int = 1;
    // Get static field: static public Oculus.Platform.KeyValuePairType Int
    static Oculus::Platform::KeyValuePairType _get_Int();
    // Set static field: static public Oculus.Platform.KeyValuePairType Int
    static void _set_Int(Oculus::Platform::KeyValuePairType value);
    // static field const value: static public Oculus.Platform.KeyValuePairType Double
    static constexpr const int Double = 2;
    // Get static field: static public Oculus.Platform.KeyValuePairType Double
    static Oculus::Platform::KeyValuePairType _get_Double();
    // Set static field: static public Oculus.Platform.KeyValuePairType Double
    static void _set_Double(Oculus::Platform::KeyValuePairType value);
    // static field const value: static public Oculus.Platform.KeyValuePairType Unknown
    static constexpr const int Unknown = 3;
    // Get static field: static public Oculus.Platform.KeyValuePairType Unknown
    static Oculus::Platform::KeyValuePairType _get_Unknown();
    // Set static field: static public Oculus.Platform.KeyValuePairType Unknown
    static void _set_Unknown(Oculus::Platform::KeyValuePairType value);
    // Creating value type constructor for type: KeyValuePairType
    KeyValuePairType(int value_ = {}) : value{value_} {}
  }; // Oculus.Platform.KeyValuePairType
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::KeyValuePairType, "Oculus.Platform", "KeyValuePairType");
#pragma pack(pop)
