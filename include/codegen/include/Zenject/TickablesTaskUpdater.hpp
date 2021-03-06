// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:47 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.TaskUpdater`1
#include "Zenject/TaskUpdater_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ITickable
  class ITickable;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.TickablesTaskUpdater
  class TickablesTaskUpdater : public Zenject::TaskUpdater_1<Zenject::ITickable*> {
    public:
    // protected System.Void UpdateItem(Zenject.ITickable task)
    // Offset: 0xFBDBC0
    void UpdateItem(Zenject::ITickable* task);
    // public System.Void .ctor()
    // Offset: 0xFBC17C
    // Implemented from: Zenject.TaskUpdater`1
    // Base method: System.Void TaskUpdater`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static TickablesTaskUpdater* New_ctor();
  }; // Zenject.TickablesTaskUpdater
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::TickablesTaskUpdater*, "Zenject", "TickablesTaskUpdater");
#pragma pack(pop)
