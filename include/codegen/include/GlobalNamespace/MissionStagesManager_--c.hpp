// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:33 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: MissionStagesManager
#include "GlobalNamespace/MissionStagesManager.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionStage
  class MissionStage;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionStagesManager/<>c
  class MissionStagesManager::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly MissionStagesManager/<>c <>9
    static GlobalNamespace::MissionStagesManager::$$c* _get_$$9();
    // Set static field: static public readonly MissionStagesManager/<>c <>9
    static void _set_$$9(GlobalNamespace::MissionStagesManager::$$c* value);
    // Get static field: static public System.Func`2<MissionStage,System.Int32> <>9__6_0
    static System::Func_2<GlobalNamespace::MissionStage*, int>* _get_$$9__6_0();
    // Set static field: static public System.Func`2<MissionStage,System.Int32> <>9__6_0
    static void _set_$$9__6_0(System::Func_2<GlobalNamespace::MissionStage*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0xBF95A0
    static void _cctor();
    // System.Int32 <InitStages>b__6_0(MissionStage stage)
    // Offset: 0xBF9610
    int $InitStages$b__6_0(GlobalNamespace::MissionStage* stage);
    // public System.Void .ctor()
    // Offset: 0xBF9608
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MissionStagesManager::$$c* New_ctor();
  }; // MissionStagesManager/<>c
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionStagesManager::$$c*, "", "MissionStagesManager/<>c");
#pragma pack(pop)
