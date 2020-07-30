// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:30 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectCallbackController
  class BeatmapObjectCallbackController;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EventsTestGameplayManager
  class EventsTestGameplayManager : public UnityEngine::MonoBehaviour {
    public:
    // private BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Offset: 0x18
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // private BeatmapEventType _beatmapEventType
    // Offset: 0x20
    GlobalNamespace::BeatmapEventType beatmapEventType;
    // private System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,BeatmapEventType> _beatmapEventTypeBindings
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, GlobalNamespace::BeatmapEventType>* beatmapEventTypeBindings;
    // private System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Int32> _beatmapValuesBindings
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, int>* beatmapValuesBindings;
    // private System.Boolean _rotatingLasers
    // Offset: 0x38
    bool rotatingLasers;
    // protected System.Void Awake()
    // Offset: 0xBD6744
    void Awake();
    // protected System.Void Update()
    // Offset: 0xBD6974
    void Update();
    // public System.Void .ctor()
    // Offset: 0xBD6C04
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static EventsTestGameplayManager* New_ctor();
  }; // EventsTestGameplayManager
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EventsTestGameplayManager*, "", "EventsTestGameplayManager");
#pragma pack(pop)
