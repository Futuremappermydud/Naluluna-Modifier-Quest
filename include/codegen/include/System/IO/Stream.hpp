// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SemaphoreSlim
  class SemaphoreSlim;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.Stream
  class Stream : public System::MarshalByRefObject, public System::IDisposable {
    public:
    // Nested type: System::IO::Stream::ReadWriteTask
    class ReadWriteTask;
    // Nested type: System::IO::Stream::NullStream
    class NullStream;
    // Nested type: System::IO::Stream::SynchronousAsyncResult
    class SynchronousAsyncResult;
    // Nested type: System::IO::Stream::$$c
    class $$c;
    // Get static field: static public readonly System.IO.Stream Null
    static System::IO::Stream* _get_Null();
    // Set static field: static public readonly System.IO.Stream Null
    static void _set_Null(System::IO::Stream* value);
    // static field const value: static private System.Int32 _DefaultCopyBufferSize
    static constexpr const int _DefaultCopyBufferSize = 81920;
    // Get static field: static private System.Int32 _DefaultCopyBufferSize
    static int _get__DefaultCopyBufferSize();
    // Set static field: static private System.Int32 _DefaultCopyBufferSize
    static void _set__DefaultCopyBufferSize(int value);
    // private System.IO.Stream/ReadWriteTask _activeReadWriteTask
    // Offset: 0x18
    System::IO::Stream::ReadWriteTask* activeReadWriteTask;
    // private System.Threading.SemaphoreSlim _asyncActiveSemaphore
    // Offset: 0x20
    System::Threading::SemaphoreSlim* asyncActiveSemaphore;
    // System.Threading.SemaphoreSlim EnsureAsyncActiveSemaphoreInitialized()
    // Offset: 0xFF14A4
    System::Threading::SemaphoreSlim* EnsureAsyncActiveSemaphoreInitialized();
    // public System.Boolean get_CanRead()
    // Offset: 0xFFFFFFFF
    bool get_CanRead();
    // public System.Boolean get_CanSeek()
    // Offset: 0xFFFFFFFF
    bool get_CanSeek();
    // public System.Boolean get_CanWrite()
    // Offset: 0xFFFFFFFF
    bool get_CanWrite();
    // public System.Int64 get_Length()
    // Offset: 0xFFFFFFFF
    int64_t get_Length();
    // public System.Int64 get_Position()
    // Offset: 0xFFFFFFFF
    int64_t get_Position();
    // public System.Void set_Position(System.Int64 value)
    // Offset: 0xFFFFFFFF
    void set_Position(int64_t value);
    // public System.Void Close()
    // Offset: 0xFF159C
    void Close();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0xFF162C
    void Dispose(bool disposing);
    // public System.Void Flush()
    // Offset: 0xFFFFFFFF
    void Flush();
    // public System.IAsyncResult BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state)
    // Offset: 0xFF1630
    System::IAsyncResult* BeginRead(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state);
    // System.IAsyncResult BeginReadInternal(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state, System.Boolean serializeAsynchronously)
    // Offset: 0xFF1638
    System::IAsyncResult* BeginReadInternal(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state, bool serializeAsynchronously);
    // public System.Int32 EndRead(System.IAsyncResult asyncResult)
    // Offset: 0xFF1E74
    int EndRead(System::IAsyncResult* asyncResult);
    // public System.IAsyncResult BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state)
    // Offset: 0xFF20D0
    System::IAsyncResult* BeginWrite(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state);
    // System.IAsyncResult BeginWriteInternal(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state, System.Boolean serializeAsynchronously)
    // Offset: 0xFF20D8
    System::IAsyncResult* BeginWriteInternal(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state, bool serializeAsynchronously);
    // private System.Void RunReadWriteTaskWhenReady(System.Threading.Tasks.Task asyncWaiter, System.IO.Stream/ReadWriteTask readWriteTask)
    // Offset: 0xFF1BCC
    void RunReadWriteTaskWhenReady(System::Threading::Tasks::Task* asyncWaiter, System::IO::Stream::ReadWriteTask* readWriteTask);
    // private System.Void RunReadWriteTask(System.IO.Stream/ReadWriteTask readWriteTask)
    // Offset: 0xFF1D90
    void RunReadWriteTask(System::IO::Stream::ReadWriteTask* readWriteTask);
    // public System.Void EndWrite(System.IAsyncResult asyncResult)
    // Offset: 0xFF24D0
    void EndWrite(System::IAsyncResult* asyncResult);
    // public System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0xFFFFFFFF
    int64_t Seek(int64_t offset, System::IO::SeekOrigin origin);
    // public System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0xFFFFFFFF
    int Read(::Array<uint8_t>*& buffer, int offset, int count);
    // public System.Int32 ReadByte()
    // Offset: 0xFF26E4
    int ReadByte();
    // public System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0xFFFFFFFF
    void Write(::Array<uint8_t>* buffer, int offset, int count);
    // public System.Void WriteByte(System.Byte value)
    // Offset: 0xFF2788
    void WriteByte(uint8_t value);
    // System.IAsyncResult BlockingBeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state)
    // Offset: 0xFF18BC
    System::IAsyncResult* BlockingBeginRead(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state);
    // static System.Int32 BlockingEndRead(System.IAsyncResult asyncResult)
    // Offset: 0xFF2098
    static int BlockingEndRead(System::IAsyncResult* asyncResult);
    // System.IAsyncResult BlockingBeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state)
    // Offset: 0xFF235C
    System::IAsyncResult* BlockingBeginWrite(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state);
    // static System.Void BlockingEndWrite(System.IAsyncResult asyncResult)
    // Offset: 0xFF26E0
    static void BlockingEndWrite(System::IAsyncResult* asyncResult);
    // static private System.Void .cctor()
    // Offset: 0xFF2A48
    static void _cctor();
    // public System.Void Dispose()
    // Offset: 0xFF161C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // protected System.Void .ctor()
    // Offset: 0xFF2A38
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    static Stream* New_ctor();
  }; // System.IO.Stream
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::Stream*, "System.IO", "Stream");
#pragma pack(pop)
