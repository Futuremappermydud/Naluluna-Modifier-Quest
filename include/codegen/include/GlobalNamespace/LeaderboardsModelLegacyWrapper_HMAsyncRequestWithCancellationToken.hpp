// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:11 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: HMAsyncRequest
#include "GlobalNamespace/HMAsyncRequest.hpp"
// Including type: LeaderboardsModelLegacyWrapper
#include "GlobalNamespace/LeaderboardsModelLegacyWrapper.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LeaderboardsModelLegacyWrapper/HMAsyncRequestWithCancellationToken
  class LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken : public GlobalNamespace::HMAsyncRequest {
    public:
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Offset: 0x28
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // public System.Threading.CancellationTokenSource get_cancellationTokenSource()
    // Offset: 0xB48354
    System::Threading::CancellationTokenSource* get_cancellationTokenSource();
    // public System.Void .ctor()
    // Offset: 0xB47700
    // Implemented from: HMAsyncRequest
    // Base method: System.Void HMAsyncRequest::.ctor()
    // Base method: System.Void HMAutoincrementedRequestId::.ctor()
    // Base method: System.Void Object::.ctor()
    static LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken* New_ctor();
    // public override System.Void Cancel()
    // Offset: 0xB4835C
    // Implemented from: HMAsyncRequest
    // Base method: System.Void HMAsyncRequest::Cancel()
    void Cancel();
  }; // LeaderboardsModelLegacyWrapper/HMAsyncRequestWithCancellationToken
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken*, "", "LeaderboardsModelLegacyWrapper/HMAsyncRequestWithCancellationToken");
#pragma pack(pop)
