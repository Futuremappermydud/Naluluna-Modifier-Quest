// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:12 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.UriSyntaxFlags
#include "System/UriSyntaxFlags.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
  // Forward declaring type: UriFormatException
  class UriFormatException;
  // Forward declaring type: UriComponents
  struct UriComponents;
  // Forward declaring type: UriFormat
  struct UriFormat;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.UriParser
  class UriParser : public ::Il2CppObject {
    public:
    // Nested type: System::UriParser::UriQuirksVersion
    struct UriQuirksVersion;
    // Nested type: System::UriParser::BuiltInUriParser
    class BuiltInUriParser;
    // Autogenerated type: System.UriParser/UriQuirksVersion
    struct UriQuirksVersion : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public System.UriParser/UriQuirksVersion V2
      static constexpr const int V2 = 2;
      // Get static field: static public System.UriParser/UriQuirksVersion V2
      static System::UriParser::UriQuirksVersion _get_V2();
      // Set static field: static public System.UriParser/UriQuirksVersion V2
      static void _set_V2(System::UriParser::UriQuirksVersion value);
      // static field const value: static public System.UriParser/UriQuirksVersion V3
      static constexpr const int V3 = 3;
      // Get static field: static public System.UriParser/UriQuirksVersion V3
      static System::UriParser::UriQuirksVersion _get_V3();
      // Set static field: static public System.UriParser/UriQuirksVersion V3
      static void _set_V3(System::UriParser::UriQuirksVersion value);
      // Creating value type constructor for type: UriQuirksVersion
      UriQuirksVersion(int value_ = {}) : value{value_} {}
    }; // System.UriParser/UriQuirksVersion
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.String,System.UriParser> m_Table
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, System::UriParser*>* _get_m_Table();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.String,System.UriParser> m_Table
    static void _set_m_Table(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::UriParser*>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.UriParser> m_TempTable
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, System::UriParser*>* _get_m_TempTable();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.UriParser> m_TempTable
    static void _set_m_TempTable(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::UriParser*>* value);
    // private System.UriSyntaxFlags m_Flags
    // Offset: 0x10
    System::UriSyntaxFlags m_Flags;
    // private System.UriSyntaxFlags m_UpdatableFlags
    // Offset: 0x14
    System::UriSyntaxFlags m_UpdatableFlags;
    // private System.Boolean m_UpdatableFlagsUsed
    // Offset: 0x18
    bool m_UpdatableFlagsUsed;
    // private System.Int32 m_Port
    // Offset: 0x1C
    int m_Port;
    // private System.String m_Scheme
    // Offset: 0x20
    ::Il2CppString* m_Scheme;
    // Get static field: static System.UriParser HttpUri
    static System::UriParser* _get_HttpUri();
    // Set static field: static System.UriParser HttpUri
    static void _set_HttpUri(System::UriParser* value);
    // Get static field: static System.UriParser HttpsUri
    static System::UriParser* _get_HttpsUri();
    // Set static field: static System.UriParser HttpsUri
    static void _set_HttpsUri(System::UriParser* value);
    // Get static field: static System.UriParser WsUri
    static System::UriParser* _get_WsUri();
    // Set static field: static System.UriParser WsUri
    static void _set_WsUri(System::UriParser* value);
    // Get static field: static System.UriParser WssUri
    static System::UriParser* _get_WssUri();
    // Set static field: static System.UriParser WssUri
    static void _set_WssUri(System::UriParser* value);
    // Get static field: static System.UriParser FtpUri
    static System::UriParser* _get_FtpUri();
    // Set static field: static System.UriParser FtpUri
    static void _set_FtpUri(System::UriParser* value);
    // Get static field: static System.UriParser FileUri
    static System::UriParser* _get_FileUri();
    // Set static field: static System.UriParser FileUri
    static void _set_FileUri(System::UriParser* value);
    // Get static field: static System.UriParser GopherUri
    static System::UriParser* _get_GopherUri();
    // Set static field: static System.UriParser GopherUri
    static void _set_GopherUri(System::UriParser* value);
    // Get static field: static System.UriParser NntpUri
    static System::UriParser* _get_NntpUri();
    // Set static field: static System.UriParser NntpUri
    static void _set_NntpUri(System::UriParser* value);
    // Get static field: static System.UriParser NewsUri
    static System::UriParser* _get_NewsUri();
    // Set static field: static System.UriParser NewsUri
    static void _set_NewsUri(System::UriParser* value);
    // Get static field: static System.UriParser MailToUri
    static System::UriParser* _get_MailToUri();
    // Set static field: static System.UriParser MailToUri
    static void _set_MailToUri(System::UriParser* value);
    // Get static field: static System.UriParser UuidUri
    static System::UriParser* _get_UuidUri();
    // Set static field: static System.UriParser UuidUri
    static void _set_UuidUri(System::UriParser* value);
    // Get static field: static System.UriParser TelnetUri
    static System::UriParser* _get_TelnetUri();
    // Set static field: static System.UriParser TelnetUri
    static void _set_TelnetUri(System::UriParser* value);
    // Get static field: static System.UriParser LdapUri
    static System::UriParser* _get_LdapUri();
    // Set static field: static System.UriParser LdapUri
    static void _set_LdapUri(System::UriParser* value);
    // Get static field: static System.UriParser NetTcpUri
    static System::UriParser* _get_NetTcpUri();
    // Set static field: static System.UriParser NetTcpUri
    static void _set_NetTcpUri(System::UriParser* value);
    // Get static field: static System.UriParser NetPipeUri
    static System::UriParser* _get_NetPipeUri();
    // Set static field: static System.UriParser NetPipeUri
    static void _set_NetPipeUri(System::UriParser* value);
    // Get static field: static System.UriParser VsMacrosUri
    static System::UriParser* _get_VsMacrosUri();
    // Set static field: static System.UriParser VsMacrosUri
    static void _set_VsMacrosUri(System::UriParser* value);
    // Get static field: static private readonly System.UriParser/UriQuirksVersion s_QuirksVersion
    static System::UriParser::UriQuirksVersion _get_s_QuirksVersion();
    // Set static field: static private readonly System.UriParser/UriQuirksVersion s_QuirksVersion
    static void _set_s_QuirksVersion(System::UriParser::UriQuirksVersion value);
    // Get static field: static private readonly System.UriSyntaxFlags HttpSyntaxFlags
    static System::UriSyntaxFlags _get_HttpSyntaxFlags();
    // Set static field: static private readonly System.UriSyntaxFlags HttpSyntaxFlags
    static void _set_HttpSyntaxFlags(System::UriSyntaxFlags value);
    // Get static field: static private readonly System.UriSyntaxFlags FileSyntaxFlags
    static System::UriSyntaxFlags _get_FileSyntaxFlags();
    // Set static field: static private readonly System.UriSyntaxFlags FileSyntaxFlags
    static void _set_FileSyntaxFlags(System::UriSyntaxFlags value);
    // System.String get_SchemeName()
    // Offset: 0x193C2A0
    ::Il2CppString* get_SchemeName();
    // System.Int32 get_DefaultPort()
    // Offset: 0x193C2A8
    int get_DefaultPort();
    // protected System.UriParser OnNewUri()
    // Offset: 0x193C2B0
    System::UriParser* OnNewUri();
    // protected System.Void InitializeAndValidate(System.Uri uri, System.UriFormatException parsingError)
    // Offset: 0x193C2B4
    void InitializeAndValidate(System::Uri* uri, System::UriFormatException*& parsingError);
    // protected System.String Resolve(System.Uri baseUri, System.Uri relativeUri, System.UriFormatException parsingError)
    // Offset: 0x193C2F0
    ::Il2CppString* Resolve(System::Uri* baseUri, System::Uri* relativeUri, System::UriFormatException*& parsingError);
    // protected System.String GetComponents(System.Uri uri, System.UriComponents components, System.UriFormat format)
    // Offset: 0x193C4F0
    ::Il2CppString* GetComponents(System::Uri* uri, System::UriComponents components, System::UriFormat format);
    // static System.Boolean get_ShouldUseLegacyV2Quirks()
    // Offset: 0x193C110
    static bool get_ShouldUseLegacyV2Quirks();
    // static private System.Void .cctor()
    // Offset: 0x193C72C
    static void _cctor();
    // System.UriSyntaxFlags get_Flags()
    // Offset: 0x193CF74
    System::UriSyntaxFlags get_Flags();
    // System.Boolean NotAny(System.UriSyntaxFlags flags)
    // Offset: 0x193CF7C
    bool NotAny(System::UriSyntaxFlags flags);
    // System.Boolean InFact(System.UriSyntaxFlags flags)
    // Offset: 0x193CFE4
    bool InFact(System::UriSyntaxFlags flags);
    // System.Boolean IsAllSet(System.UriSyntaxFlags flags)
    // Offset: 0x193D004
    bool IsAllSet(System::UriSyntaxFlags flags);
    // private System.Boolean IsFullMatch(System.UriSyntaxFlags flags, System.UriSyntaxFlags expected)
    // Offset: 0x193CF84
    bool IsFullMatch(System::UriSyntaxFlags flags, System::UriSyntaxFlags expected);
    // System.Void .ctor(System.UriSyntaxFlags flags)
    // Offset: 0x193D00C
    static UriParser* New_ctor(System::UriSyntaxFlags flags);
    // static System.UriParser FindOrFetchAsUnknownV1Syntax(System.String lwrCaseScheme)
    // Offset: 0x193D084
    static System::UriParser* FindOrFetchAsUnknownV1Syntax(::Il2CppString* lwrCaseScheme);
    // static System.UriParser GetSyntax(System.String lwrCaseScheme)
    // Offset: 0x193D324
    static System::UriParser* GetSyntax(::Il2CppString* lwrCaseScheme);
    // System.Boolean get_IsSimple()
    // Offset: 0x193D400
    bool get_IsSimple();
    // System.UriParser InternalOnNewUri()
    // Offset: 0x193D40C
    System::UriParser* InternalOnNewUri();
    // System.Void InternalValidate(System.Uri thisUri, System.UriFormatException parsingError)
    // Offset: 0x193D478
    void InternalValidate(System::Uri* thisUri, System::UriFormatException*& parsingError);
    // System.String InternalResolve(System.Uri thisBaseUri, System.Uri uriLink, System.UriFormatException parsingError)
    // Offset: 0x193D484
    ::Il2CppString* InternalResolve(System::Uri* thisBaseUri, System::Uri* uriLink, System::UriFormatException*& parsingError);
    // System.String InternalGetComponents(System.Uri thisUri, System.UriComponents uriComponents, System.UriFormat uriFormat)
    // Offset: 0x193D490
    ::Il2CppString* InternalGetComponents(System::Uri* thisUri, System::UriComponents uriComponents, System::UriFormat uriFormat);
  }; // System.UriParser
}
DEFINE_IL2CPP_ARG_TYPE(System::UriParser*, "System", "UriParser");
DEFINE_IL2CPP_ARG_TYPE(System::UriParser::UriQuirksVersion, "System", "UriParser/UriQuirksVersion");
#pragma pack(pop)
