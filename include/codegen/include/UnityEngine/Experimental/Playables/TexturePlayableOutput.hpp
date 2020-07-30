// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:33 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayableOutput
#include "UnityEngine/Playables/IPlayableOutput.hpp"
// Including type: UnityEngine.Playables.PlayableOutputHandle
#include "UnityEngine/Playables/PlayableOutputHandle.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Playables
namespace UnityEngine::Experimental::Playables {
  // Autogenerated type: UnityEngine.Experimental.Playables.TexturePlayableOutput
  struct TexturePlayableOutput : public System::ValueType, public UnityEngine::Playables::IPlayableOutput {
    public:
    // private UnityEngine.Playables.PlayableOutputHandle m_Handle
    // Offset: 0x0
    UnityEngine::Playables::PlayableOutputHandle m_Handle;
    // Creating value type constructor for type: TexturePlayableOutput
    TexturePlayableOutput(UnityEngine::Playables::PlayableOutputHandle m_Handle_ = {}) : m_Handle{m_Handle_} {}
    // public UnityEngine.Playables.PlayableOutputHandle GetHandle()
    // Offset: 0xA422C8
    // Implemented from: UnityEngine.Playables.IPlayableOutput
    // Base method: UnityEngine.Playables.PlayableOutputHandle IPlayableOutput::GetHandle()
    UnityEngine::Playables::PlayableOutputHandle GetHandle();
  }; // UnityEngine.Experimental.Playables.TexturePlayableOutput
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Playables::TexturePlayableOutput, "UnityEngine.Experimental.Playables", "TexturePlayableOutput");
#pragma pack(pop)
