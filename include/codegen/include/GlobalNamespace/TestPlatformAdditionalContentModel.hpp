// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AdditionalContentModel
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TestPlatformAdditionalContentModel
  class TestPlatformAdditionalContentModel : public GlobalNamespace::AdditionalContentModel {
    public:
    // Nested type: GlobalNamespace::TestPlatformAdditionalContentModel::Entitlement
    class Entitlement;
    // Nested type: GlobalNamespace::TestPlatformAdditionalContentModel::$GetLevelEntitlementStatusInternalAsync$d__5
    struct $GetLevelEntitlementStatusInternalAsync$d__5;
    // Nested type: GlobalNamespace::TestPlatformAdditionalContentModel::$GetPackEntitlementStatusInternalAsync$d__6
    struct $GetPackEntitlementStatusInternalAsync$d__6;
    // Nested type: GlobalNamespace::TestPlatformAdditionalContentModel::$IsPackBetterBuyThanLevelAsync$d__7
    struct $IsPackBetterBuyThanLevelAsync$d__7;
    // Nested type: GlobalNamespace::TestPlatformAdditionalContentModel::$OpenLevelProductStoreAsync$d__8
    struct $OpenLevelProductStoreAsync$d__8;
    // Nested type: GlobalNamespace::TestPlatformAdditionalContentModel::$OpenLevelPackProductStoreAsync$d__10
    struct $OpenLevelPackProductStoreAsync$d__10;
    // private TestPlatformAdditionalContentModel/Entitlement[] _levelsEntitlements
    // Offset: 0x28
    ::Array<GlobalNamespace::TestPlatformAdditionalContentModel::Entitlement*>* levelsEntitlements;
    // private TestPlatformAdditionalContentModel/Entitlement[] _levelPacksEntitlements
    // Offset: 0x30
    ::Array<GlobalNamespace::TestPlatformAdditionalContentModel::Entitlement*>* levelPacksEntitlements;
    // private System.Boolean _packBetterBuyThanLevel
    // Offset: 0x38
    bool packBetterBuyThanLevel;
    // private System.Void BuyLevel(System.String levelId)
    // Offset: 0xC450B0
    void BuyLevel(::Il2CppString* levelId);
    // protected override System.Void InvalidateDataInternal()
    // Offset: 0xC44B34
    // Implemented from: AdditionalContentModel
    // Base method: System.Void AdditionalContentModel::InvalidateDataInternal()
    void InvalidateDataInternal();
    // protected override System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> GetLevelEntitlementStatusInternalAsync(System.String levelId, System.Threading.CancellationToken token)
    // Offset: 0xC44B38
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> AdditionalContentModel::GetLevelEntitlementStatusInternalAsync(System.String levelId, System.Threading.CancellationToken token)
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::Il2CppString* levelId, System::Threading::CancellationToken token);
    // protected override System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> GetPackEntitlementStatusInternalAsync(System.String levelPackId, System.Threading.CancellationToken token)
    // Offset: 0xC44C9C
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> AdditionalContentModel::GetPackEntitlementStatusInternalAsync(System.String levelPackId, System.Threading.CancellationToken token)
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::Il2CppString* levelPackId, System::Threading::CancellationToken token);
    // public override System.Threading.Tasks.Task`1<AdditionalContentModel/IsPackBetterBuyThanLevelResult> IsPackBetterBuyThanLevelAsync(System.String levelPackId, System.Threading.CancellationToken token)
    // Offset: 0xC44E00
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/IsPackBetterBuyThanLevelResult> AdditionalContentModel::IsPackBetterBuyThanLevelAsync(System.String levelPackId, System.Threading.CancellationToken token)
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::Il2CppString* levelPackId, System::Threading::CancellationToken token);
    // public override System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> OpenLevelProductStoreAsync(System.String levelId, System.Threading.CancellationToken token)
    // Offset: 0xC44F4C
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> AdditionalContentModel::OpenLevelProductStoreAsync(System.String levelId, System.Threading.CancellationToken token)
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* OpenLevelProductStoreAsync(::Il2CppString* levelId, System::Threading::CancellationToken token);
    // public override System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> OpenLevelPackProductStoreAsync(System.String levelPackId, System.Threading.CancellationToken token)
    // Offset: 0xC45210
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> AdditionalContentModel::OpenLevelPackProductStoreAsync(System.String levelPackId, System.Threading.CancellationToken token)
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::Il2CppString* levelPackId, System::Threading::CancellationToken token);
    // public System.Void .ctor()
    // Offset: 0xC4535C
    // Implemented from: AdditionalContentModel
    // Base method: System.Void AdditionalContentModel::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TestPlatformAdditionalContentModel* New_ctor();
  }; // TestPlatformAdditionalContentModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestPlatformAdditionalContentModel*, "", "TestPlatformAdditionalContentModel");
#pragma pack(pop)
