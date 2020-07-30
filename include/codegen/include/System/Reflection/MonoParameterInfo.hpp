// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:43 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Reflection.RuntimeParameterInfo
#include "System/Reflection/RuntimeParameterInfo.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Skipping declaration: ParameterInfo because it is already included!
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.MonoParameterInfo
  class MonoParameterInfo : public System::Reflection::RuntimeParameterInfo {
    public:
    // System.Void .ctor(System.Reflection.ParameterInfo pinfo, System.Reflection.MemberInfo member)
    // Offset: 0x113D968
    static MonoParameterInfo* New_ctor(System::Reflection::ParameterInfo* pinfo, System::Reflection::MemberInfo* member);
    // public override System.Object get_DefaultValue()
    // Offset: 0x113DA30
    // Implemented from: System.Reflection.ParameterInfo
    // Base method: System.Object ParameterInfo::get_DefaultValue()
    ::Il2CppObject* get_DefaultValue();
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x113DC74
    // Implemented from: System.Reflection.ParameterInfo
    // Base method: System.Object[] ParameterInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x113DCF4
    // Implemented from: System.Reflection.ParameterInfo
    // Base method: System.Boolean ParameterInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
  }; // System.Reflection.MonoParameterInfo
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MonoParameterInfo*, "System.Reflection", "MonoParameterInfo");
#pragma pack(pop)
