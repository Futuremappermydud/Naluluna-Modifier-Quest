// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SwitchSettingsController
#include "GlobalNamespace/SwitchSettingsController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BoolSettingsController
  class BoolSettingsController : public GlobalNamespace::SwitchSettingsController {
    public:
    // private BoolSO _settingsValue
    // Offset: 0x38
    GlobalNamespace::BoolSO* settingsValue;
    // private System.String _onLocalizedKey
    // Offset: 0x40
    ::Il2CppString* onLocalizedKey;
    // private System.String _offLocalizedKey
    // Offset: 0x48
    ::Il2CppString* offLocalizedKey;
    // protected override System.Boolean GetInitValue()
    // Offset: 0xB7D020
    // Implemented from: SwitchSettingsController
    // Base method: System.Boolean SwitchSettingsController::GetInitValue()
    bool GetInitValue();
    // protected override System.Void ApplyValue(System.Boolean value)
    // Offset: 0xB7D070
    // Implemented from: SwitchSettingsController
    // Base method: System.Void SwitchSettingsController::ApplyValue(System.Boolean value)
    void ApplyValue(bool value);
    // protected override System.String TextForValue(System.Boolean value)
    // Offset: 0xB7D0D8
    // Implemented from: SwitchSettingsController
    // Base method: System.String SwitchSettingsController::TextForValue(System.Boolean value)
    ::Il2CppString* TextForValue(bool value);
    // public System.Void .ctor()
    // Offset: 0xB7D0F4
    // Implemented from: SwitchSettingsController
    // Base method: System.Void SwitchSettingsController::.ctor()
    // Base method: System.Void IncDecSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BoolSettingsController* New_ctor();
  }; // BoolSettingsController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BoolSettingsController*, "", "BoolSettingsController");
#pragma pack(pop)
