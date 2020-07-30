// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:46 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.SubContainerCreatorDynamicContext
#include "Zenject/SubContainerCreatorDynamicContext.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.SubContainerCreatorByNewGameObjectDynamicContext
  class SubContainerCreatorByNewGameObjectDynamicContext : public Zenject::SubContainerCreatorDynamicContext {
    public:
    // private readonly Zenject.GameObjectCreationParameters _gameObjectBindInfo
    // Offset: 0x18
    Zenject::GameObjectCreationParameters* gameObjectBindInfo;
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.GameObjectCreationParameters gameObjectBindInfo)
    // Offset: 0xFBA3BC
    static SubContainerCreatorByNewGameObjectDynamicContext* New_ctor(Zenject::DiContainer* container, Zenject::GameObjectCreationParameters* gameObjectBindInfo);
    // protected override UnityEngine.GameObject CreateGameObject(System.Boolean shouldMakeActive)
    // Offset: 0xFBA440
    // Implemented from: Zenject.SubContainerCreatorDynamicContext
    // Base method: UnityEngine.GameObject SubContainerCreatorDynamicContext::CreateGameObject(System.Boolean shouldMakeActive)
    UnityEngine::GameObject* CreateGameObject(bool& shouldMakeActive);
  }; // Zenject.SubContainerCreatorByNewGameObjectDynamicContext
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByNewGameObjectDynamicContext*, "Zenject", "SubContainerCreatorByNewGameObjectDynamicContext");
#pragma pack(pop)
