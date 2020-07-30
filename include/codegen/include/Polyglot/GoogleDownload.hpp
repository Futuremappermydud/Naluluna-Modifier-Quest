// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:10 PM
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
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: GoogleDriveDownloadFormat
  struct GoogleDriveDownloadFormat;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Autogenerated type: Polyglot.GoogleDownload
  class GoogleDownload : public ::Il2CppObject {
    public:
    // Nested type: Polyglot::GoogleDownload::$DownloadSheet$d__0
    class $DownloadSheet$d__0;
    // static public System.Collections.IEnumerator DownloadSheet(System.String docsId, System.String sheetId, System.Action`1<System.String> done, Polyglot.GoogleDriveDownloadFormat format, System.Func`2<System.Single,System.Boolean> progressbar)
    // Offset: 0x18FD790
    static System::Collections::IEnumerator* DownloadSheet(::Il2CppString* docsId, ::Il2CppString* sheetId, System::Action_1<::Il2CppString*>* done, Polyglot::GoogleDriveDownloadFormat format, System::Func_2<float, bool>* progressbar);
  }; // Polyglot.GoogleDownload
}
DEFINE_IL2CPP_ARG_TYPE(Polyglot::GoogleDownload*, "Polyglot", "GoogleDownload");
#pragma pack(pop)
