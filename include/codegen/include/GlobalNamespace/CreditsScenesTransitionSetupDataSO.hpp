// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:36 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO
#include "GlobalNamespace/NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CreditsScenesTransitionSetupDataSO
  class CreditsScenesTransitionSetupDataSO : public GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO {
    public:
    // private System.Action`1<CreditsScenesTransitionSetupDataSO> didFinishEvent
    // Offset: 0x30
    System::Action_1<GlobalNamespace::CreditsScenesTransitionSetupDataSO*>* didFinishEvent;
    // public System.Void add_didFinishEvent(System.Action`1<CreditsScenesTransitionSetupDataSO> value)
    // Offset: 0xBCDA84
    void add_didFinishEvent(System::Action_1<GlobalNamespace::CreditsScenesTransitionSetupDataSO*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<CreditsScenesTransitionSetupDataSO> value)
    // Offset: 0xBCDB28
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::CreditsScenesTransitionSetupDataSO*>* value);
    // public System.Void Finish()
    // Offset: 0xBCD7E4
    void Finish();
    // public System.Void .ctor()
    // Offset: 0xBCDBCC
    // Implemented from: NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO
    // Base method: System.Void NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void SingleFixedSceneScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static CreditsScenesTransitionSetupDataSO* New_ctor();
  }; // CreditsScenesTransitionSetupDataSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CreditsScenesTransitionSetupDataSO*, "", "CreditsScenesTransitionSetupDataSO");
#pragma pack(pop)
