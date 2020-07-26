// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:29 PM
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
  // Forward declaring type: UnityAction`4<T0, T1, T2, T3>
  template<typename T0, typename T1, typename T2, typename T3>
  class UnityAction_4;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Autogenerated type: UnityEngine.Events.InvokableCall`4
  template<typename T1, typename T2, typename T3, typename T4>
  class InvokableCall_4 : public UnityEngine::Events::BaseInvokableCall {
    public:
    // private UnityEngine.Events.UnityAction`4<T1,T2,T3,T4> Delegate
    // Offset: 0x0
    UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>* Delegate;
    // public System.Void .ctor(System.Object target, System.Reflection.MethodInfo theFunction)
    // Offset: 0x13EE54C
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Void BaseInvokableCall::.ctor(System.Object target, System.Reflection.MethodInfo theFunction)
    static InvokableCall_4<T1, T2, T3, T4>* New_ctor(::Il2CppObject* target, System::Reflection::MethodInfo* theFunction) {
      return (InvokableCall_4<T1, T2, T3, T4>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<InvokableCall_4<T1, T2, T3, T4>*>::get(), target, theFunction));
    }
    // public override System.Void Invoke(System.Object[] args)
    // Offset: 0x13EE65C
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Void BaseInvokableCall::Invoke(System.Object[] args)
    void Invoke(::Array<::Il2CppObject*>* args) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", args));
    }
    // public override System.Boolean Find(System.Object targetObj, System.Reflection.MethodInfo method)
    // Offset: 0x13EE93C
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Boolean BaseInvokableCall::Find(System.Object targetObj, System.Reflection.MethodInfo method)
    bool Find(::Il2CppObject* targetObj, System::Reflection::MethodInfo* method) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Find", targetObj, method));
    }
  }; // UnityEngine.Events.InvokableCall`4
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Events::InvokableCall_4, "UnityEngine.Events", "InvokableCall`4");
#pragma pack(pop)
