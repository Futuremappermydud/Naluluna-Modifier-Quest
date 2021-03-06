// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:49 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Runtime.Remoting.IRemotingTypeInfo
#include "System/Runtime/Remoting/IRemotingTypeInfo.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Autogenerated type: System.Runtime.Remoting.TypeInfo
  class TypeInfo : public ::Il2CppObject, public System::Runtime::Remoting::IRemotingTypeInfo {
    public:
    // private System.String serverType
    // Offset: 0x10
    ::Il2CppString* serverType;
    // private System.String[] serverHierarchy
    // Offset: 0x18
    ::Array<::Il2CppString*>* serverHierarchy;
    // private System.String[] interfacesImplemented
    // Offset: 0x20
    ::Array<::Il2CppString*>* interfacesImplemented;
    // public System.Void .ctor(System.Type type)
    // Offset: 0xDFDE88
    static TypeInfo* New_ctor(System::Type* type);
    // public System.String get_TypeName()
    // Offset: 0xE09A98
    // Implemented from: System.Runtime.Remoting.IRemotingTypeInfo
    // Base method: System.String IRemotingTypeInfo::get_TypeName()
    ::Il2CppString* get_TypeName();
    // public System.Boolean CanCastTo(System.Type fromType, System.Object o)
    // Offset: 0xE09AA0
    // Implemented from: System.Runtime.Remoting.IRemotingTypeInfo
    // Base method: System.Boolean IRemotingTypeInfo::CanCastTo(System.Type fromType, System.Object o)
    bool CanCastTo(System::Type* fromType, ::Il2CppObject* o);
  }; // System.Runtime.Remoting.TypeInfo
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::TypeInfo*, "System.Runtime.Remoting", "TypeInfo");
#pragma pack(pop)
