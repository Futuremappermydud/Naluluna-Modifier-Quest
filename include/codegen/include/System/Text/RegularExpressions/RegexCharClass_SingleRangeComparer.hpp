// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:12 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Text.RegularExpressions.RegexCharClass
#include "System/Text/RegularExpressions/RegexCharClass.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Autogenerated type: System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer
  class RegexCharClass::SingleRangeComparer : public ::Il2CppObject, public System::Collections::Generic::IComparer_1<System::Text::RegularExpressions::RegexCharClass::SingleRange*> {
    public:
    // public System.Int32 Compare(System.Text.RegularExpressions.RegexCharClass/SingleRange x, System.Text.RegularExpressions.RegexCharClass/SingleRange y)
    // Offset: 0x1212144
    // Implemented from: System.Collections.Generic.IComparer`1
    // Base method: System.Int32 IComparer`1::Compare(System.Text.RegularExpressions.RegexCharClass/SingleRange x, System.Text.RegularExpressions.RegexCharClass/SingleRange y)
    int Compare(System::Text::RegularExpressions::RegexCharClass::SingleRange* x, System::Text::RegularExpressions::RegexCharClass::SingleRange* y);
    // public System.Void .ctor()
    // Offset: 0x121213C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RegexCharClass::SingleRangeComparer* New_ctor();
  }; // System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexCharClass::SingleRangeComparer*, "System.Text.RegularExpressions", "RegexCharClass/SingleRangeComparer");
#pragma pack(pop)
