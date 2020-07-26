// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:35 PM
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
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.SHA1Internal
  class SHA1Internal : public ::Il2CppObject {
    public:
    // private System.UInt32[] _H
    // Offset: 0x10
    ::Array<uint>* H;
    // private System.UInt64 count
    // Offset: 0x18
    uint64_t count;
    // private System.Byte[] _ProcessingBuffer
    // Offset: 0x20
    ::Array<uint8_t>* ProcessingBuffer;
    // private System.Int32 _ProcessingBufferCount
    // Offset: 0x28
    int ProcessingBufferCount;
    // private System.UInt32[] buff
    // Offset: 0x30
    ::Array<uint>* buff;
    // public System.Void HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0xDD4D58
    void HashCore(::Array<uint8_t>* rgb, int ibStart, int cbSize);
    // public System.Byte[] HashFinal()
    // Offset: 0xDD4E7C
    ::Array<uint8_t>* HashFinal();
    // public System.Void Initialize()
    // Offset: 0xDD4F88
    void Initialize();
    // private System.Void ProcessBlock(System.Byte[] inputBuffer, System.UInt32 inputOffset)
    // Offset: 0xDD504C
    void ProcessBlock(::Array<uint8_t>* inputBuffer, uint inputOffset);
    // static private System.Void InitialiseBuff(System.UInt32[] buff, System.Byte[] input, System.UInt32 inputOffset)
    // Offset: 0xDD5728
    static void InitialiseBuff(::Array<uint>* buff, ::Array<uint8_t>* input, uint inputOffset);
    // static private System.Void FillBuff(System.UInt32[] buff)
    // Offset: 0xDD5E10
    static void FillBuff(::Array<uint>* buff);
    // private System.Void ProcessFinalBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0xDD5570
    void ProcessFinalBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
    // System.Void AddLength(System.UInt64 length, System.Byte[] buffer, System.Int32 position)
    // Offset: 0xDD6050
    void AddLength(uint64_t length, ::Array<uint8_t>* buffer, int position);
    // public System.Void .ctor()
    // Offset: 0xDD4C04
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SHA1Internal* New_ctor();
  }; // System.Security.Cryptography.SHA1Internal
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SHA1Internal*, "System.Security.Cryptography", "SHA1Internal");
#pragma pack(pop)
