// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IConsoleDriver
#include "System/IConsoleDriver.hpp"
// Including type: System.ConsoleColor
#include "System/ConsoleColor.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TermInfoReader
  class TermInfoReader;
  // Forward declaring type: ByteMatcher
  class ByteMatcher;
  // Forward declaring type: ConsoleKeyInfo
  struct ConsoleKeyInfo;
  // Forward declaring type: TermInfoStrings
  struct TermInfoStrings;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: StreamReader
  class StreamReader;
  // Forward declaring type: CStreamWriter
  class CStreamWriter;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.TermInfoDriver
  class TermInfoDriver : public ::Il2CppObject, public System::IConsoleDriver {
    public:
    // private System.TermInfoReader reader
    // Offset: 0x10
    System::TermInfoReader* reader;
    // private System.Int32 cursorLeft
    // Offset: 0x18
    int cursorLeft;
    // private System.Int32 cursorTop
    // Offset: 0x1C
    int cursorTop;
    // private System.String title
    // Offset: 0x20
    ::Il2CppString* title;
    // private System.String titleFormat
    // Offset: 0x28
    ::Il2CppString* titleFormat;
    // private System.Boolean cursorVisible
    // Offset: 0x30
    bool cursorVisible;
    // private System.String csrVisible
    // Offset: 0x38
    ::Il2CppString* csrVisible;
    // private System.String csrInvisible
    // Offset: 0x40
    ::Il2CppString* csrInvisible;
    // private System.String clear
    // Offset: 0x48
    ::Il2CppString* clear;
    // private System.String bell
    // Offset: 0x50
    ::Il2CppString* bell;
    // private System.String term
    // Offset: 0x58
    ::Il2CppString* term;
    // private System.IO.StreamReader stdin
    // Offset: 0x60
    System::IO::StreamReader* stdin;
    // private System.IO.CStreamWriter stdout
    // Offset: 0x68
    System::IO::CStreamWriter* stdout;
    // private System.Int32 windowWidth
    // Offset: 0x70
    int windowWidth;
    // private System.Int32 windowHeight
    // Offset: 0x74
    int windowHeight;
    // private System.Int32 bufferHeight
    // Offset: 0x78
    int bufferHeight;
    // private System.Int32 bufferWidth
    // Offset: 0x7C
    int bufferWidth;
    // private System.Char[] buffer
    // Offset: 0x80
    ::Array<::Il2CppChar>* buffer;
    // private System.Int32 readpos
    // Offset: 0x88
    int readpos;
    // private System.Int32 writepos
    // Offset: 0x8C
    int writepos;
    // private System.String keypadXmit
    // Offset: 0x90
    ::Il2CppString* keypadXmit;
    // private System.String keypadLocal
    // Offset: 0x98
    ::Il2CppString* keypadLocal;
    // private System.Boolean inited
    // Offset: 0xA0
    bool inited;
    // private System.Object initLock
    // Offset: 0xA8
    ::Il2CppObject* initLock;
    // private System.Boolean initKeys
    // Offset: 0xB0
    bool initKeys;
    // private System.String origPair
    // Offset: 0xB8
    ::Il2CppString* origPair;
    // private System.String origColors
    // Offset: 0xC0
    ::Il2CppString* origColors;
    // private System.String cursorAddress
    // Offset: 0xC8
    ::Il2CppString* cursorAddress;
    // private System.ConsoleColor fgcolor
    // Offset: 0xD0
    System::ConsoleColor fgcolor;
    // private System.String setfgcolor
    // Offset: 0xD8
    ::Il2CppString* setfgcolor;
    // private System.String setbgcolor
    // Offset: 0xE0
    ::Il2CppString* setbgcolor;
    // private System.Int32 maxColors
    // Offset: 0xE8
    int maxColors;
    // private System.Boolean noGetPosition
    // Offset: 0xEC
    bool noGetPosition;
    // private System.Collections.Hashtable keymap
    // Offset: 0xF0
    System::Collections::Hashtable* keymap;
    // private System.ByteMatcher rootmap
    // Offset: 0xF8
    System::ByteMatcher* rootmap;
    // private System.Int32 rl_startx
    // Offset: 0x100
    int rl_startx;
    // private System.Int32 rl_starty
    // Offset: 0x104
    int rl_starty;
    // private System.Byte[] control_characters
    // Offset: 0x108
    ::Array<uint8_t>* control_characters;
    // private System.Char[] echobuf
    // Offset: 0x110
    ::Array<::Il2CppChar>* echobuf;
    // private System.Int32 echon
    // Offset: 0x118
    int echon;
    // Get static field: static private System.Int32* native_terminal_size
    static int* _get_native_terminal_size();
    // Set static field: static private System.Int32* native_terminal_size
    static void _set_native_terminal_size(int* value);
    // Get static field: static private System.Int32 terminal_size
    static int _get_terminal_size();
    // Set static field: static private System.Int32 terminal_size
    static void _set_terminal_size(int value);
    // Get static field: static private readonly System.String[] locations
    static ::Array<::Il2CppString*>* _get_locations();
    // Set static field: static private readonly System.String[] locations
    static void _set_locations(::Array<::Il2CppString*>* value);
    // Get static field: static private readonly System.Int32[] _consoleColorToAnsiCode
    static ::Array<int>* _get__consoleColorToAnsiCode();
    // Set static field: static private readonly System.Int32[] _consoleColorToAnsiCode
    static void _set__consoleColorToAnsiCode(::Array<int>* value);
    // static private System.String TryTermInfoDir(System.String dir, System.String term)
    // Offset: 0x12E86F4
    static ::Il2CppString* TryTermInfoDir(::Il2CppString* dir, ::Il2CppString* term);
    // static private System.String SearchTerminfo(System.String term)
    // Offset: 0x12E8818
    static ::Il2CppString* SearchTerminfo(::Il2CppString* term);
    // private System.Void WriteConsole(System.String str)
    // Offset: 0x12E89A0
    void WriteConsole(::Il2CppString* str);
    // public System.Void .ctor(System.String term)
    // Offset: 0x12E89C4
    static TermInfoDriver* New_ctor(::Il2CppString* term);
    // public System.Boolean get_Initialized()
    // Offset: 0x12E9098
    bool get_Initialized();
    // public System.Void Init()
    // Offset: 0x12E90A0
    void Init();
    // private System.Void IncrementX()
    // Offset: 0x12E9C24
    void IncrementX();
    // public System.Void WriteSpecialKey(System.ConsoleKeyInfo key)
    // Offset: 0x12E9D04
    void WriteSpecialKey(System::ConsoleKeyInfo key);
    // public System.Void WriteSpecialKey(System.Char c)
    // Offset: 0x12EA000
    void WriteSpecialKey(::Il2CppChar c);
    // public System.Boolean IsSpecialKey(System.ConsoleKeyInfo key)
    // Offset: 0x12EA1B8
    bool IsSpecialKey(System::ConsoleKeyInfo key);
    // public System.Boolean IsSpecialKey(System.Char c)
    // Offset: 0x12EA240
    bool IsSpecialKey(::Il2CppChar c);
    // private System.Void GetCursorPosition()
    // Offset: 0x12E9974
    void GetCursorPosition();
    // private System.Void CheckWindowDimensions()
    // Offset: 0x12EA38C
    void CheckWindowDimensions();
    // public System.Int32 get_WindowHeight()
    // Offset: 0x12E9CCC
    int get_WindowHeight();
    // public System.Int32 get_WindowWidth()
    // Offset: 0x12E9C94
    int get_WindowWidth();
    // private System.Void AddToBuffer(System.Int32 b)
    // Offset: 0x12EA274
    void AddToBuffer(int b);
    // private System.Void AdjustBuffer()
    // Offset: 0x12EA4EC
    void AdjustBuffer();
    // private System.ConsoleKeyInfo CreateKeyInfoFromInt(System.Int32 n, System.Boolean alt)
    // Offset: 0x12EA034
    System::ConsoleKeyInfo CreateKeyInfoFromInt(int n, bool alt);
    // private System.Object GetKeyFromBuffer(System.Boolean cooked)
    // Offset: 0x12EA500
    ::Il2CppObject* GetKeyFromBuffer(bool cooked);
    // private System.ConsoleKeyInfo ReadKeyInternal(System.Boolean fresh)
    // Offset: 0x12EA7EC
    System::ConsoleKeyInfo ReadKeyInternal(bool& fresh);
    // private System.Boolean InputPending()
    // Offset: 0x12EAB3C
    bool InputPending();
    // private System.Void QueueEcho(System.Char c)
    // Offset: 0x12EAB6C
    void QueueEcho(::Il2CppChar c);
    // private System.Void Echo(System.ConsoleKeyInfo key)
    // Offset: 0x12EAC78
    void Echo(System::ConsoleKeyInfo key);
    // private System.Void EchoFlush()
    // Offset: 0x12EACDC
    void EchoFlush();
    // public System.Int32 Read(System.Char[] dest, System.Int32 index, System.Int32 count)
    // Offset: 0x12EAD1C
    int Read(::Array<::Il2CppChar>*& dest, int index, int count);
    // public System.String ReadLine()
    // Offset: 0x12EB3A0
    ::Il2CppString* ReadLine();
    // public System.String ReadToEnd()
    // Offset: 0x12EB574
    ::Il2CppString* ReadToEnd();
    // private System.String ReadUntilConditionInternal(System.Boolean haltOnNewLine)
    // Offset: 0x12EB3A8
    ::Il2CppString* ReadUntilConditionInternal(bool haltOnNewLine);
    // public System.Void SetCursorPosition(System.Int32 left, System.Int32 top)
    // Offset: 0x12E9E2C
    void SetCursorPosition(int left, int top);
    // private System.Void CreateKeyMap()
    // Offset: 0x12EB57C
    void CreateKeyMap();
    // private System.Void InitKeys()
    // Offset: 0x12EA9C0
    void InitKeys();
    // private System.Void AddStringMapping(System.TermInfoStrings s)
    // Offset: 0x12ED414
    void AddStringMapping(System::TermInfoStrings s);
    // static private System.Void .cctor()
    // Offset: 0x12ED500
    static void _cctor();
    // public System.ConsoleKeyInfo ReadKey(System.Boolean intercept)
    // Offset: 0x12EB338
    // Implemented from: System.IConsoleDriver
    // Base method: System.ConsoleKeyInfo IConsoleDriver::ReadKey(System.Boolean intercept)
    System::ConsoleKeyInfo ReadKey(bool intercept);
  }; // System.TermInfoDriver
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::TermInfoDriver*, "System", "TermInfoDriver");
#pragma pack(pop)
