// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: MarshalByRefObject
  class MarshalByRefObject;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Autogenerated type: System.Runtime.Remoting.Contexts.IContributeEnvoySink
  class IContributeEnvoySink {
    public:
    // public System.Runtime.Remoting.Messaging.IMessageSink GetEnvoySink(System.MarshalByRefObject obj, System.Runtime.Remoting.Messaging.IMessageSink nextSink)
    // Offset: 0xFFFFFFFF
    System::Runtime::Remoting::Messaging::IMessageSink* GetEnvoySink(System::MarshalByRefObject* obj, System::Runtime::Remoting::Messaging::IMessageSink* nextSink);
  }; // System.Runtime.Remoting.Contexts.IContributeEnvoySink
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::IContributeEnvoySink*, "System.Runtime.Remoting.Contexts", "IContributeEnvoySink");
#pragma pack(pop)
