// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:50 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.MethodCall
#include "System/Runtime/Remoting/Messaging/MethodCall.hpp"
// Including type: System.Runtime.Remoting.Activation.IConstructionCallMessage
#include "System/Runtime/Remoting/Activation/IConstructionCallMessage.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IActivator
  class IActivator;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Remoting::Proxies
namespace System::Runtime::Remoting::Proxies {
  // Forward declaring type: RemotingProxy
  class RemotingProxy;
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
  // Autogenerated type: System.Runtime.Remoting.Messaging.ConstructionCall
  class ConstructionCall : public System::Runtime::Remoting::Messaging::MethodCall, public System::Runtime::Remoting::Activation::IConstructionCallMessage, public System::Runtime::Remoting::Messaging::IMessage, public System::Runtime::Remoting::Messaging::IMethodCallMessage, public System::Runtime::Remoting::Messaging::IMethodMessage {
    public:
    // private System.Runtime.Remoting.Activation.IActivator _activator
    // Offset: 0x68
    System::Runtime::Remoting::Activation::IActivator* activator;
    // private System.Object[] _activationAttributes
    // Offset: 0x70
    ::Array<::Il2CppObject*>* activationAttributes;
    // private System.Collections.IList _contextProperties
    // Offset: 0x78
    System::Collections::IList* contextProperties;
    // private System.Type _activationType
    // Offset: 0x80
    System::Type* activationType;
    // private System.String _activationTypeName
    // Offset: 0x88
    ::Il2CppString* activationTypeName;
    // private System.Boolean _isContextOk
    // Offset: 0x90
    bool isContextOk;
    // private System.Runtime.Remoting.Proxies.RemotingProxy _sourceProxy
    // Offset: 0x98
    System::Runtime::Remoting::Proxies::RemotingProxy* sourceProxy;
    // System.Void .ctor(System.Type type)
    // Offset: 0x103D7F8
    static ConstructionCall* New_ctor(System::Type* type);
    // System.Boolean get_IsContextOk()
    // Offset: 0x1051C0C
    bool get_IsContextOk();
    // System.Void set_IsContextOk(System.Boolean value)
    // Offset: 0x1051C14
    void set_IsContextOk(bool value);
    // System.Void SetActivationAttributes(System.Object[] attributes)
    // Offset: 0x1051D18
    void SetActivationAttributes(::Array<::Il2CppObject*>* attributes);
    // System.Runtime.Remoting.Proxies.RemotingProxy get_SourceProxy()
    // Offset: 0x10528B8
    System::Runtime::Remoting::Proxies::RemotingProxy* get_SourceProxy();
    // System.Void set_SourceProxy(System.Runtime.Remoting.Proxies.RemotingProxy value)
    // Offset: 0x10528C0
    void set_SourceProxy(System::Runtime::Remoting::Proxies::RemotingProxy* value);
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x10519FC
    // Implemented from: System.Runtime.Remoting.Messaging.MethodCall
    // Base method: System.Void MethodCall::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static ConstructionCall* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // override System.Void InitDictionary()
    // Offset: 0x1051A9C
    // Implemented from: System.Runtime.Remoting.Messaging.MethodCall
    // Base method: System.Void MethodCall::InitDictionary()
    void InitDictionary();
    // public System.Type get_ActivationType()
    // Offset: 0x1051C20
    // Implemented from: System.Runtime.Remoting.Activation.IConstructionCallMessage
    // Base method: System.Type IConstructionCallMessage::get_ActivationType()
    System::Type* get_ActivationType();
    // public System.String get_ActivationTypeName()
    // Offset: 0x1051CF8
    // Implemented from: System.Runtime.Remoting.Activation.IConstructionCallMessage
    // Base method: System.String IConstructionCallMessage::get_ActivationTypeName()
    ::Il2CppString* get_ActivationTypeName();
    // public System.Runtime.Remoting.Activation.IActivator get_Activator()
    // Offset: 0x1051D00
    // Implemented from: System.Runtime.Remoting.Activation.IConstructionCallMessage
    // Base method: System.Runtime.Remoting.Activation.IActivator IConstructionCallMessage::get_Activator()
    System::Runtime::Remoting::Activation::IActivator* get_Activator();
    // public System.Void set_Activator(System.Runtime.Remoting.Activation.IActivator value)
    // Offset: 0x1051D08
    // Implemented from: System.Runtime.Remoting.Activation.IConstructionCallMessage
    // Base method: System.Void IConstructionCallMessage::set_Activator(System.Runtime.Remoting.Activation.IActivator value)
    void set_Activator(System::Runtime::Remoting::Activation::IActivator* value);
    // public System.Object[] get_CallSiteActivationAttributes()
    // Offset: 0x1051D10
    // Implemented from: System.Runtime.Remoting.Activation.IConstructionCallMessage
    // Base method: System.Object[] IConstructionCallMessage::get_CallSiteActivationAttributes()
    ::Array<::Il2CppObject*>* get_CallSiteActivationAttributes();
    // public System.Collections.IList get_ContextProperties()
    // Offset: 0x1051D20
    // Implemented from: System.Runtime.Remoting.Activation.IConstructionCallMessage
    // Base method: System.Collections.IList IConstructionCallMessage::get_ContextProperties()
    System::Collections::IList* get_ContextProperties();
    // override System.Void InitMethodProperty(System.String key, System.Object value)
    // Offset: 0x1051D98
    // Implemented from: System.Runtime.Remoting.Messaging.MethodCall
    // Base method: System.Void MethodCall::InitMethodProperty(System.String key, System.Object value)
    void InitMethodProperty(::Il2CppString* key, ::Il2CppObject* value);
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1052330
    // Implemented from: System.Runtime.Remoting.Messaging.MethodCall
    // Base method: System.Void MethodCall::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Collections.IDictionary get_Properties()
    // Offset: 0x1052840
    // Implemented from: System.Runtime.Remoting.Messaging.MethodCall
    // Base method: System.Collections.IDictionary MethodCall::get_Properties()
    System::Collections::IDictionary* get_Properties();
  }; // System.Runtime.Remoting.Messaging.ConstructionCall
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ConstructionCall*, "System.Runtime.Remoting.Messaging", "ConstructionCall");
#pragma pack(pop)
