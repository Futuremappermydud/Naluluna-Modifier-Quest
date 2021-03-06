// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:33 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayable
#include "UnityEngine/Playables/IPlayable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.PlayableHandle
#include "UnityEngine/Playables/PlayableHandle.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Playables
namespace UnityEngine::Experimental::Playables {
  // Autogenerated type: UnityEngine.Experimental.Playables.MaterialEffectPlayable
  struct MaterialEffectPlayable : public System::ValueType, public UnityEngine::Playables::IPlayable, public System::IEquatable_1<UnityEngine::Experimental::Playables::MaterialEffectPlayable> {
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Offset: 0x0
    UnityEngine::Playables::PlayableHandle m_Handle;
    // Creating value type constructor for type: MaterialEffectPlayable
    MaterialEffectPlayable(UnityEngine::Playables::PlayableHandle m_Handle_ = {}) : m_Handle{m_Handle_} {}
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0xA422A0
    // Implemented from: UnityEngine.Playables.IPlayable
    // Base method: UnityEngine.Playables.PlayableHandle IPlayable::GetHandle()
    UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Experimental.Playables.MaterialEffectPlayable other)
    // Offset: 0xA422AC
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.Experimental.Playables.MaterialEffectPlayable other)
    bool Equals(UnityEngine::Experimental::Playables::MaterialEffectPlayable other);
  }; // UnityEngine.Experimental.Playables.MaterialEffectPlayable
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Playables::MaterialEffectPlayable, "UnityEngine.Experimental.Playables", "MaterialEffectPlayable");
#pragma pack(pop)
