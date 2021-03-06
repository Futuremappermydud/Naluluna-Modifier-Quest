// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ListSettingsController
#include "GlobalNamespace/ListSettingsController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Vector2IntSO
  class Vector2IntSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2Int
  struct Vector2Int;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: WindowResolutionSettingsController
  class WindowResolutionSettingsController : public GlobalNamespace::ListSettingsController {
    public:
    // private Vector2IntSO _windowResolution
    // Offset: 0x38
    GlobalNamespace::Vector2IntSO* windowResolution;
    // private UnityEngine.Vector2Int[] _windowResolutions
    // Offset: 0x40
    ::Array<UnityEngine::Vector2Int>* windowResolutions;
    // protected override System.Boolean GetInitValues(System.Int32 idx, System.Int32 numberOfElements)
    // Offset: 0xC56144
    // Implemented from: ListSettingsController
    // Base method: System.Boolean ListSettingsController::GetInitValues(System.Int32 idx, System.Int32 numberOfElements)
    bool GetInitValues(int& idx, int& numberOfElements);
    // protected override System.Void ApplyValue(System.Int32 idx)
    // Offset: 0xC563E4
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::ApplyValue(System.Int32 idx)
    void ApplyValue(int idx);
    // protected override System.String TextForValue(System.Int32 idx)
    // Offset: 0xC56470
    // Implemented from: ListSettingsController
    // Base method: System.String ListSettingsController::TextForValue(System.Int32 idx)
    ::Il2CppString* TextForValue(int idx);
    // public System.Void .ctor()
    // Offset: 0xC56570
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::.ctor()
    // Base method: System.Void IncDecSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static WindowResolutionSettingsController* New_ctor();
  }; // WindowResolutionSettingsController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::WindowResolutionSettingsController*, "", "WindowResolutionSettingsController");
#pragma pack(pop)
