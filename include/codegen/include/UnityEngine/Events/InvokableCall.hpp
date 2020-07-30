// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:30 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.Events.BaseInvokableCall
#include "UnityEngine/Events/BaseInvokableCall.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction
  class UnityAction;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Autogenerated type: UnityEngine.Events.InvokableCall
  class InvokableCall : public UnityEngine::Events::BaseInvokableCall {
    public:
    // private UnityEngine.Events.UnityAction Delegate
    // Offset: 0x10
    UnityEngine::Events::UnityAction* Delegate;
    // private System.Void add_Delegate(UnityEngine.Events.UnityAction value)
    // Offset: 0x12F3290
    void add_Delegate(UnityEngine::Events::UnityAction* value);
    // private System.Void remove_Delegate(UnityEngine.Events.UnityAction value)
    // Offset: 0x12F3334
    void remove_Delegate(UnityEngine::Events::UnityAction* value);
    // public System.Void .ctor(UnityEngine.Events.UnityAction action)
    // Offset: 0x12F34B0
    static InvokableCall* New_ctor(UnityEngine::Events::UnityAction* action);
    // public System.Void Invoke()
    // Offset: 0x12F3520
    void Invoke();
    // public System.Void .ctor(System.Object target, System.Reflection.MethodInfo theFunction)
    // Offset: 0x12F33D8
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Void BaseInvokableCall::.ctor(System.Object target, System.Reflection.MethodInfo theFunction)
    static InvokableCall* New_ctor(::Il2CppObject* target, System::Reflection::MethodInfo* theFunction);
    // public override System.Void Invoke(System.Object[] args)
    // Offset: 0x12F34E0
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Void BaseInvokableCall::Invoke(System.Object[] args)
    void Invoke(::Array<::Il2CppObject*>* args);
    // public override System.Boolean Find(System.Object targetObj, System.Reflection.MethodInfo method)
    // Offset: 0x12F3560
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Boolean BaseInvokableCall::Find(System.Object targetObj, System.Reflection.MethodInfo method)
    bool Find(::Il2CppObject* targetObj, System::Reflection::MethodInfo* method);
  }; // UnityEngine.Events.InvokableCall
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::InvokableCall*, "UnityEngine.Events", "InvokableCall");
#pragma pack(pop)
