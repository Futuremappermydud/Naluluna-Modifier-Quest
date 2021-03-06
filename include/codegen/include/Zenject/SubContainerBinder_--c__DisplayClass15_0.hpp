// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.SubContainerBinder
#include "Zenject/SubContainerBinder.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: ISubContainerCreator
  class ISubContainerCreator;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.SubContainerBinder/<>c__DisplayClass15_0
  class SubContainerBinder::$$c__DisplayClass15_0 : public ::Il2CppObject {
    public:
    // public Zenject.GameObjectCreationParameters gameObjectInfo
    // Offset: 0x10
    Zenject::GameObjectCreationParameters* gameObjectInfo;
    // public System.Type installerType
    // Offset: 0x18
    System::Type* installerType;
    // public Zenject.SubContainerBinder <>4__this
    // Offset: 0x20
    Zenject::SubContainerBinder* $$4__this;
    // Zenject.ISubContainerCreator <ByNewGameObjectInstaller>b__0(Zenject.DiContainer container)
    // Offset: 0xFB8C10
    Zenject::ISubContainerCreator* $ByNewGameObjectInstaller$b__0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0xFB7FE0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SubContainerBinder::$$c__DisplayClass15_0* New_ctor();
  }; // Zenject.SubContainerBinder/<>c__DisplayClass15_0
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerBinder::$$c__DisplayClass15_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass15_0");
#pragma pack(pop)
