// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:30 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Autogenerated type: UnityEngine.Events.ArgumentCache
  class ArgumentCache : public ::Il2CppObject, public UnityEngine::ISerializationCallbackReceiver {
    public:
    // private UnityEngine.Object m_ObjectArgument
    // Offset: 0x10
    UnityEngine::Object* m_ObjectArgument;
    // private System.String m_ObjectArgumentAssemblyTypeName
    // Offset: 0x18
    ::Il2CppString* m_ObjectArgumentAssemblyTypeName;
    // private System.Int32 m_IntArgument
    // Offset: 0x20
    int m_IntArgument;
    // private System.Single m_FloatArgument
    // Offset: 0x24
    float m_FloatArgument;
    // private System.String m_StringArgument
    // Offset: 0x28
    ::Il2CppString* m_StringArgument;
    // private System.Boolean m_BoolArgument
    // Offset: 0x30
    bool m_BoolArgument;
    // public UnityEngine.Object get_unityObjectArgument()
    // Offset: 0x12F2E98
    UnityEngine::Object* get_unityObjectArgument();
    // public System.String get_unityObjectArgumentAssemblyTypeName()
    // Offset: 0x12F2EA0
    ::Il2CppString* get_unityObjectArgumentAssemblyTypeName();
    // public System.Int32 get_intArgument()
    // Offset: 0x12F2EA8
    int get_intArgument();
    // public System.Single get_floatArgument()
    // Offset: 0x12F2EB0
    float get_floatArgument();
    // public System.String get_stringArgument()
    // Offset: 0x12F2EB8
    ::Il2CppString* get_stringArgument();
    // public System.Boolean get_boolArgument()
    // Offset: 0x12F2EC0
    bool get_boolArgument();
    // private System.Void TidyAssemblyTypeName()
    // Offset: 0x12F2EC8
    void TidyAssemblyTypeName();
    // public System.Void OnBeforeSerialize()
    // Offset: 0x12F3104
    // Implemented from: UnityEngine.ISerializationCallbackReceiver
    // Base method: System.Void ISerializationCallbackReceiver::OnBeforeSerialize()
    void OnBeforeSerialize();
    // Creating proxy method: UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
    // Maps to method: OnBeforeSerialize
    void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();
    // public System.Void OnAfterDeserialize()
    // Offset: 0x12F3108
    // Implemented from: UnityEngine.ISerializationCallbackReceiver
    // Base method: System.Void ISerializationCallbackReceiver::OnAfterDeserialize()
    void OnAfterDeserialize();
    // Creating proxy method: UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
    // Maps to method: OnAfterDeserialize
    void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();
    // public System.Void .ctor()
    // Offset: 0x12F310C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ArgumentCache* New_ctor();
  }; // UnityEngine.Events.ArgumentCache
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::ArgumentCache*, "UnityEngine.Events", "ArgumentCache");
#pragma pack(pop)
