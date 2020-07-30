// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:17 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Text.RegularExpressions.Match
#include "System/Text/RegularExpressions/Match.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
  // Forward declaring type: GroupCollection
  class GroupCollection;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Autogenerated type: System.Text.RegularExpressions.MatchSparse
  class MatchSparse : public System::Text::RegularExpressions::Match {
    public:
    // System.Collections.Hashtable _caps
    // Offset: 0x70
    System::Collections::Hashtable* caps;
    // System.Void .ctor(System.Text.RegularExpressions.Regex regex, System.Collections.Hashtable caps, System.Int32 capcount, System.String text, System.Int32 begpos, System.Int32 len, System.Int32 startpos)
    // Offset: 0x1208A44
    static MatchSparse* New_ctor(System::Text::RegularExpressions::Regex* regex, System::Collections::Hashtable* caps, int capcount, ::Il2CppString* text, int begpos, int len, int startpos);
    // public override System.Text.RegularExpressions.GroupCollection get_Groups()
    // Offset: 0x1208B0C
    // Implemented from: System.Text.RegularExpressions.Match
    // Base method: System.Text.RegularExpressions.GroupCollection Match::get_Groups()
    System::Text::RegularExpressions::GroupCollection* get_Groups();
  }; // System.Text.RegularExpressions.MatchSparse
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::MatchSparse*, "System.Text.RegularExpressions", "MatchSparse");
#pragma pack(pop)
