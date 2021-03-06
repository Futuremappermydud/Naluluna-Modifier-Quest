// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.UI.DefaultControls
#include "UnityEngine/UI/DefaultControls.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.DefaultControls/IFactoryControls
  class DefaultControls::IFactoryControls {
    public:
    // public UnityEngine.GameObject CreateGameObject(System.String name, System.Type[] components)
    // Offset: 0xFFFFFFFF
    UnityEngine::GameObject* CreateGameObject(::Il2CppString* name, ::Array<System::Type*>* components);
  }; // UnityEngine.UI.DefaultControls/IFactoryControls
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::DefaultControls::IFactoryControls*, "UnityEngine.UI", "DefaultControls/IFactoryControls");
#pragma pack(pop)
