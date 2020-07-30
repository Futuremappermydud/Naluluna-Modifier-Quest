// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: HMAsyncRequest
#include "GlobalNamespace/HMAsyncRequest.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: HMAsyncRequest/CancelHander
  class HMAsyncRequest::CancelHander : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xCA0804
    static HMAsyncRequest::CancelHander* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(HMAsyncRequest request)
    // Offset: 0xCA035C
    void Invoke(GlobalNamespace::HMAsyncRequest* request);
    // public System.IAsyncResult BeginInvoke(HMAsyncRequest request, System.AsyncCallback callback, System.Object object)
    // Offset: 0xCA0818
    System::IAsyncResult* BeginInvoke(GlobalNamespace::HMAsyncRequest* request, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xCA083C
    void EndInvoke(System::IAsyncResult* result);
  }; // HMAsyncRequest/CancelHander
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HMAsyncRequest::CancelHander*, "", "HMAsyncRequest/CancelHander");
#pragma pack(pop)
