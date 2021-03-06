// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:50 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMethodCallMessage
#include "System/Runtime/Remoting/Messaging/IMethodCallMessage.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Remoting.Messaging.IInternalMessage
#include "System/Runtime/Remoting/Messaging/IInternalMessage.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
  // Forward declaring type: CADMethodCallMessage
  class CADMethodCallMessage;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: Identity
  class Identity;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.MethodCall
  class MethodCall : public ::Il2CppObject, public System::Runtime::Remoting::Messaging::IMethodCallMessage, public System::Runtime::Remoting::Messaging::IMethodMessage, public System::Runtime::Remoting::Messaging::IMessage, public System::Runtime::Serialization::ISerializable, public System::Runtime::Remoting::Messaging::IInternalMessage {
    public:
    // private System.String _uri
    // Offset: 0x10
    ::Il2CppString* uri;
    // private System.String _typeName
    // Offset: 0x18
    ::Il2CppString* typeName;
    // private System.String _methodName
    // Offset: 0x20
    ::Il2CppString* methodName;
    // private System.Object[] _args
    // Offset: 0x28
    ::Array<::Il2CppObject*>* args;
    // private System.Type[] _methodSignature
    // Offset: 0x30
    ::Array<System::Type*>* methodSignature;
    // private System.Reflection.MethodBase _methodBase
    // Offset: 0x38
    System::Reflection::MethodBase* methodBase;
    // private System.Runtime.Remoting.Messaging.LogicalCallContext _callContext
    // Offset: 0x40
    System::Runtime::Remoting::Messaging::LogicalCallContext* callContext;
    // private System.Runtime.Remoting.Identity _targetIdentity
    // Offset: 0x48
    System::Runtime::Remoting::Identity* targetIdentity;
    // private System.Type[] _genericArguments
    // Offset: 0x50
    ::Array<System::Type*>* genericArguments;
    // protected System.Collections.IDictionary ExternalProperties
    // Offset: 0x58
    System::Collections::IDictionary* ExternalProperties;
    // protected System.Collections.IDictionary InternalProperties
    // Offset: 0x60
    System::Collections::IDictionary* InternalProperties;
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1051A00
    static MethodCall* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.Void .ctor(System.Runtime.Remoting.Messaging.CADMethodCallMessage msg)
    // Offset: 0x1056F38
    static MethodCall* New_ctor(System::Runtime::Remoting::Messaging::CADMethodCallMessage* msg);
    // System.Void CopyFrom(System.Runtime.Remoting.Messaging.IMethodMessage call)
    // Offset: 0x10570A4
    void CopyFrom(System::Runtime::Remoting::Messaging::IMethodMessage* call);
    // System.Void InitMethodProperty(System.String key, System.Object value)
    // Offset: 0x1051FA8
    void InitMethodProperty(::Il2CppString* key, ::Il2CppObject* value);
    // System.Void InitDictionary()
    // Offset: 0x1057DE0
    void InitDictionary();
    // public System.Void set_Uri(System.String value)
    // Offset: 0x1057ED8
    void set_Uri(::Il2CppString* value);
    // public System.Void Init()
    // Offset: 0x1057F2C
    void Init();
    // public System.Void ResolveMethod()
    // Offset: 0x105754C
    void ResolveMethod();
    // private System.Type CastTo(System.String clientType, System.Type serverType)
    // Offset: 0x1057F30
    System::Type* CastTo(::Il2CppString* clientType, System::Type* serverType);
    // static private System.String GetTypeNameFromAssemblyQualifiedName(System.String aqname)
    // Offset: 0x1058138
    static ::Il2CppString* GetTypeNameFromAssemblyQualifiedName(::Il2CppString* aqname);
    // private System.Type[] get_GenericArguments()
    // Offset: 0x10580E0
    ::Array<System::Type*>* get_GenericArguments();
    // System.Void .ctor()
    // Offset: 0x10519F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MethodCall* New_ctor();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1052494
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Int32 get_ArgCount()
    // Offset: 0x1057474
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Int32 IMethodMessage::get_ArgCount()
    int get_ArgCount();
    // public System.Object[] get_Args()
    // Offset: 0x1057490
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Object[] IMethodMessage::get_Args()
    ::Array<::Il2CppObject*>* get_Args();
    // public System.Runtime.Remoting.Messaging.LogicalCallContext get_LogicalCallContext()
    // Offset: 0x1057498
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Runtime.Remoting.Messaging.LogicalCallContext IMethodMessage::get_LogicalCallContext()
    System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
    // public System.Reflection.MethodBase get_MethodBase()
    // Offset: 0x1057510
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Reflection.MethodBase IMethodMessage::get_MethodBase()
    System::Reflection::MethodBase* get_MethodBase();
    // public System.String get_MethodName()
    // Offset: 0x1057C34
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.String IMethodMessage::get_MethodName()
    ::Il2CppString* get_MethodName();
    // public System.Object get_MethodSignature()
    // Offset: 0x1057C88
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Object IMethodMessage::get_MethodSignature()
    ::Il2CppObject* get_MethodSignature();
    // public System.Collections.IDictionary get_Properties()
    // Offset: 0x105287C
    // Implemented from: System.Runtime.Remoting.Messaging.IMessage
    // Base method: System.Collections.IDictionary IMessage::get_Properties()
    System::Collections::IDictionary* get_Properties();
    // public System.String get_TypeName()
    // Offset: 0x1057E68
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.String IMethodMessage::get_TypeName()
    ::Il2CppString* get_TypeName();
    // public System.String get_Uri()
    // Offset: 0x1057ED0
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.String IMethodMessage::get_Uri()
    ::Il2CppString* get_Uri();
    // private System.String System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri()
    // Offset: 0x1057EE0
    // Implemented from: System.Runtime.Remoting.Messaging.IInternalMessage
    // Base method: System.String IInternalMessage::get_Uri()
    ::Il2CppString* System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri();
    // private System.Void System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String value)
    // Offset: 0x1057EE8
    // Implemented from: System.Runtime.Remoting.Messaging.IInternalMessage
    // Base method: System.Void IInternalMessage::set_Uri(System.String value)
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::Il2CppString* value);
    // public System.Object GetArg(System.Int32 argNum)
    // Offset: 0x1057EF0
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Object IMethodMessage::GetArg(System.Int32 argNum)
    ::Il2CppObject* GetArg(int argNum);
    // private System.Runtime.Remoting.Identity System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity()
    // Offset: 0x10581E8
    // Implemented from: System.Runtime.Remoting.Messaging.IInternalMessage
    // Base method: System.Runtime.Remoting.Identity IInternalMessage::get_TargetIdentity()
    System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity();
    // private System.Void System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity(System.Runtime.Remoting.Identity value)
    // Offset: 0x10581F0
    // Implemented from: System.Runtime.Remoting.Messaging.IInternalMessage
    // Base method: System.Void IInternalMessage::set_TargetIdentity(System.Runtime.Remoting.Identity value)
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(System::Runtime::Remoting::Identity* value);
  }; // System.Runtime.Remoting.Messaging.MethodCall
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::MethodCall*, "System.Runtime.Remoting.Messaging", "MethodCall");
#pragma pack(pop)
