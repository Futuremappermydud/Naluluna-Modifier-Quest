// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:26 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: ObjectiveValueFormatterSO
#include "GlobalNamespace/ObjectiveValueFormatterSO.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: DistanceObjectiveValueFormatterSO
  class DistanceObjectiveValueFormatterSO : public GlobalNamespace::ObjectiveValueFormatterSO {
    public:
    // public override System.String FormatValue(System.Int32 value)
    // Offset: 0xBD3248
    // Implemented from: ObjectiveValueFormatterSO
    // Base method: System.String ObjectiveValueFormatterSO::FormatValue(System.Int32 value)
    ::Il2CppString* FormatValue(int value);
    // public System.Void .ctor()
    // Offset: 0xBD32C4
    // Implemented from: ObjectiveValueFormatterSO
    // Base method: System.Void ObjectiveValueFormatterSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static DistanceObjectiveValueFormatterSO* New_ctor();
  }; // DistanceObjectiveValueFormatterSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DistanceObjectiveValueFormatterSO*, "", "DistanceObjectiveValueFormatterSO");
#pragma pack(pop)
