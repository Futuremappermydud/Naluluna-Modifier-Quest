// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Autogenerated type: RootMotion.Singleton`1
  template<typename T>
  class Singleton_1 : public UnityEngine::MonoBehaviour {
    public:
    // Autogenerated static field getter
    // Get static field: static private T sInstance
    static T _get_sInstance() {
      return CRASH_UNLESS((il2cpp_utils::GetFieldValue<T>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Singleton_1<T>*>::get(), "sInstance")));
    }
    // Autogenerated static field setter
    // Set static field: static private T sInstance
    static void _set_sInstance(T value) {
      CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Singleton_1<T>*>::get(), "sInstance", value));
    }
    // static public T get_instance()
    // Offset: 0x1283A48
    static T get_instance() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<T>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Singleton_1<T>*>::get(), "get_instance"));
    }
    // protected System.Void Awake()
    // Offset: 0x1283B34
    void Awake() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
    }
    // protected System.Void .ctor()
    // Offset: 0x1283D7C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Singleton_1<T>* New_ctor() {
      return (Singleton_1<T>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Singleton_1<T>*>::get()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1283D94
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Singleton_1<T>*>::get(), ".cctor"));
    }
  }; // RootMotion.Singleton`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(RootMotion::Singleton_1, "RootMotion", "Singleton`1");
#pragma pack(pop)
