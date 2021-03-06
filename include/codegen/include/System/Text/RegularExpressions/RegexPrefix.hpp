// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:17 PM
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
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Autogenerated type: System.Text.RegularExpressions.RegexPrefix
  class RegexPrefix : public ::Il2CppObject {
    public:
    // System.String _prefix
    // Offset: 0x10
    ::Il2CppString* prefix;
    // System.Boolean _caseInsensitive
    // Offset: 0x18
    bool caseInsensitive;
    // Get static field: static System.Text.RegularExpressions.RegexPrefix _empty
    static System::Text::RegularExpressions::RegexPrefix* _get__empty();
    // Set static field: static System.Text.RegularExpressions.RegexPrefix _empty
    static void _set__empty(System::Text::RegularExpressions::RegexPrefix* value);
    // System.Void .ctor(System.String prefix, System.Boolean ci)
    // Offset: 0x14E5F20
    static RegexPrefix* New_ctor(::Il2CppString* prefix, bool ci);
    // System.String get_Prefix()
    // Offset: 0x14E5F6C
    ::Il2CppString* get_Prefix();
    // System.Boolean get_CaseInsensitive()
    // Offset: 0x14E5F74
    bool get_CaseInsensitive();
    // static System.Text.RegularExpressions.RegexPrefix get_Empty()
    // Offset: 0x14E5F7C
    static System::Text::RegularExpressions::RegexPrefix* get_Empty();
    // static private System.Void .cctor()
    // Offset: 0x14E5FE4
    static void _cctor();
  }; // System.Text.RegularExpressions.RegexPrefix
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexPrefix*, "System.Text.RegularExpressions", "RegexPrefix");
#pragma pack(pop)
