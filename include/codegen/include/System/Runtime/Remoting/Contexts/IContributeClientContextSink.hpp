// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:49 PM
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
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Autogenerated type: System.Runtime.Remoting.Contexts.IContributeClientContextSink
  class IContributeClientContextSink {
    public:
    // public System.Runtime.Remoting.Messaging.IMessageSink GetClientContextSink(System.Runtime.Remoting.Messaging.IMessageSink nextSink)
    // Offset: 0xFFFFFFFF
    System::Runtime::Remoting::Messaging::IMessageSink* GetClientContextSink(System::Runtime::Remoting::Messaging::IMessageSink* nextSink);
  }; // System.Runtime.Remoting.Contexts.IContributeClientContextSink
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::IContributeClientContextSink*, "System.Runtime.Remoting.Contexts", "IContributeClientContextSink");
#pragma pack(pop)
