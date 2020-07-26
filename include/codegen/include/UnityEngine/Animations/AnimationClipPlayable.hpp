// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:24 PM
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
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Autogenerated type: UnityEngine.Animations.AnimationClipPlayable
  struct AnimationClipPlayable : public System::ValueType, public UnityEngine::Playables::IPlayable, public System::IEquatable_1<UnityEngine::Animations::AnimationClipPlayable> {
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Offset: 0x0
    UnityEngine::Playables::PlayableHandle m_Handle;
    // Creating value type constructor for type: AnimationClipPlayable
    AnimationClipPlayable(UnityEngine::Playables::PlayableHandle m_Handle_ = {}) : m_Handle{m_Handle_} {}
    // static public UnityEngine.Animations.AnimationClipPlayable Create(UnityEngine.Playables.PlayableGraph graph, UnityEngine.AnimationClip clip)
    // Offset: 0x1922EA4
    static UnityEngine::Animations::AnimationClipPlayable Create(UnityEngine::Playables::PlayableGraph graph, UnityEngine::AnimationClip* clip);
    // static private UnityEngine.Playables.PlayableHandle CreateHandle(UnityEngine.Playables.PlayableGraph graph, UnityEngine.AnimationClip clip)
    // Offset: 0x1922EE0
    static UnityEngine::Playables::PlayableHandle CreateHandle(UnityEngine::Playables::PlayableGraph graph, UnityEngine::AnimationClip* clip);
    // System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0xA59E20
    static AnimationClipPlayable* New_ctor(UnityEngine::Playables::PlayableHandle handle);
    // public System.Void SetApplyFootIK(System.Boolean value)
    // Offset: 0xA59E3C
    void SetApplyFootIK(bool value);
    // System.Void SetRemoveStartOffset(System.Boolean value)
    // Offset: 0xA59E8C
    void SetRemoveStartOffset(bool value);
    // System.Void SetOverrideLoopTime(System.Boolean value)
    // Offset: 0xA59EDC
    void SetOverrideLoopTime(bool value);
    // System.Void SetLoopTime(System.Boolean value)
    // Offset: 0xA59F2C
    void SetLoopTime(bool value);
    // static private System.Boolean CreateHandleInternal(UnityEngine.Playables.PlayableGraph graph, UnityEngine.AnimationClip clip, UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x1923060
    static bool CreateHandleInternal(UnityEngine::Playables::PlayableGraph graph, UnityEngine::AnimationClip* clip, UnityEngine::Playables::PlayableHandle& handle);
    // static private System.Void SetApplyFootIKInternal(UnityEngine.Playables.PlayableHandle handle, System.Boolean value)
    // Offset: 0x19231E0
    static void SetApplyFootIKInternal(UnityEngine::Playables::PlayableHandle& handle, bool value);
    // static private System.Void SetRemoveStartOffsetInternal(UnityEngine.Playables.PlayableHandle handle, System.Boolean value)
    // Offset: 0x1923280
    static void SetRemoveStartOffsetInternal(UnityEngine::Playables::PlayableHandle& handle, bool value);
    // static private System.Void SetOverrideLoopTimeInternal(UnityEngine.Playables.PlayableHandle handle, System.Boolean value)
    // Offset: 0x1923320
    static void SetOverrideLoopTimeInternal(UnityEngine::Playables::PlayableHandle& handle, bool value);
    // static private System.Void SetLoopTimeInternal(UnityEngine.Playables.PlayableHandle handle, System.Boolean value)
    // Offset: 0x19233C0
    static void SetLoopTimeInternal(UnityEngine::Playables::PlayableHandle& handle, bool value);
    // static private System.Boolean CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph graph, UnityEngine.AnimationClip clip, UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x1923410
    static bool CreateHandleInternal_Injected(UnityEngine::Playables::PlayableGraph& graph, UnityEngine::AnimationClip* clip, UnityEngine::Playables::PlayableHandle& handle);
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0xA59E28
    // Implemented from: UnityEngine.Playables.IPlayable
    // Base method: UnityEngine.Playables.PlayableHandle IPlayable::GetHandle()
    UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Animations.AnimationClipPlayable other)
    // Offset: 0xA59E34
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.Animations.AnimationClipPlayable other)
    bool Equals(UnityEngine::Animations::AnimationClipPlayable other);
  }; // UnityEngine.Animations.AnimationClipPlayable
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationClipPlayable, "UnityEngine.Animations", "AnimationClipPlayable");
#pragma pack(pop)
