// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CampaignProgressModel
  class CampaignProgressModel : public UnityEngine::MonoBehaviour {
    public:
    // private PlayerDataModel _playerDataModel
    // Offset: 0x18
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // private System.Collections.Generic.HashSet`1<System.String> _missionIds
    // Offset: 0x20
    System::Collections::Generic::HashSet_1<::Il2CppString*>* missionIds;
    // private System.String _finalMissionId
    // Offset: 0x28
    ::Il2CppString* finalMissionId;
    // private System.Boolean _numberOfClearedMissionsDirty
    // Offset: 0x30
    bool numberOfClearedMissionsDirty;
    // private System.Int32 _numberOfClearedMissions
    // Offset: 0x34
    int numberOfClearedMissions;
    // public System.Int32 get_numberOfClearedMissions()
    // Offset: 0xB7E294
    int get_numberOfClearedMissions();
    // protected System.Void Awake()
    // Offset: 0xB7E3FC
    void Awake();
    // public System.Boolean IsMissionRegistered(System.String missionId)
    // Offset: 0xB7E46C
    bool IsMissionRegistered(::Il2CppString* missionId);
    // public System.Void RegisterMissionId(System.String missionId)
    // Offset: 0xB7E4D4
    void RegisterMissionId(::Il2CppString* missionId);
    // public System.Boolean IsMissionCleared(System.String missionId)
    // Offset: 0xB7E548
    bool IsMissionCleared(::Il2CppString* missionId);
    // public System.Boolean IsMissionFinal(System.String missionId)
    // Offset: 0xB7E57C
    bool IsMissionFinal(::Il2CppString* missionId);
    // public System.Void SetFinalMissionId(System.String missionId)
    // Offset: 0xB7E588
    void SetFinalMissionId(::Il2CppString* missionId);
    // public System.Boolean WillFinishGameAfterThisMission(System.String missionId)
    // Offset: 0xB7E014
    bool WillFinishGameAfterThisMission(::Il2CppString* missionId);
    // public System.Void SetMissionCleared(System.String missionId)
    // Offset: 0xB7E060
    void SetMissionCleared(::Il2CppString* missionId);
    // public System.Void __SetMissionCleared(System.String missionId, System.Boolean cleared)
    // Offset: 0xB7E590
    void __SetMissionCleared(::Il2CppString* missionId, bool cleared);
    // private System.Int32 UpdateNumberOfClearedMissions()
    // Offset: 0xB7E2C8
    int UpdateNumberOfClearedMissions();
    // public System.Void .ctor()
    // Offset: 0xB7E5E0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static CampaignProgressModel* New_ctor();
  }; // CampaignProgressModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CampaignProgressModel*, "", "CampaignProgressModel");
#pragma pack(pop)
