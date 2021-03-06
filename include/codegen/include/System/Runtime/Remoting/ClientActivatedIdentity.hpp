// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:49 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Runtime.Remoting.ServerIdentity
#include "System/Runtime/Remoting/ServerIdentity.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: MarshalByRefObject
  class MarshalByRefObject;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMessageCtrl
  class IMessageCtrl;
  // Forward declaring type: IMessageSink
  class IMessageSink;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Autogenerated type: System.Runtime.Remoting.ClientActivatedIdentity
  class ClientActivatedIdentity : public System::Runtime::Remoting::ServerIdentity {
    public:
    // private System.MarshalByRefObject _targetThis
    // Offset: 0x70
    System::MarshalByRefObject* targetThis;
    // public System.Void .ctor(System.String objectUri, System.Type objectType)
    // Offset: 0x1044878
    static ClientActivatedIdentity* New_ctor(::Il2CppString* objectUri, System::Type* objectType);
    // public System.MarshalByRefObject GetServerObject()
    // Offset: 0x1044888
    System::MarshalByRefObject* GetServerObject();
    // public System.Void SetClientProxy(System.MarshalByRefObject obj)
    // Offset: 0x1044890
    void SetClientProxy(System::MarshalByRefObject* obj);
    // public override System.Void OnLifetimeExpired()
    // Offset: 0x1044898
    // Implemented from: System.Runtime.Remoting.ServerIdentity
    // Base method: System.Void ServerIdentity::OnLifetimeExpired()
    void OnLifetimeExpired();
    // public override System.Runtime.Remoting.Messaging.IMessage SyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x104490C
    // Implemented from: System.Runtime.Remoting.ServerIdentity
    // Base method: System.Runtime.Remoting.Messaging.IMessage ServerIdentity::SyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg);
    // public override System.Runtime.Remoting.Messaging.IMessageCtrl AsyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0x1044BA8
    // Implemented from: System.Runtime.Remoting.ServerIdentity
    // Base method: System.Runtime.Remoting.Messaging.IMessageCtrl ServerIdentity::AsyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink);
  }; // System.Runtime.Remoting.ClientActivatedIdentity
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ClientActivatedIdentity*, "System.Runtime.Remoting", "ClientActivatedIdentity");
#pragma pack(pop)
