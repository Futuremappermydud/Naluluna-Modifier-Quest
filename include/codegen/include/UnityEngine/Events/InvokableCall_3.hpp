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
  // Forward declaring type: UnityAction`3<T0, T1, T2>
  template<typename T0, typename T1, typename T2>
  class UnityAction_3;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Autogenerated type: UnityEngine.Events.InvokableCall`3
  template<typename T1, typename T2, typename T3>
  class InvokableCall_3 : public UnityEngine::Events::BaseInvokableCall {
    public:
    // private UnityEngine.Events.UnityAction`3<T1,T2,T3> Delegate
    // Offset: 0x0
    UnityEngine::Events::UnityAction_3<T1, T2, T3>* Delegate;
    // protected System.Void add_Delegate(UnityEngine.Events.UnityAction`3<T1,T2,T3> value)
    // Offset: 0x13ED2EC
    void add_Delegate(UnityEngine::Events::UnityAction_3<T1, T2, T3>* value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "add_Delegate", value));
    }
    // protected System.Void remove_Delegate(UnityEngine.Events.UnityAction`3<T1,T2,T3> value)
    // Offset: 0x13ED398
    void remove_Delegate(UnityEngine::Events::UnityAction_3<T1, T2, T3>* value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "remove_Delegate", value));
    }
    // public System.Void .ctor(UnityEngine.Events.UnityAction`3<T1,T2,T3> action)
    // Offset: 0x13ED554
    static InvokableCall_3<T1, T2, T3>* New_ctor(UnityEngine::Events::UnityAction_3<T1, T2, T3>* action) {
      return (InvokableCall_3<T1, T2, T3>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<InvokableCall_3<T1, T2, T3>*>::get(), action));
    }
    // public System.Void Invoke(T1 args0, T2 args1, T3 args2)
    // Offset: 0x13ED804
    void Invoke(T1 args0, T2 args1, T3 args2) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", args0, args1, args2));
    }
    // public System.Void .ctor(System.Object target, System.Reflection.MethodInfo theFunction)
    // Offset: 0x13ED444
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Void BaseInvokableCall::.ctor(System.Object target, System.Reflection.MethodInfo theFunction)
    static InvokableCall_3<T1, T2, T3>* New_ctor(::Il2CppObject* target, System::Reflection::MethodInfo* theFunction) {
      return (InvokableCall_3<T1, T2, T3>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<InvokableCall_3<T1, T2, T3>*>::get(), target, theFunction));
    }
    // public override System.Void Invoke(System.Object[] args)
    // Offset: 0x13ED5A8
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Void BaseInvokableCall::Invoke(System.Object[] args)
    void Invoke(::Array<::Il2CppObject*>* args) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", args));
    }
    // public override System.Boolean Find(System.Object targetObj, System.Reflection.MethodInfo method)
    // Offset: 0x13ED88C
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Boolean BaseInvokableCall::Find(System.Object targetObj, System.Reflection.MethodInfo method)
    bool Find(::Il2CppObject* targetObj, System::Reflection::MethodInfo* method) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Find", targetObj, method));
    }
  }; // UnityEngine.Events.InvokableCall`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Events::InvokableCall_3, "UnityEngine.Events", "InvokableCall`3");
#pragma pack(pop)
