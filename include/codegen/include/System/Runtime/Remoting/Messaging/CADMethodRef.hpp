// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:50 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
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
  // Forward declaring type: IMethodMessage
  class IMethodMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.CADMethodRef
  class CADMethodRef : public ::Il2CppObject {
    public:
    // private System.Boolean ctor
    // Offset: 0x10
    bool ctor;
    // private System.String typeName
    // Offset: 0x18
    ::Il2CppString* typeName;
    // private System.String methodName
    // Offset: 0x20
    ::Il2CppString* methodName;
    // private System.String[] param_names
    // Offset: 0x28
    ::Array<::Il2CppString*>* param_names;
    // private System.String[] generic_arg_names
    // Offset: 0x30
    ::Array<::Il2CppString*>* generic_arg_names;
    // private System.Type[] GetTypes(System.String[] typeArray)
    // Offset: 0x1050774
    ::Array<System::Type*>* GetTypes(::Array<::Il2CppString*>* typeArray);
    // public System.Reflection.MethodBase Resolve()
    // Offset: 0x104E628
    System::Reflection::MethodBase* Resolve();
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMethodMessage msg)
    // Offset: 0x104E278
    static CADMethodRef* New_ctor(System::Runtime::Remoting::Messaging::IMethodMessage* msg);
  }; // System.Runtime.Remoting.Messaging.CADMethodRef
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::CADMethodRef*, "System.Runtime.Remoting.Messaging", "CADMethodRef");
#pragma pack(pop)
