// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:30 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.SceneManagement.LoadSceneMode
#include "UnityEngine/SceneManagement/LoadSceneMode.hpp"
// Including type: UnityEngine.SceneManagement.LocalPhysicsMode
#include "UnityEngine/SceneManagement/LocalPhysicsMode.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.SceneManagement
namespace UnityEngine::SceneManagement {
  // Autogenerated type: UnityEngine.SceneManagement.LoadSceneParameters
  struct LoadSceneParameters : public System::ValueType {
    public:
    // private UnityEngine.SceneManagement.LoadSceneMode m_LoadSceneMode
    // Offset: 0x0
    UnityEngine::SceneManagement::LoadSceneMode m_LoadSceneMode;
    // private UnityEngine.SceneManagement.LocalPhysicsMode m_LocalPhysicsMode
    // Offset: 0x4
    UnityEngine::SceneManagement::LocalPhysicsMode m_LocalPhysicsMode;
    // Creating value type constructor for type: LoadSceneParameters
    LoadSceneParameters(UnityEngine::SceneManagement::LoadSceneMode m_LoadSceneMode_ = {}, UnityEngine::SceneManagement::LocalPhysicsMode m_LocalPhysicsMode_ = {}) : m_LoadSceneMode{m_LoadSceneMode_}, m_LocalPhysicsMode{m_LocalPhysicsMode_} {}
    // public System.Void .ctor(UnityEngine.SceneManagement.LoadSceneMode mode)
    // Offset: 0xA437B8
    static LoadSceneParameters* New_ctor(UnityEngine::SceneManagement::LoadSceneMode mode);
  }; // UnityEngine.SceneManagement.LoadSceneParameters
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SceneManagement::LoadSceneParameters, "UnityEngine.SceneManagement", "LoadSceneParameters");
#pragma pack(pop)
