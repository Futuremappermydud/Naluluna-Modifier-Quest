// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:19 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: System.Xml.SecureStringHasher
#include "System/Xml/SecureStringHasher.hpp"
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
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.SecureStringHasher/HashCodeOfStringDelegate
  class SecureStringHasher::HashCodeOfStringDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x118A574
    static SecureStringHasher::HashCodeOfStringDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Int32 Invoke(System.String s, System.Int32 sLen, System.Int64 additionalEntropy)
    // Offset: 0x118A0A4
    int Invoke(::Il2CppString* s, int sLen, int64_t additionalEntropy);
    // public System.IAsyncResult BeginInvoke(System.String s, System.Int32 sLen, System.Int64 additionalEntropy, System.AsyncCallback callback, System.Object object)
    // Offset: 0x118A588
    System::IAsyncResult* BeginInvoke(::Il2CppString* s, int sLen, int64_t additionalEntropy, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Int32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x118A640
    int EndInvoke(System::IAsyncResult* result);
  }; // System.Xml.SecureStringHasher/HashCodeOfStringDelegate
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::SecureStringHasher::HashCodeOfStringDelegate*, "System.Xml", "SecureStringHasher/HashCodeOfStringDelegate");
#pragma pack(pop)
