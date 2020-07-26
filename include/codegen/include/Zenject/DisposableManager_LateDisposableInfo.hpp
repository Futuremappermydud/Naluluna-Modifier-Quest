// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:51 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.DisposableManager
#include "Zenject/DisposableManager.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ILateDisposable
  class ILateDisposable;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.DisposableManager/LateDisposableInfo
  class DisposableManager::LateDisposableInfo : public ::Il2CppObject {
    public:
    // public Zenject.ILateDisposable LateDisposable
    // Offset: 0x10
    Zenject::ILateDisposable* LateDisposable;
    // public System.Int32 Priority
    // Offset: 0x18
    int Priority;
    // public System.Void .ctor(Zenject.ILateDisposable lateDisposable, System.Int32 priority)
    // Offset: 0xF18ECC
    static DisposableManager::LateDisposableInfo* New_ctor(Zenject::ILateDisposable* lateDisposable, int priority);
  }; // Zenject.DisposableManager/LateDisposableInfo
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::DisposableManager::LateDisposableInfo*, "Zenject", "DisposableManager/LateDisposableInfo");
#pragma pack(pop)
