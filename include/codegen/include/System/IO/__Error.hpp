// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:44 PM
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
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.__Error
  class __Error : public ::Il2CppObject {
    public:
    // static System.Void EndOfFile()
    // Offset: 0xFFAEB8
    static void EndOfFile();
    // static System.Void FileNotOpen()
    // Offset: 0xFFAF38
    static void FileNotOpen();
    // static System.Void StreamIsClosed()
    // Offset: 0xFFA00C
    static void StreamIsClosed();
    // static System.Void MemoryStreamNotExpandable()
    // Offset: 0xFFAFBC
    static void MemoryStreamNotExpandable();
    // static System.Void ReaderClosed()
    // Offset: 0xFF41AC
    static void ReaderClosed();
    // static System.Void ReadNotSupported()
    // Offset: 0xFF1840
    static void ReadNotSupported();
    // static System.Void WrongAsyncResult()
    // Offset: 0xFF34D8
    static void WrongAsyncResult();
    // static System.Void EndReadCalledTwice()
    // Offset: 0xFF3558
    static void EndReadCalledTwice();
    // static System.Void EndWriteCalledTwice()
    // Offset: 0xFF35D8
    static void EndWriteCalledTwice();
    // static System.String GetDisplayablePath(System.String path, System.Boolean isInvalidPath)
    // Offset: 0xFFB038
    static ::Il2CppString* GetDisplayablePath(::Il2CppString* path, bool isInvalidPath);
    // static System.Void WinIOError(System.Int32 errorCode, System.String maybeFullPath)
    // Offset: 0xFFB154
    static void WinIOError(int errorCode, ::Il2CppString* maybeFullPath);
    // static System.Void WriteNotSupported()
    // Offset: 0xFF22E0
    static void WriteNotSupported();
    // static System.Void WriterClosed()
    // Offset: 0xFF6034
    static void WriterClosed();
  }; // System.IO.__Error
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::__Error*, "System.IO", "__Error");
#pragma pack(pop)
