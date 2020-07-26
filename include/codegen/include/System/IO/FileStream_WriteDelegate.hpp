// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:32 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: System.IO.FileStream
#include "System/IO/FileStream.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.FileStream/WriteDelegate
  class FileStream::WriteDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1122BE4
    static FileStream::WriteDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x1123B30
    void Invoke(::Array<uint8_t>* buffer, int offset, int count);
    // public System.IAsyncResult BeginInvoke(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1122BF8
    System::IAsyncResult* BeginInvoke(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1122DFC
    void EndInvoke(System::IAsyncResult* result);
  }; // System.IO.FileStream/WriteDelegate
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileStream::WriteDelegate*, "System.IO", "FileStream/WriteDelegate");
#pragma pack(pop)
