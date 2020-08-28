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
  // Forward declaring type: MissionNodesManager
  class MissionNodesManager;
  // Forward declaring type: MenuShockwave
  class MenuShockwave;
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ScrollView
  class ScrollView;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionMapAnimationController
  class MissionMapAnimationController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MissionMapAnimationController::$UpdateMissionMapCoroutine$d__12
    class $UpdateMissionMapCoroutine$d__12;
    // Nested type: GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13
    class $UpdateClearedNodeStateCoroutine$d__13;
    // Nested type: GlobalNamespace::MissionMapAnimationController::$UpdateStageCoroutine$d__14
    class $UpdateStageCoroutine$d__14;
    // Nested type: GlobalNamespace::MissionMapAnimationController::$$c
    class $$c;
    // Nested type: GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15
    class $UpdateNodesAndConnectionCoroutine$d__15;
    // private MissionNodesManager _missionNodesManager
    // Offset: 0x18
    GlobalNamespace::MissionNodesManager* missionNodesManager;
    // private HMUI.ScrollView _mapScrollView
    // Offset: 0x20
    HMUI::ScrollView* mapScrollView;
    // private System.Single _startDelay
    // Offset: 0x28
    float startDelay;
    // private System.Single _stageAnimationStartDelay
    // Offset: 0x2C
    float stageAnimationStartDelay;
    // private System.Single _missionConnectionAnimationStartDelay
    // Offset: 0x30
    float missionConnectionAnimationStartDelay;
    // private System.Single _missionConnectionAnimationSeparationTime
    // Offset: 0x34
    float missionConnectionAnimationSeparationTime;
    // private System.Single _stageAnimationDuration
    // Offset: 0x38
    float stageAnimationDuration;
    // private MenuShockwave _shockwaveEffect
    // Offset: 0x40
    GlobalNamespace::MenuShockwave* shockwaveEffect;
    // public System.Boolean get_animatedUpdateIsRequired()
    // Offset: 0xC0812C
    bool get_animatedUpdateIsRequired();
    // public System.Void ScrollToTopMostNotClearedMission()
    // Offset: 0xC08274
    void ScrollToTopMostNotClearedMission();
    // public System.Void UpdateMissionMapAfterMissionWasCleared(System.Boolean animated, System.Action finishCallback)
    // Offset: 0xC084B4
    void UpdateMissionMapAfterMissionWasCleared(bool animated, System::Action* finishCallback);
    // private System.Collections.IEnumerator UpdateMissionMapCoroutine(MissionNode lastClearedMissionNode, System.Action finishCallback)
    // Offset: 0xC085F0
    System::Collections::IEnumerator* UpdateMissionMapCoroutine(GlobalNamespace::MissionNode* lastClearedMissionNode, System::Action* finishCallback);
    // private System.Collections.IEnumerator UpdateClearedNodeStateCoroutine(MissionNode lastClearedMissionNode)
    // Offset: 0xC086C8
    System::Collections::IEnumerator* UpdateClearedNodeStateCoroutine(GlobalNamespace::MissionNode* lastClearedMissionNode);
    // private System.Collections.IEnumerator UpdateStageCoroutine()
    // Offset: 0xC0878C
    System::Collections::IEnumerator* UpdateStageCoroutine();
    // private System.Collections.IEnumerator UpdateNodesAndConnectionCoroutine()
    // Offset: 0xC08834
    System::Collections::IEnumerator* UpdateNodesAndConnectionCoroutine();
    // public System.Void .ctor()
    // Offset: 0xC088DC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionMapAnimationController* New_ctor();
  }; // MissionMapAnimationController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionMapAnimationController*, "", "MissionMapAnimationController");
#pragma pack(pop)
