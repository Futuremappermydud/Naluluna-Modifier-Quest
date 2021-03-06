// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:32 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: IPlayableOutput
  class IPlayableOutput;
  // Skipping declaration: IPlayable because it is already included!
  // Forward declaring type: INotification
  class INotification;
  // Forward declaring type: INotificationReceiver
  class INotificationReceiver;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Autogenerated type: UnityEngine.Playables.PlayableOutputExtensions
  class PlayableOutputExtensions : public ::Il2CppObject {
    public:
    // static public System.Void SetReferenceObject(U output, UnityEngine.Object value)
    // Offset: 0xC4C95C
    template<class U>
    static void SetReferenceObject(U output, UnityEngine::Object* value) {
      static_assert(std::is_convertible_v<U, UnityEngine::Playables::IPlayableOutput*> && std::is_convertible_v<U, System::ValueType*>);
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine.Playables", "PlayableOutputExtensions", "SetReferenceObject", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, output, value));
    }
    // static public System.Void SetUserData(U output, UnityEngine.Object value)
    // Offset: 0xC4CA0C
    template<class U>
    static void SetUserData(U output, UnityEngine::Object* value) {
      static_assert(std::is_convertible_v<U, UnityEngine::Playables::IPlayableOutput*> && std::is_convertible_v<U, System::ValueType*>);
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine.Playables", "PlayableOutputExtensions", "SetUserData", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, output, value));
    }
    // static public UnityEngine.Playables.Playable GetSourcePlayable(U output)
    // Offset: 0x13D04A0
    template<class U>
    static UnityEngine::Playables::Playable GetSourcePlayable(U output) {
      static_assert(std::is_convertible_v<U, UnityEngine::Playables::IPlayableOutput*> && std::is_convertible_v<U, System::ValueType*>);
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<UnityEngine::Playables::Playable>("UnityEngine.Playables", "PlayableOutputExtensions", "GetSourcePlayable", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, output));
    }
    // static public System.Void SetSourcePlayable(U output, V value, System.Int32 port)
    // Offset: 0xC4C9A4
    template<class U, class V>
    static void SetSourcePlayable(U output, V value, int port) {
      static_assert(std::is_convertible_v<U, UnityEngine::Playables::IPlayableOutput*> && std::is_convertible_v<U, System::ValueType*>);
      static_assert(std::is_convertible_v<V, UnityEngine::Playables::IPlayable*> && std::is_convertible_v<V, System::ValueType*>);
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine.Playables", "PlayableOutputExtensions", "SetSourcePlayable", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<V>::get()}, output, value, port));
    }
    // static public System.Int32 GetSourceOutputPort(U output)
    // Offset: 0x11CB5F0
    template<class U>
    static int GetSourceOutputPort(U output) {
      static_assert(std::is_convertible_v<U, UnityEngine::Playables::IPlayableOutput*> && std::is_convertible_v<U, System::ValueType*>);
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<int>("UnityEngine.Playables", "PlayableOutputExtensions", "GetSourceOutputPort", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, output));
    }
    // static public System.Void SetWeight(U output, System.Single value)
    // Offset: 0xC4CA54
    template<class U>
    static void SetWeight(U output, float value) {
      static_assert(std::is_convertible_v<U, UnityEngine::Playables::IPlayableOutput*> && std::is_convertible_v<U, System::ValueType*>);
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine.Playables", "PlayableOutputExtensions", "SetWeight", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, output, value));
    }
    // static public System.Void PushNotification(U output, UnityEngine.Playables.Playable origin, UnityEngine.Playables.INotification notification, System.Object context)
    // Offset: 0xC4C8EC
    template<class U>
    static void PushNotification(U output, UnityEngine::Playables::Playable origin, UnityEngine::Playables::INotification* notification, ::Il2CppObject* context) {
      static_assert(std::is_convertible_v<U, UnityEngine::Playables::IPlayableOutput*> && std::is_convertible_v<U, System::ValueType*>);
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine.Playables", "PlayableOutputExtensions", "PushNotification", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, output, origin, notification, context));
    }
    // static public System.Void AddNotificationReceiver(U output, UnityEngine.Playables.INotificationReceiver receiver)
    // Offset: 0xC4C8A4
    template<class U>
    static void AddNotificationReceiver(U output, UnityEngine::Playables::INotificationReceiver* receiver) {
      static_assert(std::is_convertible_v<U, UnityEngine::Playables::IPlayableOutput*> && std::is_convertible_v<U, System::ValueType*>);
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine.Playables", "PlayableOutputExtensions", "AddNotificationReceiver", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, output, receiver));
    }
  }; // UnityEngine.Playables.PlayableOutputExtensions
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableOutputExtensions*, "UnityEngine.Playables", "PlayableOutputExtensions");
#pragma pack(pop)
