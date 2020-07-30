// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:50 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: CallContextRemotingData
  class CallContextRemotingData;
  // Forward declaring type: CallContextSecurityData
  class CallContextSecurityData;
  // Forward declaring type: Header
  class Header;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: String
  class String;
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
  // Autogenerated type: System.Runtime.Remoting.Messaging.LogicalCallContext
  class LogicalCallContext : public ::Il2CppObject, public System::Runtime::Serialization::ISerializable, public System::ICloneable {
    public:
    // Nested type: System::Runtime::Remoting::Messaging::LogicalCallContext::Reader
    struct Reader;
    // Get static field: static private System.Type s_callContextType
    static System::Type* _get_s_callContextType();
    // Set static field: static private System.Type s_callContextType
    static void _set_s_callContextType(System::Type* value);
    // static field const value: static private System.String s_CorrelationMgrSlotName
    static constexpr const char* s_CorrelationMgrSlotName = "System.Diagnostics.Trace.CorrelationManagerSlot";
    // Get static field: static private System.String s_CorrelationMgrSlotName
    static ::Il2CppString* _get_s_CorrelationMgrSlotName();
    // Set static field: static private System.String s_CorrelationMgrSlotName
    static void _set_s_CorrelationMgrSlotName(::Il2CppString* value);
    // private System.Collections.Hashtable m_Datastore
    // Offset: 0x10
    System::Collections::Hashtable* m_Datastore;
    // private System.Runtime.Remoting.Messaging.CallContextRemotingData m_RemotingData
    // Offset: 0x18
    System::Runtime::Remoting::Messaging::CallContextRemotingData* m_RemotingData;
    // private System.Runtime.Remoting.Messaging.CallContextSecurityData m_SecurityData
    // Offset: 0x20
    System::Runtime::Remoting::Messaging::CallContextSecurityData* m_SecurityData;
    // private System.Object m_HostContext
    // Offset: 0x28
    ::Il2CppObject* m_HostContext;
    // private System.Boolean m_IsCorrelationMgr
    // Offset: 0x30
    bool m_IsCorrelationMgr;
    // private System.Runtime.Remoting.Messaging.Header[] _sendHeaders
    // Offset: 0x38
    ::Array<System::Runtime::Remoting::Messaging::Header*>* sendHeaders;
    // private System.Runtime.Remoting.Messaging.Header[] _recvHeaders
    // Offset: 0x40
    ::Array<System::Runtime::Remoting::Messaging::Header*>* recvHeaders;
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1054774
    static LogicalCallContext* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.Void Merge(System.Runtime.Remoting.Messaging.LogicalCallContext lc)
    // Offset: 0x1055440
    void Merge(System::Runtime::Remoting::Messaging::LogicalCallContext* lc);
    // public System.Boolean get_HasInfo()
    // Offset: 0x1050348
    bool get_HasInfo();
    // private System.Boolean get_HasUserData()
    // Offset: 0x1054E0C
    bool get_HasUserData();
    // private System.Collections.Hashtable get_Datastore()
    // Offset: 0x1054A7C
    System::Collections::Hashtable* get_Datastore();
    // public System.Void FreeNamedDataSlot(System.String name)
    // Offset: 0x1051188
    void FreeNamedDataSlot(::Il2CppString* name);
    // public System.Object GetData(System.String name)
    // Offset: 0x1055680
    ::Il2CppObject* GetData(::Il2CppString* name);
    // public System.Void SetData(System.String name, System.Object data)
    // Offset: 0x1051238
    void SetData(::Il2CppString* name, ::Il2CppObject* data);
    // static private System.Void .cctor()
    // Offset: 0x10556B8
    static void _cctor();
    // System.Void .ctor()
    // Offset: 0x105476C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LogicalCallContext* New_ctor();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1054AF4
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Object Clone()
    // Offset: 0x1054E3C
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
  }; // System.Runtime.Remoting.Messaging.LogicalCallContext
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::LogicalCallContext*, "System.Runtime.Remoting.Messaging", "LogicalCallContext");
#pragma pack(pop)
