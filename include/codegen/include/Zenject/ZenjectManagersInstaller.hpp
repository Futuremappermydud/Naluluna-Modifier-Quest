// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.Installer`1
#include "Zenject/Installer_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ZenjectManagersInstaller
  class ZenjectManagersInstaller : public Zenject::Installer_1<Zenject::ZenjectManagersInstaller*> {
    public:
    // public override System.Void InstallBindings()
    // Offset: 0x1928C68
    // Implemented from: Zenject.InstallerBase
    // Base method: System.Void InstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x1928E28
    // Implemented from: Zenject.Installer`1
    // Base method: System.Void Installer`1::.ctor()
    // Base method: System.Void InstallerBase::.ctor()
    // Base method: System.Void Object::.ctor()
    static ZenjectManagersInstaller* New_ctor();
  }; // Zenject.ZenjectManagersInstaller
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenjectManagersInstaller*, "Zenject", "ZenjectManagersInstaller");
#pragma pack(pop)
