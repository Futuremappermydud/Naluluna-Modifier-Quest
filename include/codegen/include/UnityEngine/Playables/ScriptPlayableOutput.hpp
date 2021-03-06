// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:32 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayableOutput
#include "UnityEngine/Playables/IPlayableOutput.hpp"
// Including type: UnityEngine.Playables.PlayableOutputHandle
#include "UnityEngine/Playables/PlayableOutputHandle.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: PlayableOutput
  struct PlayableOutput;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Autogenerated type: UnityEngine.Playables.ScriptPlayableOutput
  struct ScriptPlayableOutput : public System::ValueType, public UnityEngine::Playables::IPlayableOutput {
    public:
    // private UnityEngine.Playables.PlayableOutputHandle m_Handle
    // Offset: 0x0
    UnityEngine::Playables::PlayableOutputHandle m_Handle;
    // Creating value type constructor for type: ScriptPlayableOutput
    ScriptPlayableOutput(UnityEngine::Playables::PlayableOutputHandle m_Handle_ = {}) : m_Handle{m_Handle_} {}
    // static public UnityEngine.Playables.ScriptPlayableOutput Create(UnityEngine.Playables.PlayableGraph graph, System.String name)
    // Offset: 0x1403D4C
    static UnityEngine::Playables::ScriptPlayableOutput Create(UnityEngine::Playables::PlayableGraph graph, ::Il2CppString* name);
    // System.Void .ctor(UnityEngine.Playables.PlayableOutputHandle handle)
    // Offset: 0xA453C8
    static ScriptPlayableOutput* New_ctor(UnityEngine::Playables::PlayableOutputHandle handle);
    // static public UnityEngine.Playables.ScriptPlayableOutput get_Null()
    // Offset: 0x1403DCC
    static UnityEngine::Playables::ScriptPlayableOutput get_Null();
    // public UnityEngine.Playables.PlayableOutputHandle GetHandle()
    // Offset: 0xA453D0
    // Implemented from: UnityEngine.Playables.IPlayableOutput
    // Base method: UnityEngine.Playables.PlayableOutputHandle IPlayableOutput::GetHandle()
    UnityEngine::Playables::PlayableOutputHandle GetHandle();
  }; // UnityEngine.Playables.ScriptPlayableOutput
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::ScriptPlayableOutput, "UnityEngine.Playables", "ScriptPlayableOutput");
#pragma pack(pop)
