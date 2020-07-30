// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:57 PM
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
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.InternalTraceLevel
  struct InternalTraceLevel : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public NUnit.Framework.Internal.InternalTraceLevel Default
    static constexpr const int Default = 0;
    // Get static field: static public NUnit.Framework.Internal.InternalTraceLevel Default
    static NUnit::Framework::Internal::InternalTraceLevel _get_Default();
    // Set static field: static public NUnit.Framework.Internal.InternalTraceLevel Default
    static void _set_Default(NUnit::Framework::Internal::InternalTraceLevel value);
    // static field const value: static public NUnit.Framework.Internal.InternalTraceLevel Off
    static constexpr const int Off = 1;
    // Get static field: static public NUnit.Framework.Internal.InternalTraceLevel Off
    static NUnit::Framework::Internal::InternalTraceLevel _get_Off();
    // Set static field: static public NUnit.Framework.Internal.InternalTraceLevel Off
    static void _set_Off(NUnit::Framework::Internal::InternalTraceLevel value);
    // static field const value: static public NUnit.Framework.Internal.InternalTraceLevel Error
    static constexpr const int Error = 2;
    // Get static field: static public NUnit.Framework.Internal.InternalTraceLevel Error
    static NUnit::Framework::Internal::InternalTraceLevel _get_Error();
    // Set static field: static public NUnit.Framework.Internal.InternalTraceLevel Error
    static void _set_Error(NUnit::Framework::Internal::InternalTraceLevel value);
    // static field const value: static public NUnit.Framework.Internal.InternalTraceLevel Warning
    static constexpr const int Warning = 3;
    // Get static field: static public NUnit.Framework.Internal.InternalTraceLevel Warning
    static NUnit::Framework::Internal::InternalTraceLevel _get_Warning();
    // Set static field: static public NUnit.Framework.Internal.InternalTraceLevel Warning
    static void _set_Warning(NUnit::Framework::Internal::InternalTraceLevel value);
    // static field const value: static public NUnit.Framework.Internal.InternalTraceLevel Info
    static constexpr const int Info = 4;
    // Get static field: static public NUnit.Framework.Internal.InternalTraceLevel Info
    static NUnit::Framework::Internal::InternalTraceLevel _get_Info();
    // Set static field: static public NUnit.Framework.Internal.InternalTraceLevel Info
    static void _set_Info(NUnit::Framework::Internal::InternalTraceLevel value);
    // static field const value: static public NUnit.Framework.Internal.InternalTraceLevel Debug
    static constexpr const int Debug = 5;
    // Get static field: static public NUnit.Framework.Internal.InternalTraceLevel Debug
    static NUnit::Framework::Internal::InternalTraceLevel _get_Debug();
    // Set static field: static public NUnit.Framework.Internal.InternalTraceLevel Debug
    static void _set_Debug(NUnit::Framework::Internal::InternalTraceLevel value);
    // static field const value: static public NUnit.Framework.Internal.InternalTraceLevel Verbose
    static constexpr const int Verbose = 5;
    // Get static field: static public NUnit.Framework.Internal.InternalTraceLevel Verbose
    static NUnit::Framework::Internal::InternalTraceLevel _get_Verbose();
    // Set static field: static public NUnit.Framework.Internal.InternalTraceLevel Verbose
    static void _set_Verbose(NUnit::Framework::Internal::InternalTraceLevel value);
    // Creating value type constructor for type: InternalTraceLevel
    InternalTraceLevel(int value_ = {}) : value{value_} {}
  }; // NUnit.Framework.Internal.InternalTraceLevel
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::InternalTraceLevel, "NUnit.Framework.Internal", "InternalTraceLevel");
#pragma pack(pop)
